/*
 * XREFs of TppCompleteThreadData @ 0x180009CC4
 * Callers:
 *     RtlpTpWaitCallback @ 0x180005F50 (RtlpTpWaitCallback.c)
 *     TppSimplepExecuteCallback @ 0x180006730 (TppSimplepExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x180006FD0 (RtlpTpTimerCallback.c)
 *     RtlpTpWorkCallback @ 0x180008E40 (RtlpTpWorkCallback.c)
 *     TppExecuteWaitCallback @ 0x180009874 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x1800099C0 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x180009AF0 (TppIopExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180083F20 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800950E0 (RtlpTpIoCallback.c)
 * Callees:
 *     <none>
 */

void __fastcall TppCompleteThreadData(__int64 a1)
{
  if ( a1 )
  {
    if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= *(_QWORD *)(a1 + 24) )
      *(_QWORD *)(a1 + 24) = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] - *(_QWORD *)(a1 + 24);
  }
}
