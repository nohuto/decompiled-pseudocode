/*
 * XREFs of KiIsTsaPresent @ 0x140208D4C
 * Callers:
 *     KeOptimizeSpecCtrlSettings @ 0x140208044 (KeOptimizeSpecCtrlSettings.c)
 *     KiDetectHardwareSpecControlFeatures @ 0x140208760 (KiDetectHardwareSpecControlFeatures.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 __fastcall KiIsTsaPresent(_BYTE *a1)
{
  char v8; // al
  unsigned __int8 v9; // al

  if ( a1[1597] != 1 )
    return 0LL;
  if ( (KeFeatureBits2 & 0xC0000000000LL) == 0xC0000000000LL )
    return 0LL;
  _RAX = 1LL;
  __asm { cpuid }
  if ( (int)_RCX < 0 )
    return 1LL;
  v8 = a1[1520];
  if ( v8 < 25 )
    return 0LL;
  if ( v8 == 26 && ((v9 = a1[1523], v9 <= 0x4Fu) || (unsigned __int8)(v9 - 96) <= 0x1Fu) )
    return 0LL;
  else
    return 1LL;
}
