/*
 * XREFs of RtlpTpTimerCallback @ 0x18007E0E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x180001320 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001398 (RtlpTpETWCallbackStart.c)
 *     TppStartThreadData @ 0x18003C1E0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18003C368 (TppCompleteThreadData.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpTpImpersonate @ 0x18007E060 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 */

void __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  struct _TEB *v4; // rsi
  void (__fastcall *v5)(_QWORD, __int64); // rbx
  __int64 v6; // rdx
  __int64 v7; // [rsp+58h] [rbp+10h] BYREF
  __int64 v8; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88) || !_InterlockedExchange((volatile __int32 *)(a2 + 92), 1) )
  {
    v3 = *(_QWORD *)(a2 + 16);
    if ( v3 )
      RtlpTpImpersonate(v3);
    v4 = NtCurrentTeb();
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    TppStartThreadData(&v8, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), (__int64)v4->SubProcessTag);
    v5 = *(void (__fastcall **)(_QWORD, __int64))(a2 + 32);
    _guard_check_icall_fptr();
    LOBYTE(v6) = 1;
    v5(*(_QWORD *)(a2 + 40), v6);
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v7 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v7);
    }
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v4->SubProcessTag);
    TppCompleteThreadData(v8);
  }
}
