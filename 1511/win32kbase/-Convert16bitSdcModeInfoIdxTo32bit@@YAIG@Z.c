/*
 * XREFs of ?Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z @ 0x1C00B9DB4
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00892C0 (DrvSetDisplayConfigValidateParams.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00B9E2C (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Convert16bitSdcModeInfoIdxTo32bit(unsigned __int16 a1)
{
  if ( a1 == 0xFFFF )
    return 0xFFFFFFFFLL;
  else
    return a1;
}
