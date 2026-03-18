/*
 * XREFs of PipSetDevNodeProblem @ 0x140538A88
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResources @ 0x14045E340 (PnpProcessAssignResources.c)
 *     PnpQueryID @ 0x1404D6380 (PnpQueryID.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PipProcessEnumeratedChildDevice @ 0x1404E0BF8 (PipProcessEnumeratedChildDevice.c)
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1405392C8 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x14067E214 (PnpDisableDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x14068D60C (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessSetDeviceProblem @ 0x140693E04 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 * Callees:
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PnpTraceSetDevNodeProblem @ 0x140538B60 (PnpTraceSetDevNodeProblem.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, int a2, int a3)
{
  int v5; // ebp
  int v7; // edi
  __int64 v8; // rcx
  __int64 v9; // rdx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  P = 0LL;
  v5 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v5 != a2 || v7 != a3 )
  {
    PiPnpRtlBeginOperation((__int64 **)&P);
    PipSetDevNodeFlags(a1, 0x2000);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = a3;
    if ( v9 )
    {
      if ( a2 != v5 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, v9, 12);
      if ( *(_DWORD *)(a1 + 408) != v7 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 13);
      PnpTraceSetDevNodeProblem(a1 + 40, a1 + 56, *(_DWORD *)(a1 + 404), *(_DWORD *)(a1 + 408), v5, v7);
    }
    if ( P )
      PiPnpRtlEndOperation((char *)P);
  }
}
