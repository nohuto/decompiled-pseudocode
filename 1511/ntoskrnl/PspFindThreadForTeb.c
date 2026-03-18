/*
 * XREFs of PspFindThreadForTeb @ 0x14064116C
 * Callers:
 *     KiSwapToUmsThread @ 0x14061B5DC (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x140643914 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsLookupThreadByThreadId @ 0x140436060 (PsLookupThreadByThreadId.c)
 */

PETHREAD __fastcall PspFindThreadForTeb(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rbx
  PETHREAD Thread; // [rsp+40h] [rbp+8h] BYREF

  Thread = 0LL;
  CurrentThread = KeGetCurrentThread();
  if ( a1
    && PsLookupThreadByThreadId(*(HANDLE *)(a1 + 72), &Thread) >= 0
    && (Thread->Process != CurrentThread->Process || (Thread->Header.Reserved1 & 0x40) == 0) )
  {
    ObfDereferenceObject(Thread);
    return 0LL;
  }
  return Thread;
}
