/*
 * XREFs of ?MarkForPendingDestroy@OUTPUTDUPL_CONTEXT@@QEAAXXZ @ 0x1C0157BF8
 * Callers:
 *     ?MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_DESTROY_REASON@@@Z @ 0x1C008DD08 (-MoveContextToPendingDestroyList@OUTPUTDUPL_MGR@@QEAAXIPEAVDXGDEVICE@@HHW4_DXGK_DIAG_OUTPUTDUPL_.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z @ 0x1C008DAD0 (-GetSessionDataForSpecifiedSession@DXGSESSIONMGR@@QEAAPEAVDXGSESSIONDATA@@K@Z.c)
 *     ?Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01522E4 (-Abandon@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C0152684 (-CloseConsumerResources@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 *     ?Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0154F18 (-Release@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     ?TriggerLowBoxOutputDuplicationWNF@OUTPUTDUPL_CONTEXT@@QEAAJH@Z @ 0x1C01593E4 (-TriggerLowBoxOutputDuplicationWNF@OUTPUTDUPL_CONTEXT@@QEAAJH@Z.c)
 */

void __fastcall OUTPUTDUPL_CONTEXT::MarkForPendingDestroy(struct _EPROCESS **this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  DXGSESSIONMGR *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int ProcessSessionId; // eax
  __int64 v14; // r8
  __int64 v15; // r9
  struct DXGSESSIONDATA *SessionDataForSpecifiedSession; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  struct DXGFASTMUTEX *const *v22; // rcx
  __int64 v23; // rsi
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9

  if ( *((_DWORD *)this + 72) )
  {
    v5 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v5 + 24) = 2375LL;
    WdLogEvent5_WdAssertion(v5);
  }
  v8 = (DXGSESSIONMGR *)*((_QWORD *)DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4) + 70);
  if ( !v8 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v10);
    *(_QWORD *)(v11 + 24) = 2381LL;
LABEL_20:
    WdLogEvent5_WdAssertion(v11);
    return;
  }
  if ( !*((_DWORD *)this + 76) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v10);
    *(_QWORD *)(v12 + 24) = 2386LL;
    WdLogEvent5_WdAssertion(v12);
  }
  ProcessSessionId = PsGetProcessSessionId(this[3]);
  SessionDataForSpecifiedSession = DXGSESSIONMGR::GetSessionDataForSpecifiedSession(v8, ProcessSessionId, v14, v15);
  if ( SessionDataForSpecifiedSession )
  {
    v22 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionDataForSpecifiedSession + 1);
    if ( v22 )
    {
      OUTPUTDUPL_SESSION_MGR::Release(v22, this[3]);
      goto LABEL_13;
    }
    v21 = WdLogNewEntry5_WdAssertion(0LL, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = 2397LL;
  }
  else
  {
    v21 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
    *(_QWORD *)(v21 + 24) = 2390LL;
  }
  WdLogEvent5_WdAssertion(v21);
LABEL_13:
  *((_DWORD *)this + 76) = 0;
  if ( !*((_DWORD *)this + 72) )
  {
    v23 = 0LL;
    for ( *((_DWORD *)this + 72) = 1; (unsigned int)v23 < *((_DWORD *)this + 10); v23 = (unsigned int)(v23 + 1) )
    {
      DXGDXGIKEYEDMUTEX::CloseConsumerResources((struct _KPROCESS **)this[v23 + 6]);
      DXGDXGIKEYEDMUTEX::Abandon(this[v23 + 6], v24, v25, v26);
    }
    if ( *((_DWORD *)this + 81)
      && !*((_DWORD *)this + 82)
      && (int)OUTPUTDUPL_CONTEXT::TriggerLowBoxOutputDuplicationWNF((OUTPUTDUPL_CONTEXT *)this, 0) < 0 )
    {
      v11 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
      *(_QWORD *)(v11 + 24) = 2424LL;
      goto LABEL_20;
    }
  }
}
