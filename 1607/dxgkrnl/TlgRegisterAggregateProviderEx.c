/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C00102AC
 * Callers:
 *     DriverEntry @ 0x1C01B7018 (DriverEntry.c)
 * Callees:
 *     ComputeFlushPeriod @ 0x1C0010388 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C0010458 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C003507C (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx @ 0x1C00F9D2C (TraceLoggingRegisterEx.c)
 */

TLG_STATUS __fastcall TlgRegisterAggregateProviderEx(__int64 a1)
{
  __int64 TlgAggregateSession; // rax
  void *v2; // rbx
  TLG_STATUS v3; // esi
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v7; // rax

  LOBYTE(a1) = 1;
  TlgAggregateSession = CreateTlgAggregateSession(a1);
  v2 = (void *)TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C00568C0, EnableDxgkrnlTelemetryProviderCallback, 0LL);
  *(_QWORD *)(TlgAggregateSession + 392) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 384) = EnableDxgkrnlTelemetryProviderCallback;
  *(_QWORD *)(TlgAggregateSession + 400) = &dword_1C00568C0;
  *(_DWORD *)(TlgAggregateSession + 424) = ComputeFlushPeriod(TlgAggregateSession);
  v3 = TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C00568C0, RegisteredProviderEtwCallback, v2);
  if ( v3 < 0 )
  {
    DestroyAggregateSession(v2);
    return v3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C0057518, 0LL);
    v4 = qword_1C0057FD8;
    if ( !qword_1C0057FD8 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0056900, TlgAggregateInternalProviderCallback, 0LL);
      v4 = qword_1C0057FD8;
    }
    v5 = &qword_1C0057FD8;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *(int **)(v7 + 400) == &dword_1C00568C0 )
          break;
        v5 = (__int64 *)(v7 + 408);
        if ( !*v5 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      *v5 = (__int64)v2;
    }
    ExReleasePushLockExclusiveEx(&unk_1C0057518, 0LL);
    return 0;
  }
}
