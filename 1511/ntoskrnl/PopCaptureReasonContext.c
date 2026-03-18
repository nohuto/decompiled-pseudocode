/*
 * XREFs of PopCaptureReasonContext @ 0x140097B84
 * Callers:
 *     PoCaptureReasonContext @ 0x1400979A8 (PoCaptureReasonContext.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     PopSafeCopyUnicodeString @ 0x140097E40 (PopSafeCopyUnicodeString.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, _QWORD *a4)
{
  SIZE_T v7; // rdi
  unsigned int v8; // r15d
  ULONG64 v9; // r12
  int v10; // ebp
  unsigned __int64 v11; // rax
  unsigned int v12; // edx
  unsigned __int16 *v13; // rcx
  SIZE_T v14; // r8
  char *PoolWithQuotaTag; // rax
  void *v16; // r14
  unsigned __int64 v17; // rbx
  int v18; // eax
  int v19; // edi
  unsigned int v20; // ebx
  const UNICODE_STRING *v21; // rcx
  ULONG64 v23; // rcx
  wchar_t *Buffer; // rax
  __int128 v25; // [rsp+30h] [rbp-58h]
  __int128 v26; // [rsp+40h] [rbp-48h] BYREF

  v7 = 32LL;
  *a4 = 0LL;
  if ( a3 )
    *a3 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( !a1 )
  {
    v10 = 0x80000000;
    goto LABEL_14;
  }
  if ( *(_DWORD *)a1 )
    return 3221225485LL;
  v10 = *(_DWORD *)(a1 + 4);
  if ( (v10 & 1) != 0 )
  {
    if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) == 0 )
    {
      v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
      goto LABEL_14;
    }
    return 3221225485LL;
  }
  if ( (v10 & 2) == 0 )
  {
    if ( v10 < 0 )
      goto LABEL_14;
    return 3221225485LL;
  }
  if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) != 0 )
    return 3221225485LL;
  v8 = *(_DWORD *)(a1 + 28);
  v7 = *(unsigned __int16 *)(a1 + 8) + 66LL;
  v11 = 16LL * v8;
  if ( v11 > 0xFFFFFFFF )
    return 3221225485LL;
  v9 = *(_QWORD *)(a1 + 32);
  if ( a2 && (_DWORD)v11 )
  {
    if ( (v9 & 3) != 0 )
      ExRaiseDatatypeMisalignment();
    v23 = v9 + (unsigned int)v11;
    if ( v23 > MmUserProbeAddress || v23 < v9 )
      *(_BYTE *)MmUserProbeAddress = 0;
  }
  v12 = 0;
  if ( v8 )
  {
    v13 = (unsigned __int16 *)v9;
    do
    {
      v14 = v7 + *v13 + 2LL;
      if ( v14 < v7 )
        return 3221225485LL;
      ++v12;
      v13 += 8;
      v7 = v14;
    }
    while ( v12 < v8 );
  }
LABEL_14:
  if ( a2 )
    PoolWithQuotaTag = (char *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v7, 0x78435250u);
  else
    PoolWithQuotaTag = (char *)ExAllocatePoolWithTag(PagedPool, v7, 0x78435250u);
  v16 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    *a4 = PoolWithQuotaTag;
    if ( v10 < 0 )
    {
      *((_QWORD *)PoolWithQuotaTag + 3) = 0LL;
      return 0;
    }
    v17 = (unsigned __int64)(PoolWithQuotaTag + 39) & 0xFFFFFFFFFFFFFFF8uLL;
    *((_QWORD *)PoolWithQuotaTag + 3) = &PoolWithQuotaTag[v7 - v17];
    *(_DWORD *)v17 = v10;
    *(_QWORD *)(v17 + 8) = 32LL;
    v18 = PopSafeCopyUnicodeString((PCUNICODE_STRING)(a1 + 8));
    v19 = v18;
    if ( (v10 & 1) != 0 )
    {
      if ( v18 >= 0 )
      {
LABEL_24:
        if ( a3 )
          *a3 = (*(_BYTE *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else if ( v18 >= 0 )
    {
      *(_WORD *)(v17 + 16) = *(_WORD *)(a1 + 24);
      *(_DWORD *)(v17 + 20) = v8;
      *(_QWORD *)(v17 + 24) = 32LL;
      v20 = 0;
      if ( v8 )
      {
        while ( 1 )
        {
          v21 = (const UNICODE_STRING *)(v9 + 16LL * v20);
          if ( a2 )
          {
            if ( (unsigned __int64)v21 >= MmUserProbeAddress )
              v21 = (const UNICODE_STRING *)MmUserProbeAddress;
            LODWORD(v25) = *(_DWORD *)&v21->Length;
            Buffer = v21->Buffer;
            v21 = (const UNICODE_STRING *)&v26;
            *((_QWORD *)&v25 + 1) = Buffer;
            v26 = v25;
          }
          v19 = PopSafeCopyUnicodeString(v21);
          if ( v19 < 0 )
            goto LABEL_48;
          if ( ++v20 >= v8 )
            goto LABEL_24;
        }
      }
      goto LABEL_24;
    }
LABEL_48:
    ExFreePoolWithTag(v16, 0x78435250u);
    *a4 = 0LL;
    return (unsigned int)v19;
  }
  return 3221225626LL;
}
