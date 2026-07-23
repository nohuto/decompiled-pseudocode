/*
 * XREFs of HvTruncateAllLogFilesIfRequired @ 0x1404D2C40
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 * Callees:
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x14047FADC (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14047FB48 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvTruncateAllLogFilesIfRequired(unsigned int *a1)
{
  unsigned int EffectiveLogSizeCapForHive; // eax
  __int64 v3; // r11
  __int64 result; // rax
  __int64 v5; // r11
  __int64 v6; // r11
  unsigned int v7; // edx

  if ( a1[37] == 1 )
  {
    HvpLogTypeToLogArrayIndex(1);
    result = HvGetEffectiveLogSizeCapForHive(a1);
    if ( *(_QWORD *)&a1[2 * v6 + 744] <= (unsigned __int64)(unsigned int)result )
      return result;
    v7 = 1;
    return CmpDoFileSetSizeEx((__int64)a1, v7, 0LL, 0);
  }
  HvpLogTypeToLogArrayIndex(4);
  EffectiveLogSizeCapForHive = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)&a1[2 * v3 + 744] > (unsigned __int64)EffectiveLogSizeCapForHive )
    CmpDoFileSetSizeEx((__int64)a1, 4u, 0LL, 0);
  HvpLogTypeToLogArrayIndex(5);
  result = HvGetEffectiveLogSizeCapForHive(a1);
  if ( *(_QWORD *)&a1[2 * v5 + 744] > (unsigned __int64)(unsigned int)result )
  {
    v7 = 5;
    return CmpDoFileSetSizeEx((__int64)a1, v7, 0LL, 0);
  }
  return result;
}
