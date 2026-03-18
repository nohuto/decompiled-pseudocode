/*
 * XREFs of OutputDuplGetDebugInfo @ 0x1C015624C
 * Callers:
 *     DxgkEscape @ 0x1C009FD70 (DxgkEscape.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00209D4 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C008D638 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C008EB3C (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01531E4 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDebugInfo(
        struct DXGADAPTER *a1,
        struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2,
        __int64 a3,
        __int64 a4)
{
  struct DXGADAPTER **v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  struct DXGADAPTER **v10; // rax
  int OutputDuplManager; // eax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int DebugInfo; // edi
  UINT *RemoteOutputDuplMgr; // rax
  DXGADAPTER *v19; // [rsp+50h] [rbp+8h] BYREF
  DXGADAPTER *v20; // [rsp+60h] [rbp+18h] BYREF
  OUTPUTDUPL_MGR *v21; // [rsp+68h] [rbp+20h] BYREF

  v20 = 0LL;
  v19 = 0LL;
  if ( a1 )
  {
    v6 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v20, (__int64)a2, a3, a4);
    v10 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v19, v7, v8, v9);
    OutputDuplManager = FindOutputDuplManager(a1, 0LL, v10, v6, &v21);
    DebugInfo = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = OutputDuplManager;
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = (UINT *)v21;
  }
  else
  {
    RemoteOutputDuplMgr = (UINT *)FindRemoteOutputDuplMgr(0LL, (__int64)a2, a3, a4);
  }
  if ( RemoteOutputDuplMgr )
  {
    DebugInfo = OUTPUTDUPL_MGR::GetDebugInfo(RemoteOutputDuplMgr, a2);
  }
  else
  {
    DebugInfo = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v13, v12, v14, v15) + 24) = 2772LL;
  }
LABEL_9:
  if ( v19 )
    DXGADAPTER::ReleaseReference(v19);
  v19 = 0LL;
  if ( v20 )
    DXGADAPTER::ReleaseReference(v20);
  return DebugInfo;
}
