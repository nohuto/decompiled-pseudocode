/*
 * XREFs of ObFastReferenceObjectLocked @ 0x14000D5AC
 * Callers:
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14000D50C (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiReferenceInPageFile @ 0x140039C9C (MiReferenceInPageFile.c)
 *     MI_REFERENCE_CONTROL_AREA_FILE @ 0x14003ABE0 (MI_REFERENCE_CONTROL_AREA_FILE.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400A5070 (MiMakeSystemCacheRangeValid.c)
 *     MiDeleteCachedSubsection @ 0x1401D0BA0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     MiNoPagesLastChance @ 0x1401E3DB0 (MiNoPagesLastChance.c)
 *     CmpIsVirtEnabled @ 0x1403FBDC0 (CmpIsVirtEnabled.c)
 *     NtQueryKey @ 0x1404003C0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x140400BF0 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     PsReferencePrimaryToken @ 0x140412C90 (PsReferencePrimaryToken.c)
 *     PsImpersonateClient @ 0x1404264E0 (PsImpersonateClient.c)
 *     AlpcpExposeTokenAttribute @ 0x14042B240 (AlpcpExposeTokenAttribute.c)
 *     ObInsertObjectEx @ 0x14042D940 (ObInsertObjectEx.c)
 *     SeCaptureSubjectContext @ 0x140433EB0 (SeCaptureSubjectContext.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 *     PspReferenceSystemDll @ 0x140464590 (PspReferenceSystemDll.c)
 *     SeCaptureSubjectContextEx @ 0x140470510 (SeCaptureSubjectContextEx.c)
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     PsOpenProcess @ 0x140476110 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140476C40 (ObOpenObjectByPointer.c)
 *     NtOpenProcessTokenEx @ 0x140476F10 (NtOpenProcessTokenEx.c)
 * Callees:
 *     ObpIncrPointerCount @ 0x140042B20 (ObpIncrPointerCount.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
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
