/*
 * XREFs of safe_cast_fnid_to_PSWITCHWND @ 0x1C01CBD0C
 * Callers:
 *     ?Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z @ 0x1C01F6C9C (-Getpswi@@YAPEAUtagSwitchWndInfo@@PEAUtagWND@@@Z.c)
 *     xxxNextWindow @ 0x1C01F8858 (xxxNextWindow.c)
 *     xxxOldNextWindow @ 0x1C01F8E9C (xxxOldNextWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall safe_cast_fnid_to_PSWITCHWND(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
  {
    if ( (*(_WORD *)(a1 + 66) & 0x3FFF) == 0x2A0 )
      return a1;
  }
  return result;
}
