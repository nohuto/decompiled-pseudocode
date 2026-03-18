/*
 * XREFs of ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C0174088
 * Callers:
 *     ?RestoreFromLkgForSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IQEAI@Z @ 0x1C0179C20 (-RestoreFromLkgForSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C0096C2C (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00CC220 (-RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC290 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall VIDPN_MGR::RestorePresentPathsFromLkgTopology(
        VIDPN_MGR *this,
        struct D3DKMDT_HVIDPN__ *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rbx
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  DXGADAPTER *v10; // r15
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  char *v16; // rsi
  unsigned __int64 v17; // rbp
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rcx
  __int64 v23; // r12
  _QWORD *v24; // rax
  __int64 v26; // r9
  struct D3DKMDT_HVIDPN__ *v27; // rdx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // r14
  _QWORD *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  _QWORD *v39; // rax
  __int64 v40; // rax
  DMMVIDPNTOPOLOGY *v41; // rcx
  int v42; // eax
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  __int64 v46; // r9
  __int64 v47; // rax
  __int64 v48; // [rsp+20h] [rbp-78h]
  __int64 v49; // [rsp+20h] [rbp-78h]
  __int64 v50; // [rsp+20h] [rbp-78h]
  _BYTE v51[24]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v52[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v53; // [rsp+A0h] [rbp+8h] BYREF
  int v54; // [rsp+A4h] [rbp+Ch]

  v4 = (unsigned int)a3;
  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v8);
  }
  if ( !*((_QWORD *)this + 1) )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  v10 = *(DXGADAPTER **)(*((_QWORD *)this + 1) + 16LL);
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(v10) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = (char *)(a2 + 24);
  v17 = (unsigned __int64)(a2 + 38);
  LOBYTE(v12) = *((_BYTE *)a2 + 172);
  if ( ((unsigned __int16)((2 << v12) - 1) & *((_WORD *)a2 + 87)) != 0 )
  {
    v18 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v18);
  }
  LOBYTE(v13) = 1;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v52,
    v17 & ((unsigned __int128)-(__int128)(unsigned __int64)v16 >> 64),
    v13,
    v14,
    v48,
    0xFFuLL);
  LOBYTE(v19) = 2;
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v51,
    v17 & ((unsigned __int128)-(__int128)(unsigned __int64)v16 >> 64),
    v19,
    v20,
    v49,
    0xFFuLL);
  v21 = DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology((DMMVIDPNTOPOLOGY *)(a2 + 24), v4);
  v23 = v21;
  if ( v21 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v51);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v52);
    v53 = -1;
    v54 = -1;
    if ( a2 == (struct D3DKMDT_HVIDPN__ *)-88LL )
      v27 = 0LL;
    else
      v27 = a2;
    LOBYTE(v26) = 1;
    v28 = VIDPN_MGR::FormalizeVidPnChange((unsigned __int64)this, v27, 1LL, v26, &v53);
    v33 = v28;
    if ( v28 >= 0 )
    {
      return 0LL;
    }
    else
    {
      if ( v28 == -1071774975 )
      {
        v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v30, v29, v31, v32);
        v34[3] = a2;
        v34[4] = v4;
        v34[5] = v10;
        WdLogEvent5_WdWarning(v34);
      }
      else
      {
        v39 = (_QWORD *)WdLogNewEntry5_WdError(v30);
        v39[3] = a2;
        v39[4] = v4;
        v39[5] = v33;
        WdLogEvent5_WdError(v39);
      }
      LOBYTE(v36) = *((_BYTE *)a2 + 172);
      if ( ((unsigned __int16)((2 << v36) - 1) & *((_WORD *)a2 + 87)) != 0 )
      {
        v40 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
        WdLogEvent5_WdAssertion(v40);
      }
      LOBYTE(v37) = 2;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v52,
        v17 & ((unsigned __int128)-(__int128)(unsigned __int64)v16 >> 64),
        v37,
        v38,
        v50,
        0xFFuLL);
      v41 = (DMMVIDPNTOPOLOGY *)(a2 + 24);
      if ( (_DWORD)v4 == -3 )
        v42 = DMMVIDPNTOPOLOGY::RemoveAllPaths(v41);
      else
        v42 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v41, v4);
      if ( v42 < 0 )
      {
        v47 = WdLogNewEntry5_WdAssertion(v44, v43, v45, v46);
        WdLogEvent5_WdAssertion(v47);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v52);
      return (unsigned int)v33;
    }
  }
  else
  {
    v24 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v22);
    v24[3] = v4;
    v24[4] = v10;
    v24[5] = a2;
    v24[6] = v23;
    WdLogEvent5_WdDmmEvent(v24);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v51);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v52);
    return (unsigned int)v23;
  }
}
