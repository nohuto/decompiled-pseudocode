/*
 * XREFs of ??0CManipulationContext@@QEAA@PEAVCComposition@@@Z @ 0x1800055A4
 * Callers:
 *     ?OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z @ 0x180004334 (-OnNewContact@CManipulationManager@@AEAAJPEAVCInteraction@@IK_N1@Z.c)
 *     ?ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180004BE0 (-ProcessFrameInputPreTargeting@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 *     ?RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z @ 0x180143E50 (-RevalidateMC@CManipulationContext@@AEAAXPEAUMCCollections@@PEAHHH@Z.c)
 * Callees:
 *     <none>
 */

CManipulationContext *__fastcall CManipulationContext::CManipulationContext(
        CManipulationContext *this,
        struct CComposition *a2)
{
  CManipulationContext *result; // rax

  *((_QWORD *)this + 1) = &CMILRefCountBase::`vftable';
  *((_DWORD *)this + 4) = 0;
  *(_QWORD *)this = &CManipulationContext::`vftable'{for `IManipulationContext'};
  *((_QWORD *)this + 1) = &CManipulationContext::`vftable'{for `CMILRefCountBase'};
  result = this;
  *((_QWORD *)this + 5) = a2;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 0LL;
  *((_DWORD *)this + 18) = 0;
  *((_QWORD *)this + 10) = 0LL;
  *((_QWORD *)this + 11) = 0LL;
  *((_DWORD *)this + 24) = 0;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 16) = 0LL;
  *((_QWORD *)this + 17) = 0LL;
  return result;
}
