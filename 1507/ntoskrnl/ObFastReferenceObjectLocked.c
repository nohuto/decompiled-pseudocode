/*
 * XREFs of ObFastReferenceObjectLocked @ 0x140085588
 * Callers:
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x140088960 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MiNoPagesLastChance @ 0x14022DB04 (MiNoPagesLastChance.c)
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
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     MmInitSystemDll @ 0x1407CFE98 (MmInitSystemDll.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 * Callees:
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

ULONG_PTR __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  ULONG_PTR v1; // rbx
  signed __int64 BugCheckParameter4; // rax

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v1 - 48);
    BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v1 - 48));
    if ( BugCheckParameter4 <= 1 )
      KeBugCheckEx(0x18u, 0LL, v1, 0x10uLL, BugCheckParameter4);
  }
  return v1;
}
