/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x140108ABC
 * Callers:
 *     MiUpdateForkMaps @ 0x140107B8C (MiUpdateForkMaps.c)
 * Callees:
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiFinishLastForkPageTable @ 0x140108B7C (MiFinishLastForkPageTable.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 */

unsigned __int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, KIRQL a4)
{
  __int64 v4; // rsi
  __int16 v8; // ax
  _WORD *v9; // r8
  unsigned int v10; // ebp
  int *v11; // r15
  __int64 i; // rcx
  __int64 Page; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int64 result; // rax
  LONG *SharedVm; // rbx
  KIRQL v18; // al
  _WORD *v19; // [rsp+20h] [rbp-28h] BYREF
  __int16 v20; // [rsp+28h] [rbp-20h]
  unsigned __int16 v21; // [rsp+2Ah] [rbp-1Eh]

  v4 = a2 + 1280;
  if ( *a1 != -1 )
    MiFinishLastForkPageTable();
  MiInitializePageColorBase(v4, 0, (__int64)&v19);
  v8 = v20;
  v9 = v19;
  ++*v19;
  v10 = v21 | (unsigned __int16)(v8 & *v9);
  v11 = MiPartitionIdToPointer(*(_WORD *)(a3 + 1444));
  for ( i = (__int64)v11; ; i = (__int64)v11 )
  {
    Page = MiGetPage(i, v10, 0xC2u);
    *a1 = Page;
    if ( Page != -1 )
      break;
    LOBYTE(v14) = a4;
    MiUnlockWorkingSetExclusive(v4, v14);
    MiWaitForFreePage(v11);
    SharedVm = MiGetSharedVm(v4);
    v18 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    a4 = v18;
  }
  v15 = 6 * Page;
  result = 0xFFFFFA8000000000uLL;
  *(_QWORD *)(8 * v15 - 0x58000000000LL + 16) &= 0xFFFFFFFFFC00FFFFuLL;
  return result;
}
