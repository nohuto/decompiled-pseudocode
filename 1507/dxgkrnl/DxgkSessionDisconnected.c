/*
 * XREFs of DxgkSessionDisconnected @ 0x1C00BE3C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00BE408 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00BE440 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0154C9C (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSessionDisconnected(char a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v7; // rbx
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+48h] [rbp+10h] BYREF

  DxgkIncreaseSessionAdapterUniqueness();
  if ( a1 )
  {
    v9 = -300000000LL;
    LOBYTE(v3) = 1;
    DxgkMiracastStopAllMiracastSessions(v3, &v9, 129LL);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(v3, v2, v4, v5);
    v7 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, *((struct DXGFASTMUTEX *const *)RemoteOutputDuplMgr + 3));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
      *((_DWORD *)v7 + 12) = 0;
      if ( v8[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v7);
    }
  }
}
