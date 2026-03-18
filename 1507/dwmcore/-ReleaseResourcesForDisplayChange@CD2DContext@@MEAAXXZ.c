/*
 * XREFs of ?ReleaseResourcesForDisplayChange@CD2DContext@@MEAAXXZ @ 0x18008B610
 * Callers:
 *     ?ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ @ 0x18008B0F0 (-ReleaseResourcesForDisplayChange@CD3DDeviceLevel1@@UEAAXXZ.c)
 * Callees:
 *     ??_GCD2DTarget@@QEAAPEAXI@Z @ 0x18005D96C (--_GCD2DTarget@@QEAAPEAXI@Z.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x180071524 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CD2DContext::ReleaseResourcesForDisplayChange(CD2DContext *this)
{
  CD2DTarget *v2; // rcx

  v2 = (CD2DTarget *)*((_QWORD *)this + 34);
  if ( v2 )
  {
    CD2DTarget::`scalar deleting destructor'(v2);
    *((_QWORD *)this + 34) = 0LL;
  }
  CD2DContext::D2DSetTargetInternal(this, 0LL);
  (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 5) + 384LL))(*((_QWORD *)this + 5));
  (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(**((_QWORD **)this + 5) + 392LL))(*((_QWORD *)this + 5), 0LL, 0LL);
}
