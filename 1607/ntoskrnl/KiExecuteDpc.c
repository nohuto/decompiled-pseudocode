/*
 * XREFs of KiExecuteDpc @ 0x1401397A8
 * Callers:
 *     <none>
 * Callees:
 *     KiExecuteAllDpcs @ 0x140058E00 (KiExecuteAllDpcs.c)
 *     KeWaitForGate @ 0x140097498 (KeWaitForGate.c)
 *     KiTryToEndDpcProcessing @ 0x1400ACF84 (KiTryToEndDpcProcessing.c)
 *     KeSetPriorityThread @ 0x1400D0DC0 (KeSetPriorityThread.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140139854 (KiSetSystemAffinityThreadToProcessor.c)
 */

void __fastcall __noreturn KiExecuteDpc(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rdi
  _DWORD v3[68]; // [rsp+20h] [rbp-138h] BYREF

  CurrentThread = KeGetCurrentThread();
  KeSetPriorityThread(CurrentThread, 31);
  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 7u);
  KiSetSystemAffinityThreadToProcessor(*(unsigned int *)(a1 + 36), 0LL);
  *(_BYTE *)(a1 + 11752) = 1;
  while ( 1 )
  {
    v3[0] = 0;
    KeWaitForGate(a1 + 22528, 5u);
    do
    {
      *(_WORD *)(a1 + 11758) = 1;
      _disable();
      KiExecuteAllDpcs(a1, (__int64)CurrentThread, v3, 1u);
      _enable();
    }
    while ( !KiTryToEndDpcProcessing((volatile signed __int16 *)(a1 + 11758), a1 + 11688) );
  }
}
