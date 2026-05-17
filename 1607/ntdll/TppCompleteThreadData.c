/*
 * XREFs of TppCompleteThreadData @ 0x18003B334
 * Callers:
 *     RtlpTpWorkCallback @ 0x18003A1C0 (RtlpTpWorkCallback.c)
 *     TppExecuteWaitCallback @ 0x18003AD54 (TppExecuteWaitCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003AEA0 (TppTimerpExecuteCallback.c)
 *     TppIopExecuteCallback @ 0x18003B1A0 (TppIopExecuteCallback.c)
 *     RtlpTpTimerCallback @ 0x18007E570 (RtlpTpTimerCallback.c)
 *     RtlpTpWaitCallback @ 0x18007FD40 (RtlpTpWaitCallback.c)
 *     TppSimplepExecuteCallback @ 0x180081170 (TppSimplepExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x180084260 (TppJobpExecuteCallback.c)
 *     RtlpTpIoCallback @ 0x1800965A0 (RtlpTpIoCallback.c)
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
