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

void __fastcall RtlpTpTimerCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_TIMER a3)
{
  __int64 v4; // rcx
  struct _TEB *v5; // rsi
  _RTL_DYNAMIC_HASH_TABLE *v6; // rbx
  PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR v7; // rdx
  __int64 v8; // rdx
  __int64 ThreadInformation; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+68h] [rbp+20h] BYREF

  if ( *((_BYTE *)a2 + 88) || !_InterlockedExchange((volatile __int32 *)a2 + 23, 1) )
  {
    v4 = *((_QWORD *)a2 + 2);
    if ( v4 )
      RtlpTpImpersonate(v4);
    v5 = NtCurrentTeb();
    if ( MEMORY[0x7FFE0386] )
      RtlpTpETWCallbackStart(
        0LL,
        *((_QWORD *)a2 + 8),
        *((_QWORD *)a2 + 4),
        *((_QWORD *)a2 + 5),
        (__int64)v5->SubProcessTag);
    TppStartThreadData(&v10, *((_QWORD *)a2 + 4), *((_QWORD *)a2 + 5), v5->SubProcessTag);
    v6 = (_RTL_DYNAMIC_HASH_TABLE *)*((_QWORD *)a2 + 4);
    ((void (__cdecl *)(PRTL_DYNAMIC_HASH_TABLE, PRTL_DYNAMIC_HASH_TABLE_ENUMERATOR))_guard_check_icall_fptr)(v6, v7);
    LOBYTE(v8) = 1;
    ((void (__fastcall *)(_QWORD, __int64))v6)(*((_QWORD *)a2 + 5), v8);
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
    TppCompleteThreadData(v10);
  }
}
