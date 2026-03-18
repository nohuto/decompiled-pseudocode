/*
 * XREFs of _PnpRaiseNtPlugPlayDevicePropertyChangeEvent @ 0x140506874
 * Callers:
 *     PipSetDevNodeState @ 0x14000962C (PipSetDevNodeState.c)
 *     PipRestoreDevNodeState @ 0x14009E68C (PipRestoreDevNodeState.c)
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PipClearDevNodeUserFlags @ 0x1403F14F4 (PipClearDevNodeUserFlags.c)
 *     PipEnumerateCompleted @ 0x1403F30EC (PipEnumerateCompleted.c)
 *     PipSetDevNodeFlags @ 0x1403F33A0 (PipSetDevNodeFlags.c)
 *     PipClearDevNodeFlags @ 0x1403F3414 (PipClearDevNodeFlags.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x1404C5220 (PnpUnlinkDeviceRemovalRelations.c)
 *     PipSetDevNodeProblem @ 0x1404C5BDC (PipSetDevNodeProblem.c)
 *     PipClearDevNodeProblem @ 0x1404C5E0C (PipClearDevNodeProblem.c)
 *     PipSetDevNodeUserFlags @ 0x140545890 (PipSetDevNodeUserFlags.c)
 *     PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent @ 0x140570C34 (PiPnpRtlPdoRaiseNtPlugPlayPropertyChangeEvent.c)
 *     IopIncDisableableDepends @ 0x1405765D0 (IopIncDisableableDepends.c)
 *     IopDecDisableableDepends @ 0x140581614 (IopDecDisableableDepends.c)
 *     PipNotifyDependenciesChanged @ 0x14062B51C (PipNotifyDependenciesChanged.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 * Callees:
 *     _PnpObjectRaisePropertyChangeEvent @ 0x1405067F4 (_PnpObjectRaisePropertyChangeEvent.c)
 *     _CmMapPropertyKeyToRegProp @ 0x1405068E0 (_CmMapPropertyKeyToRegProp.c)
 *     _CmRaisePropertyChangeEvent @ 0x140571678 (_CmRaisePropertyChangeEvent.c)
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
