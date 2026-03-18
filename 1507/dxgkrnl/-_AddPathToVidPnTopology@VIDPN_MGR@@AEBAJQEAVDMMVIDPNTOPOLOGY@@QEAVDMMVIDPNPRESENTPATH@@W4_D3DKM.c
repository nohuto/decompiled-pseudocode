/*
 * XREFs of ?_AddPathToVidPnTopology@VIDPN_MGR@@AEBAJQEAVDMMVIDPNTOPOLOGY@@QEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@E@Z @ 0x1C0096A54
 * Callers:
 *     ?AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IMPORTANCE@@GEW4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00968D8 (-AddPathToVidPnTopology@VIDPN_MGR@@QEBAJQEAVDMMVIDPNTOPOLOGY@@IIW4_D3DKMDT_VIDPN_PRESENT_PATH_IM.c)
 *     ?AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C00CD0FC (-AddUnpinnedPathToVidPnTopology@VIDPN_MGR@@QEAAJQEAVDMMVIDPNTOPOLOGY@@PEBU_D3DKMDT_FUNCTIONAL_VI.c)
 * Callees:
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     ?AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@@@Z @ 0x1C0089F34 (-AddPath@DMMVIDPNTOPOLOGY@@QEAAJPEAVDMMVIDPNPRESENTPATH@@W4_D3DKMDT_MONITOR_CONNECTIVITY_CHECKS@.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C008A0DC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096C2C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 */

__int64 __fastcall VIDPN_MGR::_AddPathToVidPnTopology(
        VIDPN_MGR *this,
        struct DMMVIDPNTOPOLOGY *const a2,
        struct DMMVIDPNPRESENTPATH *const a3,
        __int64 a4,
        unsigned __int8 a5)
{
  unsigned int v5; // esi
  struct DMMVIDPNPRESENTPATH *v6; // rdi
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
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  _QWORD *v35; // rax
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  _QWORD *v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  _BYTE v42[88]; // [rsp+40h] [rbp-58h] BYREF
  int v43; // [rsp+A8h] [rbp+10h] BYREF
  int v44; // [rsp+ACh] [rbp+14h]
  struct DMMVIDPNPRESENTPATH *v45; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a4;
  v6 = a3;
  v8 = this;
  if ( !a2 )
  {
    v36 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v36);
  }
  if ( !v6 )
  {
    v37 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v37);
  }
  v9 = (unsigned __int64)a2 + 56;
  LOBYTE(this) = *((_BYTE *)a2 + 76);
  v10 = *(unsigned int *)(*((_QWORD *)v6 + 11) + 24LL);
  v11 = *(unsigned int *)(*((_QWORD *)v6 + 12) + 24LL);
  if ( ((unsigned __int16)((2 << (char)this) - 1) & *((_WORD *)a2 + 39)) != 0 )
  {
    v38 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v38);
  }
  LOBYTE(a3) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    v42,
    v9 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
    a3);
  v13 = DMMVIDPNTOPOLOGY::AddPath(a2, v6, v5, v12);
  v18 = v13;
  if ( v13 < 0 )
  {
    v35 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
    v35[3] = v10;
    v35[4] = v11;
    v35[5] = a2;
    v35[6] = v18;
  }
  else
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v42);
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
      v39 = (_QWORD *)WdLogNewEntry5_WdError(v24);
      v39[3] = v10;
      v39[4] = v11;
      if ( v21 )
        v21 -= 88LL;
      v39[5] = v21;
      v39[6] = v18;
      WdLogEvent5_WdError(v39);
    }
    LOBYTE(v28) = *((_BYTE *)a2 + 76);
    if ( ((unsigned __int16)((2 << v28) - 1) & *((_WORD *)a2 + 39)) != 0 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v28, v27, v29, v30);
      WdLogEvent5_WdAssertion(v40);
    }
    LOBYTE(v29) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      v42,
      v9 & ((unsigned __int128)-(__int128)(unsigned __int64)a2 >> 64),
      v29);
    v45 = 0LL;
    if ( (int)DMMVIDPNTOPOLOGY::RemovePath(a2, v10, v11, &v45) < 0 || v45 != v6 )
    {
      v41 = WdLogNewEntry5_WdAssertion(v32, v31, v33, v34);
      WdLogEvent5_WdAssertion(v41);
    }
  }
  ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v42);
  return (unsigned int)v18;
}
