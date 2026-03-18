/*
 * XREFs of _lambda_ff7a16898af2bbd6d44a19d2984ad8b1_::_lambda_invoker_cdecl_ @ 0x1C0076D10
 * Callers:
 *     ?DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0074C00 (-DxgkDestroyAllocationHelper@@YAJPEAVDXGPROCESS@@IIPEBIIU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAU.c)
 * Callees:
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C0077B20 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z @ 0x1C00780F0 (-ProcessPendingDestroy@OUTPUTDUPL_MGR@@QEAAXPEAVDXGDEVICE@@H@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall lambda_ff7a16898af2bbd6d44a19d2984ad8b1_::_lambda_invoker_cdecl_(
        OUTPUTDUPL_MGR *this,
        PERESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  DXGSESSIONMGR *v7; // rdi
  unsigned int CurrentProcessSessionId; // eax
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rax
  OUTPUTDUPL_MGR *v11; // rcx
  __int64 v13; // rax
  __int64 v14; // rax

  if ( *(_QWORD *)this )
  {
    v4 = *(_QWORD *)(*(_QWORD *)this + 16LL);
    if ( KeGetCurrentThread() != *(struct _KTHREAD **)(v4 + 160)
      && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(v4 + 144)) )
    {
      v13 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v13 + 24) = 1385LL;
      WdLogEvent5_WdAssertion(v13);
    }
  }
  if ( !*((_DWORD *)a2 + 18) )
    ExIsResourceAcquiredExclusiveLite(a2[10]);
  OUTPUTDUPL_MGR::ProcessPendingDestroy(this, (struct DXGDEVICE *)a2, 0);
  v7 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 69);
  if ( !v7
    || (CurrentProcessSessionId = PsGetCurrentProcessSessionId(),
        (SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v7, CurrentProcessSessionId)) == 0LL) )
  {
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = 3553LL;
    goto LABEL_15;
  }
  v10 = *((_QWORD *)SessionDataForSpecifiedSession + 1);
  if ( !v10 )
  {
    v14 = WdLogNewEntry5_WdError(v6);
    *(_QWORD *)(v14 + 24) = 3560LL;
LABEL_15:
    WdLogEvent5_WdError(v14);
    return 0LL;
  }
  v11 = *(OUTPUTDUPL_MGR **)(v10 + 40);
  if ( v11 )
    OUTPUTDUPL_MGR::ProcessPendingDestroy(v11, (struct DXGDEVICE *)a2, 0);
  return 0LL;
}
