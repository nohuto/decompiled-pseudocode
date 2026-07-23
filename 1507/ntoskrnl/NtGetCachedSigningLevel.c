/*
 * XREFs of NtGetCachedSigningLevel @ 0x1406D054C
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140496770 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x1404BE3C0 (ProbeForWrite.c)
 *     SeGetCachedSigningLevel @ 0x14053E5C8 (SeGetCachedSigningLevel.c)
 */

NTSTATUS __cdecl NtGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  PVOID v7; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  NTSTATUS CachedSigningLevel; // edi
  char v10; // cl
  ULONG v11; // r14d
  void *v12; // rax
  _DWORD *v13; // r14
  _BYTE v15[4]; // [rsp+30h] [rbp-D8h] BYREF
  ULONG v16; // [rsp+34h] [rbp-D4h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-D0h]
  int v18; // [rsp+40h] [rbp-C8h]
  volatile void *Address; // [rsp+48h] [rbp-C0h]
  volatile void *v20; // [rsp+50h] [rbp-B8h]
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  volatile void *v22; // [rsp+60h] [rbp-A8h]
  PVOID v23; // [rsp+68h] [rbp-A0h]
  HANDLE Handle; // [rsp+70h] [rbp-98h]
  _BYTE Src[64]; // [rsp+80h] [rbp-88h] BYREF

  v20 = Thumbprint;
  Address = SigningLevel;
  Handle = File;
  v22 = ThumbprintAlgorithm;
  v7 = 0LL;
  memset(Src, 0, sizeof(Src));
  Length = 64LL;
  v16 = 0;
  v15[0] = 0;
  if ( File && Flags && SigningLevel )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    CachedSigningLevel = ObReferenceObjectByHandle(
                           Handle,
                           1u,
                           (POBJECT_TYPE)IoFileObjectType,
                           PreviousMode,
                           &Object,
                           0LL);
    v7 = Object;
    v23 = Object;
    if ( CachedSigningLevel >= 0 )
    {
      CachedSigningLevel = SeGetCachedSigningLevel((__int64)Object, (__int64)&v16, (__int64)v15);
      if ( CachedSigningLevel >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(Flags, 4uLL, 4u);
          ProbeForWrite(Address, 1uLL, 1u);
        }
        v10 = v16;
        *Flags = v16;
        *(_BYTE *)Address = v15[0];
        if ( ThumbprintSize )
        {
          if ( PreviousMode == 1 )
          {
            ProbeForWrite(ThumbprintSize, 4uLL, 4u);
            v10 = v16;
          }
          if ( (v10 & 2) != 0 )
          {
            v11 = Length;
            if ( *ThumbprintSize >= (unsigned int)Length && (v12 = (void *)v20) != 0LL )
            {
              if ( PreviousMode == 1 )
              {
                ProbeForWrite(v20, (unsigned int)Length, 1u);
                v11 = Length;
                v12 = (void *)v20;
              }
              memmove(v12, Src, v11);
            }
            else
            {
              CachedSigningLevel = -1073741789;
              v18 = -1073741789;
            }
            *ThumbprintSize = v11;
            v13 = v22;
            if ( v22 )
            {
              if ( PreviousMode == 1 )
                ProbeForWrite(v22, 4uLL, 4u);
              *v13 = HIDWORD(Length);
            }
          }
          else
          {
            *ThumbprintSize = 0;
          }
        }
      }
    }
  }
  else
  {
    CachedSigningLevel = -1073741811;
  }
  if ( v7 )
    ObfDereferenceObject(v7);
  return CachedSigningLevel;
}
