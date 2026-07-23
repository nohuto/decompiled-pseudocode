/*
 * XREFs of TppTimerpExecuteCallback @ 0x18003AE90
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     TppETWCallbackDequeue @ 0x1800013B0 (TppETWCallbackDequeue.c)
 *     TppWorkCallbackPrologRelease @ 0x18003AFC0 (TppWorkCallbackPrologRelease.c)
 *     TppCompleteThreadData @ 0x18003B324 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B360 (TppStartThreadData.c)
 *     RtlpTpTimerCallback @ 0x18007E560 (RtlpTpTimerCallback.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall TppTimerpExecuteCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  __int64 *v2; // rbx
  __int64 result; // rax
  void (__cdecl *v6)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER); // rax
  void *v7; // rdx
  __int64 v8; // [rsp+48h] [rbp+10h] BYREF

  v2 = (__int64 *)(a2 - 200);
  if ( MEMORY[0x7FFE0386] )
    TppETWCallbackDequeue(v2[18], a2, v2[10], v2[11], v2[13]);
  result = TppWorkCallbackPrologRelease(Instance);
  if ( (_DWORD)result )
  {
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(v2[18], a2, v2[10], v2[11], v2[13]);
    TppStartThreadData(&v8, v2[10], v2[11], v2[13]);
    *((_QWORD *)Instance + 11) = v2[10];
    *((_QWORD *)Instance + 12) = v2[11];
    v6 = (void (__cdecl *)(PTP_CALLBACK_INSTANCE, PVOID, PTP_TIMER))v2[10];
    v7 = (void *)v2[11];
    if ( v6 == RtlpTpTimerCallback )
      RtlpTpTimerCallback(Instance, v7, (PTP_TIMER)v2);
    else
      ((void (__fastcall *)(PTP_CALLBACK_INSTANCE, void *, __int64 *))v6)(Instance, v7, v2);
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(v2[18], a2, v2[10], v2[11], v2[13]);
    return TppCompleteThreadData(v8);
  }
  return result;
}
