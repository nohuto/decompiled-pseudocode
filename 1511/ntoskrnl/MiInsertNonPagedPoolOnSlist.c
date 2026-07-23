/*
 * XREFs of MiInsertNonPagedPoolOnSlist @ 0x140089B90
 * Callers:
 *     MiFreePoolPages @ 0x14003B78C (MiFreePoolPages.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiLockNonPagedPoolPte @ 0x1400DCB30 (MiLockNonPagedPoolPte.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14015B9A0 (RtlpInterlockedPushEntrySList.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 */

__int64 __fastcall MiInsertNonPagedPoolOnSlist(_SLIST_ENTRY *a1, unsigned __int64 a2)
{
  __int64 v3; // rsi
  __int64 v5; // r12
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r8
  unsigned __int8 CurrentIrql; // bl
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  unsigned __int16 v12; // ax
  unsigned int v13; // r13d
  __int64 v14; // rax
  __int64 v15; // r14
  _SLIST_HEADER *v16; // r14
  int v17; // ebp
  unsigned __int64 v18; // r15
  char v19; // bl
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  unsigned __int64 v24; // [rsp+30h] [rbp-58h] BYREF
  __int64 v25; // [rsp+38h] [rbp-50h]
  unsigned __int8 v28; // [rsp+A0h] [rbp+18h] BYREF
  int v29; // [rsp+A8h] [rbp+20h] BYREF

  v3 = (((unsigned __int64)a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v5 = (((unsigned __int64)a1 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v24 = MI_READ_PTE_LOCK_FREE(v5);
  if ( (v24 & 0x80u) == 0LL )
  {
    v7 = MiLockNonPagedPoolPte(v3, &v28);
    v11 = MI_READ_PTE_LOCK_FREE(v3);
    v24 = v11;
    v10 = v11;
    if ( (v11 & 0x200) != 0 )
    {
      v10 = v11 & 0xFFFFFFFFFFFFFDFFuLL;
      v24 = v11 & 0xFFFFFFFFFFFFFDFFuLL;
      MI_INTERLOCKED_EXCHANGE_PTE(v3, v11 & 0xFFFFFFFFFFFFFDFFuLL);
    }
  }
  else
  {
    v7 = 48
       * ((((unsigned __int64)a1 >> 12) & 0x1FF)
        + (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v24) >> 12) & 0xFFFFFFFFFLL))
       - 0x58000000000LL;
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v7 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29, v6, v8);
      while ( (*(_QWORD *)(v7 + 24) & 0x8000000000000000uLL) != 0 );
    }
    v28 = CurrentIrql;
    v10 = v24;
  }
  if ( (*(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 1 )
    KeBugCheckEx(
      0x4Eu,
      0x99uLL,
      (v7 + 0x58000000000LL) / 48,
      *(_BYTE *)(v7 + 34) & 7,
      *(_QWORD *)(v7 + 24) & 0x3FFFFFFFFFFFFFFFLL);
  v12 = *(_WORD *)(v7 + 32);
  if ( v12 != 1 )
    KeBugCheckEx(0x4Eu, 0x9AuLL, (v7 + 0x58000000000LL) / 48, *(_BYTE *)(v7 + 34) & 7, v12);
  v13 = 512;
  if ( (v10 & 0x8000000000000000uLL) == 0 )
    v13 = 0;
  v14 = *(_QWORD *)(v7 + 40) >> 58;
  v25 = v14;
  _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v28);
  if ( a2 > 3 )
    return v13;
  v15 = (v13 & 0x200) != 0 ? 26 * v14 + a2 + 3 : a2 + 26 * v14;
  v16 = &qword_1402FE6C0[v15];
  if ( LOWORD(v16->Alignment) >= (unsigned int)dword_1402FE188[a2 - 1] )
    return v13;
  v17 = 1;
  v18 = 1LL;
  if ( a2 > 1 )
  {
    do
    {
      v3 += 8LL;
      if ( (v3 & 0xFFF) != 0 )
      {
        v20 = MI_READ_PTE_LOCK_FREE(v5);
        v19 = v20;
        v24 = v20;
      }
      else
      {
        v5 += 8LL;
        v24 = MI_READ_PTE_LOCK_FREE(v5);
        v19 = v24;
        if ( (v24 & 0x80u) != 0LL )
          v7 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v24) - 0x58000000030LL;
      }
      if ( v19 >= 0 )
      {
        v7 = MiLockNonPagedPoolPte(v3, &v28);
        v21 = MI_READ_PTE_LOCK_FREE(v3);
        v24 = v21;
        if ( (v21 & 0x200) != 0 )
        {
          v24 = v21 & 0xFFFFFFFFFFFFFDFFuLL;
          MI_INTERLOCKED_EXCHANGE_PTE(v3, v21 & 0xFFFFFFFFFFFFFDFFuLL);
        }
      }
      else
      {
        v28 = 17;
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
      v22 = (unsigned __int8)HIBYTE(*(_QWORD *)(v7 + 40)) >> 2;
      if ( v28 != 17 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v7 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v28);
      }
      if ( v22 != (_DWORD)v25 )
        v17 = 0;
      ++v18;
    }
    while ( v18 < a2 );
    if ( !v17 )
      return v13;
  }
  a1->Next = (_SLIST_ENTRY *)((unsigned __int64)a1 ^ qword_1402FF6C0);
  RtlpInterlockedPushEntrySList(v16, a1 + 1);
  return 1LL;
}
