/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0
 * Callers:
 *     CcDereferenceSharedCacheMapFileObject @ 0x14000D4AC (CcDereferenceSharedCacheMapFileObject.c)
 *     ExDeleteResourceLite @ 0x14000D800 (ExDeleteResourceLite.c)
 *     ObDereferenceObjectDeferDelete @ 0x14001B460 (ObDereferenceObjectDeferDelete.c)
 *     MI_DEREFERENCE_CONTROL_AREA_FILE @ 0x14003AD10 (MI_DEREFERENCE_CONTROL_AREA_FILE.c)
 *     ExpReleaseResourceForThreadLite @ 0x14003FF80 (ExpReleaseResourceForThreadLite.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     IopCallDriverReference @ 0x140077AB0 (IopCallDriverReference.c)
 *     ExpApplyPriorityBoost @ 0x14007EC80 (ExpApplyPriorityBoost.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     IopDeleteFileObjectExtension @ 0x140091B50 (IopDeleteFileObjectExtension.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400A5070 (MiMakeSystemCacheRangeValid.c)
 *     MiDereferencePartition @ 0x1400BC1D4 (MiDereferencePartition.c)
 *     PspJobDelete @ 0x1400C49F4 (PspJobDelete.c)
 *     FsRtlpClearOwnerThread @ 0x1400CB038 (FsRtlpClearOwnerThread.c)
 *     ExReinitializeResourceLite @ 0x1400D9F40 (ExReinitializeResourceLite.c)
 *     MmChangeSectionBackingFile @ 0x1400DD00C (MmChangeSectionBackingFile.c)
 *     ExReturnPoolQuota @ 0x1400E2A64 (ExReturnPoolQuota.c)
 *     MmFreeAccessPfnBuffer @ 0x1400FAAA8 (MmFreeAccessPfnBuffer.c)
 *     IopBoostThreadCallback @ 0x140102D34 (IopBoostThreadCallback.c)
 *     PfpServiceMainThreadUnboost @ 0x14011A3FC (PfpServiceMainThreadUnboost.c)
 *     CcChangeBackingFileObject @ 0x1401431E4 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x1401CA6B4 (KiMonitorCacheErrata.c)
 *     PsReleaseProcessWakeCounter @ 0x1403E967C (PsReleaseProcessWakeCounter.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401E6504 (ObpPushStackInfo.c)
 */

void __stdcall ObDereferenceObjectDeferDeleteWithTag(PVOID Object, ULONG Tag)
{
  signed __int64 v3; // rax
  bool v4; // cc
  signed __int64 BugCheckParameter4; // rax

  if ( ObpTraceFlags )
    ObpPushStackInfo((_DWORD)Object - 48);
  v3 = _InterlockedExchangeAdd64((volatile signed __int64 *)Object - 6, 0xFFFFFFFFFFFFFFFFuLL);
  v4 = v3 <= 1;
  BugCheckParameter4 = v3 - 1;
  if ( v4 )
  {
    if ( *((_QWORD *)Object - 5) )
      KeBugCheckEx(
        0x18u,
        ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ (unsigned __int8)*((char *)Object - 24) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)Object - 48) >> 8)],
        (ULONG_PTR)Object,
        3uLL,
        *((_QWORD *)Object - 5));
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)Object, 4uLL, BugCheckParameter4);
    ObpDeferObjectDeletion((char *)Object - 48);
  }
}
