/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140459EF0
 * Callers:
 *     PipSetDevNodeState @ 0x140099720 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x1400DA400 (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x1400DA4F4 (PnpRemoveLockedDeviceNode.c)
 *     PipClearDevNodeFlags @ 0x1404574A4 (PipClearDevNodeFlags.c)
 *     PipEnumerateCompleted @ 0x140457A40 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x140457CF8 (PipSetDevNodeFlags.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14049FD44 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x1404A0BE4 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404A0DFC (PipClearDevNodeProblem.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PipClearDevNodeUserFlags @ 0x1404ECD04 (PipClearDevNodeUserFlags.c)
 *     PiProcessNewDeviceNode @ 0x1404ED460 (PiProcessNewDeviceNode.c)
 *     PipSetDevNodeUserFlags @ 0x14050AAD0 (PipSetDevNodeUserFlags.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x14053E97C (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopIncDisableableDepends @ 0x140542230 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x14054B5C8 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x1406014D0 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x140459F5C (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x14045AC74 (_CmMapPropertyKeyToRegProp.c)
 *     _CmRaisePropertyChangeEvent @ 0x14053AD60 (_CmRaisePropertyChangeEvent.c)
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
    v6 = qword_1402499E0[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return CmRaisePropertyChangeEvent(v3, a2, 1, 0, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1, 0, 0LL, v6);
  }
  return result;
}
