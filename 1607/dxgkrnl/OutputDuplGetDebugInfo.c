/*
 * XREFs of OutputDuplGetDebugInfo @ 0x1C017F514
 * Callers:
 *     DxgkEscape @ 0x1C00B5410 (DxgkEscape.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ @ 0x1C00273E8 (--IDXGADAPTER_REFERENCE@@QEAAPEAPEAVDXGADAPTER@@XZ.c)
 *     ?FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ @ 0x1C0078654 (-FindRemoteOutputDuplMgr@@YAPEAVOUTPUTDUPL_MGR@@XZ.c)
 *     ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0078C30 (-FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@PEA_K12PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 *     ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C017C000 (-GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 */

__int64 __fastcall OutputDuplGetDebugInfo(struct DXGADAPTER *a1, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  struct DXGADAPTER **v4; // rbx
  struct DXGADAPTER **v5; // rax
  int OutputDuplManager; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int DebugInfo; // edi
  OUTPUTDUPL_MGR *RemoteOutputDuplMgr; // rax
  DXGADAPTER *v14; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-20h] BYREF
  DXGADAPTER *v16; // [rsp+50h] [rbp-18h] BYREF
  unsigned __int64 v17; // [rsp+58h] [rbp-10h] BYREF
  OUTPUTDUPL_MGR *v18; // [rsp+70h] [rbp+8h] BYREF

  v16 = 0LL;
  v14 = 0LL;
  if ( a1 )
  {
    v4 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v16);
    v5 = (struct DXGADAPTER **)DXGADAPTER_REFERENCE::operator&(&v14);
    OutputDuplManager = FindOutputDuplManager(a1, 0, v5, &v15, v4, &v17, &v18);
    DebugInfo = OutputDuplManager;
    if ( OutputDuplManager < 0 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = OutputDuplManager;
      goto LABEL_9;
    }
    RemoteOutputDuplMgr = v18;
  }
  else
  {
    RemoteOutputDuplMgr = FindRemoteOutputDuplMgr();
  }
  if ( RemoteOutputDuplMgr )
  {
    DebugInfo = OUTPUTDUPL_MGR::GetDebugInfo((UINT *)RemoteOutputDuplMgr, a2);
  }
  else
  {
    DebugInfo = -1073741275;
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7, v9, v10) + 24) = 2834LL;
  }
LABEL_9:
  if ( v14 )
    DXGADAPTER::ReleaseReference(v14);
  v14 = 0LL;
  if ( v16 )
    DXGADAPTER::ReleaseReference(v16);
  return DebugInfo;
}
