/*
 * XREFs of MiIrpCompletionApcRoutine @ 0x1401DCCAC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall MiIrpCompletionApcRoutine(struct _KEVENT *ApcContext, PIO_STATUS_BLOCK IoStatusBlock, ULONG Reserved)
{
  KeSetEvent(ApcContext, 0, 0);
}
