/*
 * XREFs of PipClearDevNodeProblem @ 0x1404844A0
 * Callers:
 *     PnpRemoveLockedDeviceNode @ 0x140085A68 (PnpRemoveLockedDeviceNode.c)
 *     PnpProcessAssignResourcesWorker @ 0x1403F10F4 (PnpProcessAssignResourcesWorker.c)
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     PiEventRestartRemovalRelations @ 0x140580AB0 (PiEventRestartRemovalRelations.c)
 *     PipAttemptDependentStart @ 0x14062AF7C (PipAttemptDependentStart.c)
 *     PnpDisableDevice @ 0x14062D7F4 (PnpDisableDevice.c)
 *     PiDevCfgProcessDevice @ 0x14063B1DC (PiDevCfgProcessDevice.c)
 *     PiProfileUpdateDeviceTreeCallback @ 0x1406420C0 (PiProfileUpdateDeviceTreeCallback.c)
 *     PiProcessClearDeviceProblem @ 0x140649820 (PiProcessClearDeviceProblem.c)
 *     PiProcessResourceRequirementsChanged @ 0x14064999C (PiProcessResourceRequirementsChanged.c)
 *     PiEventQueryRemoveNoFdo @ 0x14064D234 (PiEventQueryRemoveNoFdo.c)
 * Callees:
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     SeAuditingWithTokenForSubcategory @ 0x14045F3F4 (SeAuditingWithTokenForSubcategory.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804 (_PnpRaiseNtPlugPlayDevicePropertyChangeEvent.c)
 *     PnpTraceClearDevNodeProblem @ 0x140648CA8 (PnpTraceClearDevNodeProblem.c)
 *     PiAuditDeviceEnableDisableAction @ 0x14064C798 (PiAuditDeviceEnableDisableAction.c)
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
