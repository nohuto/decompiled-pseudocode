/*
 * XREFs of EtwpFailLogging @ 0x14020D250
 * Callers:
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     EtwpWriteUserEvent @ 0x14041BFD0 (EtwpWriteUserEvent.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x140042AE0 (ObfReferenceObjectWithTag.c)
 *     EtwEventEnabled @ 0x140074DA0 (EtwEventEnabled.c)
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     PspGetServerSiloForSilo @ 0x140077710 (PspGetServerSiloForSilo.c)
 *     PspThreadSiloNoLock @ 0x1400797D4 (PspThreadSiloNoLock.c)
 *     EtwpReleaseTraceBuffer @ 0x14009FE24 (EtwpReleaseTraceBuffer.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     EtwpUpdateEventsLostCount @ 0x1400F4610 (EtwpUpdateEventsLostCount.c)
 *     ExAcquireRundownProtectionCacheAwareEx @ 0x1400FB0F0 (ExAcquireRundownProtectionCacheAwareEx.c)
 *     EtwpTraceLostEvent @ 0x14020FB80 (EtwpTraceLostEvent.c)
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
  struct _KTHREAD *CurrentThread; // rcx
  __int64 v12; // rax
  void *ServerSiloForSilo; // rax
  void *v14; // rbx
  __int64 SiloDriverState; // rdi
  __int64 i; // rsi
  unsigned int *v17; // rbp
  unsigned __int8 v18; // bp
  bool j; // zf
  unsigned int v20; // ecx
  __int64 v21; // rcx
  __int64 v22; // rbx
  __int64 v23; // rsi

  if ( *(_BYTE *)(a3 + 376) )
  {
    v14 = 0LL;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    v12 = PspThreadSiloNoLock((__int64)CurrentThread, (__int64)CurrentThread->Process);
    ServerSiloForSilo = (void *)PspGetServerSiloForSilo(v12);
    v14 = ServerSiloForSilo;
    if ( ServerSiloForSilo )
      ObfReferenceObjectWithTag(ServerSiloForSilo, 0x746C6644u);
  }
  SiloDriverState = EtwpGetSiloDriverState(v14);
  if ( v14 )
    ObfDereferenceObjectWithTag(v14, 0x746C6644u);
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a4 + 384); i = (unsigned int)(i + 1) )
  {
    v17 = *(unsigned int **)(a4 + 48 * i);
    if ( (v17[3] & 0x8000000) == 0 )
    {
      **(_DWORD **)(a4 + 48 * i + 8) = v17[7] | **(_DWORD **)(a4 + 48 * i + 8) & v17[8];
      EtwpUpdateEventsLostCount((__int64)v17);
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
        EtwpTraceLostEvent(a3 + 24, a7, v17 + 38, a6);
    }
    EtwpReleaseTraceBuffer((signed __int64 *)(a4 + 16 + 48 * i));
    if ( a8 )
      ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8LL * *v17 + 400), 1u);
  }
  v18 = a5;
  for ( j = !_BitScanForward(&v20, a5); !j; j = !_BitScanForward(&v20, v18) )
  {
    v18 &= v18 - 1;
    if ( EtwpLevelKeywordEnabled(32LL * v20 + a3 + 112, a1, a2) )
    {
      v22 = *(unsigned __int16 *)(v21 + 6);
      if ( !a8
        || ExAcquireRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v22 + 400), 1u) )
      {
        if ( (unsigned int)v22 >= 0x40 )
          v23 = 1LL;
        else
          v23 = *(_QWORD *)(SiloDriverState + 8 * v22 + 912);
        if ( (v23 & 1) == 0 )
        {
          EtwpUpdateEventsLostCount(v23);
          if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_LOST_EVENT) )
            EtwpTraceLostEvent(a3 + 24, a7, v23 + 152, a6);
        }
        if ( a8 )
          ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v22 + 400), 1u);
      }
    }
  }
  PspDereferenceMonitorContextServerSilo(SiloDriverState - 128);
}
