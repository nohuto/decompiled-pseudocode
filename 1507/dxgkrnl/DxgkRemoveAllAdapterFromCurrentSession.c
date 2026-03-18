/*
 * XREFs of DxgkRemoveAllAdapterFromCurrentSession @ 0x1C00BDE40
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXXZ @ 0x1C0084D7C (-Destroy@DXGPROCESS@@QEAAXXZ.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000F0B8 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C008F2D4 (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C00DA62C (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

void __fastcall DxgkRemoveAllAdapterFromCurrentSession(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct DXGSESSIONDATA *SessionData; // rdi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD **v18; // rdi
  _QWORD *v19; // rbx
  __int64 v20; // rax
  __int64 v21; // rax
  SESSION_ADAPTER *v22; // rsi
  SESSION_ADAPTER **v23; // rdx
  SESSION_ADAPTER **v24; // rcx

  Global = DXGGLOBAL::GetGlobal(a1, a2, a3, a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v5, v6, v7);
  if ( !SessionData )
  {
    v20 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
    *(_QWORD *)(v20 + 24) = 448LL;
    WdLogEvent5_WdAssertion(v20);
  }
  v13 = *((_QWORD *)SessionData + 2321);
  if ( v13 != PsGetCurrentProcess(v9) )
  {
    v21 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
    *(_QWORD *)(v21 + 24) = 449LL;
    WdLogEvent5_WdAssertion(v21);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionData);
  v18 = (_QWORD **)((char *)SessionData + 18536);
  v19 = *v18;
  while ( v19 != v18 )
  {
    v22 = (SESSION_ADAPTER *)(v19 - 4);
    v19 = (_QWORD *)*v19;
    SESSION_ADAPTER::Cleanup(v22);
    v23 = (SESSION_ADAPTER **)*((_QWORD *)v22 + 4);
    v24 = (SESSION_ADAPTER **)*((_QWORD *)v22 + 5);
    if ( v23[1] != (SESSION_ADAPTER *)((char *)v22 + 32) || *v24 != (SESSION_ADAPTER *)((char *)v22 + 32) )
      __fastfail(3u);
    *v24 = (SESSION_ADAPTER *)v23;
    v23[1] = (SESSION_ADAPTER *)v24;
    if ( v22 )
      SESSION_ADAPTER::`scalar deleting destructor'(v22);
  }
}
