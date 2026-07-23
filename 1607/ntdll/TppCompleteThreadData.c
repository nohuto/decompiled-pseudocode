/*
 * XREFs of TppCompleteThreadData @ 0x18003B324
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003A1B0 (RtlpTpWorkCallback.c)
 *     TppExecuteWaitCallback @ 0x18003AD44 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003AE90 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003B190 (TppIopExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x18007E560 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x18007FD30 (RtlpTpWaitCallback.c)
 *     TppSimplepExecuteCallback @ 0x180081160 (TppSimplepExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180084250 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x180096590 (RtlpTpIoCallback.c)
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
