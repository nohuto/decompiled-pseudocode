/*
 * XREFs of RtlpTpTimerCallback @ 0x180006FD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x180001280 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800012F8 (RtlpTpETWCallbackStop.c)
 *     RtlpTpImpersonate @ 0x180003D0C (RtlpTpImpersonate.c)
 *     TppCompleteThreadData @ 0x180009CC4 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180009D00 (TppStartThreadData.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlpTpTimerCallback(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rcx
  struct _TEB *v5; // rsi
  void (__fastcall *v6)(_QWORD, __int64); // rbx
  __int64 v7; // rdx
  __int64 v8; // [rsp+58h] [rbp+10h] BYREF
  __int64 v9; // [rsp+68h] [rbp+20h] BYREF

  if ( *(_BYTE *)(a2 + 88)
    || (result = (unsigned int)_InterlockedExchange((volatile __int32 *)(a2 + 92), 1), !(_DWORD)result) )
  {
    v4 = *(_QWORD *)(a2 + 16);
    if ( v4 )
      RtlpTpImpersonate(v4);
    v5 = NtCurrentTeb();
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v5->SubProcessTag);
    TppStartThreadData(&v9, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v5->SubProcessTag);
    v6 = *(void (__fastcall **)(_QWORD, __int64))(a2 + 32);
    _guard_check_icall_fptr();
    LOBYTE(v7) = 1;
    v6(*(_QWORD *)(a2 + 40), v7);
    if ( NtCurrentTeb()->IsImpersonating )
    {
      v8 = 0LL;
      NtSetInformationThread(-2LL, 5LL, &v8);
    }
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStop(
        0LL,
        *(_QWORD *)(a2 + 64),
        *(_QWORD *)(a2 + 32),
        *(_QWORD *)(a2 + 40),
        (__int64)v5->SubProcessTag);
    return TppCompleteThreadData(v9);
  }
  return result;
}
