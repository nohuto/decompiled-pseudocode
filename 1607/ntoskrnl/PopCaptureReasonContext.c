/*
 * XREFs of PopCaptureReasonContext @ 0x1400FA054
 * Callers:
 *     PoCaptureReasonContext @ 0x1400F9E3C (PoCaptureReasonContext.c)
 * Callees:
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     PopSafeCopyUnicodeString @ 0x1400FA2DC (PopSafeCopyUnicodeString.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6190 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PopCaptureReasonContext(__int64 a1, char a2, bool *a3, _QWORD *a4)
{
  SIZE_T v8; // rdi
  unsigned int v9; // r15d
  unsigned __int64 v10; // r12
  int v11; // ebp
  unsigned __int64 v12; // rax
  unsigned int v13; // edx
  _QWORD *PoolWithQuotaTag; // rax
  _QWORD *v15; // r14
  unsigned __int64 v16; // rbx
  const UNICODE_STRING *v17; // rcx
  int v18; // edi
  unsigned int v19; // ebx
  unsigned __int16 *v21; // rcx
  SIZE_T v22; // r9
  unsigned __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rax
  __int128 v26; // [rsp+20h] [rbp-68h]
  __int128 v27; // [rsp+30h] [rbp-58h] BYREF

  *a4 = 0LL;
  v8 = 56LL;
  if ( a3 )
    *a3 = 0;
  v9 = 0;
  v10 = 0LL;
  if ( a1 )
  {
    if ( *(_DWORD *)a1 )
      return 3221225485LL;
    v11 = *(_DWORD *)(a1 + 4);
    if ( (v11 & 1) != 0 )
    {
      if ( (((unsigned __int8)*(_WORD *)(a1 + 8) + 2) & 1) != 0 )
        return 3221225485LL;
      v8 = *(unsigned __int16 *)(a1 + 8) + 90LL;
    }
    else
    {
      if ( (v11 & 2) != 0 )
      {
        if ( ((*(_BYTE *)(a1 + 8) + 2) & 1) == 0 )
        {
          v9 = *(_DWORD *)(a1 + 28);
          v8 = *(unsigned __int16 *)(a1 + 8) + 90LL;
          v12 = 16LL * v9;
          if ( v12 <= 0xFFFFFFFF )
          {
            v10 = *(_QWORD *)(a1 + 32);
            if ( a2 && (_DWORD)v12 )
            {
              if ( (v10 & 3) != 0 )
                ExRaiseDatatypeMisalignment();
              v24 = v10 + (unsigned int)v12;
              if ( v24 > 0x7FFFFFFF0000LL || v24 < v10 )
                MEMORY[0x7FFFFFFF0000] = 0;
            }
            v13 = 0;
            if ( !v9 )
              goto LABEL_12;
            v21 = (unsigned __int16 *)v10;
            while ( 1 )
            {
              v22 = v8 + *v21 + 2LL;
              if ( v22 < v8 )
                break;
              ++v13;
              v21 += 8;
              v8 = v22;
              if ( v13 >= v9 )
                goto LABEL_12;
            }
          }
        }
        return 3221225485LL;
      }
      if ( (v11 & 0x80000000) == 0 )
        return 3221225485LL;
    }
  }
  else
  {
    v11 = 0x80000000;
  }
LABEL_12:
  if ( a2 )
    PoolWithQuotaTag = ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v8, 0x78435250u);
  else
    PoolWithQuotaTag = ExAllocatePoolWithTag(PagedPool, v8, 0x78435250u);
  v15 = PoolWithQuotaTag;
  if ( PoolWithQuotaTag )
  {
    memset(PoolWithQuotaTag, 0, v8);
    *a4 = v15;
    if ( v11 < 0 )
    {
      v15[6] = 0LL;
      return 0;
    }
    v16 = ((unsigned __int64)v15 + 63) & 0xFFFFFFFFFFFFFFF8uLL;
    v17 = (const UNICODE_STRING *)(a1 + 8);
    v15[6] = (char *)v15 + v8 - v16;
    *(_DWORD *)v16 = v11;
    *(_QWORD *)(v16 + 8) = 32LL;
    if ( (v11 & 1) != 0 )
    {
      v18 = PopSafeCopyUnicodeString(v17);
      if ( v18 >= 0 )
      {
LABEL_19:
        if ( a3 )
          *a3 = (*(_BYTE *)(a1 + 4) & 4) != 0;
        return 0;
      }
    }
    else
    {
      v18 = PopSafeCopyUnicodeString(v17);
      if ( v18 >= 0 )
      {
        *(_WORD *)(v16 + 16) = *(_WORD *)(a1 + 24);
        *(_DWORD *)(v16 + 20) = v9;
        *(_QWORD *)(v16 + 24) = 32LL;
        v19 = 0;
        if ( !v9 )
          goto LABEL_19;
        while ( 1 )
        {
          v23 = v10 + 16LL * v19;
          if ( a2 )
          {
            if ( v23 >= 0x7FFFFFFF0000LL )
              v23 = 0x7FFFFFFF0000LL;
            LODWORD(v26) = *(_DWORD *)v23;
            v25 = *(_QWORD *)(v23 + 8);
            v23 = (unsigned __int64)&v27;
            *((_QWORD *)&v26 + 1) = v25;
            v27 = v26;
          }
          v18 = PopSafeCopyUnicodeString((PCUNICODE_STRING)v23);
          if ( v18 < 0 )
            break;
          if ( ++v19 >= v9 )
            goto LABEL_19;
        }
      }
    }
    ExFreePoolWithTag(v15, 0x78435250u);
    *a4 = 0LL;
    return (unsigned int)v18;
  }
  return 3221225626LL;
}
