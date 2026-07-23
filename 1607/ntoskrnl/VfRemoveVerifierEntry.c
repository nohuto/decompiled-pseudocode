/*
 * XREFs of VfRemoveVerifierEntry @ 0x140721048
 * Callers:
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
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
