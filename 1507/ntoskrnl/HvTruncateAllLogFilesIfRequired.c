/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x14055BA64
 * Callers:
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x14044D690 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14044D6E8 (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // r11
  unsigned int v4; // edx

  if ( *(_DWORD *)(a1 + 148) == 1 )
  {
    result = HvGetEffectiveLogSizeCapForHive(a1);
    if ( *(_QWORD *)(a1 + 2976) <= (unsigned __int64)(unsigned int)result )
      return result;
    v4 = 1;
    return CmpDoFileSetSizeEx(a1, v4, 0LL, 0);
  }
  if ( *(_QWORD *)(a1 + 2976) > (unsigned __int64)(unsigned int)HvGetEffectiveLogSizeCapForHive(a1) )
    CmpDoFileSetSizeEx(a1, 4u, 0LL, 0);
  HvpLogTypeToLogArrayIndex(5);
  result = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)(a1 + 8 * v3 + 2976) > (unsigned __int64)(unsigned int)result )
  {
    v4 = 5;
    return CmpDoFileSetSizeEx(a1, v4, 0LL, 0);
  }
  return result;
}
