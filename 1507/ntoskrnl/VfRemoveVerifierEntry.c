/*
 * XREFs of VfRemoveVerifierEntry @ 0x140758A3C
 * Callers:
 *     NtSetSystemInformation @ 0x140453DF8 (NtSetSystemInformation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VfRemoveVerifierEntry(const UNICODE_STRING *a1)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return VfSuspectDriversRemove(a1);
  else
    return 3221225659LL;
}
