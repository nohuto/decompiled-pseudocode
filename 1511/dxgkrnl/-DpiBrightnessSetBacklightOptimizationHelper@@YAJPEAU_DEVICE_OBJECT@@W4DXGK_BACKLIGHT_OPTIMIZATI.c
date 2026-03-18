/*
 * XREFs of ?DpiBrightnessSetBacklightOptimizationHelper@@YAJPEAU_DEVICE_OBJECT@@W4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C017124C
 * Callers:
 *     ?DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C01706D4 (-DpiBrightnessAISetBacklightOptLevel@@YAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z @ 0x1C0170FC0 (-DpiBrightnessIfSetBacklightOptimization@@YAJPEAXW4DXGK_BACKLIGHT_OPTIMIZATION_LEVEL@@@Z.c)
 * Callees:
 *     sub_1C0171454 @ 0x1C0171454 (sub_1C0171454.c)
 */

__int64 __fastcall DpiBrightnessSetBacklightOptimizationHelper(
        struct _DEVICE_OBJECT *a1,
        enum DXGK_BACKLIGHT_OPTIMIZATION_LEVEL a2)
{
  _QWORD *DeviceExtension; // rbx
  __int64 result; // rax

  DeviceExtension = a1->DeviceExtension;
  if ( !DeviceExtension[408] || a2 == *((_DWORD *)DeviceExtension + 729) )
    return 0LL;
  result = sub_1C0171454(a1, DeviceExtension + 399);
  if ( (int)result >= 0 )
    *((_DWORD *)DeviceExtension + 729) = a2;
  return result;
}
