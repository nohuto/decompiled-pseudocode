/*
 * XREFs of MiDoneWithThisPageGetAnother @ 0x1400EC988
 * Callers:
 *     MiUpdateForkMaps @ 0x1400FE6FC (MiUpdateForkMaps.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiFinishLastForkPageTable @ 0x1400ECA54 (MiFinishLastForkPageTable.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 */

__int64 __fastcall MiDoneWithThisPageGetAnother(__int64 *a1, __int64 a2, __int64 a3, KIRQL a4)
{
  volatile LONG *v8; // rbp
  __int16 v9; // ax
  _WORD *v10; // r8
  unsigned int v11; // edi
  int *v12; // r14
  __int64 i; // rcx
  __int64 Page; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // rcx
  __int64 result; // rax
  _WORD *v19; // [rsp+20h] [rbp-18h] BYREF
  __int16 v20; // [rsp+28h] [rbp-10h]
  unsigned __int16 v21; // [rsp+2Ah] [rbp-Eh]

  if ( *a1 != -1 )
    MiFinishLastForkPageTable();
  v8 = (volatile LONG *)(a2 + 1280);
  MI_INITIALIZE_COLOR_BASE((__int64)v8, 0, (__int64)&v19);
  v9 = v20;
  v10 = v19;
  ++*v19;
  v11 = v21 | (unsigned __int16)(v9 & *v10);
  v12 = MiPartitionIdToPointer(*(_WORD *)(a3 + 1460));
  for ( i = (__int64)v12; ; i = (__int64)v12 )
  {
    Page = MiGetPage(i, v11, 0xC2u);
    *a1 = Page;
    if ( Page != -1 )
      break;
    LOBYTE(v15) = a4;
    MiUnlockWorkingSetExclusive((__int64)v8, v15, v16);
    MiWaitForFreePage(v12);
    a4 = ExAcquireSpinLockExclusive(v8);
  }
  v17 = 3 * Page;
  result = 0x58000000000LL;
  *(_QWORD *)(16 * v17 - 0x58000000000LL + 16) &= 0xFFFFFFFFFF003FFFuLL;
  return result;
}
