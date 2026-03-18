/*
 * XREFs of GetDpiSetting @ 0x1403034A0
 * Callers:
 *     <none>
 * Callees:
 *     GetDpiSettingWithNoDefault @ 0x1403034C0 (GetDpiSettingWithNoDefault.c)
 */

__int64 __fastcall GetDpiSetting(__int64 a1, _DWORD *a2)
{
  *a2 = 96;
  return GetDpiSettingWithNoDefault(a1, a2);
}
