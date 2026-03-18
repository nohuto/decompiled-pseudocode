/*
 * XREFs of ?BreakLinksForCycles@CTransform3DGroup@@MEAAXXZ @ 0x180157B20
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180021910 (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CTransform3DGroup::BreakLinksForCycles(CTransform3DGroup *this)
{
  struct CMILMatrix *v2; // rax

  v2 = (struct CMILMatrix *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              68LL);
  if ( v2 )
    *((_DWORD *)v2 + 16) = 0;
  *((_QWORD *)this + 5) = v2;
  if ( v2 )
    CTransform3DGroup::GetRealizationWorker((CTransform3DGroup *)((char *)this - 216), 0LL, v2);
  CCyclicResourceListEntry::BreakLinksForCycles(this);
}
