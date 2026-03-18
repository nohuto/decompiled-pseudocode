/*
 * XREFs of EtwpFreeLoggerContext @ 0x140524388
 * Callers:
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeCancelTimer @ 0x140066860 (KeCancelTimer.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     KeGenericCallDpc @ 0x1400D3924 (KeGenericCallDpc.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x14010C910 (ExReInitializeRundownProtectionCacheAware.c)
 *     KeRemoveQueueDpc @ 0x14010C998 (KeRemoveQueueDpc.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14010CE20 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PspDereferenceSiloObject @ 0x140127C98 (PspDereferenceSiloObject.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     RtlFreeAnsiString @ 0x140450CB8 (RtlFreeAnsiString.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     EtwpFreeTraceBufferPool @ 0x140524604 (EtwpFreeTraceBufferPool.c)
 *     EtwpShutdownConsumers @ 0x1405247B8 (EtwpShutdownConsumers.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14052489C (EtwpFreeSystemLoggerIndex.c)
 *     AlpcMessageDeleteProcedure @ 0x14055E308 (AlpcMessageDeleteProcedure.c)
 *     EtwpFreeStackCache @ 0x1406EAFB0 (EtwpFreeStackCache.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v2; // r14
  unsigned int i; // ecx
  __int64 v4; // rax
  __int64 v5; // r8
  __int64 v6; // r9
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  _QWORD *v10; // rsi
  char *v11; // rdi
  char *v12; // rdi
  __int64 v13; // r9
  __int64 v14; // rcx
  void *v15; // rcx
  char *v16; // rcx
  unsigned int j; // edi
  PVOID *v18; // rcx
  char *v19; // rcx
  __int64 v20; // [rsp+50h] [rbp+8h] BYREF

  if ( *((_WORD *)P + 448) )
  {
    *((_WORD *)P + 448) = 0;
    ExFreePoolWithTag(*((PVOID *)P + 113), 0);
    *((_QWORD *)P + 113) = 0LL;
  }
  EtwpShutdownConsumers(P);
  v2 = *(unsigned int *)P;
  ExReleaseRundownProtectionCacheAwareEx((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v2], 1u);
  ExWaitForRundownProtectionReleaseCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v2]);
  if ( *((_DWORD *)P + 79) != 1 )
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  EtwpFreeTraceBufferPool(P);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; *(_QWORD *)(*(_QWORD *)(v4 + 24536) + 8 * v2 + 576) = 0LL )
  {
    if ( i >= (unsigned int)KeNumberProcessors_0 )
      v4 = 0LL;
    else
      v4 = KiProcessorBlock[i];
    ++i;
  }
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v7 = (void *)*((_QWORD *)P + 92);
  if ( v7 )
    ObfDereferenceObject(v7);
  v8 = (void *)*((_QWORD *)P + 99);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v9 & 0xFFFFFFFFFFFFFFF0uLL, (v9 & 0xF) + 1, v5, v6);
  if ( (*((_DWORD *)P + 208) & 0x80u) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 106), 0);
  if ( (*((_DWORD *)P + 208) & 0x2000) != 0 )
    _InterlockedDecrement(&dword_1403565B0);
  if ( (*((_DWORD *)P + 208) & 0x1000000) != 0 )
    EtwpFreeStackCache(*((_QWORD *)P + 107));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    EtwpFreeSystemLoggerIndex((unsigned __int8)P[834]);
  v10 = (_QWORD *)*((_QWORD *)P + 108);
  if ( v10 )
  {
    for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
    {
      v18 = (PVOID *)v10[j + 4];
      if ( v18 )
        off_1403219A0(v18);
    }
    ExFreePoolWithTag(v10, 0);
  }
  v11 = (char *)*((_QWORD *)P + 16);
  while ( v11 != P + 128 )
  {
    v16 = v11;
    v11 = *(char **)v11;
    ExFreePoolWithTag(v16, 0);
  }
  v12 = (char *)*((_QWORD *)P + 109);
  while ( v12 != P + 872 )
  {
    v19 = v12;
    v12 = *(char **)v12;
    ExFreePoolWithTag(v19, 0);
  }
  ExReInitializeRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)EtwpLoggerRundown[v2]);
  PsGetMonitorContextServerSilo(EtwSiloMonitor, (_QWORD *)0xFFFFFFFFFFFFFFFFLL, &v20, v13);
  v14 = v20;
  if ( *(_DWORD *)(v20 + 392) == (_DWORD)v2 )
    *(_DWORD *)(v20 + 392) = 64;
  PsDereferenceMonitorContextServerSilo(v14);
  v15 = (void *)*((_QWORD *)P + 114);
  if ( v15 )
    PspDereferenceSiloObject(v15);
  WmipLoggerContext[v2] = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_14032780C);
}
