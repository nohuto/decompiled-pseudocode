/*
 * XREFs of NtGdiRemoveFontMemResourceEx @ 0x14024FF70
 * Callers:
 *     <none>
 * Callees:
 *     ?GrepRemoveFontMemResource@@YAHPEAX@Z @ 0x14024FF90 (-GrepRemoveFontMemResource@@YAHPEAX@Z.c)
 */

__int64 __fastcall NtGdiRemoveFontMemResourceEx(void *a1)
{
  if ( a1 )
    return GrepRemoveFontMemResource(a1);
  else
    return 0LL;
}
