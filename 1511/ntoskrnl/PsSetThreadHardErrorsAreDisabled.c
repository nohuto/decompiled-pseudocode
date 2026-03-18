/*
 * XREFs of PsSetThreadHardErrorsAreDisabled @ 0x140141620
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PsSetThreadHardErrorsAreDisabled(__int64 a1, char a2)
{
  if ( a2 )
    _InterlockedOr((volatile signed __int32 *)(a1 + 1724), 0x10u);
  else
    _InterlockedAnd((volatile signed __int32 *)(a1 + 1724), 0xFFFFFFEF);
}
