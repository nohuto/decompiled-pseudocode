/*
 * XREFs of NtQueryDirectoryObject @ 0x14043A290
 * Callers:
 *     <none>
 * Callees:
 *     ObpUnlockDirectory @ 0x1400428A0 (ObpUnlockDirectory.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ObpLockDirectoryShared @ 0x1400429F0 (ObpLockDirectoryShared.c)
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandle @ 0x14040B9B0 (ObReferenceObjectByHandle.c)
 *     ProbeForWrite @ 0x14042F1F0 (ProbeForWrite.c)
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
  ULONG v10; // esi
  unsigned int v11; // r15d
  const void **PoolWithQuotaTag; // rax
  const void **v13; // r12
  int v14; // ebx
  ULONG v15; // edi
  NTSTATUS v16; // r13d
  _QWORD *v17; // r14
  _QWORD *v18; // rbx
  ULONG v19; // eax
  __int64 v20; // r13
  __int64 v21; // rax
  __int64 v22; // r8
  unsigned __int16 Length; // dx
  int v24; // r11d
  ULONG v25; // r10d
  _WORD *v26; // r11
  char *v27; // rbx
  char *v28; // rbx
  int v29; // r15d
  const void **v30; // rsi
  char *v31; // rbx
  char *v32; // rbx
  PVOID v33; // rsi
  ULONG v34; // eax
  _DWORD *v36; // rcx
  _DWORD *v37; // rcx
  int v38; // [rsp+30h] [rbp-A8h]
  ULONG v39; // [rsp+34h] [rbp-A4h]
  int v40; // [rsp+38h] [rbp-A0h]
  unsigned __int8 v41; // [rsp+3Ch] [rbp-9Ch]
  PVOID Object; // [rsp+40h] [rbp-98h] BYREF
  void *v43; // [rsp+48h] [rbp-90h]
  ULONG v44; // [rsp+50h] [rbp-88h]
  const void **v45; // [rsp+58h] [rbp-80h]
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-78h] BYREF
  __int128 v47; // [rsp+70h] [rbp-68h] BYREF
  __int16 v48; // [rsp+8Eh] [rbp-4Ah]
  int v49; // [rsp+90h] [rbp-48h]

  v7 = BufferLength;
  v47 = 0LL;
  v48 = 0;
  v49 = -60876;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  if ( PreviousMode )
  {
    ProbeForWrite(Buffer, BufferLength, 2u);
    v36 = Context;
    if ( (unsigned __int64)Context >= MmUserProbeAddress )
      v36 = (_DWORD *)MmUserProbeAddress;
    *v36 = *v36;
    if ( ReturnLength )
    {
      v37 = ReturnLength;
      if ( (unsigned __int64)ReturnLength >= MmUserProbeAddress )
        v37 = (_DWORD *)MmUserProbeAddress;
      *v37 = *v37;
    }
    if ( RestartScan )
      v10 = 0;
    else
      v10 = *Context;
    v44 = v10;
  }
  else
  {
    if ( RestartScan )
    {
      v11 = 0;
      v10 = 0;
      goto LABEL_5;
    }
    v10 = *Context;
  }
  v11 = 0;
LABEL_5:
  if ( (unsigned int)v7 >= (int)v7 + 32 )
    return -1073741811;
  PoolWithQuotaTag = (const void **)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7 + 32, 0x6D4E624Fu);
  v13 = PoolWithQuotaTag;
  v45 = PoolWithQuotaTag;
  if ( !PoolWithQuotaTag )
    return -1073741670;
  memset(PoolWithQuotaTag, 0, v7);
  v14 = ObReferenceObjectByHandle(DirectoryHandle, 1u, ObpDirectoryObjectType, PreviousMode, &Object, 0LL);
  if ( v14 < 0 )
  {
    ExFreePoolWithTag(v13, 0);
    return v14;
  }
  v43 = v13;
  v39 = 32;
  v15 = 0;
  v40 = 0;
  v16 = -2147483622;
  v38 = -2147483622;
  ObpLockDirectoryShared((__int64)&v47, (unsigned __int64 *)Object);
  v17 = Object;
  v41 = ObHeaderCookie;
  while ( 1 )
  {
    v18 = (_QWORD *)*v17;
    if ( *v17 )
      break;
LABEL_12:
    ++v11;
    ++v17;
    if ( v11 >= 0x25 )
      goto LABEL_23;
  }
  while ( 1 )
  {
    v19 = v15++;
    if ( v10 != v19 )
      goto LABEL_11;
    v20 = v18[1];
    if ( (*(_BYTE *)(v20 - 22) & 2) == 0 || (v21 = ObpInfoMaskToOffset[*(_BYTE *)(v20 - 22) & 3], v20 - 48 == v21) )
      RtlInitUnicodeString(&DestinationString, 0LL);
    else
      DestinationString = *(UNICODE_STRING *)(v20 - 48 - v21 + 8);
    v22 = (unsigned __int8)((unsigned __int16)(v20 - 48) >> 8);
    Length = DestinationString.Length;
    v24 = *(unsigned __int16 *)(ObTypeIndexTable[v22 ^ v41 ^ (unsigned __int64)*(unsigned __int8 *)(v20 - 24)] + 16)
        + DestinationString.Length
        + 36;
    v25 = v24 + v39;
    if ( v24 + v39 > BufferLength )
      break;
    v26 = v43;
    *(_WORD *)v43 = DestinationString.Length;
    v26[1] = Length + 2;
    *((_QWORD *)v26 + 1) = DestinationString.Buffer;
    v26[8] = *(_WORD *)(ObTypeIndexTable[v22 ^ v41 ^ (unsigned __int64)*(unsigned __int8 *)(v20 - 24)] + 16);
    v26[9] = *(_WORD *)(ObTypeIndexTable[v22 ^ v41 ^ (unsigned __int64)*(unsigned __int8 *)(v20 - 24)] + 16) + 2;
    *((_QWORD *)v26 + 3) = *(_QWORD *)(ObTypeIndexTable[v22 ^ v41 ^ (unsigned __int64)*(unsigned __int8 *)(v20 - 24)]
                                     + 24);
    v16 = 0;
    v38 = 0;
    v39 = v25;
    v43 = v26 + 16;
    ++v40;
    if ( ReturnSingleEntry )
      goto LABEL_23;
    ++v10;
LABEL_11:
    v18 = (_QWORD *)*v18;
    if ( !v18 )
      goto LABEL_12;
  }
  if ( ReturnSingleEntry )
  {
    v39 += v24;
    v16 = -1073741789;
  }
  else
  {
    v16 = 261;
  }
  v38 = v16;
  --v15;
LABEL_23:
  if ( v16 >= 0 )
  {
    v27 = (char *)v43;
    memset(v43, 0, 0x20uLL);
    v28 = v27 + 32;
    v29 = v40;
    if ( v40 )
    {
      v30 = v13 + 3;
      do
      {
        memmove(v28, *(v30 - 2), *((unsigned __int16 *)v30 - 12));
        *(v30 - 2) = (char *)Buffer + v28 - (char *)v13;
        v31 = &v28[*((unsigned __int16 *)v30 - 12)];
        *(_WORD *)v31 = 0;
        v31 += 2;
        memmove(v31, *v30, *((unsigned __int16 *)v30 - 4));
        *v30 = (char *)Buffer + v31 - (char *)v13;
        v32 = &v31[*((unsigned __int16 *)v30 - 4)];
        *(_WORD *)v32 = 0;
        v28 = v32 + 2;
        v30 += 4;
        --v29;
      }
      while ( v29 );
      v16 = v38;
    }
  }
  v33 = Object;
  ObpUnlockDirectory((__int64)Object, (__int64)&v47);
  v34 = BufferLength;
  if ( v39 <= BufferLength )
    v34 = v39;
  memmove(Buffer, v13, v34);
  if ( ReturnLength )
    *ReturnLength = v39;
  if ( v16 >= 0 )
    *Context = v15;
  ObfDereferenceObject(v33);
  ExFreePoolWithTag(v13, 0);
  return v16;
}
