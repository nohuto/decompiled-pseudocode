/*
 * XREFs of ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00F4784
 * Callers:
 *     DmmInitializeAdapter @ 0x1C00F56D8 (DmmInitializeAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000CA40 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C00800A8 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0085094 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00F5468 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C01A2E78 (-_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SaveInitialVidPnTopologyAsLkg(VIDPN_MGR *this)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r9
  __int64 v5; // rbx
  DMMVIDPNTOPOLOGY *v6; // rsi
  __int64 v7; // rbx
  __int64 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rbx
  __int64 v27; // rcx
  __int64 v28; // rbx
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rax
  int v41; // eax
  __int64 v42; // rcx
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // [rsp+20h] [rbp-58h]
  __int64 v47; // [rsp+20h] [rbp-58h]
  _BYTE v48[24]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v49[24]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v50; // [rsp+88h] [rbp+10h] BYREF

  v50 = 0LL;
  v2 = VIDPN_MGR::CreateClientVidPn(this, &v50);
  v5 = v2;
  if ( v2 < 0 )
  {
    v36 = WdLogNewEntry5_WdDmmEvent(v3);
    *(_QWORD *)(v36 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v36);
  }
  else
  {
    v6 = (DMMVIDPNTOPOLOGY *)(v50 + 96);
    v7 = v50 + 152;
    LOBYTE(v3) = *(_BYTE *)(v50 + 172);
    if ( ((unsigned __int16)((2 << v3) - 1) & *(_WORD *)(v50 + 174)) != 0 )
    {
      v37 = WdLogNewEntry5_WdAssertion(v3);
      WdLogEvent5_WdAssertion(v37);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v49,
      v7 & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64),
      1u,
      v4,
      v46,
      0xFFuLL);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v48,
      v7 & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64),
      2u,
      v8,
      v47,
      0xFFuLL);
    v9 = DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology(v6, 0xFFFFFFFD);
    v11 = v9;
    if ( v9 < 0 )
    {
      v28 = WdLogNewEntry5_WdDmmEvent(v10);
      *(_QWORD *)(v28 + 24) = v11;
      if ( !*((_QWORD *)this + 1) )
      {
        v38 = WdLogNewEntry5_WdAssertion(v27);
        WdLogEvent5_WdAssertion(v38);
      }
      *(_QWORD *)(v28 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v28);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v48,
        v29,
        v30,
        v31);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v49,
        v32,
        v33,
        v34);
      if ( *((DMMVIDPNTOPOLOGY **)v6 + 3) != (DMMVIDPNTOPOLOGY *)((char *)v6 + 24) )
      {
        v39 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v39);
      }
      if ( !*((_QWORD *)this + 1) )
      {
        v40 = WdLogNewEntry5_WdAssertion(v35);
        WdLogEvent5_WdAssertion(v40);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 300LL) & 0x20) == 0 )
      {
        v41 = VIDPN_MGR::_DetermineInitialVidPnTopology(this, v6);
        v5 = v41;
        if ( v41 < 0 )
        {
          v43 = WdLogNewEntry5_WdError(v42);
          *(_QWORD *)(v43 + 24) = v5;
          WdLogEvent5_WdError(v43);
          goto LABEL_11;
        }
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdDmmEvent(v10);
      if ( !*((_QWORD *)this + 1) )
      {
        v44 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v44);
      }
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v13);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v48,
        v14,
        v15,
        v16);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v49,
        v17,
        v18,
        v19);
    }
    v20 = DMMVIDPNTOPOLOGY::SaveAsLkg(v6);
    v25 = v20;
    if ( v20 < 0 )
    {
      v45 = WdLogNewEntry5_WdWarning(v22, v21, v23, v24);
      *(_QWORD *)(v45 + 24) = v6;
      *(_QWORD *)(v45 + 32) = v25;
      WdLogEvent5_WdWarning(v45);
    }
    LODWORD(v5) = 0;
  }
LABEL_11:
  auto_rc<DMMVIDPN>::reset(&v50, 0LL);
  return (unsigned int)v5;
}
