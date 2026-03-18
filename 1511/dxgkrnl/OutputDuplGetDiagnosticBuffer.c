/*
 * XREFs of OutputDuplGetDiagnosticBuffer @ 0x1C015A5F0
 * Callers:
 *     DxgkEscape @ 0x1C007AB10 (DxgkEscape.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00208C8 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C009FD44 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C00BBF70 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z @ 0x1C0157634 (-GetDiagnosticBuffer@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_DIAGNOSTICS@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDiagnosticBuffer(struct DXGADAPTER *a1, struct _D3DKMT_OUTPUTDUPL_DIAGNOSTICS *a2)
{
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER **v5; // rax
  int OutputDuplManager; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int DiagnosticBuffer; // edi
  DXGDIAGNOSTICSWITHMUTEX **RemoteOutputDuplMgr; // rax
  DXGADAPTER *v14; // [rsp+50h] [rbp+8h] BYREF
  DXGADAPTER *v15; // [rsp+60h] [rbp+18h] BYREF
  OUTPUTDUPL_MGR *v16; // [rsp+68h] [rbp+20h] BYREF

  v15 = 0LL;
  v14 = 0LL;
  if ( a1 )
  {
    v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v15);
    v5 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v14);
    OutputDuplManager = FindOutputDuplManager(a1, 0, v5, v4, &v16);
    DiagnosticBuffer = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = OutputDuplManager;
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = (DXGDIAGNOSTICSWITHMUTEX **)v16;
  }
  else
  {
    RemoteOutputDuplMgr = (DXGDIAGNOSTICSWITHMUTEX **)FindRemoteOutputDuplMgr(0LL);
  }
  if ( RemoteOutputDuplMgr )
  {
    DiagnosticBuffer = OUTPUTDUPL_MGR::GetDiagnosticBuffer(RemoteOutputDuplMgr, a2);
  }
  else
  {
    DiagnosticBuffer = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = 2711LL;
  }
LABEL_9:
  if ( v14 )
    DXGADAPTER::ReleaseReference(v14);
  v14 = 0LL;
  if ( v15 )
    DXGADAPTER::ReleaseReference(v15);
  return DiagnosticBuffer;
}
