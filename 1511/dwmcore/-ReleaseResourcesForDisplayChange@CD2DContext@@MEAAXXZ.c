/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x180020B70
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x180024450 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x1800204E0 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x180024F84 (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 */

void __fastcall CD2DContext::ReleaseResourcesForDisplayChange(CD2DContext *this, unsigned int a2)
{
  CD2DTarget *v3; // rcx

  v3 = (CD2DTarget *)*((_QWORD *)this + 33);
  if ( v3 )
  {
    CD2DTarget::`scalar deleting destructor'(v3, a2);
    *((_QWORD *)this + 33) = 0LL;
  }
  CD2DContext::D2DSetTargetInternal(this, 0LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 384LL))(*((_QWORD *)this + 5));
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 392LL))(*((_QWORD *)this + 5), 0LL, 0LL);
}
