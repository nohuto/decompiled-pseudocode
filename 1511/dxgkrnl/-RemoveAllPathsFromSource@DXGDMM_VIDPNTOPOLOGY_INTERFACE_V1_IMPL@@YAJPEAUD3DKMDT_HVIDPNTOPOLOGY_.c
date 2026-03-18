/*
 * XREFs of ?RemoveAllPathsFromSource@DXGDMM_VIDPNTOPOLOGY_INTERFACE_V1_IMPL@@YAJPEAUD3DKMDT_HVIDPNTOPOLOGY__@@I@Z @ 0x1C017DD40
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetFromHandle@?$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@Z @ 0x1C0008180 (-GetFromHandle@-$ExposedViaHandle@VDMMVIDPNTOPOLOGY@@PEAUD3DKMDT_HVIDPNTOPOLOGY__@@@@SAPEAVDMMVI.c)
 *     ?GetContainer@?$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ @ 0x1C000C1AC (-GetContainer@-$ContainedBy@VDMMVIDPN@@@@QEBAPEAVDMMVIDPN@@XZ.c)
 *     Template_q @ 0x1C0011A2C (Template_q.c)
 *     ?RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z @ 0x1C0090F40 (-RemoveAllPathsFromSource@DMMVIDPNTOPOLOGY@@QEAAJI@Z.c)
 *     ?DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z @ 0x1C00992F4 (-DdiEnumVidPnCofuncModality@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_ENUMVIDPNCOFUNCMODALITY@@@Z.c)
 *     ??1ApplyPermissionWithinThisScope@@IEAA@XZ @ 0x1C00A58F0 (--1ApplyPermissionWithinThisScope@@IEAA@XZ.c)
 *     ??0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@Z @ 0x1C00A5940 (--0ApplyPermissionWithinThisScope@@IEAA@QEAVProtectableFromChange@@EW4ActionPermission_T@1@E_KE@.c)
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
  unsigned __int8 v7; // r9
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
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *v19; // rcx
  __int64 v20; // rcx
  D3DKMDT_HVIDPN Container; // r14
  __int64 v22; // rbx
  __int64 v23; // rax
  DXGADAPTER *v24; // rbx
  __int64 v25; // rcx
  unsigned __int8 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  ADAPTER_DISPLAY *v29; // rcx
  int v30; // eax
  __int64 v31; // rcx
  _QWORD *v32; // rax
  __int64 v34; // [rsp+20h] [rbp-50h]
  __int64 v35; // [rsp+20h] [rbp-50h]
  struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY v36; // [rsp+40h] [rbp-30h] BYREF
  _BYTE v37[24]; // [rsp+58h] [rbp-18h] BYREF

  v3 = (__int64)this;
  v4 = (unsigned int)a2;
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
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
      (__int64)&v36,
      v8 + 56,
      2u,
      v7,
      v34,
      *(_QWORD *)(v8 + 40));
    v13 = DMMVIDPNTOPOLOGY::RemoveAllPathsFromSource((DMMVIDPNTOPOLOGY *)v8, v4);
    v3 = v13;
    if ( v13 < 0 )
    {
      v18 = (_QWORD *)WdLogNewEntry5_WdTrace(v15, v14, v16, v17);
      v19 = &v36;
      v18[3] = v8;
      v18[4] = v4;
      v18[5] = v3;
LABEL_22:
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v19);
      goto LABEL_25;
    }
    ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)&v36);
    if ( *(_QWORD *)(v8 + 24) != v8 + 24 )
    {
      Container = (D3DKMDT_HVIDPN)ContainedBy<DMMVIDPN>::GetContainer(v8 + 160);
      v22 = *((_QWORD *)Container + 6);
      if ( !*(_QWORD *)(v22 + 8) )
      {
        v23 = WdLogNewEntry5_WdAssertion(v20);
        WdLogEvent5_WdAssertion(v23);
      }
      v24 = *(DXGADAPTER **)(*(_QWORD *)(v22 + 8) + 16LL);
      if ( !DXGADAPTER::IsCoreResourceSharedOwner(v24) )
      {
        v27 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v27);
      }
      LOBYTE(v25) = *(_BYTE *)(v8 + 76);
      if ( ((unsigned __int16)((2 << v25) - 1) & *(_WORD *)(v8 + 78)) != 0 )
      {
        v28 = WdLogNewEntry5_WdAssertion(v25);
        WdLogEvent5_WdAssertion(v28);
      }
      ApplyPermissionWithinThisScope::ApplyPermissionWithinThisScope(
        (__int64)v37,
        v8 + 56,
        3u,
        v26,
        v35,
        *(_QWORD *)(v8 + 40));
      *(_QWORD *)&v36.EnumPivotType = 0LL;
      *(_QWORD *)&v36.EnumPivot.VidPnTargetId = 0LL;
      if ( Container == (D3DKMDT_HVIDPN)-88LL )
        v36.hConstrainingVidPn = 0LL;
      else
        v36.hConstrainingVidPn = Container;
      v29 = (ADAPTER_DISPLAY *)*((_QWORD *)v24 + 248);
      v36.EnumPivotType = D3DKMDT_EPT_NOPIVOT;
      v36.EnumPivot.VidPnSourceId = -1;
      v36.EnumPivot.VidPnTargetId = -1;
      v30 = ADAPTER_DISPLAY::DdiEnumVidPnCofuncModality(v29, &v36);
      v3 = v30;
      if ( v30 < 0 )
      {
        v32 = (_QWORD *)WdLogNewEntry5_WdError(v31);
        v32[3] = Container;
        v32[4] = v4;
        v32[5] = v3;
        WdLogEvent5_WdError(v32);
        v19 = (struct _DXGKARG_ENUMVIDPNCOFUNCMODALITY *)v37;
        goto LABEL_22;
      }
      ApplyPermissionWithinThisScope::~ApplyPermissionWithinThisScope((ApplyPermissionWithinThisScope *)v37);
    }
    LODWORD(v3) = 0;
    goto LABEL_25;
  }
  v9 = WdLogNewEntry5_WdError(v6);
  *(_QWORD *)(v9 + 24) = v3;
  WdLogEvent5_WdError(v9);
  LODWORD(v3) = -1071774976;
LABEL_25:
  if ( (qword_1C00467F0 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x4000) != 0 )
    Template_q(v10, &EventProfilerExit, v11, 6025);
  return (unsigned int)v3;
}
