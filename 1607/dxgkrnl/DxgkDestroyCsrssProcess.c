/*
 * XREFs of DxgkDestroyCsrssProcess @ 0x1C00DBB18
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00A2328 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0001B90 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ @ 0x1C007BACC (-RemoveAllSourceViewFromSession@DXGSESSIONDATA@@QEAAXXZ.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C007C210 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

void __fastcall DxgkDestroyCsrssProcess(__int64 a1)
{
  DXGGLOBAL *Global; // rax
  __int64 v2; // rcx
  struct DXGSESSIONDATA *SessionData; // rdi
  __int64 v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  DXGADAPTER **v9; // rbp
  DXGADAPTER *v10; // rdx
  DXGADAPTER ***v11; // rcx

  Global = DXGGLOBAL::GetGlobal(a1);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v7 = WdLogNewEntry5_WdAssertion(v2);
    *(_QWORD *)(v7 + 24) = 447LL;
    WdLogEvent5_WdAssertion(v7);
  }
  v4 = *((_QWORD *)SessionData + 2323);
  if ( v4 != PsGetCurrentProcess(v2) )
  {
    v8 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v8 + 24) = 448LL;
    WdLogEvent5_WdAssertion(v8);
  }
  DXGSESSIONDATA::RemoveAllSourceViewFromSession(SessionData);
  v6 = (_QWORD *)*((_QWORD *)SessionData + 2317);
  while ( v6 != (_QWORD *)((char *)SessionData + 18536) )
  {
    v9 = (DXGADAPTER **)(v6 - 6);
    v6 = (_QWORD *)*v6;
    SESSION_ADAPTER::Cleanup(v9);
    v10 = v9[6];
    v11 = (DXGADAPTER ***)v9[7];
    if ( *((DXGADAPTER ***)v10 + 1) != v9 + 6 || *v11 != v9 + 6 )
      __fastfail(3u);
    *v11 = (DXGADAPTER **)v10;
    *((_QWORD *)v10 + 1) = v11;
    if ( v9 )
      SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v9);
  }
  *((_QWORD *)SessionData + 2324) = 0LL;
}
