/*
 * XREFs of ?DisableStablePowerState@DXGADAPTER@@QEAAXXZ @ 0x1C0129AD4
 * Callers:
 *     ?DisableStablePowerState@DXGGLOBAL@@QEAAXXZ @ 0x1C01454F4 (-DisableStablePowerState@DXGGLOBAL@@QEAAXXZ.c)
 * Callees:
 *     ?SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z @ 0x1C0002EC8 (-SetPowerComponentIdleCBInternal@DXGADAPTER@@QEAAXI@Z.c)
 *     ?ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ @ 0x1C001B52C (-ReleaseStablePowerReferenceWithoutLock@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ @ 0x1C001EC40 (-DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE@@QEAAXXZ.c)
 */

void __fastcall DXGADAPTER::DisableStablePowerState(DXGADAPTER *this, __int64 a2, __int64 a3)
{
  unsigned int i; // edi
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  ADAPTER_RENDER *v8; // rcx

  if ( *((_BYTE *)this + 2463) )
  {
    for ( i = 0; i < *((_DWORD *)this + 542); ++i )
    {
      v5 = 520LL * i;
      v6 = *((_QWORD *)this + 253);
      if ( !*(_DWORD *)(v5 + v6 + 208) )
      {
        v7 = *(_QWORD *)(v5 + v6 + 512);
        if ( v7 )
          DXGPOWERSTATISTICSTRANSITIONENGINE::DisableStablePState((KSPIN_LOCK *)(v7 + 136));
        DXGADAPTER::SetPowerComponentIdleCBInternal(this, i, a3);
      }
    }
    v8 = (ADAPTER_RENDER *)*((_QWORD *)this + 249);
    if ( v8 )
      ADAPTER_RENDER::ReleaseStablePowerReferenceWithoutLock(v8);
    *((_BYTE *)this + 2463) = 0;
  }
}
