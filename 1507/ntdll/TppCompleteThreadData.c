/*
 * XREFs of TppCompleteThreadData @ 0x18003C368
 * Callers:
 *     TppExecuteWaitCallback @ 0x18000B324 (TppExecuteWaitCallback.c)
 *     RtlpTpWaitCallback @ 0x18000BCB0 (RtlpTpWaitCallback.c)
 *     TppIopExecuteCallback @ 0x18003C020 (TppIopExecuteCallback.c)
 *     TppTimerpExecuteCallback @ 0x18003C590 (TppTimerpExecuteCallback.c)
 *     TppSimplepExecuteCallback @ 0x180072360 (TppSimplepExecuteCallback.c)
 *     TppJobpExecuteCallback @ 0x1800782D0 (TppJobpExecuteCallback.c)
 *     RtlpTpWorkCallback @ 0x18007C030 (RtlpTpWorkCallback.c)
 *     RtlpTpTimerCallback @ 0x18007E0E0 (RtlpTpTimerCallback.c)
 *     RtlpTpIoCallback @ 0x1800F5F70 (RtlpTpIoCallback.c)
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
