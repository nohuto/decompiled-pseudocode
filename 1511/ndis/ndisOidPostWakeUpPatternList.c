/*
 * XREFs of ndisOidPostWakeUpPatternList @ 0x1C00464E0
 * Callers:
 *     <none>
 * Callees:
 *     ndisXlateWolPatternListToWakeUpPatternList @ 0x1C00C61A0 (ndisXlateWolPatternListToWakeUpPatternList.c)
 */

__int64 __fastcall ndisOidPostWakeUpPatternList(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 32);
  if ( *(_DWORD *)(result + 4) && *(_DWORD *)(result + 32) == -50265844 )
  {
    *(_DWORD *)(result + 32) = -50265851;
    if ( !*(_DWORD *)(a1 + 40) )
      return ndisXlateWolPatternListToWakeUpPatternList();
  }
  return result;
}
