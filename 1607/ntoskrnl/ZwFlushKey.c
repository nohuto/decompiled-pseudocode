/*
 * XREFs of ZwFlushKey @ 0x14015B820
 * Callers:
 *     ExpRecordShutdownTime @ 0x14022C934 (ExpRecordShutdownTime.c)
 *     PopFlushVolumes @ 0x1403D0D4C (PopFlushVolumes.c)
 *     BcdFlushStore @ 0x140532A04 (BcdFlushStore.c)
 *     CmpInterlockedFunction @ 0x14055E340 (CmpInterlockedFunction.c)
 *     SepAuditFailed @ 0x140696078 (SepAuditFailed.c)
 *     VfUtilClearOneBootSettings @ 0x140702C80 (VfUtilClearOneBootSettings.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwFlushKey(HANDLE KeyHandle)
{
  __int64 v1; // rdx
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(KeyHandle, v1, v2);
}
