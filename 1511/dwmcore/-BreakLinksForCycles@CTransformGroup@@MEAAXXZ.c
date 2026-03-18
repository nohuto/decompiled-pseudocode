/*
 * XREFs of ?BreakLinksForCycles@CTransformGroup@@MEAAXXZ @ 0x18001DAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18001B86C (-GetRealizationWorker@CTransform3DGroup@@IEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CTransformGroup::BreakLinksForCycles(CTransformGroup *this)
{
  struct CMILMatrix *v2; // rax

  v2 = (struct CMILMatrix *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                       + 8LL))(
                              WPF::g_pProcessHeap,
                              64LL);
  *((_QWORD *)this + 5) = v2;
  if ( v2 )
    CTransform3DGroup::GetRealizationWorker((CTransformGroup *)((char *)this - 120), 0LL, v2);
  CCyclicResourceListEntry::BreakLinksForCycles(this);
}
