/*
 * XREFs of DxgkSessionDisconnected @ 0x1C00B8EF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00B8F34 (DxgkIncreaseSessionAdapterUniqueness.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00B8F70 (DxgkMiracastStopAllMiracastSessions.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C0158F80 (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSessionDisconnected(char a1)
{
  __int64 v2; // rcx
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v4; // rbx
  _BYTE v5[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  DxgkIncreaseSessionAdapterUniqueness();
  if ( a1 )
  {
    v6 = -300000000LL;
    LOBYTE(v2) = 1;
    DxgkMiracastStopAllMiracastSessions(v2, &v6, 129LL);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v4 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v5, *((struct DXGFASTMUTEX *const *)RemoteOutputDuplMgr + 3));
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v5);
      *((_DWORD *)v4 + 12) = 0;
      if ( v5[8] )
        DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v5);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v4);
    }
  }
}
