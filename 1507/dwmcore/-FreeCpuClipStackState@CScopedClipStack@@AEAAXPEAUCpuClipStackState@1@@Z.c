/*
 * XREFs of ?FreeCpuClipStackState@CScopedClipStack@@AEAAXPEAUCpuClipStackState@1@@Z @ 0x1800DF580
 * Callers:
 *     ?EndFrame@CDrawingContext@@QEAAJXZ @ 0x18002EDE0 (-EndFrame@CDrawingContext@@QEAAJXZ.c)
 *     ?Clear@CScopedClipStack@@QEAAXXZ @ 0x18007375C (-Clear@CScopedClipStack@@QEAAXXZ.c)
 *     ?PopCpuClip@CDrawingContext@@AEAAXXZ @ 0x1800DC1F8 (-PopCpuClip@CDrawingContext@@AEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CScopedClipStack::FreeCpuClipStackState(
        CScopedClipStack *this,
        struct CScopedClipStack::CpuClipStackState *a2)
{
  void (__fastcall ***v2)(_QWORD, __int64); // rdi

  v2 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)a2 + 9);
  if ( v2 )
    (**v2)(v2, 1LL);
}
