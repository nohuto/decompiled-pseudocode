/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x1404E9804
 * Callers:
 *     PipSetDevNodeState @ 0x1400091A0 (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x140084EBC (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x140085A68 (PnpRemoveLockedDeviceNode.c)
 *     PipClearDevNodeUserFlags @ 0x1403F03B8 (PipClearDevNodeUserFlags.c)
 *     PipEnumerateCompleted @ 0x1403F1FB0 (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x1403F2264 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F22D8 (PipClearDevNodeFlags.c)
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     PipSetDevNodeProblem @ 0x140484270 (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404844A0 (PipClearDevNodeProblem.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140485654 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PipSetDevNodeUserFlags @ 0x140545DD0 (PipSetDevNodeUserFlags.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140571174 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopIncDisableableDepends @ 0x140576B10 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x140581AC0 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x14062B5D0 (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1404E9784 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x1404E9870 (_CmMapPropertyKeyToRegProp.c)
 *     _CmRaisePropertyChangeEvent @ 0x140571BB8 (_CmRaisePropertyChangeEvent.c)
 */

__int64 __fastcall PnpRaiseNtPlugPlayDevicePropertyChangeEvent(__int64 a1, __int64 a2, int a3)
{
  __int64 v3; // rdi
  __int64 result; // rax
  __int64 v6; // rsi
  int v7; // eax

  v3 = *(_QWORD *)&PiPnpRtlCtx;
  result = (unsigned int)(a3 - 1);
  if ( (unsigned int)result <= 0x1D )
  {
    v6 = qword_14025C1F0[a3];
    v7 = CmMapPropertyKeyToRegProp(a1, v6);
    if ( v7 )
      return CmRaisePropertyChangeEvent(v3, a2, 1, 0, v7);
    else
      return PnpObjectRaisePropertyChangeEvent(v3, a2, 1LL, 0LL, 0LL, v6);
  }
  return result;
}
