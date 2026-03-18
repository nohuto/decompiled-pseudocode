/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0084728
 * Callers:
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C008376C (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00845AC (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0080524 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00806CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        __int64 a4,
        unsigned __int8 a5)
{
  unsigned int v5; // esi
  VIDPN_MGR *v8; // r13
  unsigned __int64 v9; // r14
  __int64 v10; // r15
  __int64 v11; // r12
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rsi
  __int64 Container; // rax
  __int64 v20; // r9
  __int64 v21; // rbp
  __int64 v22; // rdx
  int v23; // eax
  __int64 v24; // rcx
  __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // r9
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  _QWORD *v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // rax
  _QWORD *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // [rsp+20h] [rbp-78h]
  __int64 v41; // [rsp+20h] [rbp-78h]
  _BYTE v42[88]; // [rsp+40h] [rbp-58h] BYREF
  int v43; // [rsp+A8h] [rbp+10h] BYREF
  int v44; // [rsp+ACh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v45; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a4;
  v8 = this;
  if ( !a2 )
  {
    v34 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v34);
  }
  if ( !a3 )
  {
    v35 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v35);
  }
  v9 = (unsigned __int64)a2 + 56;
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v10 = *(unsigned int *)(*((_QWORD *)a3 + 11) + 24LL);
  v11 = *(unsigned int *)(*((_QWORD *)a3 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v36 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v36);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v42,
    v9 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    1u,
    a4,
    v40,
    1uLL);
  v13 = DMMVIDPNTOPOLOGY::AddPath(a2, a3, v5, v12);
  v18 = v13;
  if ( v13 < 0 )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    v33[3] = v10;
    v33[4] = v11;
    v33[5] = a2;
    v33[6] = v18;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v42,
      v14,
      v16,
      v17);
    Container = ContainedBy<DMMVIDPN>::GetContainer((__int64)a2 + 160);
    v43 = -1;
    v44 = -1;
    v21 = Container + 88;
    if ( Container == -88 )
      v22 = 0LL;
    else
      v22 = Container;
    LOBYTE(v20) = a5;
    v23 = VIDPN_MGR::FormalizeVidPnChange(v8, v22, 1LL, v20, &v43);
    v18 = v23;
    if ( v23 >= 0 )
      return 0LL;
    if ( v23 == -1071774975 )
    {
      v26 = WdLogNewEntry5_WdDmmEvent(v24);
      *(_QWORD *)(v26 + 24) = v10;
      *(_QWORD *)(v26 + 32) = v11;
      WdLogEvent5_WdDmmEvent(v26);
    }
    else
    {
      v37 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v37[3] = v10;
      v37[4] = v11;
      if ( v21 )
        v21 -= 88LL;
      v37[5] = v21;
      v37[6] = v18;
      WdLogEvent5_WdError(v37);
    }
    LOBYTE(v27) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v27) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v38 = WdLogNewEntry5_WdAssertion(v27);
      WdLogEvent5_WdAssertion(v38);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v42,
      v9 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
      2u,
      v28,
      v41,
      1uLL);
    v45 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v10, v11, &v45) < 0 || v45 != a3 )
    {
      v39 = WdLogNewEntry5_WdAssertion(v30);
      WdLogEvent5_WdAssertion(v39);
    }
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v42, v29, v31, v32);
  return (unsigned int)v18;
}
