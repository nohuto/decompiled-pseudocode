/*
 * XREFs of sub_1C009DF90 @ 0x1C009DF90
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0062C10 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 *     DxgkCreateAllocation @ 0x1C00B5600 (DxgkCreateAllocation.c)
 * Callees:
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C009E150 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C009E730 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall sub_1C009DF90(OUTPUTDUPL_MGR *this, PERESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rcx
  struct DXGGLOBAL *v8; // rax
  __int64 v9; // rax
  DXGSESSIONMGR *v10; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  OUTPUTDUPL_MGR *v15; // rcx

  if ( *(_QWORD *)this )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 144)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 128)) )
    {
      v6 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v6 + 24) = 1341LL;
      WdLogEvent5_WdAssertion(v6);
    }
  }
  if ( !*((_DWORD *)a2 + 18) )
    ExIsResourceAcquiredExclusiveLite(a2[10]);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, (struct DXGDEVICE *)a2);
  v8 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v9 = WdLogNewEntry5_WdAssertion(v7);
    *(_QWORD *)(v9 + 24) = 1016LL;
    WdLogEvent5_WdAssertion(v9);
    v8 = DXGGLOBAL::m_pGlobal;
  }
  v10 = (DXGSESSIONMGR *)*((_QWORD *)v8 + 88);
  if ( !v10
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v10, CurrentProcessSessionId)) == 0LL) )
  {
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 24) = 3502LL;
    goto LABEL_16;
  }
  v13 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v13 )
  {
    v14 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v14 + 24) = 3509LL;
LABEL_16:
    WdLogEvent5_WdError(v14);
    return 0LL;
  }
  v15 = *(OUTPUTDUPL_MGR **)(v13 + 40);
  if ( v15 )
  {
    OUTPUTDUPL_MGR::ProcessPendingDestroy(v15, (struct DXGDEVICE *)a2);
    return 0LL;
  }
  return 0LL;
}
