/*
 * XREFs of PipClearDevNodeProblem @ 0x1404C5E0C
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResourcesWorker @ 0x1403F2230 (PnpProcessAssignResourcesWorker.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     PiEventRestartRemovalRelations @ 0x140580604 (PiEventRestartRemovalRelations.c)
 *     PipAttemptDependentStart @ 0x14062AEC8 (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x14062D740 (PnpDisableDevice.c)
 *     PiDevCfgProcessDevice @ 0x14063B128 (PiDevCfgProcessDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x140641FDC (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessClearDeviceProblem @ 0x14064973C (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x1406498B8 (PiProcessResourceRequirementsChanged.c)
 *     PiEventQueryRemoveNoFdo @ 0x14064D150 (PiEventQueryRemoveNoFdo.c)
 * Callees:
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 *     SeAuditingWithTokenForSubcategory @ 0x140460524 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpTraceClearDevNodeProblem @ 0x140648BC4 (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14064C6B4 (PiAuditDeviceEnableDisableAction.c)
 */

char __fastcall PipClearDevNodeProblem(__int64 a1)
{
  _UNKNOWN **v1; // rax
  unsigned int v3; // edi
  unsigned int v4; // ebp
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rcx
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF
  PVOID P; // [rsp+30h] [rbp+8h] BYREF

  v1 = &retaddr;
  P = 0LL;
  v3 = *(_DWORD *)(a1 + 404);
  v4 = *(_DWORD *)(a1 + 408);
  if ( (*(_DWORD *)(a1 + 396) & 0x2000) != 0 || v3 )
  {
    PiPnpRtlBeginOperation(&P);
    LOBYTE(v1) = PipClearDevNodeFlags(a1, 0x2000);
    v6 = *(_QWORD *)(a1 + 48);
    *(_DWORD *)(a1 + 404) = 0;
    *(_DWORD *)(a1 + 408) = 0;
    if ( v6 )
    {
      PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v5, v6, 12LL);
      if ( *(_DWORD *)(a1 + 408) != v4 )
        PnpRaiseNtPlugPlayDevicePropertyChangeEvent(v7, *(_QWORD *)(a1 + 48), 13LL);
      LOBYTE(v1) = PnpTraceClearDevNodeProblem(a1 + 40, a1 + 56, v3, v4);
      if ( v3 == 22 )
      {
        LOBYTE(v1) = SeAuditingWithTokenForSubcategory(138, 0LL);
        if ( (_BYTE)v1 )
          LOBYTE(v1) = PiAuditDeviceEnableDisableAction(a1 + 40, 22LL, *(unsigned int *)(a1 + 404));
      }
    }
    if ( P )
      LOBYTE(v1) = PiPnpRtlEndOperation(P);
  }
  return (char)v1;
}
