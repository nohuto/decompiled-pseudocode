/*
 * XREFs of ?ReleaseStablePowerReference@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0127DC8
 * Callers:
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001A528 (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     DxgkSetStablePowerState @ 0x1C014A4E0 (DxgkSetStablePowerState.c)
 * Callees:
 *     ?DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z @ 0x1C01229E8 (-DdiSetStablePowerState@ADAPTER_RENDER@@QEAAXH@Z.c)
 */

void __fastcall ADAPTER_RENDER::ReleaseStablePowerReference(ADAPTER_RENDER *this, __int64 a2, __int64 a3)
{
  if ( (*((_DWORD *)this + 260))-- == 1 )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 864LL) )
      ADAPTER_RENDER::DdiSetStablePowerState(this, 0, a3);
  }
}
