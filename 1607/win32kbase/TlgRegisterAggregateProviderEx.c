/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C00527A4
 * Callers:
 *     DriverEntry @ 0x1C0154670 (DriverEntry.c)
 * Callees:
 *     CreateTlgAggregateSession @ 0x1C005286C (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C006F5B4 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx @ 0x1C0142000 (TraceLoggingRegisterEx.c)
 */

TLG_STATUS TlgRegisterAggregateProviderEx()
{
  _QWORD *TlgAggregateSession; // rax
  void *v1; // rbx
  TLG_STATUS v2; // esi
  __int64 v3; // rcx
  __int64 *v4; // rax
  __int64 v6; // rax

  TlgAggregateSession = (_QWORD *)CreateTlgAggregateSession(0LL);
  v1 = TlgAggregateSession;
  if ( !TlgAggregateSession )
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0118750, 0LL, 0LL);
  TlgAggregateSession[48] = 0LL;
  TlgAggregateSession[49] = 0LL;
  TlgAggregateSession[50] = &dword_1C0118750;
  v2 = TraceLoggingRegisterEx(
         (TraceLoggingHProvider)&dword_1C0118750,
         RegisteredProviderEtwCallback,
         TlgAggregateSession);
  if ( v2 < 0 )
  {
    DestroyAggregateSession(v1);
    return v2;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C011E660, 0LL);
    v3 = qword_1C011E668;
    if ( !qword_1C011E668 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0118A00, TlgAggregateInternalProviderCallback, 0LL);
      v3 = qword_1C011E668;
    }
    v4 = &qword_1C011E668;
    if ( v3 )
    {
      while ( 1 )
      {
        v6 = *v4;
        if ( *(int **)(v6 + 400) == &dword_1C0118750 )
          break;
        v4 = (__int64 *)(v6 + 408);
        if ( !*v4 )
          goto LABEL_6;
      }
    }
    else
    {
LABEL_6:
      *v4 = (__int64)v1;
    }
    ExReleasePushLockExclusiveEx(&unk_1C011E660, 0LL);
    return 0;
  }
}
