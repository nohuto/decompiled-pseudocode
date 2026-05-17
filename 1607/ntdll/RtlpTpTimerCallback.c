/*
 * XREFs of RtlpTpTimerCallback @ 0x18007E570
 * Callers:
 *     TppTimerpExecuteCallback @ 0x18003AEA0 (TppTimerpExecuteCallback.c)
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     TppCompleteThreadData @ 0x18003B334 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B370 (TppStartThreadData.c)
 *     RtlpTpImpersonate @ 0x18007E68C (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  struct _TEB *v3; // rdi
  __int64 v4; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88) || !_InterlockedExchange((volatile __int32 *)(a2 + 92), 1) )
  {
    if ( *(_QWORD *)(a2 + 16) )
      RtlpTpImpersonate();
    v3 = NtCurrentTeb();
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v3->SubProcessTag);
    TppStartThreadData(&v5, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v3->SubProcessTag);
    _guard_dispatch_icall_fptr();
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v4 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v4);
    }
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v3->SubProcessTag);
    TppCompleteThreadData(v5);
  }
}
