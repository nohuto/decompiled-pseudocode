/*
 * XREFs of FsRtlWaitForSmssEvent @ 0x140581A90
 * Callers:
 *     <none>
 * Callees:
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 */

LONG_PTR __fastcall FsRtlWaitForSmssEvent(void *a1)
{
  KeWaitForSingleObject(a1, Executive, 0, 0, 0LL);
  FsRtlpVolumeStartupApplicationsComplete = 1;
  return ObfDereferenceObject(a1);
}
