/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x140114000
 * Callers:
 *     MiDereferenceSessionFinal @ 0x1404F36F0 (MiDereferenceSessionFinal.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiDeleteSystemPte @ 0x1401141C8 (MiDeleteSystemPte.c)
 *     MiIncrementPfn @ 0x140127030 (MiIncrementPfn.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v2; // r12
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  KIRQL v8; // al
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rcx
  KIRQL v13; // r13
  unsigned __int64 *v14; // rsi
  unsigned __int64 NextPageTable; // rbx
  unsigned __int64 v16; // r14
  _KPROCESS *v17; // rdx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  _OWORD v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v21; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v22; // [rsp+64h] [rbp-9Ch]
  __int64 v23; // [rsp+68h] [rbp-98h]
  __int64 v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]

  v2 = 2LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 2LL;
  do
  {
    v19 = MI_READ_PTE_LOCK_FREE(v5);
    v7 = MI_GET_PAGE_FRAME_FROM_PTE(&v19);
    MiIncrementPfn(48 * v7 - 0x58000000000LL);
    v5 += 8LL;
    --v6;
  }
  while ( v6 );
  v22 = 0;
  v24 = 0LL;
  v25 = 0LL;
  v20[0] = _mm_load_si128((const __m128i *)&_xmm_fffff6fcbffffff8fffff6fc80000000);
  v23 = 20LL;
  v20[1] = _mm_load_si128((const __m128i *)&_xmm_fffff6fb7dbf2ff8fffff6fb7dbf2000);
  v21 = 2;
  v8 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 2968));
  v12 = *(_QWORD **)(a1 + 2984);
  v13 = v8;
  if ( v12 )
  {
    MiEmptyPageAccessLog(v12);
    *(_QWORD *)(a1 + 2984) = 0LL;
  }
  *(_QWORD *)(a1 + 3152) = 0LL;
  v14 = (unsigned __int64 *)v20 + 1;
  do
  {
    NextPageTable = *(v14 - 1);
    v16 = *v14;
    while ( NextPageTable <= v16 )
    {
      LOBYTE(v11) = v13;
      NextPageTable = MiGetNextPageTable(NextPageTable, v16, 0LL, v11, 5, &v19);
      if ( !NextPageTable )
        break;
      do
      {
        v18 = 0;
        MiDeleteSystemPte(NextPageTable, &v21, a2, &v18);
        NextPageTable += 8LL;
        if ( v18 == 1 )
          break;
        if ( NextPageTable > v16 )
          goto LABEL_12;
      }
      while ( (NextPageTable & 0xFFF) != 0 );
    }
LABEL_12:
    v14 += 2;
    --v2;
  }
  while ( v2 );
  a2[1] -= 2LL;
  a2[3] -= 2LL;
  LOBYTE(v9) = v13;
  *a2 -= 2LL;
  MiUnlockWorkingSetExclusive(a1 + 2968, v9, v10);
  MiFlushTbList((__int64)&v21, v17);
}
