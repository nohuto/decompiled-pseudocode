/*
 * XREFs of DbgkpSuspendProcess @ 0x14061ADB4
 * Callers:
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     DbgkpSendApiMessage @ 0x14061A30C (DbgkpSendApiMessage.c)
 *     DbgkpSendApiMessageLpc @ 0x14061A408 (DbgkpSendApiMessageLpc.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     PsFreezeProcess @ 0x14051E428 (PsFreezeProcess.c)
 */

char __fastcall DbgkpSuspendProcess(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  if ( PsFreezeProcess(a1, 0) )
    return 1;
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return 0;
}
