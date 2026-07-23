/*
 * XREFs of TppTimerpExecuteCallback @ 0x1800099C0
 * Callers:
 *     TppWorkerThread @ 0x18002B350 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x180001280 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800012F8 (RtlpTpETWCallbackStop.c)
 *     TppETWCallbackDequeue @ 0x1800016D4 (TppETWCallbackDequeue.c)
 *     TppCompleteThreadData @ 0x180009CC4 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180009D00 (TppStartThreadData.c)
 *     TppWorkCallbackPrologRelease @ 0x180009D94 (TppWorkCallbackPrologRelease.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 */

__int64 __fastcall TppTimerpExecuteCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  __int64 *v2; // rdi
  __int64 result; // rax
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)(a2 - 192);
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(v2[17], a2, v2[10], v2[11], v2[13]);
  result = TppWorkCallbackPrologRelease(Instance);
  if ( (_DWORD)result )
  {
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(v2[17], a2, v2[10], v2[11], v2[13]);
    TppStartThreadData(&v6, v2[10], v2[11], v2[13]);
    *((_QWORD *)Instance + 11) = v2[10];
    *((_QWORD *)Instance + 12) = v2[11];
    ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, __int64, __int64 *))v2[10])(Instance, v2[11], v2);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(v2[17], a2, v2[10], v2[11], v2[13]);
    return TppCompleteThreadData(v6);
  }
  return result;
}
