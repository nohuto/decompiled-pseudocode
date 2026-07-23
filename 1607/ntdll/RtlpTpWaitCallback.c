/*
 * XREFs of RtlpTpWaitCallback @ 0x18007FD30
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTpETWCallbackStop @ 0x1800010F4 (RtlpTpETWCallbackStop.c)
 *     RtlpTpETWCallbackStart @ 0x18000116C (RtlpTpETWCallbackStart.c)
 *     TppCompleteThreadData @ 0x18003B324 (TppCompleteThreadData.c)
 *     TppStartThreadData @ 0x18003B360 (TppStartThreadData.c)
 *     RtlpTpImpersonate @ 0x18007E67C (RtlpTpImpersonate.c)
 *     RtlpTpWaitCheckReset @ 0x18007FE78 (RtlpTpWaitCheckReset.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall RtlpTpWaitCallback(PTP_CALLBACK_INSTANCE a1, __int64 *a2, PTP_WAIT a3, unsigned int a4)
{
  struct _TEB *v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 ThreadInformation; // [rsp+30h] [rbp-28h] BYREF
  __int64 v10[4]; // [rsp+38h] [rbp-20h] BYREF

  if ( (a2[1] & 4) == 0 )
    RtlpTpWaitCheckReset(a2, a4, a3);
  if ( *a2 )
    RtlpTpImpersonate(*a2);
  if ( (a2[1] & 4) != 0 )
    *((_DWORD *)a2 + 22) = NtCurrentTeb()->ClientId.UniqueThread;
  v6 = NtCurrentTeb();
  if ( MEMORY[0x7FFE0386] )
    RtlpTpETWCallbackStart(0LL, a2[6], a2[4], a2[5], (__int64)v6->SubProcessTag);
  TppStartThreadData(v10, a2[4], a2[5], (__int64)v6->SubProcessTag);
  LOBYTE(v7) = a4 == 258;
  ((void (__fastcall *)(__int64, __int64))a2[4])(a2[5], v7);
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
