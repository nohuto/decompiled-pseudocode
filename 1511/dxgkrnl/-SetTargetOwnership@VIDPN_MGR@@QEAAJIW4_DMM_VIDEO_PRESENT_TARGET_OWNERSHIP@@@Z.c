/*
 * XREFs of ?SetTargetOwnership@VIDPN_MGR@@QEAAJIW4_DMM_VIDEO_PRESENT_TARGET_OWNERSHIP@@@Z @ 0x1C00CB16C
 * Callers:
 *     ?RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CB234 (-RestorePresentPathToActiveVidPn@VIDPN_MGR@@QEAAJIW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ?GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z @ 0x1C0004908 (-GetTargetById@DMMVIDEOPRESENTTARGETSET@@QEBAPEAVDMMVIDEOPRESENTTARGET@@I@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     DxgkStatusChangeNotify @ 0x1C00B1110 (DxgkStatusChangeNotify.c)
 */

__int64 __fastcall VIDPN_MGR::SetTargetOwnership(__int64 a1, unsigned int a2, int a3)
{
  __int64 v3; // rsi
  __int64 v5; // r14
  __int64 v6; // rcx
  _QWORD *v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DMMVIDEOPRESENTTARGET *TargetById; // r14
  __int64 v15; // rcx
  __int64 v17; // rax
  __int64 v18; // rcx
  __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // [rsp+20h] [rbp-18h] BYREF
  __int64 v23; // [rsp+28h] [rbp-10h]

  v3 = a3;
  v5 = a2;
  v7 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(a1);
  v8 = (unsigned int)v5;
  v7[3] = v5;
  if ( !*(_QWORD *)(a1 + 8) )
  {
    v17 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v17);
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
    v23 = 0LL;
    *((_DWORD *)TargetById + 26) = v3;
    v22 = 1;
    if ( (int)DxgkStatusChangeNotify(&v22, v10, v12, v13) < 0 )
    {
      v21 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v21);
    }
    return 0LL;
  }
  else
  {
    v19 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v19 + 24) = v8;
    if ( !*(_QWORD *)(a1 + 8) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v20);
    }
    *(_QWORD *)(v19 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL);
    WdLogEvent5_WdError(v19);
    if ( v9 )
      ReferenceCounted::Release((ReferenceCounted *)(v9 + 64));
    return 3223192325LL;
  }
}
