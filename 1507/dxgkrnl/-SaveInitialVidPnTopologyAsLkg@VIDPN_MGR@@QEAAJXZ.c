/*
 * XREFs of ?SaveInitialVidPnTopologyAsLkg@VIDPN_MGR@@QEAAJXZ @ 0x1C00CDA50
 * Callers:
 *     DmmInitializeAdapter @ 0x1C00D0CB0 (DmmInitializeAdapter.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z @ 0x1C0007D5C (-reset@-$auto_rc@VDMMVIDPN@@@@QEAAXPEAVDMMVIDPN@@@Z.c)
 *     ?CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV?$auto_rc@VDMMVIDPN@@@@@Z @ 0x1C0097248 (-CreateClientVidPn@VIDPN_MGR@@QEAAJPEAV-$auto_rc@VDMMVIDPN@@@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ @ 0x1C00CBE20 (-SaveAsLkg@DMMVIDPNTOPOLOGY@@QEBAJXZ.c)
 *     ?RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC290 (-RestorePresentPathsFromLkgTopology@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z @ 0x1C0174EBC (-_DetermineInitialVidPnTopology@VIDPN_MGR@@AEAAJPEAVDMMVIDPNTOPOLOGY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR::SaveInitialVidPnTopologyAsLkg(VIDPN_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rbx
  DMMVIDPNTOPOLOGY *v11; // rsi
  __int64 v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbp
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rbx
  __int64 v21; // r8
  __int64 v22; // r9
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // r8
  __int64 v27; // r9
  __int64 v28; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // rbx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // r8
  __int64 v38; // r9
  __int64 v39; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rcx
  __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // [rsp+20h] [rbp-58h]
  __int64 v50; // [rsp+20h] [rbp-58h]
  _BYTE v51[24]; // [rsp+40h] [rbp-38h] BYREF
  _BYTE v52[24]; // [rsp+58h] [rbp-20h] BYREF
  __int64 v53; // [rsp+88h] [rbp+10h] BYREF

  v53 = 0LL;
  v5 = VIDPN_MGR::CreateClientVidPn(this, &v53, a3, a4);
  v10 = v5;
  if ( v5 < 0 )
  {
    v39 = WdLogNewEntry5_WdDmmEvent(v7);
    *(_QWORD *)(v39 + 24) = v10;
    WdLogEvent5_WdDmmEvent(v39);
  }
  else
  {
    v11 = (DMMVIDPNTOPOLOGY *)(v53 + 96);
    v12 = v53 + 152;
    LOBYTE(v7) = *(_BYTE *)(v53 + 172);
    if ( ((unsigned __int16)((2 << v7) - 1) & *(_WORD *)(v53 + 174)) != 0 )
    {
      v40 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v40);
    }
    LOBYTE(v8) = 1;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v52,
      v12 & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
      v8,
      v9,
      v49,
      0xFFuLL);
    LOBYTE(v13) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)v51,
      v12 & ((unsigned __int128)-(__int128)(unsigned __int64)v11 >> 64),
      v13,
      v14,
      v50,
      0xFFuLL);
    v15 = DMMVIDPNTOPOLOGY::RestorePresentPathsFromLkgTopology(v11, 0xFFFFFFFD);
    v17 = v15;
    if ( v15 < 0 )
    {
      v32 = WdLogNewEntry5_WdDmmEvent(v16);
      *(_QWORD *)(v32 + 24) = v17;
      if ( !*((_QWORD *)this + 1) )
      {
        v41 = WdLogNewEntry5_WdAssertion(v31, v30, v33, v34);
        WdLogEvent5_WdAssertion(v41);
      }
      *(_QWORD *)(v32 + 32) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v32);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v51);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v52);
      if ( *((DMMVIDPNTOPOLOGY **)v11 + 3) != (DMMVIDPNTOPOLOGY *)((char *)v11 + 24) )
      {
        v42 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
        WdLogEvent5_WdAssertion(v42);
      }
      if ( !*((_QWORD *)this + 1) )
      {
        v43 = WdLogNewEntry5_WdAssertion(v36, v35, v37, v38);
        WdLogEvent5_WdAssertion(v43);
      }
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL) + 284LL) & 0x10) == 0 )
      {
        v44 = VIDPN_MGR::_DetermineInitialVidPnTopology(this, v11);
        v10 = v44;
        if ( v44 < 0 )
        {
          v46 = WdLogNewEntry5_WdError(v45);
          *(_QWORD *)(v46 + 24) = v10;
          WdLogEvent5_WdError(v46);
          goto LABEL_11;
        }
      }
    }
    else
    {
      v20 = WdLogNewEntry5_WdDmmEvent(v16);
      if ( !*((_QWORD *)this + 1) )
      {
        v47 = WdLogNewEntry5_WdAssertion(v19, v18, v21, v22);
        WdLogEvent5_WdAssertion(v47);
      }
      *(_QWORD *)(v20 + 24) = *(_QWORD *)(*((_QWORD *)this + 1) + 16LL);
      WdLogEvent5_WdDmmEvent(v20);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v51);
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v52);
    }
    v23 = DMMVIDPNTOPOLOGY::SaveAsLkg(v11);
    v28 = v23;
    if ( v23 < 0 )
    {
      v48 = WdLogNewEntry5_WdWarning(v25, v24, v26, v27);
      *(_QWORD *)(v48 + 24) = v11;
      *(_QWORD *)(v48 + 32) = v28;
      WdLogEvent5_WdWarning(v48);
    }
    LODWORD(v10) = 0;
  }
LABEL_11:
  auto_rc<DMMVIDPN>::reset(&v53, 0LL);
  return (unsigned int)v10;
}
