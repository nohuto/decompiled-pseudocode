/*
 * XREFs of ?PropVariantCompare@@YAHAEBUtagPROPVARIANT@@0@Z @ 0x180087CE8
 * Callers:
 *     ?UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@@Z @ 0x18003742C (-UpdateDeviceFormatEPProperty@CPolicyConfig@@CAJHPEAUIMMDevice@@W4__MIDL___MIDL_itf_audioenginee.c)
 * Callees:
 *     <none>
 */

int __fastcall PropVariantCompare(const PROPVARIANT *a1, const PROPVARIANT *a2)
{
  return PropVariantCompareEx(a1, a2, PVCU_DEFAULT, 0);
}
