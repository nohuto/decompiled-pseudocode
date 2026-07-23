/*
 * XREFs of ZwFlushKey @ 0x140180B30
 * Callers:
 *     VerifierZwFlushKey @ 0x14025AFD4 (VerifierZwFlushKey.c)
 *     ExpRecordShutdownTime @ 0x140262720 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x1403ECAA4 (PopFlushVolumes.c)
 *     PopBcdClearPendingResume @ 0x14056E3CC (PopBcdClearPendingResume.c)
 *     CmpInterlockedFunction @ 0x1405A4CA0 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x1406D8BC0 (SepAuditFailed.c)
 *     VfUtilClearOneBootSettings @ 0x14073777C (VfUtilClearOneBootSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
