/*
 * XREFs of TppCallbackCheckThreadAfterCallback @ 0x18001FF40
 * Callers:
 *     TppWorkerThread @ 0x18001E740 (TppWorkerThread.c)
 *     TppCallbackEpilog @ 0x18001FBC0 (TppCallbackEpilog.c)
 * Callees:
 *     RtlDeactivateActivationContextUnsafeFast @ 0x180018740 (RtlDeactivateActivationContextUnsafeFast.c)
 *     RtlRaiseException @ 0x180036760 (RtlRaiseException.c)
 *     DbgPrintEx @ 0x18005BFB0 (DbgPrintEx.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     NtSetInformationThread @ 0x1800A65C0 (NtSetInformationThread.c)
 *     NtTraceEvent @ 0x1800A6FD0 (NtTraceEvent.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

void __fastcall TppCallbackCheckThreadAfterCallback(__int64 a1)
{
  _GUID v2; // xmm0
  __int64 v3; // rax
  struct _TEB *v4; // rcx
  struct _TEB *v5; // rax
  void *SubProcessTag; // rcx
  __int64 ThreadInformation; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v8; // [rsp+38h] [rbp-C8h] BYREF
  EXCEPTION_RECORD ExceptionRecord; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE Fields[6]; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v11; // [rsp+E6h] [rbp-1Ah]
  int v12; // [rsp+100h] [rbp+0h]
  int v13; // [rsp+104h] [rbp+4h]

  if ( a1 )
  {
    v2 = *(_GUID *)(a1 + 232);
    ThreadInformation = 0LL;
    NtCurrentTeb()->ActivityId = v2;
    if ( *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket != ThreadInformation
      && NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadWorkOnBehalfTicket, &ThreadInformation, 8u) >= 0 )
    {
      *(_QWORD *)NtCurrentTeb()->WorkingOnBehalfTicket = ThreadInformation;
    }
    if ( (*(_BYTE *)(a1 + 76) & 1) != 0 && (*(_BYTE *)(a1 + 104) & 1) == 0 )
    {
      RtlDeactivateActivationContextUnsafeFast(a1);
      *(_BYTE *)(a1 + 76) &= ~1u;
    }
    if ( *(_QWORD *)(a1 + 80) && (*(_BYTE *)(a1 + 104) & 2) == 0 )
    {
      v5 = NtCurrentTeb();
      SubProcessTag = v5->SubProcessTag;
      v5->SubProcessTag = 0LL;
      if ( MEMORY[0x7FFE0390] && SubProcessTag )
      {
        v12 = (int)SubProcessTag;
        v11 = 1349;
        v13 = 0;
        NtTraceEvent((HANDLE)MEMORY[0x7FFE0390], 0x402u, 8u, Fields);
      }
      *(_QWORD *)(a1 + 80) = 0LL;
    }
    v3 = *(_QWORD *)(a1 + 128);
    if ( v3 && (*(_BYTE *)(v3 + 436) & 1) == 0 )
    {
      if ( NtCurrentTeb()->IsImpersonating && (*(_BYTE *)(a1 + 104) & 4) == 0 )
      {
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionInformation[0] = *(_QWORD *)(a1 + 88);
        ExceptionRecord.ExceptionInformation[1] = *(_QWORD *)(a1 + 96);
        ExceptionRecord.ExceptionCode = -1073740016;
        ExceptionRecord.NumberParameters = 2;
        RtlRaiseException(&ExceptionRecord);
        v8 = 0LL;
        NtSetInformationThread((HANDLE)0xFFFFFFFFFFFFFFFELL, ThreadImpersonationToken, &v8, 8u);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x10) == 0 )
      {
        v4 = NtCurrentTeb();
        if ( (((unsigned __int64)v4->CurrentTransactionHandle + 1) & 0xFFFFFFFFFFFFFFFEuLL) != 0
          || v4->TxnScopeEnterCallback
          || v4->TxnScopeExitCallback
          || v4->TxnScopeContext
          || v4->TxFsContext != 65534 )
        {
          DbgPrintEx(
            0x54u,
            0,
            "ThreadPool: callback %p(%p) returned with a transaction uncleared\n",
            *(const void **)(a1 + 88),
            *(const void **)(a1 + 96));
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          ExceptionRecord.ExceptionCode = -1073740003;
          ExceptionRecord.NumberParameters = 0;
          RtlRaiseException(&ExceptionRecord);
        }
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x20) == 0
        && NtCurrentPeb()->LoaderLock->OwningThread == NtCurrentTeb()->ClientId.UniqueThread )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with the loader lock held\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionCode = -1073740002;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( (*(_BYTE *)(a1 + 104) & 0x40) == 0 && NtCurrentTeb()->PreferredLanguages )
      {
        DbgPrintEx(
          0x54u,
          0,
          "ThreadPool: callback %p(%p) returned with preferred languages set\n",
          *(const void **)(a1 + 88),
          *(const void **)(a1 + 96));
        memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
        ExceptionRecord.ExceptionCode = -1073740001;
        ExceptionRecord.NumberParameters = 0;
        RtlRaiseException(&ExceptionRecord);
      }
      if ( *(char *)(a1 + 104) >= 0 )
      {
        if ( NtCurrentTeb()->SavedPriorityState )
        {
          DbgPrintEx(
            0x54u,
            0,
            "ThreadPool: callback %p(%p) returned with background priorities set\n",
            *(const void **)(a1 + 88),
            *(const void **)(a1 + 96));
          memset(&ExceptionRecord, 0, sizeof(ExceptionRecord));
          ExceptionRecord.ExceptionCode = -1073740000;
          ExceptionRecord.NumberParameters = 0;
          RtlRaiseException(&ExceptionRecord);
        }
      }
    }
  }
}
