/*
 * XREFs of HvTruncateCurrentLogFileIfRequired @ 0x1403D4084
 * Callers:
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 * Callees:
 *     HvGetEffectiveLogSizeCapForHive @ 0x1403D4388 (HvGetEffectiveLogSizeCapForHive.c)
 *     HvpLogTypeToLogArrayIndex @ 0x1403D43F4 (HvpLogTypeToLogArrayIndex.c)
 *     CmpDoFileSetSizeEx @ 0x1404BC2A4 (CmpDoFileSetSizeEx.c)
 */

__int64 __fastcall HvTruncateCurrentLogFileIfRequired(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rbx
  __int64 v3; // rdi
  __int64 v4; // r11
  __int64 v5; // r11
  unsigned __int64 v6; // r8

  result = *(unsigned int *)(a1 + 144);
  if ( (result & 1) == 0 && (result & 0x8000) == 0 )
  {
    v2 = *(unsigned int *)(a1 + 148);
    if ( (_DWORD)v2 )
    {
      if ( *(_QWORD *)(a1 + 8 * v2 + 2664) )
      {
        v3 = (unsigned int)HvpLogTypeToLogArrayIndex((unsigned int)v2);
        result = HvGetEffectiveLogSizeCapForHive(v4);
        if ( *(_QWORD *)(v5 + 8 * v3 + 2976) > (unsigned __int64)(unsigned int)result )
        {
          v6 = *(unsigned int *)(v5 + 160);
          if ( *(_QWORD *)(v5 + 8 * v3 + 2976) > v6 )
            return CmpDoFileSetSizeEx(v5, (unsigned int)v2, v6, 0LL);
        }
      }
    }
  }
  return result;
}
