/*
 * XREFs of RtlpTpWaitCallback @ 0x180005F50
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStart @ 0x180001280 (RtlpTpETWCallbackStart.c)
 *     RtlpTpETWCallbackStop @ 0x1800012F8 (RtlpTpETWCallbackStop.c)
 *     RtlpTpImpersonate @ 0x180003D0C (RtlpTpImpersonate.c)
 *     RtlpTpWaitCheckReset @ 0x180005ED8 (RtlpTpWaitCheckReset.c)
 *     TppCompleteThreadData @ 0x180009CC4 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x180009D00 (TppStartThreadData.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     NtSetInformationThread @ 0x1800A5260 (NtSetInformationThread.c)
 */

void __fastcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, __int64 a2, PTP_WAIT a3, int a4)
{
  struct _TEB *v6; // r15
  __int64 v7; // rdx
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v9[3]; // [rsp+38h] [rbp-30h] BYREF

  if ( (*(_BYTE *)(a2 + 8) & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4);
  if ( *(_QWORD *)a2 )
    RtlpTpImpersonate(*(_QWORD *)a2);
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
  TppStartThreadData(v9, *(_QWORD *)(a2 + 32), *(_QWORD *)(a2 + 40), v6->SubProcessTag);
  LOBYTE(v7) = a4 == 258;
  (*(void (__fastcall **)(_QWORD, __int64))(a2 + 32))(*(_QWORD *)(a2 + 40), v7);
  if ( (*(_BYTE *)(a2 + 8) & 4) != 0 )
    *(_DWORD *)(a2 + 88) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
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
  TppCompleteThreadData(v9[0]);
}
