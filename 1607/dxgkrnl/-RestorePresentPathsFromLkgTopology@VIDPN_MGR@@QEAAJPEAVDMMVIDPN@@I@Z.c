/*
 * XREFs of ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C01A20B0
 * Callers:
 *     ?RestoreFromLkgForSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IQEAI@Z @ 0x1C01A73F0 (-RestoreFromLkgForSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00803F8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0084900 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00F53F8 (-RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00F5468 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::RestorePresentPathsFromLkgTopology(
        VIDPN_MGR *this,
        struct D3DKMDT_HVIDPN__ *a2,
        unsigned int a3)
{
  __int64 v3; // rbx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  DXGADAPTER *v9; // r15
  __int64 v10; // rcx
  __int64 v11; // r9
  __int64 v12; // rax
  char *v13; // rsi
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  __int64 v16; // r9
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  _QWORD *v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v31; // rdx
  __int64 v32; // r8
  __int64 v33; // r9
  struct D3DKMDT_HVIDPN__ *v34; // rdx
  int v35; // eax
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // r8
  __int64 v39; // r9
  __int64 v40; // r14
  _QWORD *v41; // rax
  __int64 v42; // rcx
  __int64 v43; // r9
  _QWORD *v44; // rax
  __int64 v45; // rax
  DMMVIDPNTOPOLOGY *v46; // rcx
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  __int64 v50; // r8
  __int64 v51; // r9
  __int64 v52; // rax
  __int64 v53; // [rsp+20h] [rbp-78h]
  __int64 v54; // [rsp+20h] [rbp-78h]
  __int64 v55; // [rsp+20h] [rbp-78h]
  _BYTE v56[24]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v57[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v58; // [rsp+A0h] [rbp+8h] BYREF
  int v59; // [rsp+A4h] [rbp+Ch]

  v3 = a3;
  if ( !a2 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  if ( (_DWORD)v3 == -1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v9 = *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v9) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = (char *)(a2 + 24);
  v14 = (unsigned __int64)(a2 + 38);
  LOBYTE(v10) = *((_BYTE *)a2 + 172);
  if ( ((unsigned __int16)((2 << v10) - 1) & *((_WORD *)a2 + 87)) != 0 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v15);
  }
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v57,
    v14 & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64),
    1u,
    v11,
    v53,
    0xFFuLL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v56,
    v14 & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64),
    2u,
    v16,
    v54,
    0xFFuLL);
  v17 = DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology((DMMVIDPNTOPOLOGY *)(a2 + 24), v3);
  v22 = v17;
  if ( v17 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v56,
      v18,
      v20,
      v21);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v57,
      v31,
      v32,
      v33);
    v58 = -1;
    v59 = -1;
    if ( a2 == (struct D3DKMDT_HVIDPN__ *)-88LL )
      v34 = 0LL;
    else
      v34 = a2;
    v35 = VIDPN_MGR::FormalizeVidPnChange((unsigned __int64)this, v34, 1, 1, &v58);
    v40 = v35;
    if ( v35 >= 0 )
    {
      return 0LL;
    }
    else
    {
      if ( v35 == -1071774975 )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdWarning(v37, v36, v38, v39);
        v41[3] = a2;
        v41[4] = v3;
        v41[5] = v9;
        WdLogEvent5_WdWarning(v41);
      }
      else
      {
        v44 = (_QWORD *)WdLogNewEntry5_WdError(v37);
        v44[3] = a2;
        v44[4] = v3;
        v44[5] = v40;
        WdLogEvent5_WdError(v44);
      }
      LOBYTE(v42) = *((_BYTE *)a2 + 172);
      if ( ((unsigned __int16)((2 << v42) - 1) & *((_WORD *)a2 + 87)) != 0 )
      {
        v45 = WdLogNewEntry5_WdAssertion(v42);
        WdLogEvent5_WdAssertion(v45);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v57,
        v14 & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64),
        2u,
        v43,
        v55,
        0xFFuLL);
      v46 = (DMMVIDPNTOPOLOGY *)(a2 + 24);
      if ( (_DWORD)v3 == -3 )
        v47 = DMMVIDPNTOPOLOGY::RemoveAllPaths(v46);
      else
        v47 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v46, v3);
      if ( v47 < 0 )
      {
        v52 = WdLogNewEntry5_WdAssertion(v49);
        WdLogEvent5_WdAssertion(v52);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v57,
        v48,
        v50,
        v51);
      return (unsigned int)v40;
    }
  }
  else
  {
    v23 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v19);
    v23[3] = v3;
    v23[4] = v9;
    v23[5] = a2;
    v23[6] = v22;
    WdLogEvent5_WdDmmEvent(v23);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v56,
      v24,
      v25,
      v26);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)v57,
      v27,
      v28,
      v29);
    return (unsigned int)v22;
  }
}
