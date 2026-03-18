/*
 * XREFs of KeInitializeTimer @ 0x14002BFFC
 * Callers:
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeTimer(PKTIMER Timer)
{
  *(_QWORD *)&Timer->Header.Lock = 0LL;
  Timer->Header.Type = 8;
  Timer->Header.WaitListHead.Blink = &Timer->Header.WaitListHead;
  Timer->Header.WaitListHead.Flink = &Timer->Header.WaitListHead;
  Timer->DueTime.QuadPart = 0LL;
  *(_QWORD *)&Timer->Processor = 0LL;
}
