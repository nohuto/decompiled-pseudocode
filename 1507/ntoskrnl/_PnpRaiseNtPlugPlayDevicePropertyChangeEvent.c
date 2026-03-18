/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404DF4DC
 * Callers:
 *     PipSetDevNodeState @ 0x1400CFB9C (PipSetDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PipRestoreDevNodeState @ 0x14011C394 (PipRestoreDevNodeState.c)
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PipClearDevNodeUserFlags @ 0x1404615D0 (PipClearDevNodeUserFlags.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1404E09B8 (PipEnumerateCompleted.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     PipSetDevNodeFlags @ 0x1404E3454 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1404E3CDC (PipClearDevNodeFlags.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140536068 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x140538A88 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x140538C94 (PipClearDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x140581810 (PipSetDevNodeUserFlags.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x1405B3B40 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopIncDisableableDepends @ 0x1405B8950 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x1405C2A74 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x14067C0E0 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404DF548 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x1404E07E8 (_CmMapPropertyKeyToRegProp.c)
 *     _CmRaisePropertyChangeEvent @ 0x1405B2598 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, int a2, int a3)
{
  int v3; // edi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_14029A010[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return CmRaisePropertyChangeEvent(v3, a2, 1, 0, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
