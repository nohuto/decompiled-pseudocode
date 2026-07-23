/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1400D1DD0
 * Callers:
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KiAbProcessContextSwitch @ 0x14005C010 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006B728 (KiAbProcessThreadLocks.c)
 *     IopBoostThreadCallback @ 0x14006D6AC (IopBoostThreadCallback.c)
 *     FsRtlpClearOwner @ 0x14007B708 (FsRtlpClearOwner.c)
 *     IopDeleteFileObjectExtension @ 0x1400990A0 (IopDeleteFileObjectExtension.c)
 *     PspRevertContainerImpersonation @ 0x1400D1BC0 (PspRevertContainerImpersonation.c)
 *     IopCallDriverReference @ 0x1400E98EC (IopCallDriverReference.c)
 *     ExReturnPoolQuota @ 0x1400F73A4 (ExReturnPoolQuota.c)
 *     MmChangeSectionBackingFile @ 0x1400FAD40 (MmChangeSectionBackingFile.c)
 *     ExReinitializeResourceLite @ 0x14010C490 (ExReinitializeResourceLite.c)
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     CcChangeBackingFileObject @ 0x1401B12D0 (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x1401D8D44 (KiMonitorCacheErrata.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     PsReleaseProcessWakeCounter @ 0x1404674F0 (PsReleaseProcessWakeCounter.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
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
    ObpDeferObjectDeletion((signed __int64)Object - 48);
  }
}
