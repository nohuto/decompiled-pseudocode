/*
 * XREFs of DpiPdoSetDevicePower @ 0x1C00CA378
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C000D340 (DpiPdoDispatchPower.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00A9560 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00C3780 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiPdoToggleDevicePowerEvents @ 0x1C000D490 (DpiPdoToggleDevicePowerEvents.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C00CA7C8 (DpiDxgkDdiSetPowerState.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00E25D8 (DxgkReleaseAdapterDdiSync.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00E2694 (DxgkAcquireAdapterDdiSync.c)
 */

__int64 __fastcall DpiPdoSetDevicePower(__int64 a1, int a2, int a3)
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
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 2544), 1LL);
      DpiDxgkDdiSetPowerState(v7, *(_QWORD *)(v3 + 48), *(_DWORD *)(v3 + 504), a2, a3);
      DxgkReleaseAdapterDdiSync(*(_QWORD *)(v8 + 2544));
      DpiReleaseCoreSyncAccessSafe(a1, 1);
      v9 = 0;
      DpiPdoToggleDevicePowerEvents(*(_QWORD *)(v3 + 936), *(_DWORD *)(v3 + 284));
    }
  }
  return (unsigned int)v9;
}
