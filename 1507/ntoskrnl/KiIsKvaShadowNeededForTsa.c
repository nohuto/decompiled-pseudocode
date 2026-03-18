/*
 * XREFs of KiIsKvaShadowNeededForTsa @ 0x140208BD4
 * Callers:
 *     KiDetectKvaLeakage @ 0x1404026D0 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x140208760 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsTsaMitigationDesired @ 0x140208C9C (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x140208CB0 (KiIsTsaMitigationSupported.c)
 */

_BOOL8 __fastcall KiIsKvaShadowNeededForTsa(_BYTE *a1)
{
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  KiDetectHardwareSpecControlFeatures(a1, 0, (__int64)v3, 0LL);
  return (v3[0] & 0x8000000) != 0
      && (unsigned int)KiIsTsaMitigationDesired()
      && (unsigned int)KiIsTsaMitigationSupported(a1);
}
