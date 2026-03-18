/*
 * XREFs of PnpDiagRundownRegisterCallback @ 0x14062CDC0
 * Callers:
 *     <none>
 * Callees:
 *     EtwEventEnabled @ 0x1400D54D0 (EtwEventEnabled.c)
 *     PpDevNodeUnlockTree @ 0x1403F49E0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x14051D928 (PipForDeviceNodeSubtree.c)
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
      v4 = PnpRundownEtwHandle;
    }
    if ( EtwEventEnabled(v4, &KMPnPRundownEvt_SleepStudy_ParentDevNode) )
    {
      PpDevNodeLockTree(0);
      PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PnpDiagRundownParentDevNodeForEachDevice, 0LL);
      PpDevNodeUnlockTree(0);
    }
  }
}
