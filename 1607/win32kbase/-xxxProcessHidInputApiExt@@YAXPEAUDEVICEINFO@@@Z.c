/*
 * XREFs of ?xxxProcessHidInputApiExt@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00B45B0
 * Callers:
 *     <none>
 * Callees:
 *     IsxxxProcessHidInputSupported_0 @ 0x1C00027B0 (IsxxxProcessHidInputSupported_0.c)
 *     xxxProcessHidInput_0 @ 0x1C00027B8 (xxxProcessHidInput_0.c)
 */

void __fastcall xxxProcessHidInputApiExt(struct DEVICEINFO *a1)
{
  if ( (int)IsxxxProcessHidInputSupported_0() >= 0 )
    xxxProcessHidInput_0();
}
