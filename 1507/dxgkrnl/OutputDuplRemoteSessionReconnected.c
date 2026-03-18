/*
 * XREFs of OutputDuplRemoteSessionReconnected @ 0x1C0156750
 * Callers:
 *     DxgkSessionReconnected @ 0x1C00BE390 (DxgkSessionReconnected.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z @ 0x1C0154CE0 (-ReconfigureNumSources@OUTPUTDUPL_MGR@@QEAAJI@Z.c)
 */

void __fastcall OutputDuplRemoteSessionReconnected(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  struct OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  OUTPUTDUPL_MGR *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  int v14; // edi
  __int64 v15; // rax
  _BYTE v16[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = a1;
  RemoteOutputDuplMgr = FindRemoteOutputDuplMgr(a1, a2, a3, a4);
  v6 = RemoteOutputDuplMgr;
  if ( RemoteOutputDuplMgr )
  {
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v16, *((struct DXGFASTMUTEX *const *)RemoteOutputDuplMgr + 3));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v16);
    v9 = OUTPUTDUPL_MGR::ReconfigureNumSources(v6, v4, v7, v8);
    v14 = v9;
    if ( v9 != -1073741801 )
    {
      if ( v9 >= 0 )
      {
LABEL_6:
        *((_DWORD *)v6 + 12) = 1;
LABEL_7:
        if ( v16[8] )
          DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v16);
        return;
      }
      v15 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
      *(_QWORD *)(v15 + 24) = 3583LL;
      WdLogEvent5_WdAssertion(v15);
    }
    if ( v14 < 0 )
      goto LABEL_7;
    goto LABEL_6;
  }
}
