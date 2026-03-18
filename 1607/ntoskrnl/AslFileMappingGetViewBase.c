/*
 * XREFs of AslFileMappingGetViewBase @ 0x1406C5E18
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1406C1624 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1406C2AE8 (SdbpCheckMatchingTextEntry.c)
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
