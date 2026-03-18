/*
 * XREFs of ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C00B726C
 * Callers:
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C005FA7C (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B6F10 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C00CBD24 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C0174978 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C0177438 (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C017A518 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C017C590 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0005D74 (-GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0005DA0 (-GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C002C320 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::Serialize(DMMVIDPNPRESENTPATH *this, struct _D3DKMDT_VIDPN_PRESENT_PATH *const a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9

  a2->VidPnSourceId = *(_DWORD *)(*((_QWORD *)this + 11) + 24LL);
  a2->VidPnTargetId = *(_DWORD *)(*((_QWORD *)this + 12) + 24LL);
  a2->ImportanceOrdinal = *((_DWORD *)this + 26);
  a2->ContentTransformation.Scaling = *((_DWORD *)this + 28);
  a2->ContentTransformation.Rotation = *((_DWORD *)this + 29);
  a2->VisibleFromActiveTLOffset = (D3DKMDT_2DOFFSET)*((_QWORD *)this + 16);
  a2->VisibleFromActiveBROffset = (D3DKMDT_2DOFFSET)*((_QWORD *)this + 17);
  a2->VidPnTargetColorBasis = *((_DWORD *)this + 36);
  a2->VidPnTargetColorCoeffDynamicRanges = *(D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES *)((char *)this + 148);
  a2->Content = *((_DWORD *)this + 41);
  a2->GammaRamp = *(D3DKMDT_GAMMA_RAMP *)((char *)this + 184);
  a2->CopyProtection.CopyProtectionSupport = (D3DKMDT_VIDPN_PRESENT_PATH_COPYPROTECTION_SUPPORT)*((_DWORD *)this + 42);
  a2->CopyProtection.CopyProtectionType = *((_DWORD *)this + 43);
  DMMVIDPNPRESENTPATH::GetScalingSupport(this, &a2->ContentTransformation.ScalingSupport);
  DMMVIDPNPRESENTPATH::GetRotationSupport(this, &a2->ContentTransformation.RotationSupport);
  if ( *((_DWORD *)this + 43) == 2 )
    a2->CopyProtection.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this, v4, v5, v6);
  else
    a2->CopyProtection.APSTriggerBits = 0;
  memset(a2->CopyProtection.OEMCopyProtection, 0, sizeof(a2->CopyProtection.OEMCopyProtection));
}
