/*
 * XREFs of ExGetCallBackBlockContext @ 0x1400101E8
 * Callers:
 *     PspExitProcess @ 0x14042257C (PspExitProcess.c)
 *     PspInsertThread @ 0x140423090 (PspInsertThread.c)
 *     PspInitializeThunkContext @ 0x14044FD4C (PspInitializeThunkContext.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A71BC (PspSetCreateProcessNotifyRoutine.c)
 *     DbgkpLkmdFireCallbacks @ 0x140669CE0 (DbgkpLkmdFireCallbacks.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406C60A4 (PsRemoveCreateThreadNotifyRoutine.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetCallBackBlockContext(__int64 a1)
{
  return *(_QWORD *)(a1 + 16);
}
