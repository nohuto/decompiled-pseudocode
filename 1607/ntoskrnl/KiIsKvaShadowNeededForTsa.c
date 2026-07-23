/*
 * XREFs of KiIsKvaShadowNeededForTsa @ 0x1401D9B28
 * Callers:
 *     KiDetectKvaLeakage @ 0x1403DDD24 (KiDetectKvaLeakage.c)
 * Callees:
 *     KiDetectHardwareSpecControlFeatures @ 0x1401D96C8 (KiDetectHardwareSpecControlFeatures.c)
 *     KiIsTsaMitigationDesired @ 0x1401D9BF0 (KiIsTsaMitigationDesired.c)
 *     KiIsTsaMitigationSupported @ 0x1401D9C04 (KiIsTsaMitigationSupported.c)
 */

_BOOL8 __fastcall KiIsKvaShadowNeededForTsa(_BYTE *a1)
{
  _DWORD v3[6]; // [rsp+20h] [rbp-18h] BYREF

  KiDetectHardwareSpecControlFeatures(a1, 0, (__int64)v3, 0LL);
  return (v3[0] & 0x8000000) != 0
      && (unsigned int)KiIsTsaMitigationDesired()
      && (unsigned int)KiIsTsaMitigationSupported(a1);
}
