/*
 * XREFs of HvTruncateCurrentLogFileIfRequired @ 0x14047F7CC
 * Callers:
 *     CmpFlushHive @ 0x1403F8F8C (CmpFlushHive.c)
 * Callees:
 *     CmpDoFileSetSizeEx @ 0x14047D650 (CmpDoFileSetSizeEx.c)
 *     HvGetEffectiveLogSizeCapForHive @ 0x14047FADC (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x14047FB48 (HvpLogTypeToLogArrayIndex.c)
 */

__int64 __fastcall HvTruncateCurrentLogFileIfRequired(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r11
  __int64 v7; // r11
  unsigned __int64 v8; // r8

  result = *(unsigned int *)(a1 + 144);
  if ( (result & 1) == 0 && (result & 0x8000) == 0 )
  {
    v2 = *(unsigned int *)(a1 + 148);
    if ( (_DWORD)v2 )
    {
      if ( *(_QWORD *)(a1 + 8 * v2 + 2664) )
      {
        v3 = (unsigned int)HvpLogTypeToLogArrayIndex((unsigned int)v2);
        result = HvGetEffectiveLogSizeCapForHive(v6, v4, v5);
        if ( *(_QWORD *)(v7 + 8 * v3 + 2976) > (unsigned __int64)(unsigned int)result )
        {
          v8 = *(unsigned int *)(v7 + 160);
          if ( *(_QWORD *)(v7 + 8 * v3 + 2976) > v8 )
            return CmpDoFileSetSizeEx(v7, v2, v8, 0);
        }
      }
    }
  }
  return result;
}
