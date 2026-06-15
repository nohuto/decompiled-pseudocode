/*
 * XREFs of ?GetDisplayName@CDisplayNode@@QEAAPEBDXZ @ 0x140033B70
 * Callers:
 *     ?Serialize@CDisplayNode@@QEAAJAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@AEAPEAEAEAI@Z @ 0x140034254 (-Serialize@CDisplayNode@@QEAAJAEAV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNod.c)
 * Callees:
 *     <none>
 */

const char *__fastcall CDisplayNode::GetDisplayName(CDisplayNode *this)
{
  __int64 v1; // rax
  const char *result; // rax
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx

  v1 = *(_QWORD *)this;
  if ( *(_DWORD *)(*(_QWORD *)this + 40LL) == 3 )
    return "Cross Process";
  if ( *(_DWORD *)(v1 + 40) == 1 )
    return "Device";
  v3 = *(_QWORD *)(v1 + 32);
  if ( *(_DWORD *)(v3 + 4) )
    return "SysFx";
  v4 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_d69e0717_dd4b_4b25_997a_da813833b8ac.Data1;
  if ( !v4 )
    v4 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_d69e0717_dd4b_4b25_997a_da813833b8ac.Data4;
  if ( !v4 )
    return "Limiter";
  v5 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba.Data1;
  if ( !v5 )
    v5 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba.Data4;
  if ( !v5 )
    return "Meter";
  v6 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_06587e71_f043_403a_bf49_cb591ba6e103.Data1;
  if ( !v6 )
    v6 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_06587e71_f043_403a_bf49_cb591ba6e103.Data4;
  if ( !v6 )
    return "Volume";
  v7 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_27c98999_2895_4829_b080_5a8b65bd3db0.Data1;
  if ( !v7 )
    v7 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_27c98999_2895_4829_b080_5a8b65bd3db0.Data4;
  if ( !v7 )
    return "SRC CMPT";
  v8 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_c58bd103_e87f_4b78_a0fa_7a5c95970ee2.Data1;
  if ( !v8 )
    v8 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_c58bd103_e87f_4b78_a0fa_7a5c95970ee2.Data4;
  if ( !v8 )
    return "SRC";
  v9 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_07252659_bb6b_4b79_b78b_623f6699a579.Data1;
  if ( !v9 )
    v9 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_07252659_bb6b_4b79_b78b_623f6699a579.Data4;
  if ( !v9 )
    return "Constrictor";
  v10 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a.Data1;
  if ( !v10 )
    v10 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_12dd4dbb_532b_4fce_8653_74cdb9c8fe5a.Data4;
  if ( !v10 )
    return "Mixer";
  v11 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b.Data1;
  if ( !v11 )
    v11 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b.Data4;
  if ( !v11 )
    return "Matrix";
  v12 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e.Data1;
  if ( !v12 )
    v12 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_e916b6b2_22bd_4afc_b337_d3d9fb27670e.Data4;
  if ( !v12 )
    return "Copy";
  v13 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec.Data1;
  if ( !v13 )
    v13 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_0f92ff8d_2f19_4b9a_b9dd_3efc2b3becec.Data4;
  if ( !v13 )
    return "Cleanup";
  v14 = *(_QWORD *)(v3 + 8) - *(_QWORD *)&GUID_3fd7f233_a716_472e_8f2f_c25954f34e96.Data1;
  if ( !v14 )
    v14 = *(_QWORD *)(v3 + 16) - *(_QWORD *)GUID_3fd7f233_a716_472e_8f2f_c25954f34e96.Data4;
  result = "Format Converter";
  if ( v14 )
    return "Unknown";
  return result;
}
