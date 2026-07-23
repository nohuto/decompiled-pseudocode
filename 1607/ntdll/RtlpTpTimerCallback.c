/*
 * XREFs of RtlpTpTimerCallback @ 0x18007E560
 * Callers:
 *     TppTimerpExecuteCallback @ 0x18003AE90 (TppTimerpExecuteCallback.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     TppCompleteThreadData @ 0x18003B324 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B360 (TppStartThreadData.c)
 *     RtlpTpImpersonate @ 0x18007E67C (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpTpTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  __int64 v4; // rcx
  struct _TEB *v5; // rdi
  __int64 ThreadInformation; // [rsp+58h] [rbp+10h] BYREF
  __int64 v7; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_BYTE *)a2 + 88) || !_InterlockedExchange((volatile __int32 *)a2 + 23, 1) )
  {
    v4 = *((_QWORD *)a2 + 2);
    if ( v4 )
      RtlpTpImpersonate(v4, a2, a3);
    v5 = NtCurrentTeb();
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        0LL,
        *((_QWORD *)a2 + 8),
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 5),
        (__int64)v5->SubProcessTag);
    TppStartThreadData(&v7, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), (__int64)v5->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      ThreadInformation = 0LL;
      NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
    }
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        0LL,
        *((_QWORD *)a2 + 8),
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 5),
        (__int64)v5->SubProcessTag);
    TppCompleteThreadData(v7);
  }
}
