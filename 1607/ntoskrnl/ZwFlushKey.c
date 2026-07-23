/*
 * XREFs of ZwFlushKey @ 0x14015BD90
 * Callers:
 *     ExpRecordShutdownTime @ 0x14022C760 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x1403D0D4C (PopFlushVolumes.c)
 *     BcdFlushStore @ 0x140532F44 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x14055E880 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x14069615C (SepAuditFailed.c)
 *     VfUtilClearOneBootSettings @ 0x140702CB0 (VfUtilClearOneBootSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle);
}
