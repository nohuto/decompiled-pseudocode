/*
 * XREFs of OutputDuplRemoteSessionReconnected @ 0x1C015AA64
 * Callers:
 *     DxgkSessionReconnected @ 0x1C00CCCF0 (DxgkSessionReconnected.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0158FC4 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 */

void __fastcall OutputDuplRemoteSessionReconnected(__int64 a1)
{
  unsigned int v1; // edi
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v3; // rbx
  int v4; // eax
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // rax
  _BYTE v8[24]; // [rsp+20h] [rbp-18h] BYREF

  v1 = a1;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(a1);
  v3 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v8, *((struct DXGFASTMUTEX *const *)RemoteOutputDuplMgr + 3));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v8);
    v4 = OUTPUTDUPL_MGR::ReconfigureNumSources(v3, v1);
    v6 = v4;
    if ( v4 != -1073741801 )
    {
      if ( v4 >= 0 )
      {
LABEL_6:
        *((_DWORD *)v3 + 12) = 1;
LABEL_7:
        if ( v8[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v8);
        return;
      }
      v7 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v7 + 24) = 3560LL;
      WdLogEvent5_WdAssertion(v7);
    }
    if ( v6 < 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
}
