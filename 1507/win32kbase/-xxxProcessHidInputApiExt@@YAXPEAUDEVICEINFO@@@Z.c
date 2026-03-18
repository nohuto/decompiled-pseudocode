/*
 * XREFs of ?xxxProcessHidInputApiExt@@YAXPEAUDEVICEINFO@@@Z @ 0x1C00A4900
 * Callers:
 *     <none>
 * Callees:
 *     IsxxxProcessHidInputSupported_0 @ 0x1C0001AE0 (IsxxxProcessHidInputSupported_0.c)
 *     xxxProcessHidInput_0 @ 0x1C0001AE8 (xxxProcessHidInput_0.c)
 */

void __fastcall xxxProcessHidInputApiExt(struct DEVICEINFO *a1)
{
  if ( (int)IsxxxProcessHidInputSupported_0() >= 0 )
    xxxProcessHidInput_0();
}
