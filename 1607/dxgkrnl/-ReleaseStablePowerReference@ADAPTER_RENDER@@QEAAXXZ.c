/*
 * XREFs of ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0149344
 * Callers:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001E130 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C0174380 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C014C828 (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseStablePowerReference(ADAPTER_RENDER *this)
{
  if ( (*((_DWORD *)this + 260))-- == 1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 880LL) )
      ADAPTER_RENDER::DdiSetStablePowerState(this, 0);
  }
}
