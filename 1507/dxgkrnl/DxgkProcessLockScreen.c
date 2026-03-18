/*
 * XREFs of DxgkProcessLockScreen @ 0x1C01561D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0154C40 (-ProcessLockScreenActive@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkProcessLockScreen(__int64 a1)
{
  struct DXGPROCESS *Current; // rax
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  struct DXGGLOBAL *Global; // rax
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax

  Current = DXGPROCESS::GetCurrent(a1);
  if ( Current )
  {
    if ( (*(unsigned int (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL) )
    {
      RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v5, v4, v6, v7);
      if ( RemoteOutputDuplMgr )
        OUTPUTDUPL_MGR::ProcessLockScreenActive(RemoteOutputDuplMgr);
    }
    else
    {
      Global = DXGGLOBAL::GetGlobal(v5, v4, v6, v7);
      DXGGLOBAL::IterateAdaptersWithCallback(
        (__int64)Global,
        (__int64 (__fastcall *)(_QWORD *, __int64))ProcessLockScreenAdapterCallback,
        0LL,
        1LL);
    }
  }
  else
  {
    v3 = WdLogNewEntry5_WdError(v2);
    *(_QWORD *)(v3 + 24) = 3612LL;
    WdLogEvent5_WdError(v3);
  }
}
