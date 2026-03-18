/*
 * XREFs of EtwpFreeLoggerContext @ 0x140493844
 * Callers:
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x14048FBA8 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140007280 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x140085C48 (ExReInitializeRundownProtectionCacheAware.c)
 *     EtwpFreeCompression @ 0x140085CBC (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140085D20 (KeRemoveQueueDpc.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140085DE8 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008C610 (PsGetCurrentServerSiloGlobals.c)
 *     KeGenericCallDpc @ 0x1400A04BC (KeGenericCallDpc.c)
 *     KeCancelTimer @ 0x1400C3480 (KeCancelTimer.c)
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404200D0 (ObDereferenceSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x140458CF0 (RtlFreeAnsiString.c)
 *     EtwpFreeTraceBufferPool @ 0x1404936AC (EtwpFreeTraceBufferPool.c)
 *     EtwpShutdownConsumers @ 0x140493A6C (EtwpShutdownConsumers.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14049501C (EtwpFreeSystemLoggerIndex.c)
 *     CmpMarkLockTryAcquired @ 0x1405281C8 (CmpMarkLockTryAcquired.c)
 *     EtwpFreeStackCache @ 0x1406A9B44 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1406A9C3C (EtwpCancelMemoryPreservation.c)
 */

void __fastcall EtwpFreeLoggerContext(char *P)
{
  __int64 v2; // r14
  __int64 v3; // rbp
  UNICODE_STRING *v4; // rdi
  ULONG i; // edi
  __int64 Prcb; // rax
  void *v7; // rcx
  void *v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _QWORD *v11; // rsi
  char *v12; // rdi
  char *v13; // rcx
  char *v14; // rdi
  void *v15; // rcx
  unsigned int j; // edi
  PVOID *v17; // rcx
  char *v18; // rcx

  v2 = *((_QWORD *)PsGetCurrentServerSiloGlobals() + 106);
  EtwpShutdownConsumers(P);
  v3 = *(unsigned int *)P;
  ExReleaseRundownProtectionCacheAwareEx(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 8 * v3 + 400), 1u);
  ExWaitForRundownProtectionReleaseCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 8 * v3 + 400));
  if ( *((_WORD *)P + 440) )
  {
    v15 = (void *)*((_QWORD *)P + 111);
    *((_WORD *)P + 440) = 0;
    ExFreePoolWithTag(v15, 0);
    *((_QWORD *)P + 111) = 0LL;
  }
  if ( *((_DWORD *)P + 75) != 1 )
    KeGenericCallDpc((__int64)EtwpSynchronizationDpc, 0LL);
  EtwpFreeCompression((__int64)P);
  KeCancelTimer((PKTIMER)(P + 504));
  KeRemoveQueueDpc((PRKDPC)(P + 568));
  v4 = (UNICODE_STRING *)*((_QWORD *)P + 112);
  if ( v4 )
  {
    EtwpCancelMemoryPreservation(P);
    RtlFreeAnsiString(v4 + 1);
    ExFreePoolWithTag(v4, 0);
    *((_QWORD *)P + 112) = 0LL;
  }
  EtwpFreeTraceBufferPool((unsigned int *)P);
  for ( i = 0; i < (unsigned int)KeNumberProcessors_0; *(_QWORD *)(*(_QWORD *)(Prcb + 24536) + 8 * v3 + 576) = 0LL )
    Prcb = KeGetPrcb(i++);
  RtlFreeAnsiString((PUNICODE_STRING)(P + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 168));
  RtlFreeAnsiString((PUNICODE_STRING)(P + 184));
  RtlFreeAnsiString((PUNICODE_STRING)P + 23);
  v7 = (void *)*((_QWORD *)P + 90);
  if ( v7 )
    ObfDereferenceObject(v7);
  v8 = (void *)*((_QWORD *)P + 97);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  v9 = _InterlockedExchange64((volatile __int64 *)P + 98, 0LL);
  ObDereferenceSecurityDescriptor(v9 & 0xFFFFFFFFFFFFFFF0uLL, (v9 & 0xF) + 1);
  if ( (*((_DWORD *)P + 204) & 0x80u) != 0 )
    ExFreePoolWithTag(*((PVOID *)P + 104), 0);
  if ( (*((_DWORD *)P + 204) & 0x2000) != 0 )
    _InterlockedDecrement(&dword_1403292D0);
  if ( (*((_DWORD *)P + 204) & 0x1000000) != 0 )
    EtwpFreeStackCache(*((_QWORD *)P + 105));
  if ( (*((_DWORD *)P + 3) & 0x2000000) != 0 )
    EtwpFreeSystemLoggerIndex((unsigned __int8)P[818], v10);
  v11 = (_QWORD *)*((_QWORD *)P + 106);
  if ( v11 )
  {
    for ( j = 0; j < (unsigned int)KeNumberProcessors_0; ++j )
    {
      v17 = (PVOID *)v11[j + 4];
      if ( v17 )
        off_1402F24F0(v17);
    }
    ExFreePoolWithTag(v11, 0);
  }
  v12 = (char *)*((_QWORD *)P + 14);
  while ( v12 != P + 112 )
  {
    v13 = v12;
    v12 = *(char **)v12;
    ExFreePoolWithTag(v13, 0);
  }
  v14 = (char *)*((_QWORD *)P + 107);
  while ( v14 != P + 856 )
  {
    v18 = v14;
    v14 = *(char **)v14;
    ExFreePoolWithTag(v18, 0);
  }
  ExReInitializeRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v2 + 8 * v3 + 400));
  *(_QWORD *)(v2 + 8 * v3 + 912) = 1LL;
  ExFreePoolWithTag(P, 0);
  _InterlockedDecrement(&dword_1402FD83C);
}
