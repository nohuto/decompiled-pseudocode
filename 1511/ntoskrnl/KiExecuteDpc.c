/*
 * XREFs of KiExecuteDpc @ 0x1401338C8
 * Callers:
 *     <none>
 * Callees:
 *     KiExecuteAllDpcs @ 0x140044870 (KiExecuteAllDpcs.c)
 *     KeSetPriorityThread @ 0x14007D6F0 (KeSetPriorityThread.c)
 *     KeWaitForGate @ 0x1400DEBE8 (KeWaitForGate.c)
 *     KiTryToEndDpcProcessing @ 0x1400EF848 (KiTryToEndDpcProcessing.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x140133974 (KiSetSystemAffinityThreadToProcessor.c)
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
    KeWaitForGate(a1 + 22528, 5);
    do
    {
      *(_WORD *)(a1 + 11758) = 1;
      _disable();
      KiExecuteAllDpcs(a1, (__int64)CurrentThread, (__int64)v3, 1u);
      _enable();
    }
    while ( !KiTryToEndDpcProcessing((volatile signed __int16 *)(a1 + 11758), a1 + 11688) );
  }
}
