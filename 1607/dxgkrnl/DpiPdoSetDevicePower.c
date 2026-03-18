/*
 * XREFs of DpiPdoSetDevicePower @ 0x1C00E03AC
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C000EDF0 (DpiPdoDispatchPower.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C44D0 (DpiPdoDispatchInternalIoctl.c)
 *     DxgkPowerOnOffMonitor @ 0x1C00E047C (DxgkPowerOnOffMonitor.c)
 * Callees:
 *     DpiPdoToggleDevicePowerEvents @ 0x1C000EF40 (DpiPdoToggleDevicePowerEvents.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00C1EE4 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00C1F58 (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00DF65C (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00DF68C (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C00DFF00 (DpiDxgkDdiSetPowerState.c)
 */

__int64 __fastcall DpiPdoSetDevicePower(__int64 a1, int a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v7; // r12
  __int64 v8; // r14
  int v9; // edi

  v3 = *(_QWORD *)(a1 + 64);
  v7 = *(_QWORD *)(v3 + 40);
  v8 = *(_QWORD *)(*(_QWORD *)(v3 + 32) + 64LL);
  if ( *(_DWORD *)(v3 + 284) == a2 )
  {
    return 0;
  }
  else
  {
    *(_DWORD *)(v3 + 284) = a2;
    v9 = DpiAcquireCoreSyncAccessSafe(a1, 1);
    if ( v9 >= 0 )
    {
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 3688), 1);
      DpiDxgkDdiSetPowerState(v7, *(_QWORD *)(v3 + 48), *(unsigned int *)(v3 + 504), a2, a3);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 3688));
      DpiReleaseCoreSyncAccessSafe(a1, 1);
      v9 = 0;
      DpiPdoToggleDevicePowerEvents(*(_QWORD *)(v3 + 936), *(_DWORD *)(v3 + 284));
    }
  }
  return (unsigned int)v9;
}
