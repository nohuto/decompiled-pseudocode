/*
 * XREFs of PnpDiagRundownRegisterCallback @ 0x140602A7C
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140495BA8 (PipForDeviceNodeSubtree.c)
 */

void __fastcall PnpDiagRundownRegisterCallback(
        LPCGUID SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword)
{
  REGHANDLE v4; // rbx

  if ( ControlCode == 2 )
  {
    v4 = PnpRundownEtwHandle;
    if ( EtwEventEnabled(PnpRundownEtwHandle, &KMPnPRundownEvt_SleepStudy_ConnectionResource) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PnpDiagRundownForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
      v4 = PnpRundownEtwHandle;
    }
    if ( EtwEventEnabled(v4, &KMPnPRundownEvt_SleepStudy_ParentPdo) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PnpDiagRundownParentPdoForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
  }
}
