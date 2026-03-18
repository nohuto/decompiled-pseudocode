/*
 * XREFs of DpiPdoSetDevicePower @ 0x1C00BC0D8
 * Callers:
 *     DpiPdoDispatchPower @ 0x1C000C890 (DpiPdoDispatchPower.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00613E0 (DpiGdoDispatchInternalIoctl.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00BA460 (DpiPdoDispatchInternalIoctl.c)
 * Callees:
 *     DpiPdoToggleDevicePowerEvents @ 0x1C000C9E0 (DpiPdoToggleDevicePowerEvents.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 *     DxgkAcquireAdapterDdiSync @ 0x1C00BBA54 (DxgkAcquireAdapterDdiSync.c)
 *     DxgkReleaseAdapterDdiSync @ 0x1C00BBBBC (DxgkReleaseAdapterDdiSync.c)
 *     DpiDxgkDdiSetPowerState @ 0x1C00BC528 (DpiDxgkDdiSetPowerState.c)
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
  if ( *(_DWORD *)(v3 + 248) == a2 )
  {
    return 0;
  }
  else
  {
    *(_DWORD *)(v3 + 248) = a2;
    v9 = DpiAcquireCoreSyncAccessSafe(a1, 1);
    if ( v9 >= 0 )
    {
      DxgkAcquireAdapterDdiSync(*(_QWORD *)(v8 + 2504), 1);
      DpiDxgkDdiSetPowerState(v7, *(_QWORD *)(v3 + 48), *(_DWORD *)(v3 + 472), a2, a3);
      DxgkReleaseAdapterDdiSync(*(DXGADAPTER **)(v8 + 2504));
      DpiReleaseCoreSyncAccessSafe(a1, 1);
      v9 = 0;
      DpiPdoToggleDevicePowerEvents(*(_QWORD *)(v3 + 904), *(_DWORD *)(v3 + 248));
    }
  }
  return (unsigned int)v9;
}
