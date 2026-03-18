/*
 * XREFs of AslFileMappingGetViewBase @ 0x140680D24
 * Callers:
 *     SdbOpenDatabaseEx @ 0x14067CED8 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x14067DFA8 (SdbpCheckMatchingTextEntry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslFileMappingGetViewBase(__int64 a1)
{
  if ( a1 )
    return *(_QWORD *)(a1 + 544);
  else
    return 0LL;
}
