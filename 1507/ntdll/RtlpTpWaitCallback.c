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

void __fastcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, _QWORD *a2, PTP_WAIT a3, unsigned int a4)
{
  struct _TEB *v6; // r15
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 ThreadInformation; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v10[3]; // [rsp+38h] [rbp-30h] BYREF

  if ( (a2[1] & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4, a3);
  if ( *a2 )
    RtlpTpImpersonate(*a2, a2, a3);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(0LL, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  TppStartThreadData(v10, a2[4], a2[5], v6->SubProcessTag);
  LOBYTE(v7) = a4 == 258;
  ((void (__fastcall *)(_QWORD, __int64))a2[4])(a2[5], v7);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = 0;
  if ( NtCurrentTeb()->IsImpersonating )
  {
    ThreadInformation = 0LL;
    NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &ThreadInformation, 8u);
  }
  if ( (a2[1] & 4) != 0 )
    RtlpTpWaitCheckReset(a2, a4, v8);
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStop(0LL, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  TppCompleteThreadData(v10[0]);
}
