/*
 * XREFs of PspDeferredWorkerRoutine @ 0x14067E840
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG __fastcall PspDeferredWorkerRoutine(__int64 a1)
{
  *(_DWORD *)(a1 + 40) = (*(__int64 (__fastcall **)(_QWORD))(a1 + 24))(*(_QWORD *)(a1 + 32));
  return KeSetEvent((PRKEVENT)a1, 1, 0);
}
