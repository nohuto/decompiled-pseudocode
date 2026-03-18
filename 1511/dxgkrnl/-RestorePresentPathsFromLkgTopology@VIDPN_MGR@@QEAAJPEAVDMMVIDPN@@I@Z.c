/*
 * XREFs of ?RestorePresentPathsFromLkgTopology@VIDPN_MGR@@QEAAJPEAVDMMVIDPN@@I@Z @ 0x1C01786D0
 * Callers:
 *     ?RestoreFromLkgForSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__@@IQEAI@Z @ 0x1C017E080 (-RestoreFromLkgForSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPNTOPOLOGY__.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIVOT@@@Z @ 0x1C008F858 (-FormalizeVidPnChange@VIDPN_MGR@@QEBAJPEAUD3DKMDT_HVIDPN__@@W4VIDPN_CHANGE@1@EQEBU_DXGK_ENUM_PIV.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ @ 0x1C00DC7E0 (-RemoveAllPaths@DMMVIDPNTOPOLOGY@@QEAAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00DC850 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
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
  unsigned __int8 v11; // r9
  __int64 v12; // rax
  char *v13; // rsi
  unsigned __int64 v14; // rbp
  __int64 v15; // rax
  unsigned __int8 v16; // r9
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // r12
  _QWORD *v20; // rax
  struct D3DKMDT_HVIDPN__ *v22; // rdx
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // r14
  _QWORD *v29; // rax
  __int64 v30; // rcx
  unsigned __int8 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rax
  DMMVIDPNTOPOLOGY *v34; // rcx
  int v35; // eax
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v38; // [rsp+20h] [rbp-78h]
  __int64 v39; // [rsp+20h] [rbp-78h]
  __int64 v40; // [rsp+20h] [rbp-78h]
  _BYTE v41[24]; // [rsp+40h] [rbp-58h] BYREF
  _BYTE v42[24]; // [rsp+58h] [rbp-40h] BYREF
  unsigned int v43; // [rsp+A0h] [rbp+8h] BYREF
  int v44; // [rsp+A4h] [rbp+Ch]

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
    (__int64)v42,
    v14 & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64),
    1u,
    v11,
    v38,
    0xFFuLL);
  ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
    (__int64)v41,
    v14 & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64),
    2u,
    v16,
    v39,
    0xFFuLL);
  v17 = DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology((DMMVIDPNTOPOLOGY *)(a2 + 24), v3);
  v19 = v17;
  if ( v17 >= 0 )
  {
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v41);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v42);
    v43 = -1;
    v44 = -1;
    if ( a2 == (struct D3DKMDT_HVIDPN__ *)-88LL )
      v22 = 0LL;
    else
      v22 = a2;
    v23 = VIDPN_MGR::FormalizeVidPnChange(this, v22, 1, 1, &v43);
    v28 = v23;
    if ( v23 >= 0 )
    {
      return 0LL;
    }
    else
    {
      if ( v23 == -1071774975 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
        v29[3] = a2;
        v29[4] = v3;
        v29[5] = v9;
        WdLogEvent5_WdWarning(v29);
      }
      else
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v25);
        v32[3] = a2;
        v32[4] = v3;
        v32[5] = v28;
        WdLogEvent5_WdError(v32);
      }
      LOBYTE(v30) = *((_BYTE *)a2 + 172);
      if ( ((unsigned __int16)((2 << v30) - 1) & *((_WORD *)a2 + 87)) != 0 )
      {
        v33 = WdLogNewEntry5_WdAssertion(v30);
        WdLogEvent5_WdAssertion(v33);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v42,
        v14 & ((unsigned __int128)-(__int128)(unsigned __int64)v13 >> 64),
        2u,
        v31,
        v40,
        0xFFuLL);
      v34 = (DMMVIDPNTOPOLOGY *)(a2 + 24);
      if ( (_DWORD)v3 == -3 )
        v35 = DMMVIDPNTOPOLOGY::RemoveAllPaths(v34);
      else
        v35 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource(v34, v3);
      if ( v35 < 0 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v36);
        WdLogEvent5_WdAssertion(v37);
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v42);
      return (unsigned int)v28;
    }
  }
  else
  {
    v20 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v18);
    v20[3] = v3;
    v20[4] = v9;
    v20[5] = a2;
    v20[6] = v19;
    WdLogEvent5_WdDmmEvent(v20);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v41);
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v42);
    return (unsigned int)v19;
  }
}
