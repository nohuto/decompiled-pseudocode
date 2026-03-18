/*
 * XREFs of TlgRegisterAggregateProviderEx @ 0x1C0013168
 * Callers:
 *     ?InitGlobals@VIDMM_GLOBAL@@SAJXZ @ 0x1C0072234 (-InitGlobals@VIDMM_GLOBAL@@SAJXZ.c)
 * Callees:
 *     ComputeFlushPeriod @ 0x1C0013240 (ComputeFlushPeriod.c)
 *     CreateTlgAggregateSession @ 0x1C0013310 (CreateTlgAggregateSession.c)
 *     DestroyAggregateSession @ 0x1C0028378 (DestroyAggregateSession.c)
 *     TraceLoggingRegisterEx @ 0x1C0073D8C (TraceLoggingRegisterEx.c)
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
    return TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, 0LL, 0LL);
  *(_QWORD *)(TlgAggregateSession + 384) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 392) = 0LL;
  *(_QWORD *)(TlgAggregateSession + 400) = &hProvider;
  *(_DWORD *)(TlgAggregateSession + 424) = ComputeFlushPeriod(TlgAggregateSession);
  v3 = TraceLoggingRegisterEx((TraceLoggingHProvider)&hProvider, RegisteredProviderEtwCallback, v2);
  if ( v3 < 0 )
  {
    DestroyAggregateSession(v2);
    return v3;
  }
  else
  {
    ExAcquirePushLockExclusiveEx(&unk_1C0035528, 0LL);
    v4 = qword_1C0035728;
    if ( !qword_1C0035728 )
    {
      TraceLoggingRegisterEx((TraceLoggingHProvider)&dword_1C0035090, TlgAggregateInternalProviderCallback, 0LL);
      v4 = qword_1C0035728;
    }
    v5 = &qword_1C0035728;
    if ( v4 )
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *(int **)(v7 + 400) == &hProvider )
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
    ExReleasePushLockExclusiveEx(&unk_1C0035528, 0LL);
    return 0;
  }
}
