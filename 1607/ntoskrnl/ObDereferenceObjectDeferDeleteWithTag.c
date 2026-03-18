/*
 * XREFs of ObDereferenceObjectDeferDeleteWithTag @ 0x1400D3F30
 * Callers:
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     KiAbProcessContextSwitch @ 0x14005C490 (KiAbProcessContextSwitch.c)
 *     KiAbProcessThreadLocks @ 0x14006BBA8 (KiAbProcessThreadLocks.c)
 *     IopBoostThreadCallback @ 0x14006DB2C (IopBoostThreadCallback.c)
 *     FsRtlpClearOwner @ 0x14007B688 (FsRtlpClearOwner.c)
 *     ExReinitializeResourceLite @ 0x1400882A0 (ExReinitializeResourceLite.c)
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     IopDeleteFileObjectExtension @ 0x1400998A0 (IopDeleteFileObjectExtension.c)
 *     PspRevertContainerImpersonation @ 0x1400D3D20 (PspRevertContainerImpersonation.c)
 *     IopCallDriverReference @ 0x1400EBA7C (IopCallDriverReference.c)
 *     ExReturnPoolQuota @ 0x1400F9564 (ExReturnPoolQuota.c)
 *     MmChangeSectionBackingFile @ 0x1400FCFC0 (MmChangeSectionBackingFile.c)
 *     CcChangeBackingFileObject @ 0x1401B13EC (CcChangeBackingFileObject.c)
 *     KiMonitorCacheErrata @ 0x1401D8F18 (KiMonitorCacheErrata.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     PsReleaseProcessWakeCounter @ 0x140468620 (PsReleaseProcessWakeCounter.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
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
