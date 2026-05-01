/*
 * XREFs of RmpEmptyWorkerCleanup @ 0x18003AD34
 * Callers:
 *     RmpEnforcementInfoInitializeCommon @ 0x180009C18 (RmpEnforcementInfoInitializeCommon.c)
 *     RmpActivityHostFinalCleanup @ 0x180009EAC (RmpActivityHostFinalCleanup.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall RmpEmptyWorkerCleanup(__int64 *a1)
{
  __int64 v2; // rcx
  NTSTATUS result; // eax
  void *v4; // rcx
  void *v5; // rcx

  v2 = *a1;
  if ( v2 )
    result = TpReleaseWork(v2);
  v4 = (void *)a1[1];
  if ( v4 )
    result = NtClose(v4);
  v5 = (void *)a1[2];
  if ( v5 )
    return NtClose(v5);
  return result;
}
