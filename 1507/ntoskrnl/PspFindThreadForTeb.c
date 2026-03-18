/*
 * XREFs of PspFindThreadForTeb @ 0x1406C36DC
 * Callers:
 *     KiSwapToUmsThread @ 0x14069A118 (KiSwapToUmsThread.c)
 *     PspDisassociateUmsThreadFromPrimary @ 0x1406C6604 (PspDisassociateUmsThreadFromPrimary.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     PsLookupThreadByThreadId @ 0x1405115F0 (PsLookupThreadByThreadId.c)
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
