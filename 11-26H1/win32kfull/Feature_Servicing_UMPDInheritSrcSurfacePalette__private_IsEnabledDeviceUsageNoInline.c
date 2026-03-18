/*
 * XREFs of Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledDeviceUsageNoInline @ 0x14030F228
 * Callers:
 *     ?bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z @ 0x14027D524 (-bCopySurface@@YAHPEAVSURFMEM@@PEAU_SURFOBJ@@@Z.c)
 * Callees:
 *     Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledFallback @ 0x14030F264 (Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_UMPDInheritSrcSurfacePalette__private_featureState & 0x10) != 0 )
    return Feature_Servicing_UMPDInheritSrcSurfacePalette__private_featureState & 1;
  else
    return Feature_Servicing_UMPDInheritSrcSurfacePalette__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_UMPDInheritSrcSurfacePalette__private_featureState,
             3LL);
}
