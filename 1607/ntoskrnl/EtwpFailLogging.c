/*
 * XREFs of EtwpFailLogging @ 0x140224BC4
 * Callers:
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x140006D00 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpReleaseTraceBuffer @ 0x140074B60 (EtwpReleaseTraceBuffer.c)
 *     EtwpUpdateEventsLostCount @ 0x1400A86DC (EtwpUpdateEventsLostCount.c)
 *     EtwEventEnabled @ 0x1400D3370 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 *     EtwpTraceLostEvent @ 0x1402278D8 (EtwpTraceLostEvent.c)
 */

void __fastcall EtwpFailLogging(
        unsigned __int8 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        __int64 a7,
        char a8)
{
  __int64 v8; // rbp
  __int64 v9; // rdi
  unsigned __int8 v13; // dl
  unsigned int *v14; // rsi
  unsigned __int8 v15; // si
  bool i; // zf
  unsigned int v17; // ecx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rdi

  v8 = *(_QWORD *)(a3 + 376);
  v9 = 0LL;
  v13 = a1;
  if ( *(_DWORD *)(a4 + 384) )
  {
    do
    {
      v14 = *(unsigned int **)(a4 + 48 * v9);
      if ( (v14[3] & 0x8000000) == 0 )
      {
        **(_DWORD **)(a4 + 48 * v9 + 8) = v14[7] | **(_DWORD **)(a4 + 48 * v9 + 8) & v14[8];
        EtwpUpdateEventsLostCount((__int64)v14);
        if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
          EtwpTraceLostEvent(a3 + 24, a7, v14 + 34, a6);
      }
      EtwpReleaseTraceBuffer((signed __int64 *)(a4 + 16 + 48 * v9));
      if ( a8 )
        ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 8LL * *v14 + 400), 1u);
      v9 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v9 < *(_DWORD *)(a4 + 384) );
    v13 = a1;
  }
  v15 = a5;
  for ( i = !_BitScanForward(&v17, a5); !i; i = !_BitScanForward(&v17, v15) )
  {
    v15 &= v15 - 1;
    if ( EtwpLevelKeywordEnabled(32LL * v17 + a3 + 112, v13, a2) )
    {
      v19 = *(unsigned __int16 *)(v18 + 6);
      if ( !a8 || ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 8 * v19 + 400), 1u) )
      {
        if ( (unsigned int)v19 >= 0x40 )
          v20 = 1LL;
        else
          v20 = *(_QWORD *)(v8 + 8 * v19 + 912);
        if ( (v20 & 1) == 0 )
        {
          EtwpUpdateEventsLostCount(v20);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(a3 + 24, a7, v20 + 136, a6);
        }
        if ( a8 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v8 + 8 * v19 + 400), 1u);
      }
    }
    v13 = a1;
  }
}
