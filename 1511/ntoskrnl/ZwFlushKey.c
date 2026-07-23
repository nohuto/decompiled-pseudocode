/*
 * XREFs of ZwFlushKey @ 0x140152180
 * Callers:
 *     VerifierZwFlushKey @ 0x14020B938 (VerifierZwFlushKey.c)
 *     ExpRecordShutdownTime @ 0x140212FE8 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x1403A39C4 (PopFlushVolumes.c)
 *     PopBcdClearPendingResume @ 0x1404FBDA4 (PopBcdClearPendingResume.c)
 *     CmpInterlockedFunction @ 0x14051EBB4 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x140656708 (SepAuditFailed.c)
 *     VfUtilClearOneBootSettings @ 0x1406B7488 (VfUtilClearOneBootSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
