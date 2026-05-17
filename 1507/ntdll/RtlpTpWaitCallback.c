/*
 * XREFs of RtlpTpWaitCallback @ 0x18000BCB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x180001320 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x180001398 (RtlpTpETWCallbackStart.c)
 *     RtlpTpWaitCheckReset @ 0x18000BE10 (RtlpTpWaitCheckReset.c)
 *     TppStartThreadData @ 0x18003C1E0 (TppStartThreadData.c)
 *     TppCompleteThreadData @ 0x18003C368 (TppCompleteThreadData.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpTpImpersonate @ 0x18007E060 (RtlpTpImpersonate.c)
 *     NtSetInformationThread @ 0x1800939D0 (NtSetInformationThread.c)
 */

__int64 __fastcall RtlpTpWaitCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _TEB *v6; // r15
  __int64 v7; // rdx
  __int64 v9; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate();
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(
      0LL,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  TppStartThreadData(v10, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v6->SubProcessTag);
  LOBYTE(v7) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v7);
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    v9 = 0LL;
    NtSetInformationThread(-2LL, 5LL, &v9);
  }
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStop(
      0LL,
      *(_QWORD *)(a2 + 48),
      *(_QWORD *)(a2 + 32),
      *(_QWORD *)(a2 + 40),
      (__int64)v6->SubProcessTag);
  return TppCompleteThreadData(v10[0]);
}
