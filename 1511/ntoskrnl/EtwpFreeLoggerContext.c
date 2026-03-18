/*
 * XREFs of EtwpFreeLoggerContext @ 0x14049D5B0
 * Callers:
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     EtwpGetSiloDriverState @ 0x140077640 (EtwpGetSiloDriverState.c)
 *     KeCancelTimer @ 0x140091500 (KeCancelTimer.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x1400D9410 (ExReInitializeRundownProtectionCacheAware.c)
 *     KeRemoveQueueDpc @ 0x1400D9484 (KeRemoveQueueDpc.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400D952C (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     KeGenericCallDpc @ 0x1400E2FD8 (KeGenericCallDpc.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x140420D30 (ObDereferenceSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 *     EtwpFreeTraceBufferPool @ 0x14049D7EC (EtwpFreeTraceBufferPool.c)
 *     EtwpShutdownConsumers @ 0x14049D918 (EtwpShutdownConsumers.c)
 *     AlpcMessageDeleteProcedure @ 0x1404E2C00 (AlpcMessageDeleteProcedure.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14050CFA8 (EtwpFreeSystemLoggerIndex.c)
 *     EtwpFreeStackCache @ 0x140667C88 (EtwpFreeStackCache.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 SiloDriverState; // rbp
  __int64 v3; // r14
  ULONG i; // edi
  __int64 Prcb; // rax
  void *v6; // rcx
  void *v7; // rcx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  char *v10; // rdi
  char *v11; // rcx
  char *v12; // rdi
  void *v13; // rcx
  unsigned int j; // edi
  PVOID *v15; // rcx
  char *v16; // rcx

  SiloDriverState = EtwpGetSiloDriverState((PVOID)0xFFFFFFFFFFFFFFFFLL);
  EtwpShutdownConsumers(P);
  v3 = *(unsigned int *)P;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v3 + 400), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v3 + 400));
  if ( *((_WORD *)P + 448) )
  {
    v13 = (void *)*((_QWORD *)P + 113);
    *((_WORD *)P + 448) = 0;
    ExFreePoolWithTag(v13, 0);
    *((_QWORD *)P + 113) = 0LL;
  }
  if ( *((_DWORD *)P + 79) != 1 )
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
  KeCancelTimer((PKTIMER)(P + 520));
  KeRemoveQueueDpc((PRKDPC)(P + 584));
  EtwpFreeTraceBufferPool(P);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; *(_QWORD *)(*(_QWORD *)(Prcb + 24536) + 8 * v3 + 576) = 0LL )
    Prcb = KeGetPrcb(i++);
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 200));
  RtlFreeAnsiString((PUNICODE_STRING)P + 24);
  v6 = (void *)*((_QWORD *)P + 92);
  if ( v6 )
    ObfDereferenceObject(v6);
  v7 = (void *)*((_QWORD *)P + 99);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  v8 = _InterlockedExchange64((volatile __int64 *)P + 100, 0LL);
  ObDereferenceSecurityDescriptor(v8 & 0xFFFFFFFFFFFFFFF0uLL, (v8 & 0xF) + 1);
  if ( (*((_DWORD *)P + 208) & 0x80u) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 106), 0);
  if ( (*((_DWORD *)P + 208) & 0x2000) != 0 )
    _InterlockedDecrement(&dword_1403062B0);
  if ( (*((_DWORD *)P + 208) & 0x1000000) != 0 )
    EtwpFreeStackCache(*((_QWORD *)P + 107));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    EtwpFreeSystemLoggerIndex((unsigned __int8)P[834]);
  v9 = (_QWORD *)*((_QWORD *)P + 108);
  if ( v9 )
  {
    for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
    {
      v15 = (PVOID *)v9[j + 4];
      if ( v15 )
        off_1402D2850(v15);
    }
    ExFreePoolWithTag(v9, 0);
  }
  v10 = (char *)*((_QWORD *)P + 16);
  while ( v10 != P + 128 )
  {
    v11 = v10;
    v10 = *(char **)v10;
    ExFreePoolWithTag(v11, 0);
  }
  v12 = (char *)*((_QWORD *)P + 109);
  while ( v12 != P + 872 )
  {
    v16 = v12;
    v12 = *(char **)v12;
    ExFreePoolWithTag(v16, 0);
  }
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(SiloDriverState + 8 * v3 + 400));
  *(_QWORD *)(SiloDriverState + 8 * v3 + 912) = 1LL;
  PsDereferenceMonitorContextServerSilo(SiloDriverState);
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_1402D84DC);
}
