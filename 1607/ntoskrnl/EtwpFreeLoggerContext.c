/*
 * XREFs of EtwpFreeLoggerContext @ 0x1404942D4
 * Callers:
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 * Callees:
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExReInitializeRundownProtectionCacheAware @ 0x140087538 (ExReInitializeRundownProtectionCacheAware.c)
 *     EtwpFreeCompression @ 0x1400875AC (EtwpFreeCompression.c)
 *     KeRemoveQueueDpc @ 0x140087610 (KeRemoveQueueDpc.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400876D8 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PsGetCurrentServerSiloGlobals @ 0x14008BD70 (PsGetCurrentServerSiloGlobals.c)
 *     KeGenericCallDpc @ 0x14009EDE4 (KeGenericCallDpc.c)
 *     KeCancelTimer @ 0x1400C1310 (KeCancelTimer.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 *     RtlFreeAnsiString @ 0x140457BC0 (RtlFreeAnsiString.c)
 *     EtwpFreeTraceBufferPool @ 0x14049413C (EtwpFreeTraceBufferPool.c)
 *     EtwpShutdownConsumers @ 0x1404944FC (EtwpShutdownConsumers.c)
 *     EtwpFreeSystemLoggerIndex @ 0x140495AAC (EtwpFreeSystemLoggerIndex.c)
 *     CmpMarkLockTryAcquired @ 0x140528708 (CmpMarkLockTryAcquired.c)
 *     EtwpFreeStackCache @ 0x1406A9C7C (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1406A9D74 (EtwpCancelMemoryPreservation.c)
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
    _InterlockedDecrement(&dword_140329310);
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
  _InterlockedDecrement(&dword_1402FD81C);
}
