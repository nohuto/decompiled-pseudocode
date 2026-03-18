/*
 * XREFs of ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C015BF10
 * Callers:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C009E5BC (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C009E150 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0156584 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0156924 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C01591FC (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?TriggerLowBoxOutputDuplicationWNF@OUTPUTDUPL_CONTEXT@@QEAAJH@Z @ 0x1C015D6FC (-TriggerLowBoxOutputDuplicationWNF@OUTPUTDUPL_CONTEXT@@QEAAJH@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(struct _EPROCESS **this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  DXGSESSIONMGR *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v8; // r8
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v10; // rcx
  __int64 v11; // rax
  struct DXGFASTMUTEX *const *v12; // rcx
  __int64 v13; // rsi
  __int64 v14; // rcx

  if ( *((_DWORD *)this + 72) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v2 + 24) = 2375LL;
    WdLogEvent5_WdAssertion(v2);
  }
  v4 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this) + 88);
  if ( !v4 )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v5 + 24) = 2381LL;
LABEL_20:
    WdLogEvent5_WdAssertion(v5);
    return;
  }
  if ( !*((_DWORD *)this + 76) )
  {
    v6 = WdLogNewEntry5_WdAssertion(v3);
    *(_QWORD *)(v6 + 24) = 2386LL;
    WdLogEvent5_WdAssertion(v6);
  }
  ProcessSessionId = PsGetProcessSessionId(this[3]);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v4, ProcessSessionId, v8);
  if ( SessionDataForSpecifiedSession )
  {
    v12 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
    if ( v12 )
    {
      OUTPUTDUPL_SESSION_MGR::Release(v12, this[3]);
      goto LABEL_13;
    }
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    *(_QWORD *)(v11 + 24) = 2397LL;
  }
  else
  {
    v11 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v11 + 24) = 2390LL;
  }
  WdLogEvent5_WdAssertion(v11);
LABEL_13:
  *((_DWORD *)this + 76) = 0;
  if ( !*((_DWORD *)this + 72) )
  {
    v13 = 0LL;
    for ( *((_DWORD *)this + 72) = 1; (unsigned int)v13 < *((_DWORD *)this + 10); v13 = (unsigned int)(v13 + 1) )
    {
      DXGDXGIKEYEDMUTEX::CloseConsumerResources((struct _KPROCESS **)this[v13 + 6]);
      DXGDXGIKEYEDMUTEX::Abandon(this[v13 + 6]);
    }
    if ( *((_DWORD *)this + 81)
      && !*((_DWORD *)this + 82)
      && (int)OUTPUTDUPL_CONTEXT::TriggerLowBoxOutputDuplicationWNF((OUTPUTDUPL_CONTEXT *)this, 0) < 0 )
    {
      v5 = WdLogNewEntry5_WdAssertion(v14);
      *(_QWORD *)(v5 + 24) = 2424LL;
      goto LABEL_20;
    }
  }
}
