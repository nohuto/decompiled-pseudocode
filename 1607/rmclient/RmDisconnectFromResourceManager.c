/*
 * XREFs of RmDisconnectFromResourceManager @ 0x180009940
 * Callers:
 *     <none>
 * Callees:
 *     RmpClientConnectionCleanup @ 0x180009B7C (RmpClientConnectionCleanup.c)
 */

__int64 __fastcall RmDisconnectFromResourceManager(PVOID P)
{
  RmpClientConnectionCleanup();
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
