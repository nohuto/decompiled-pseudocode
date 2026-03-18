/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00E216C
 * Callers:
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E2234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@PEAU_D.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00E287C (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0001970 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0004734 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C00728B0 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rcx
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v12; // rcx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  int v19; // [rsp+20h] [rbp-18h] BYREF
  __int64 v20; // [rsp+28h] [rbp-10h]

  v3 = a3;
  v5 = a2;
  v7 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1);
  v8 = (unsigned int)v5;
  v7[3] = v5;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v14 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v14);
  }
  v7[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v7[5] = v3;
  WdLogEvent5_WdDmmEvent(v7);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 96) + 72LL));
  v9 = *(_QWORD *)(a1 + 96);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v9, v5);
  if ( TargetById )
  {
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    v20 = 0LL;
    *((_DWORD *)TargetById + 26) = v3;
    v19 = 1;
    if ( (int)DxgkStatusChangeNotify(&v19) < 0 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v12);
      WdLogEvent5_WdAssertion(v18);
    }
    return 0LL;
  }
  else
  {
    v16 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v16 + 24) = v8;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v17 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v17);
    }
    *(_QWORD *)(v16 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    WdLogEvent5_WdError(v16);
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    return 3223192325LL;
  }
}
