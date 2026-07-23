/*
 * XREFs of NtGetCachedSigningLevel @ 0x1404AD250
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
 *     SeGetCachedSigningLevel @ 0x1404AD494 (SeGetCachedSigningLevel.c)
 */

NTSTATUS __cdecl NtGetCachedSigningLevel(
        HANDLE File,
        PULONG Flags,
        PSE_SIGNING_LEVEL SigningLevel,
        PUCHAR Thumbprint,
        PULONG ThumbprintSize,
        PULONG ThumbprintAlgorithm)
{
  PVOID v8; // r15
  KPROCESSOR_MODE PreviousMode; // r13
  int v10; // edi
  int v11; // eax
  char v12; // cl
  ULONG v13; // r14d
  void *v14; // rax
  _DWORD *v15; // r14
  _BYTE v17[4]; // [rsp+30h] [rbp-D8h] BYREF
  ULONG v18; // [rsp+34h] [rbp-D4h] BYREF
  SIZE_T Length; // [rsp+38h] [rbp-D0h] BYREF
  int v20; // [rsp+40h] [rbp-C8h]
  volatile void *Address; // [rsp+48h] [rbp-C0h]
  volatile void *v22; // [rsp+50h] [rbp-B8h]
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  volatile void *v24; // [rsp+60h] [rbp-A8h]
  PVOID v25; // [rsp+68h] [rbp-A0h]
  HANDLE Handle; // [rsp+70h] [rbp-98h]
  _BYTE Src[64]; // [rsp+80h] [rbp-88h] BYREF

  v22 = Thumbprint;
  Address = SigningLevel;
  Handle = File;
  v24 = ThumbprintAlgorithm;
  v8 = 0LL;
  memset(Src, 0, sizeof(Src));
  Length = 64LL;
  v18 = 0;
  v17[0] = 0;
  if ( File && Flags && SigningLevel )
  {
    PreviousMode = KeGetCurrentThread()->PreviousMode;
    v10 = ObReferenceObjectByHandle(Handle, 1u, (POBJECT_TYPE)IoFileObjectType, PreviousMode, &Object, 0LL);
    v8 = Object;
    v25 = Object;
    if ( v10 >= 0 )
    {
      v11 = Thumbprint
          ? SeGetCachedSigningLevel(Object, &v18, v17, Src, &Length, (char *)&Length + 4)
          : SeGetCachedSigningLevel(Object, &v18, v17, 0LL, 0LL, 0LL);
      v10 = v11;
      if ( v11 >= 0 )
      {
        if ( PreviousMode == 1 )
        {
          ProbeForWrite(Flags, 4uLL, 4u);
          ProbeForWrite(Address, 1uLL, 1u);
        }
        v12 = v18;
        *Flags = v18;
        *(_BYTE *)Address = v17[0];
        if ( ThumbprintSize )
        {
          if ( PreviousMode == 1 )
          {
            ProbeForWrite(ThumbprintSize, 4uLL, 4u);
            v12 = v18;
          }
          if ( (v12 & 2) != 0 )
          {
            v13 = Length;
            if ( *ThumbprintSize >= (unsigned int)Length && (v14 = (void *)v22) != 0LL )
            {
              if ( PreviousMode == 1 )
              {
                ProbeForWrite(v22, (unsigned int)Length, 1u);
                v13 = Length;
                v14 = (void *)v22;
              }
              memmove(v14, Src, v13);
            }
            else
            {
              v10 = -1073741789;
              v20 = -1073741789;
            }
            *ThumbprintSize = v13;
            v15 = v24;
            if ( v24 )
            {
              if ( PreviousMode == 1 )
                ProbeForWrite(v24, 4uLL, 4u);
              *v15 = HIDWORD(Length);
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
    v10 = -1073741811;
  }
  if ( v8 )
    ObfDereferenceObject(v8);
  return v10;
}
