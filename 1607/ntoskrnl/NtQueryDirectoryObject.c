/*
 * XREFs of NtQueryDirectoryObject @ 0x14049A960
 * Callers:
 *     <none>
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ObpUnlockDirectory @ 0x14008B190 (ObpUnlockDirectory.c)
 *     ObpLockDirectoryShared @ 0x1400EC2BC (ObpLockDirectoryShared.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ProbeForWrite @ 0x14044C990 (ProbeForWrite.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 */

NTSTATUS __stdcall NtQueryDirectoryObject(
        HANDLE DirectoryHandle,
        PVOID Buffer,
        ULONG BufferLength,
        BOOLEAN ReturnSingleEntry,
        BOOLEAN RestartScan,
        PULONG Context,
        PULONG ReturnLength)
{
  size_t v7; // rbx
  KPROCESSOR_MODE PreviousMode; // di
  __int64 v10; // rcx
  __int64 v11; // rcx
  ULONG v12; // esi
  unsigned __int16 *PoolWithQuotaTag; // rax
  unsigned __int16 *v15; // r13
  int v16; // ebx
  unsigned int v17; // r12d
  ULONG v18; // r14d
  NTSTATUS v19; // r15d
  _QWORD *v20; // rbx
  unsigned int v21; // ecx
  _QWORD *v22; // rax
  unsigned __int8 v23; // dl
  _QWORD *v24; // rdi
  ULONG v25; // eax
  __int64 v26; // rbx
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 v29; // r10
  unsigned __int16 Length; // r8
  int v31; // r11d
  ULONG v32; // edx
  char *v33; // rbx
  int v34; // r13d
  const void **v35; // rdi
  char *v36; // rbx
  char *v37; // rbx
  PVOID v38; // rbx
  ULONG v39; // eax
  ULONG v40; // [rsp+34h] [rbp-A4h]
  int v41; // [rsp+38h] [rbp-A0h]
  int v42; // [rsp+3Ch] [rbp-9Ch]
  unsigned __int8 v43; // [rsp+40h] [rbp-98h]
  unsigned int v44; // [rsp+44h] [rbp-94h]
  const void **Src; // [rsp+48h] [rbp-90h]
  PVOID Object; // [rsp+58h] [rbp-80h] BYREF
  _QWORD *v47; // [rsp+60h] [rbp-78h]
  UNICODE_STRING DestinationString; // [rsp+68h] [rbp-70h] BYREF
  __int128 v49; // [rsp+78h] [rbp-60h] BYREF
  __int16 v50; // [rsp+96h] [rbp-42h]
  int v51; // [rsp+98h] [rbp-40h]

  v7 = BufferLength;
  v49 = 0LL;
  v50 = 0;
  v51 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, BufferLength, 2u);
    v10 = (__int64)Context;
    if ( (unsigned __int64)Context >= 0x7FFFFFFF0000LL )
      v10 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v10 = *(_DWORD *)v10;
    if ( ReturnLength )
    {
      v11 = (__int64)ReturnLength;
      if ( (unsigned __int64)ReturnLength >= 0x7FFFFFFF0000LL )
        v11 = 0x7FFFFFFF0000LL;
      *(_DWORD *)v11 = *(_DWORD *)v11;
    }
    if ( RestartScan )
      v12 = 0;
    else
      v12 = *Context;
  }
  else if ( RestartScan )
  {
    v12 = 0;
  }
  else
  {
    v12 = *Context;
  }
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  PoolWithQuotaTag = (unsigned __int16 *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v15 = PoolWithQuotaTag;
  Src = (const void **)PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  memset(PoolWithQuotaTag, 0, v7);
  v16 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    return v16;
  }
  v17 = 32;
  v42 = 32;
  v18 = 0;
  v40 = 0;
  v41 = 0;
  v19 = -2147483622;
  v20 = Object;
  ObpLockDirectoryShared((__int64)&v49, (unsigned __int64 *)Object);
  v21 = 0;
  v44 = 0;
  v22 = v20;
  v47 = v20;
  v23 = ObHeaderCookie;
  v43 = ObHeaderCookie;
  while ( 1 )
  {
    v24 = (_QWORD *)*v22;
    if ( *v22 )
      break;
LABEL_33:
    v44 = ++v21;
    v47 = ++v22;
    if ( v21 >= 0x25 )
      goto LABEL_39;
  }
  while ( 1 )
  {
    v25 = v18++;
    v40 = v18;
    if ( v12 == v25 )
      break;
LABEL_31:
    v24 = (_QWORD *)*v24;
    if ( !v24 )
    {
      v22 = v47;
      v21 = v44;
      goto LABEL_33;
    }
  }
  v26 = v24[1];
  if ( (*(_BYTE *)(v26 - 22) & 2) == 0 || (v27 = ObpInfoMaskToOffset[*(_BYTE *)(v26 - 22) & 3], v26 - 48 == v27) )
  {
    RtlInitUnicodeString(&DestinationString, 0LL);
    v23 = v43;
  }
  else
  {
    DestinationString = *(UNICODE_STRING *)(v26 - 48 - v27 + 8);
  }
  v28 = (unsigned __int8)((unsigned __int16)(v26 - 48) >> 8);
  v29 = v23;
  Length = DestinationString.Length;
  v31 = *(unsigned __int16 *)(ObTypeIndexTable[v28 ^ v23 ^ (unsigned __int64)*(unsigned __int8 *)(v26 - 24)] + 16)
      + DestinationString.Length
      + 36;
  v32 = v31 + v17;
  if ( v17 > v31 + v17 )
    goto LABEL_37;
  if ( v32 <= BufferLength )
  {
    *v15 = DestinationString.Length;
    v15[1] = Length + 2;
    *((_QWORD *)v15 + 1) = DestinationString.Buffer;
    v15[8] = *(_WORD *)(ObTypeIndexTable[v28 ^ v29 ^ *(unsigned __int8 *)(v26 - 24)] + 16);
    v15[9] = *(_WORD *)(ObTypeIndexTable[v28 ^ v29 ^ *(unsigned __int8 *)(v26 - 24)] + 16) + 2;
    *((_QWORD *)v15 + 3) = *(_QWORD *)(ObTypeIndexTable[v28 ^ v29 ^ *(unsigned __int8 *)(v26 - 24)] + 24);
    v19 = 0;
    v17 += v31;
    v42 = v32;
    v15 += 16;
    ++v41;
    if ( ReturnSingleEntry )
      goto LABEL_39;
    ++v12;
    v23 = v43;
    goto LABEL_31;
  }
  if ( ReturnSingleEntry )
  {
    v17 += v31;
    v42 = v17;
    v19 = -1073741789;
    goto LABEL_38;
  }
LABEL_37:
  v19 = 261;
LABEL_38:
  v40 = --v18;
LABEL_39:
  if ( v19 >= 0 )
  {
    *(_QWORD *)v15 = 0LL;
    *((_QWORD *)v15 + 1) = 0LL;
    *((_QWORD *)v15 + 2) = 0LL;
    *((_QWORD *)v15 + 3) = 0LL;
    v33 = (char *)(v15 + 16);
    v34 = v41;
    if ( v41 )
    {
      v35 = Src + 3;
      do
      {
        memmove(v33, *(v35 - 2), *((unsigned __int16 *)v35 - 12));
        *(v35 - 2) = (char *)Buffer + v33 - (char *)Src;
        v36 = &v33[*((unsigned __int16 *)v35 - 12)];
        *(_WORD *)v36 = 0;
        v36 += 2;
        memmove(v36, *v35, *((unsigned __int16 *)v35 - 4));
        *v35 = (char *)Buffer + v36 - (char *)Src;
        v37 = &v36[*((unsigned __int16 *)v35 - 4)];
        *(_WORD *)v37 = 0;
        v33 = v37 + 2;
        v35 += 4;
        --v34;
      }
      while ( v34 );
      v18 = v40;
      v17 = v42;
    }
  }
  v38 = Object;
  ObpUnlockDirectory((__int64)Object, (__int64)&v49);
  v39 = BufferLength;
  if ( v17 <= BufferLength )
    v39 = v17;
  memmove(Buffer, Src, v39);
  if ( ReturnLength )
    *ReturnLength = v17;
  if ( v19 >= 0 )
    *Context = v18;
  ObfDereferenceObject(v38);
  ExFreePoolWithTag(Src, 0);
  return v19;
}
