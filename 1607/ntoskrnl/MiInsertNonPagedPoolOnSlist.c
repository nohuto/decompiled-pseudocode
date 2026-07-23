/*
 * XREFs of MiInsertNonPagedPoolOnSlist @ 0x140011050
 * Callers:
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 * Callees:
 *     MiLockNonPagedPoolPte @ 0x1400242D0 (MiLockNonPagedPoolPte.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401E1924 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiInsertNonPagedPoolOnSlist(unsigned __int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rsi
  unsigned __int64 v3; // rdi
  int v4; // r9d
  char v5; // al
  unsigned __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // rax
  unsigned __int64 v9; // r10
  ULONG_PTR BugCheckParameter4; // rcx
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // rax
  int v14; // r9d
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // r11
  __int64 v17; // rdx
  unsigned __int64 v18; // rcx
  __int16 v19; // ax
  __int64 v20; // rax
  unsigned __int8 CurrentIrql; // r14
  unsigned __int16 v22; // ax
  unsigned int v23; // r13d
  __int64 v24; // r10
  __int64 v25; // r12
  _SLIST_HEADER *v26; // r12
  int v27; // r14d
  unsigned __int64 v28; // r15
  int v29; // r10d
  unsigned __int64 v30; // r11
  __int64 v31; // r9
  __int64 v32; // rax
  int v33; // ecx
  _SLIST_ENTRY *v35; // rcx
  unsigned __int8 v36[8]; // [rsp+30h] [rbp-59h] BYREF
  unsigned __int64 v37; // [rsp+38h] [rbp-51h] BYREF
  int v38; // [rsp+40h] [rbp-49h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-41h]
  __int64 v40; // [rsp+50h] [rbp-39h]
  __int64 v41; // [rsp+58h] [rbp-31h] BYREF
  unsigned __int64 *v42; // [rsp+60h] [rbp-29h]
  unsigned __int64 v43; // [rsp+68h] [rbp-21h]
  unsigned __int64 v44; // [rsp+70h] [rbp-19h]
  __int64 v45; // [rsp+78h] [rbp-11h]
  unsigned __int64 v46; // [rsp+80h] [rbp-9h]
  unsigned __int64 v47; // [rsp+88h] [rbp-1h]
  unsigned __int64 v48; // [rsp+90h] [rbp+7h]
  __int64 v49; // [rsp+98h] [rbp+Fh]

  v39 = a2;
  v42 = a1;
  v2 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v3 = v2;
  v43 = (((unsigned __int64)a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v44 = ((v43 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v4 = 3;
  v45 = ((v44 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v5 = MI_READ_PTE_LOCK_FREE(*(&v43 + (unsigned int)(v4 - 1)));
    if ( ((unsigned __int8)v5 & (unsigned __int8)v6) == 0 )
      goto LABEL_5;
    if ( v5 < 0 )
      break;
    if ( !v4 )
      goto LABEL_5;
  }
  v11 = v6 + v4;
  if ( !v11 )
    goto LABEL_5;
  do
  {
    v6 <<= 9;
    v3 = ((v3 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v11;
  }
  while ( v11 );
  if ( v6 <= 1 )
  {
LABEL_5:
    v7 = MiLockNonPagedPoolPte(v2, v36);
    v8 = MI_READ_PTE_LOCK_FREE(v2);
    v37 = v8;
    v9 = v8;
    if ( (v8 & 0x200) != 0 )
    {
      v37 = v8 & 0xFFFFFFFFFFFFFDFFuLL;
      MI_INTERLOCKED_EXCHANGE_PTE(v2, v8 & 0xFFFFFFFFFFFFFDFFuLL);
    }
    goto LABEL_7;
  }
  v37 = MI_READ_PTE_LOCK_FREE(v3);
  v46 = v2;
  v47 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v48 = ((v47 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 4;
  v49 = ((v48 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v13 = MI_READ_PTE_LOCK_FREE(*(&v46 + (unsigned int)(v12 - 1)));
    v41 = v13;
  }
  while ( v12 && (v13 & 0x80u) == 0LL );
  v15 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v41) >> 12) & 0xFFFFFFFFFLL;
  if ( v14 )
  {
    v17 = 1LL;
    v18 = v16 >> 12;
    do
    {
      v19 = v18;
      v18 >>= 9;
      v20 = v17 * (v19 & 0x1FF);
      v17 <<= 9;
      v15 += v20;
      --v14;
    }
    while ( v14 );
  }
  v7 = 48 * v15 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v38 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v38);
    while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v9 = v37;
  v36[0] = CurrentIrql;
LABEL_7:
  BugCheckParameter4 = *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( BugCheckParameter4 != 1 )
    KeBugCheckEx(0x4Eu, 0x99uLL, (v7 + 0x58000000000LL) / 48, *(_BYTE *)(v7 + 34) & 7, BugCheckParameter4);
  v22 = *(_WORD *)(v7 + 32);
  if ( v22 != 1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (v7 + 0x58000000000LL) / 48, *(_BYTE *)(v7 + 34) & 7, v22);
  v23 = 512;
  if ( (v9 & 0x8000000000000000uLL) == 0 )
    v23 = 0;
  v24 = *(_QWORD *)(v7 + 40) >> 58;
  v40 = v24;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v36[0]);
  if ( v39 > 3 )
    return v23;
  v25 = (v23 & 0x200) != 0 ? 26LL * (unsigned int)v24 + v39 + 3 : v39 + 26LL * (unsigned int)v24;
  v26 = &qword_1403269F0[v25];
  if ( LOWORD(v26->Alignment) >= (unsigned int)dword_140326488[v39 - 1] )
    return v23;
  v27 = 1;
  v28 = 1LL;
  if ( v39 > 1 )
  {
    do
    {
      v2 += 8LL;
      if ( (v2 & 0xFFF) != 0 )
      {
        v31 = MI_READ_PTE_LOCK_FREE(v3);
        v37 = v31;
      }
      else
      {
        v3 = ((v2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v37 = MI_READ_PTE_LOCK_FREE(v3);
        LOBYTE(v31) = v37;
        if ( (v37 & 0x80u) != 0LL )
          v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v37) - 0x58000000030LL;
      }
      if ( (v31 & 0x80u) == 0LL )
      {
        v7 = MiLockNonPagedPoolPte(v2, v36);
        v32 = MI_READ_PTE_LOCK_FREE(v2);
        v37 = v32;
        if ( (v32 & 0x200) != 0 )
        {
          v37 = v32 & 0xFFFFFFFFFFFFFDFFuLL;
          MI_INTERLOCKED_EXCHANGE_PTE(v2, v32 & 0xFFFFFFFFFFFFFDFFuLL);
        }
        v30 = v39;
        v29 = v40;
      }
      else
      {
        v36[0] = 17;
        v7 += 48LL;
      }
      if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
        KeBugCheckEx(
          0x4Eu,
          0x99uLL,
          (v7 + 0x58000000000LL) / 48,
          *(_BYTE *)(v7 + 34) & 7,
          *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL);
      if ( *(_WORD *)(v7 + 32) != 1 )
        KeBugCheckEx(
          0x4Eu,
          0x9AuLL,
          (v7 + 0x58000000000LL) / 48,
          *(_BYTE *)(v7 + 34) & 7,
          *(unsigned __int16 *)(v7 + 32));
      v33 = (unsigned __int8)HIBYTE(*(_QWORD *)(v7 + 40)) >> 2;
      if ( v36[0] != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v36[0]);
      }
      if ( v33 != v29 )
        v27 = 0;
      ++v28;
    }
    while ( v28 < v30 );
    if ( !v27 )
      return v23;
  }
  v35 = (_SLIST_ENTRY *)v42;
  *v42 = qword_1403277C0 ^ (unsigned __int64)v42;
  RtlpInterlockedPushEntrySList(v26, v35 + 1);
  return 1LL;
}
