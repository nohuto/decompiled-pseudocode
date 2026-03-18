/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01A70B0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C000ACE8 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C9C4 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011ADC (Template_q.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00803F8 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0081930 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C0081990 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C0085A38 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // r9
  __int64 v8; // rdi
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  _QWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  ApplyPermissionWithinThisScope *v22; // rcx
  __int64 v23; // rcx
  D3DKMDT_HVIDPN Container; // r14
  __int64 v25; // rbx
  __int64 v26; // rax
  DXGADAPTER *v27; // rbx
  __int64 v28; // rcx
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // rax
  ADAPTER_DISPLAY *v32; // rcx
  int v33; // eax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  _QWORD *v38; // rax
  __int64 v40; // [rsp+20h] [rbp-50h]
  __int64 v41; // [rsp+20h] [rbp-50h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v42; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v43[24]; // [rsp+58h] [rbp-18h] BYREF

  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6025);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v8 = v5;
  if ( v5 )
  {
    LOBYTE(v6) = *(_BYTE *)(v5 + 76);
    if ( ((unsigned __int16)((2 << v6) - 1) & *(_WORD *)(v5 + 78)) != 0 )
    {
      v12 = WdLogNewEntry5_WdAssertion(v6);
      WdLogEvent5_WdAssertion(v12);
    }
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v42,
      v8 + 56,
      2u,
      v7,
      v40,
      *(_QWORD *)(v8 + 40));
    v13 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v8, v4);
    v3 = v13;
    if ( v13 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v22 = (ApplyPermissionWithinThisScope *)&v42;
      v18[3] = v8;
      v18[4] = v4;
      v18[5] = v3;
LABEL_22:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(v22, v19, v20, v21);
      goto LABEL_25;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
      (ApplyPermissionWithinThisScope *)&v42,
      v14,
      v16,
      v17);
    if ( *(_QWORD *)(v8 + 24) != v8 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v8 + 160);
      v25 = *((_QWORD *)Container + 6);
      if ( !*(_QWORD *)(v25 + 8) )
      {
        v26 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v26);
      }
      v27 = *(DXGADAPTER **)(*(_QWORD *)(v25 + 8) + 16LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v27) )
      {
        v30 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v30);
      }
      LOBYTE(v28) = *(_BYTE *)(v8 + 76);
      if ( ((unsigned __int16)((2 << v28) - 1) & *(_WORD *)(v8 + 78)) != 0 )
      {
        v31 = WdLogNewEntry5_WdAssertion(v28);
        WdLogEvent5_WdAssertion(v31);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v43,
        v8 + 56,
        3u,
        v29,
        v41,
        *(_QWORD *)(v8 + 40));
      *(_QWORD *)&v42.EnumPivotType = 0LL;
      *(_QWORD *)&v42.EnumPivot.VidPnTargetId = 0LL;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v42.hConstrainingVidPn = 0LL;
      else
        v42.hConstrainingVidPn = Container;
      v32 = (ADAPTER_DISPLAY *)*((_QWORD *)v27 + 266);
      v42.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v42.EnumPivot.VidPnSourceId = -1;
      v42.EnumPivot.VidPnTargetId = -1;
      v33 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v32, &v42);
      v3 = v33;
      if ( v33 < 0 )
      {
        v38 = (_QWORD *)WdLogNewEntry5_WdError(v35);
        v38[3] = Container;
        v38[4] = v4;
        v38[5] = v3;
        WdLogEvent5_WdError(v38);
        v22 = (ApplyPermissionWithinThisScope *)v43;
        goto LABEL_22;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope(
        (ApplyPermissionWithinThisScope *)v43,
        v34,
        v36,
        v37);
    }
    LODWORD(v3) = 0;
    goto LABEL_25;
  }
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = v3;
  WdLogEvent5_WdError(v9);
  LODWORD(v3) = -1071774976;
LABEL_25:
  if ( (qword_1C0056840 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 6025);
  return (unsigned int)v3;
}
