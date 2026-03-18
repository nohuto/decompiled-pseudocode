/*
 * XREFs of _lambda_8b89794ce108b1133e9a3853d0f5c408_::_helper_func_cdecl_ @ 0x1C008D8B0
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C005C100 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z.c)
 * Callees:
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C008DAD0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z @ 0x1C008DE80 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@@Z.c)
 */

__int64 __fastcall lambda_8b89794ce108b1133e9a3853d0f5c408_::_helper_func_cdecl_(OUTPUTDUPL_MGR *this, PERESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGGLOBAL *v13; // rax
  DXGSESSIONMGR *v14; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rax
  OUTPUTDUPL_MGR *v18; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax

  if ( *(_QWORD *)this )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 144)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 128)) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v6, v5, v7, v8);
      *(_QWORD *)(v20 + 24) = 1341LL;
      WdLogEvent5_WdAssertion(v20);
    }
  }
  if ( !*((_DWORD *)a2 + 18) )
    ExIsResourceAcquiredExclusiveLite(a2[10]);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, (struct DXGDEVICE *)a2);
  v13 = DXGGLOBAL::m_pGlobal;
  if ( !DXGGLOBAL::m_pGlobal )
  {
    v21 = WdLogNewEntry5_WdAssertion(v10, v9, v11, v12);
    *(_QWORD *)(v21 + 24) = 1038LL;
    WdLogEvent5_WdAssertion(v21);
    v13 = DXGGLOBAL::m_pGlobal;
  }
  v14 = (DXGSESSIONMGR *)*((_QWORD *)v13 + 70);
  if ( !v14
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(v10, v9, v11, v12),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v14, CurrentProcessSessionId)) == 0LL) )
  {
    v22 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v22 + 24) = 3525LL;
    goto LABEL_17;
  }
  v17 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v17 )
  {
    v22 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v22 + 24) = 3532LL;
LABEL_17:
    WdLogEvent5_WdError(v22);
    return 0LL;
  }
  v18 = *(OUTPUTDUPL_MGR **)(v17 + 40);
  if ( v18 )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(v18, (struct DXGDEVICE *)a2);
  return 0LL;
}
