/*
 * XREFs of TppTimerpExecuteCallback @ 0x18003AEA0
 * Callers:
 *     TppWorkerThread @ 0x18001E750 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFD0 (TppWorkCallbackPrologRelease.c)
 *     TppCompleteThreadData @ 0x18003B334 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B370 (TppStartThreadData.c)
 *     RtlpTpTimerCallback @ 0x18007E570 (RtlpTpTimerCallback.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppTimerpExecuteCallback(__int64 a1, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  void (__fastcall *v6)(__int64, __int64, __int64 *); // rax
  __int64 v7; // rdx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)(a2 - 200);
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(v2[18], a2, v2[10], v2[11], v2[13]);
  result = TppWorkCallbackPrologRelease(a1, v2, 0LL);
  if ( (_DWORD)result )
  {
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(v2[18], a2, v2[10], v2[11], v2[13]);
    TppStartThreadData(&v8, v2[10], v2[11], v2[13]);
    *(_QWORD *)(a1 + 88) = v2[10];
    *(_QWORD *)(a1 + 96) = v2[11];
    v6 = (void (__fastcall *)(__int64, __int64, __int64 *))v2[10];
    v7 = v2[11];
    if ( (char *)v6 == (char *)RtlpTpTimerCallback )
      RtlpTpTimerCallback(a1, v7, v2);
    else
      v6(a1, v7, v2);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(v2[18], a2, v2[10], v2[11], v2[13]);
    return TppCompleteThreadData(v8);
  }
  return result;
}
