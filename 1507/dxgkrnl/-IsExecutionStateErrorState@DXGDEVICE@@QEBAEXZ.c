/*
 * XREFs of ?IsExecutionStateErrorState@DXGDEVICE@@QEBAEXZ @ 0x1C0079BDC
 * Callers:
 *     ?FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z @ 0x1C0065374 (-FinalizeTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@K@Z.c)
 *     ?ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z @ 0x1C0065524 (-ApplyTopologyOnAdapter@CCD_TOPOLOGY@@AEAAJPEAVDXGPROCESS@@IK@Z.c)
 * Callees:
 *     ?GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z @ 0x1C0079C14 (-GetDeviceExecutionState@DXGDEVICE@@QEBAJPEAW4_D3DKMT_DEVICEEXECUTION_STATE@@@Z.c)
 */

bool __fastcall DXGDEVICE::IsExecutionStateErrorState(DXGDEVICE *this)
{
  int DeviceExecutionState; // eax
  __int64 v3; // rcx
  char v4; // dl
  __int64 v6; // rax
  _D3DKMT_DEVICEEXECUTION_STATE v7; // [rsp+38h] [rbp+10h] BYREF

  DeviceExecutionState = DXGDEVICE::GetDeviceExecutionState(this, &v7);
  v4 = 0;
  if ( DeviceExecutionState < 0 )
  {
    v6 = WdLogNewEntry5_WdError(v3);
    *(_QWORD *)(v6 + 24) = this;
    WdLogEvent5_WdError(v6);
    return 0;
  }
  else
  {
    if ( v7 != D3DKMT_DEVICEEXECUTION_ACTIVE )
      return v7 != D3DKMT_DEVICEEXECUTION_STOPPED;
    return v4;
  }
}
