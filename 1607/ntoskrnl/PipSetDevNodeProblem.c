/*
 * XREFs of PipSetDevNodeProblem @ 0x1404C5BDC
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResources @ 0x1403F2054 (PnpProcessAssignResources.c)
 *     PipProcessEnumeratedChildDevice @ 0x1403F32E8 (PipProcessEnumeratedChildDevice.c)
 *     PipProcessDevNodeTree @ 0x1403F41E0 (PipProcessDevNodeTree.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x140488E8C (PnpQueryID.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PnpSurpriseRemoveLockedDeviceNode @ 0x1404C3474 (PnpSurpriseRemoveLockedDeviceNode.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538A14 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 *     PnpDisableDevice @ 0x14062D740 (PnpDisableDevice.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140641FDC (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessSetDeviceProblem @ 0x1406499F8 (PiProcessSetDeviceProblem.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     PiEventQueryRemoveNoFdo @ 0x14064D150 (PiEventQueryRemoveNoFdo.c)
 * Callees:
 *     PipSetDevNodeFlags @ 0x1403F33A0 (PipSetDevNodeFlags.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140460524 (SeAuditingWithTokenForSubcategory.c)
 *     PnpTraceSetDevNodeProblem @ 0x1404C5CB4 (PnpTraceSetDevNodeProblem.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14064C6B4 (PiAuditDeviceEnableDisableAction.c)
 */

void __fastcall PipSetDevNodeProblem(__int64 a1, int a2, int a3)
{
  unsigned int v5; // edi
  int v7; // ebp
  __int64 v8; // rcx
  __int64 v9; // rdx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  P = 0LL;
  v5 = *(_DWORD *)(a1 + 404);
  v7 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) == 0 || v5 != a2 || v7 != a3 )
  {
    PiPnpRtlBeginOperation(&P);
    PipSetDevNodeFlags(a1, 0x2000);
    v9 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = a2;
    *(_DWORD *)(a1 + 408) = a3;
    if ( v9 )
    {
      if ( a2 != v5 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, v9, 12LL);
      if ( *(_DWORD *)(a1 + 408) != v7 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v8, *(_QWORD *)(a1 + 48), 13LL);
      PnpTraceSetDevNodeProblem(a1 + 40, a1 + 56, *(_DWORD *)(a1 + 404), *(_DWORD *)(a1 + 408), v5, v7);
      if ( *(_DWORD *)(a1 + 404) == 22 && SeAuditingWithTokenForSubcategory(138, 0LL) )
        PiAuditDeviceEnableDisableAction(a1 + 40, v5, *(unsigned int *)(a1 + 404));
    }
    if ( P )
      PiPnpRtlEndOperation(P);
  }
}
