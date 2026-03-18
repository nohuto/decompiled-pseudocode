/*
 * XREFs of ObFastReferenceObject @ 0x14004E430
 * Callers:
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     CcUnmapAndPurge @ 0x1400865D8 (CcUnmapAndPurge.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     CcGetDirtyPages @ 0x1400F1FE0 (CcGetDirtyPages.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14011E480 (CcPerfLogWorkItemEnqueue.c)
 *     CcPerfLogFlushCache @ 0x140126F18 (CcPerfLogFlushCache.c)
 *     CcPerfLogFlushSection @ 0x1401288B4 (CcPerfLogFlushSection.c)
 *     CcNotifyOfMappedWriteComplete @ 0x14012FB7C (CcNotifyOfMappedWriteComplete.c)
 *     CcUnpinRepinnedBcb @ 0x1401DD4E8 (CcUnpinRepinnedBcb.c)
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     PsOpenTokenOfProcess @ 0x140434A10 (PsOpenTokenOfProcess.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     PspMapSystemDll @ 0x140466740 (PspMapSystemDll.c)
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 *     SeCreateClientSecurityEx @ 0x140481510 (SeCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x140481AE0 (PsReferenceEffectiveToken.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     MmInitSystemDll @ 0x1407CFE98 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     ObReferenceObjectExWithTag @ 0x14010B640 (ObReferenceObjectExWithTag.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReferenceObject(signed __int64 *a1)
{
  signed __int64 v2; // r8
  signed __int64 v3; // rax
  signed __int64 v4; // rdi
  unsigned int v5; // r8d
  ULONG_PTR v6; // rdi
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  signed __int64 BugCheckParameter4; // rax

  _m_prefetchw(a1);
  v2 = *a1;
  if ( (*a1 & 0xF) != 0 )
  {
    do
    {
      v3 = _InterlockedCompareExchange64(a1, v2 - 1, v2);
      if ( v2 == v3 )
        break;
      v2 = v3;
    }
    while ( (v3 & 0xF) != 0 );
  }
  v4 = v2;
  v5 = v2 & 0xF;
  v6 = v4 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v5 > 1 )
    return v6;
  if ( !v5 )
    return 0LL;
  ObReferenceObjectExWithTag(v6, 15LL);
  _m_prefetchw(a1);
  v8 = *a1;
  while ( (v8 & 0xF) == 0 )
  {
    if ( v6 != (v8 & 0xFFFFFFFFFFFFFFF0uLL) )
      break;
    v9 = v8;
    v8 = _InterlockedCompareExchange64(a1, v8 + 15, v8);
    if ( v9 == v8 )
      return v6;
  }
  if ( ObpTraceFlags )
    ObpPushStackInfo(v6 - 48);
  BugCheckParameter4 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v6 - 48), 0xFFFFFFFFFFFFFFF1uLL) - 15;
  if ( BugCheckParameter4 > 0 )
    return v6;
  if ( BugCheckParameter4 )
    KeBugCheckEx(0x18u, 0LL, v6, 5uLL, BugCheckParameter4);
  ObpDeferObjectDeletion(v6 - 48);
  return v6;
}
