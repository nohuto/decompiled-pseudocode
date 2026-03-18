/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C008F680
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008E6C0 (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008F504 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F858 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C009106C (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        enum _D3DKMDT_MONITOR_CONNECTIVITY_CHECKS a4,
        unsigned __int8 a5)
{
  struct DMMVIDPNPRESENTPATH *v6; // rdi
  VIDPN_MGR *v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rsi
  __int64 Container; // rax
  __int64 v19; // r9
  __int64 v20; // rbp
  __int64 v21; // rdx
  int v22; // eax
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _BYTE v36[88]; // [rsp+40h] [rbp-58h] BYREF
  int v37; // [rsp+A8h] [rbp+10h] BYREF
  int v38; // [rsp+ACh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v39; // [rsp+B0h] [rbp+18h] BYREF

  v6 = a3;
  v8 = this;
  if ( !a2 )
  {
    v30 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v30);
  }
  if ( !v6 )
  {
    v31 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v31);
  }
  v9 = (unsigned __int64)a2 + 56;
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v10 = *(unsigned int *)(*((_QWORD *)v6 + 11) + 24LL);
  v11 = *(unsigned int *)(*((_QWORD *)v6 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v32 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v32);
  }
  LOBYTE(a3) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    v36,
    v9 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    a3);
  v12 = DMMVIDPNTOPOLOGY::AddPath(a2, v6, a4);
  v17 = v12;
  if ( v12 < 0 )
  {
    v29 = (_QWORD *)WdLogNewEntry5_WdTrace(v14, v13, v15, v16);
    v29[3] = v10;
    v29[4] = v11;
    v29[5] = a2;
    v29[6] = v17;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v36);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v37 = -1;
    v38 = -1;
    v20 = Container + 88;
    if ( Container == -88 )
      v21 = 0LL;
    else
      v21 = Container;
    LOBYTE(v19) = a5;
    v22 = VIDPN_MGR::FormalizeVidPnChange(v8, v21, 1LL, v19, &v37);
    v17 = v22;
    if ( v22 >= 0 )
      return 0LL;
    if ( v22 == -1071774975 )
    {
      v25 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v25 + 24) = v10;
      *(_QWORD *)(v25 + 32) = v11;
      WdLogEvent5_WdDmmEvent(v25);
    }
    else
    {
      v33 = (_QWORD *)WdLogNewEntry5_WdError(v23);
      v33[3] = v10;
      v33[4] = v11;
      if ( v20 )
        v20 -= 88LL;
      v33[5] = v20;
      v33[6] = v17;
      WdLogEvent5_WdError(v33);
    }
    LOBYTE(v26) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v26) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v34 = WdLogNewEntry5_WdAssertion(v26);
      WdLogEvent5_WdAssertion(v34);
    }
    LOBYTE(v27) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      v36,
      v9 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
      v27);
    v39 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v10, v11, &v39) < 0 || v39 != v6 )
    {
      v35 = WdLogNewEntry5_WdAssertion(v28);
      WdLogEvent5_WdAssertion(v35);
    }
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v36);
  return (unsigned int)v17;
}
