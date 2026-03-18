/*
 * XREFs of DxgkSessionDisconnected @ 0x1C00C6100
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0009830 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00098D0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     DxgkMiracastStopAllMiracastSessions @ 0x1C00C6070 (DxgkMiracastStopAllMiracastSessions.c)
 *     DxgkIncreaseSessionAdapterUniqueness @ 0x1C00C617C (DxgkIncreaseSessionAdapterUniqueness.c)
 *     ?ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ @ 0x1C017DCAC (-ProcessRemoteSessionDisconnect@OUTPUTDUPL_MGR@@QEAAXXZ.c)
 */

void __fastcall DxgkSessionDisconnected(char a1)
{
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v3; // rbx
  _BYTE v4[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+30h] [rbp-18h]
  union _LARGE_INTEGER v7; // [rsp+58h] [rbp+10h] BYREF

  DxgkIncreaseSessionAdapterUniqueness();
  if ( a1 )
  {
    v7.QuadPart = -300000000LL;
    DxgkMiracastStopAllMiracastSessions(1, &v7, 0x81u);
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
    v3 = RemoteOutputDuplMgr;
    if ( RemoteOutputDuplMgr )
    {
      DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v4, *((struct _KTHREAD ***)RemoteOutputDuplMgr + 3));
      DXGPUSHLOCK::AcquireExclusive(v5);
      *((_DWORD *)v3 + 12) = 0;
      v6 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v4);
      OUTPUTDUPL_MGR::ProcessRemoteSessionDisconnect(v3);
    }
  }
}
