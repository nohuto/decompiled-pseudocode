/*
 * XREFs of ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00DD450
 * Callers:
 *     DmmInitializeAdapter @ 0x1C00DC760 (DmmInitializeAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C000C2B4 (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C008FFCC (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C0090C08 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00DC850 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C0179498 (-_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SaveInitialVidPnTopologyAsLkg(VIDPN_MGR *this)
{
  int v2; // eax
  __int64 v3; // rcx
  unsigned __int8 v4; // r9
  __int64 v5; // rbx
  DMMVIDPNTOPOLOGY *v6; // rsi
  __int64 v7; // rbx
  unsigned __int8 v8; // r9
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // rbp
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rbx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  int v29; // eax
  __int64 v30; // rcx
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // [rsp+20h] [rbp-58h]
  __int64 v35; // [rsp+20h] [rbp-58h]
  _BYTE v36[24]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v37[24]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v38; // [rsp+88h] [rbp+10h] BYREF

  v38 = 0LL;
  v2 = VIDPN_MGR::CreateClientVidPn(this, &v38);
  v5 = v2;
  if ( v2 < 0 )
  {
    v24 = WdLogNewEntry5_WdDmmEvent(v3);
    *(_QWORD *)(v24 + 24) = v5;
    WdLogEvent5_WdDmmEvent(v24);
  }
  else
  {
    v6 = (DMMVIDPNTOPOLOGY *)(v38 + 96);
    v7 = v38 + 152;
    LOBYTE(v3) = *(_BYTE *)(v38 + 172);
    if ( ((unsigned __int16)((2 << v3) - 1) & *(_WORD *)(v38 + 174)) != 0 )
    {
      v25 = WdLogNewEntry5_WdAssertion(v3);
      WdLogEvent5_WdAssertion(v25);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v37,
      v7 & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64),
      1u,
      v4,
      v34,
      0xFFuLL);
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v36,
      v7 & ((unsigned __int128)-(__int128)(unsigned __int64)v6 >> 64),
      2u,
      v8,
      v35,
      0xFFuLL);
    v9 = DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology(v6, 0xFFFFFFFD);
    v11 = v9;
    if ( v9 < 0 )
    {
      v22 = WdLogNewEntry5_WdDmmEvent(v10);
      *(_QWORD *)(v22 + 24) = v11;
      if ( !*((_QWORD *)this + 1) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v21);
        WdLogEvent5_WdAssertion(v26);
      }
      *(_QWORD *)(v22 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v22);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v36);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v37);
      if ( *((DMMVIDPNTOPOLOGY **)v6 + 3) != (DMMVIDPNTOPOLOGY *)((char *)v6 + 24) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v27);
      }
      if ( !*((_QWORD *)this + 1) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v28);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 284LL) & 0x20) == 0 )
      {
        v29 = VIDPN_MGR::_DetermineInitialVidPnTopology(this, v6);
        v5 = v29;
        if ( v29 < 0 )
        {
          v31 = WdLogNewEntry5_WdError(v30);
          *(_QWORD *)(v31 + 24) = v5;
          WdLogEvent5_WdError(v31);
          goto LABEL_11;
        }
      }
    }
    else
    {
      v13 = WdLogNewEntry5_WdDmmEvent(v10);
      if ( !*((_QWORD *)this + 1) )
      {
        v32 = WdLogNewEntry5_WdAssertion(v12);
        WdLogEvent5_WdAssertion(v32);
      }
      *(_QWORD *)(v13 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v13);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v36);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v37);
    }
    v14 = DMMVIDPNTOPOLOGY::SaveAsLkg(v6);
    v19 = v14;
    if ( v14 < 0 )
    {
      v33 = WdLogNewEntry5_WdWarning(v16, v15, v17, v18);
      *(_QWORD *)(v33 + 24) = v6;
      *(_QWORD *)(v33 + 32) = v19;
      WdLogEvent5_WdWarning(v33);
    }
    LODWORD(v5) = 0;
  }
LABEL_11:
  auto_rc<DMMVIDPN>::reset(&v38, 0LL);
  return (unsigned int)v5;
}
