/*
 * XREFs of ?Serialize@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH@@@Z @ 0x1C0081030
 * Callers:
 *     ?SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@Z @ 0x1C0080CB8 (-SerializeFunctionalPath@DMMVIDPNPRESENTPATH@@QEBAJQEAU_D3DKMDT_FUNCTIONAL_VIDPN_PRESENT_PATH@@@.c)
 *     DmmUpdateGammaRampOnAllClientVidPnPathsFromSource @ 0x1C00B9AE8 (DmmUpdateGammaRampOnAllClientVidPnPathsFromSource.c)
 *     DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource @ 0x1C00B9E40 (DmmUpdateCopyProtectionOnAllClientVidPnPathsFromSource.c)
 *     ?UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@@Z @ 0x1C01A2934 (-UpdateRotationAllClientVidPnPathsFromSource@VIDPN_MGR@@QEAAJIW4_D3DKMDT_VIDPN_PRESENT_PATH_ROTA.c)
 *     DmmUpdateContentOnAllClientVidPnPathsFromSource @ 0x1C01A4E2C (DmmUpdateContentOnAllClientVidPnPathsFromSource.c)
 *     ?SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV?$AutoBuffer@U_DMM_COFUNCPATHSMODALITY_SERIALIZATION@@@DMM@@@Z @ 0x1C01A7D44 (-SerializeCofuncPathsModalityFromPinnedSource@DMMVIDPNTOPOLOGY@@QEBAJIQEAV-$AutoBuffer@U_DMM_COF.c)
 *     ?Serialize@DMMVIDPN@@QEBAJPEAV?$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z @ 0x1C01A9694 (-Serialize@DMMVIDPN@@QEBAJPEAV-$AutoBuffer@U_DMM_VIDPN_SERIALIZATION@@@DMM@@@Z.c)
 * Callees:
 *     ?GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z @ 0x1C0004DFC (-GetScalingSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_SCALING_SUPPORT@@@Z.c)
 *     ?GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@@Z @ 0x1C0004E28 (-GetRotationSupport@DMMVIDPNPRESENTPATH@@QEBAXQEAU_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION_SUPPORT@@.c)
 *     ?GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ @ 0x1C0034370 (-GetMacroVisionTriggerBits@DMMVIDPNPRESENTPATH@@QEBAIXZ.c)
 */

void __fastcall DMMVIDPNPRESENTPATH::Serialize(DMMVIDPNPRESENTPATH *this, struct _D3DKMDT_VIDPN_PRESENT_PATH *const a2)
{
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
    a2->CopyProtection.APSTriggerBits = DMMVIDPNPRESENTPATH::GetMacroVisionTriggerBits(this);
  else
    a2->CopyProtection.APSTriggerBits = 0;
  memset(a2->CopyProtection.OEMCopyProtection, 0, sizeof(a2->CopyProtection.OEMCopyProtection));
}
