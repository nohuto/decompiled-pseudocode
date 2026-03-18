/*
 * XREFs of ?Convert16bitSdcModeInfoIdxTo32bit@@YAIG@Z @ 0x1C00C5A74
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C008A260 (DrvSetDisplayConfigValidateParams.c)
 *     ?ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUDISPLAYCONFIG_MODE_INFO@@IHPEAU_D3DKMT_GETPATHSMODALITY@@PEAH@Z @ 0x1C00C5AEC (-ConvertDisplayConfigPathIntoExistingPathModalityAtIdx@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@IIIPEAUD.c)
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
