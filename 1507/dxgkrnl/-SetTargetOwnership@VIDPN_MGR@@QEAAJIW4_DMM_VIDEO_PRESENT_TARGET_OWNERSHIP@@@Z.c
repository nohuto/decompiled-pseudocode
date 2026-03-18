/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00BCB0C
 * Callers:
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00BCBD4 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00BD1F0 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004F94 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     DxgkStatusChangeNotify @ 0x1C00ACF40 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rdx
  __int64 v7; // rcx
  _QWORD *v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbp
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rsi
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  int v31; // [rsp+20h] [rbp-18h] BYREF
  __int64 v32; // [rsp+28h] [rbp-10h]

  v3 = a3;
  v5 = a2;
  v8 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1);
  v11 = (unsigned int)v5;
  v8[3] = v5;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v23 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v10);
    WdLogEvent5_WdAssertion(v23);
  }
  v8[4] = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
  v8[5] = v3;
  WdLogEvent5_WdDmmEvent(v8);
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(a1 + 96) + 72LL));
  v12 = *(_QWORD *)(a1 + 96);
  TargetById = DMMVIDEOPRESENTTARGETSET::GetTargetById((DMMVIDEOPRESENTTARGETSET *)v12, v5);
  if ( TargetById )
  {
    if ( v12 )
      ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
    v32 = 0LL;
    *((_DWORD *)TargetById + 26) = v3;
    v31 = 1;
    if ( (int)DxgkStatusChangeNotify(&v31, v13, v15, v16) < 0 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v19, v18, v20, v21);
      WdLogEvent5_WdAssertion(v30);
    }
    return 0LL;
  }
  else
  {
    v26 = WdLogNewEntry5_WdError(v14);
    *(_QWORD *)(v26 + 24) = v11;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v29 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
      WdLogEvent5_WdAssertion(v29);
    }
    *(_QWORD *)(v26 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    WdLogEvent5_WdError(v26);
    if ( v12 )
      ReferenceCounted::Release((ReferenceCounted *)(v12 + 64));
    return 3223192325LL;
  }
}
