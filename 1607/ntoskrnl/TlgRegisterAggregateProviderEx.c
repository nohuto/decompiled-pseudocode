/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x140149B64
 * Callers:
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     EtwpInitialize @ 0x1407A0D3C (EtwpInitialize.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ComputeFlushPeriod @ 0x140149C8C (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x140149D30 (CreateTlgAggregateSession.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14023CC48 (CancelTimerCallbacksAndDeleteTimer.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     TraceLoggingRegisterEx @ 0x140546ED4 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(
        TraceLoggingHProvider hProvider,
        TLG_PENABLECALLBACK pEnableCallback,
        PVOID pCallbackContext)
{
  const struct _TlgProvider_t *v3; // rsi
  __int64 TlgAggregateSession; // rax
  _QWORD *v7; // rbx
  TLG_STATUS v8; // edi
  _BYTE *v9; // rax
  signed __int8 v10; // cf
  _BYTE *v11; // rdi
  __int64 v12; // rcx
  __int64 *v13; // rax
  __int64 v14; // rax

  v3 = hProvider;
  LOBYTE(hProvider) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(hProvider);
  v7 = (_QWORD *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx(v3, pEnableCallback, pCallbackContext);
  *(_QWORD *)(TlgAggregateSession + 384) = pEnableCallback;
  *(_QWORD *)(TlgAggregateSession + 392) = pCallbackContext;
  *(_QWORD *)(TlgAggregateSession + 400) = v3;
  *(_DWORD *)(TlgAggregateSession + 424) = ComputeFlushPeriod(TlgAggregateSession);
  v8 = TraceLoggingRegisterEx(v3, (TLG_PENABLECALLBACK)RegisteredProviderEtwCallback, v7);
  if ( v8 < 0 )
  {
    if ( v7[52] )
      CancelTimerCallbacksAndDeleteTimer(v7);
    ExFreePoolWithTag(v7, 0);
    return v8;
  }
  else
  {
    v9 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_140329D10, 0LL, 0);
    v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_140329D10, 0LL);
    v11 = v9;
    if ( v10 )
      ExfAcquirePushLockExclusiveEx(&qword_140329D10, v9, (ULONG_PTR)&qword_140329D10);
    if ( v11 )
      v11[26] |= 1u;
    v12 = qword_1403418F0;
    if ( !qword_1403418F0 )
    {
      TraceLoggingRegisterEx(&stru_1402F3DD0, TlgAggregateInternalProviderCallback, 0LL);
      v12 = qword_1403418F0;
    }
    v13 = &qword_1403418F0;
    if ( v12 )
    {
      while ( 1 )
      {
        v14 = *v13;
        if ( *(const struct _TlgProvider_t **)(v14 + 400) == v3 )
          break;
        v13 = (__int64 *)(v14 + 408);
        if ( !*v13 )
          goto LABEL_12;
      }
    }
    else
    {
LABEL_12:
      *v13 = (__int64)v7;
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&qword_140329D10, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&qword_140329D10);
    KeAbPostRelease((ULONG_PTR)&qword_140329D10);
    return 0;
  }
}
