/*
 * XREFs of MiDeleteSessionAddressSpace @ 0x140123278
 * Callers:
 *     MiDereferenceSessionFinal @ 0x140532010 (MiDereferenceSessionFinal.c)
 * Callees:
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiDeleteSystemPte @ 0x1401234B4 (MiDeleteSystemPte.c)
 *     MiIncrementPfn @ 0x1401236F4 (MiIncrementPfn.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 */

void __fastcall MiDeleteSessionAddressSpace(unsigned __int64 a1, _QWORD *a2)
{
  __int64 v4; // r15
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // r13
  LONG *SharedVm; // rsi
  __int64 v10; // rcx
  LONG *v11; // rbx
  KIRQL v12; // al
  __int64 v13; // rdx
  __int64 v14; // r9
  KIRQL v15; // r12
  _SLIST_ENTRY *v16; // rcx
  unsigned __int64 *v17; // rsi
  unsigned __int64 NextPageTable; // rbx
  unsigned __int64 v19; // r14
  _KPROCESS *v20; // rdx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // [rsp+30h] [rbp-D0h] BYREF
  int v24; // [rsp+38h] [rbp-C8h] BYREF
  unsigned __int64 v25; // [rsp+40h] [rbp-C0h]
  _QWORD v26[3]; // [rsp+48h] [rbp-B8h] BYREF
  int v27; // [rsp+60h] [rbp-A0h] BYREF
  __int16 v28; // [rsp+64h] [rbp-9Ch]
  __int64 v29; // [rsp+68h] [rbp-98h]
  __int64 v30; // [rsp+70h] [rbp-90h]
  __int64 v31; // [rsp+78h] [rbp-88h]

  v4 = 2LL;
  v5 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v6 = 2LL;
  do
  {
    v23 = MI_READ_PTE_LOCK_FREE(v5);
    v7 = MI_GET_PAGE_FRAME_FROM_PTE(&v23);
    MiIncrementPfn(48 * v7 - 0x58000000000LL);
    v5 += 8LL;
    --v6;
  }
  while ( v6 );
  v29 = 20LL;
  v27 = 2;
  v28 = 0;
  v8 = a1 + 3008;
  v30 = 0LL;
  v31 = 0LL;
  v25 = (((unsigned __int64)qword_140326950 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26[0] = (((unsigned __int64)(qword_140326950 + 0x7FFFFFFFFFLL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v26[1] = (((unsigned __int64)qword_140326950 >> 27) & 0x1FFFF8) - 0x90482600000LL;
  v26[2] = (((unsigned __int64)(qword_140326950 + 0x7FFFFFFFFFLL) >> 27) & 0x1FFFF8) - 0x90482600000LL;
  SharedVm = MiGetSharedVm(v8);
  v11 = MiGetSharedVm(v10);
  v12 = ExAcquireSpinLockExclusive(v11);
  v11[1] = 0;
  v15 = v12;
  v16 = (_SLIST_ENTRY *)*((_QWORD *)SharedVm + 5);
  if ( v16 )
  {
    MiEmptyPageAccessLog(v16);
    *((_QWORD *)SharedVm + 5) = 0LL;
  }
  *(_QWORD *)(v8 + 16) = 0LL;
  v17 = v26;
  do
  {
    NextPageTable = *(v17 - 1);
    v19 = *v17;
    while ( NextPageTable <= v19 )
    {
      LOBYTE(v14) = v15;
      NextPageTable = MiGetNextPageTable(NextPageTable, v19, 0LL, v14, 5, &v24);
      if ( !NextPageTable )
        break;
      do
      {
        LODWORD(v23) = 0;
        MiDeleteSystemPte(NextPageTable, &v27, a2, &v23);
        NextPageTable += 8LL;
        if ( (_DWORD)v23 == 1 )
          break;
        if ( NextPageTable > v19 )
          goto LABEL_12;
      }
      while ( (NextPageTable & 0xFFF) != 0 );
    }
LABEL_12:
    v17 += 2;
    --v4;
  }
  while ( v4 );
  a2[1] -= 2LL;
  LOBYTE(v13) = v15;
  a2[3] -= 2LL;
  *a2 -= 2LL;
  MiUnlockWorkingSetExclusive(v8, v13);
  MiFlushTbList((__int64)&v27, v20, v21, v22);
}
