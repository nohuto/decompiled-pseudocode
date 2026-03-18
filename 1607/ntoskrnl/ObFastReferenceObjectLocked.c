/*
 * XREFs of ObFastReferenceObjectLocked @ 0x1400D1534
 * Callers:
 *     MiReferenceInPageFile @ 0x140024E50 (MiReferenceInPageFile.c)
 *     MiReferenceControlAreaFile @ 0x140026690 (MiReferenceControlAreaFile.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031890 (MiMakeSystemCacheRangeValid.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x140048940 (MiLogPageAccess.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400CFD78 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DEA98 (MiFlushControlArea.c)
 *     MiNoPagesLastChance @ 0x1401F3384 (MiNoPagesLastChance.c)
 *     SeCreateClientSecurityEx @ 0x14040F250 (SeCreateClientSecurityEx.c)
 *     SeCaptureSubjectContext @ 0x140412030 (SeCaptureSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x1404124C0 (PsReferenceEffectiveToken.c)
 *     PfQuerySuperfetchInformation @ 0x140418550 (PfQuerySuperfetchInformation.c)
 *     PsReferencePrimaryToken @ 0x140418C20 (PsReferencePrimaryToken.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     SeCaptureSubjectContextEx @ 0x14041F830 (SeCaptureSubjectContextEx.c)
 *     NtOpenProcessTokenEx @ 0x140420240 (NtOpenProcessTokenEx.c)
 *     ObOpenObjectByPointer @ 0x1404203C0 (ObOpenObjectByPointer.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     PspReferenceSystemDll @ 0x14046C06C (PspReferenceSystemDll.c)
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x1400D16D0 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 */

unsigned __int64 __fastcall ObFastReferenceObjectLocked(_QWORD *a1)
{
  unsigned __int64 v1; // rbx

  v1 = *a1 & 0xFFFFFFFFFFFFFFF0uLL;
  if ( v1 )
  {
    if ( ObpTraceFlags )
      ObpPushStackInfo(v1 - 48);
    ObpIncrPointerCount(v1 - 48);
  }
  return v1;
}
