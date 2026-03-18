/*
 * XREFs of KiExecuteDpc @ 0x14016315C
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x14009B5F0 (KeSetPriorityThread.c)
 *     KiExecuteAllDpcs @ 0x1400A53E0 (KiExecuteAllDpcs.c)
 *     KeWaitForGate @ 0x140126304 (KeWaitForGate.c)
 *     KiSetSystemAffinityThreadToProcessor @ 0x14016320C (KiSetSystemAffinityThreadToProcessor.c)
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
    KeWaitForGate((_DWORD *)(a1 + 22528), 5u);
    do
    {
      *(_WORD *)(a1 + 11758) = 1;
      _disable();
      KiExecuteAllDpcs(a1, (__int64)CurrentThread, v3, 1u);
      _enable();
    }
    while ( _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 11758), 0, 1) != 1 );
    *(_QWORD *)(a1 + 11720) = 0LL;
  }
}
