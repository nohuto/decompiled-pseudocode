/*
 * XREFs of AslFileMappingGetViewBase @ 0x140705AE0
 * Callers:
 *     SdbOpenDatabaseEx @ 0x140701D44 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x140702DFC (SdbpCheckMatchingTextEntry.c)
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
