/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C01798E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008434 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C0009804 (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C00102BC (Template_q.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00953C4 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C0097378 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00973C8 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C00CC158 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL::RemoveAllPathsFromSource(
        DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL *this,
        struct D3DKMDT_HVIDPNTOPOLOGY__ *a2,
        __int64 a3)
{
  __int64 v3; // rbx
  __int64 v4; // r15
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rax
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  D3DKMDT_HVIDPN Container; // r14
  __int64 v27; // rbx
  __int64 v28; // rax
  DXGADAPTER *v29; // rbx
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rax
  __int64 v36; // r8
  __int64 v37; // r9
  ADAPTER_DISPLAY *v38; // rcx
  int v39; // eax
  __int64 v40; // rcx
  _QWORD *v41; // rax
  __int64 v43; // [rsp+20h] [rbp-50h]
  __int64 v44; // [rsp+20h] [rbp-50h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v45; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v46[24]; // [rsp+58h] [rbp-18h] BYREF

  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q((__int64)this, &EventProfilerEnter, a3, 6025);
  v5 = ExposedViaHandle<DMMVIDPNTOPOLOGY,D3DKMDT_HVIDPNTOPOLOGY__ *>::GetFromHandle(v3);
  v10 = v5;
  if ( v5 )
  {
    LOBYTE(v7) = *(_BYTE *)(v5 + 76);
    if ( ((unsigned __int16)((2 << v7) - 1) & *(_WORD *)(v5 + 78)) != 0 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      WdLogEvent5_WdAssertion(v14);
    }
    LOBYTE(v8) = 2;
    ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
      (__int64)&v45,
      v10 + 56,
      v8,
      v9,
      v43,
      *(_QWORD *)(v10 + 40));
    v15 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v10, v4);
    v3 = v15;
    if ( v15 < 0 )
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdTrace(v17, v16, v18, v19);
      v21 = &v45;
      v20[3] = v10;
      v20[4] = v4;
      v20[5] = v3;
LABEL_22:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v21);
      goto LABEL_25;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v45);
    if ( *(_QWORD *)(v10 + 24) != v10 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v10 + 160);
      v27 = *((_QWORD *)Container + 6);
      if ( !*(_QWORD *)(v27 + 8) )
      {
        v28 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
        WdLogEvent5_WdAssertion(v28);
      }
      v29 = *(DXGADAPTER **)(*(_QWORD *)(v27 + 8) + 16LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v29) )
      {
        v34 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
        WdLogEvent5_WdAssertion(v34);
      }
      LOBYTE(v31) = *(_BYTE *)(v10 + 76);
      if ( ((unsigned __int16)((2 << v31) - 1) & *(_WORD *)(v10 + 78)) != 0 )
      {
        v35 = WdLogNewEntry5_WdAssertion(v31, v30, v32, v33);
        WdLogEvent5_WdAssertion(v35);
      }
      LOBYTE(v32) = 3;
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v46,
        v10 + 56,
        v32,
        v33,
        v44,
        *(_QWORD *)(v10 + 40));
      *(_QWORD *)&v45.EnumPivotType = 0LL;
      *(_QWORD *)&v45.EnumPivot.VidPnTargetId = 0LL;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v45.hConstrainingVidPn = 0LL;
      else
        v45.hConstrainingVidPn = Container;
      v38 = (ADAPTER_DISPLAY *)*((_QWORD *)v29 + 247);
      v45.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v45.EnumPivot.VidPnSourceId = -1;
      v45.EnumPivot.VidPnTargetId = -1;
      v39 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v38, &v45, v36, v37);
      v3 = v39;
      if ( v39 < 0 )
      {
        v41 = (_QWORD *)WdLogNewEntry5_WdError(v40);
        v41[3] = Container;
        v41[4] = v4;
        v41[5] = v3;
        WdLogEvent5_WdError(v41);
        v21 = (struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *)v46;
        goto LABEL_22;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v46);
    }
    LODWORD(v3) = 0;
    goto LABEL_25;
  }
  v11 = WdLogNewEntry5_WdError(v7);
  *(_QWORD *)(v11 + 24) = v3;
  WdLogEvent5_WdError(v11);
  LODWORD(v3) = -1071774976;
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v12, &EventProfilerExit, v13, 6025);
  return (unsigned int)v3;
}
