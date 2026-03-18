/*
 * XREFs of DxgkProcessLockScreen @ 0x1C015A4B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0158D00 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void DxgkProcessLockScreen()
{
  struct DXGPROCESS *Current; // rax
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  struct DXGGLOBAL *Global; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax

  Current = DXGPROCESS::GetCurrent();
  if ( Current )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v3);
      if ( RemoteOutputDuplMgr )
        OUTPUTDUPL_MGR::ProcessLockScreenActive(RemoteOutputDuplMgr);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v3);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))ProcessLockScreenAdapterCallback,
        0LL,
        1);
    }
  }
  else
  {
    v2 = WdLogNewEntry5_WdError(v1);
    *(_QWORD *)(v2 + 24) = 3589LL;
    WdLogEvent5_WdError(v2);
  }
}
