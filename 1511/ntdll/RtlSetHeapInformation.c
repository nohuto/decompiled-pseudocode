/*
 * XREFs of RtlSetHeapInformation @ 0x18007AD60
 * Callers:
 *     LdrpInitializeProcess @ 0x18008E534 (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x1800E6560 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlFlushHeaps @ 0x18004F590 (RtlFlushHeaps.c)
 *     RtlpFlushHeap @ 0x180051248 (RtlpFlushHeap.c)
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007AE28 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpIsProtectedHeap @ 0x18007AED4 (RtlpIsProtectedHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800E01FC (RtlSetHeapDebuggingInformation.c)
 */

NTSTATUS __cdecl RtlSetHeapInformation(
        PVOID HeapHandle,
        HEAP_INFORMATION_CLASS HeapInformationClass,
        PVOID HeapInformation,
        SIZE_T HeapInformationLength)
{
  NTSTATUS result; // eax

  switch ( HeapInformationClass )
  {
    case -2147483646:
      if ( HeapInformation && HeapInformationLength == 48 )
      {
        result = RtlSetHeapDebuggingInformation(HeapHandle);
LABEL_9:
        if ( result < 0 )
          return result;
        return 0;
      }
      return -1073741823;
    case 0:
      if ( HeapInformationLength < 4 )
        return -1073741789;
      if ( *(_DWORD *)HeapInformation == 2 )
      {
        if ( *((_DWORD *)HeapHandle + 4) != -571548178 )
        {
          if ( (*((_DWORD *)HeapHandle + 28) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = RtlpSetRequestedFrontEndHeap();
            goto LABEL_9;
          }
          return -1073741811;
        }
        return 0;
      }
      return -1073741823;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0;
    case 3:
      if ( !HeapInformation
        || HeapInformationLength < 4
        || *(_DWORD *)HeapInformation != 1
        || HeapInformationLength != 8
        || *((_DWORD *)HeapInformation + 1) )
      {
        return -1073741811;
      }
      if ( HeapHandle )
      {
        RtlEnterCriticalSection(&RtlpProcessHeapsListLock);
        if ( !(unsigned int)RtlpIsProtectedHeap(HeapHandle) )
          RtlpFlushHeap((__int64)HeapHandle);
        RtlLeaveCriticalSection(&RtlpProcessHeapsListLock);
      }
      else
      {
        RtlFlushHeaps();
      }
      return 0;
  }
  if ( HeapInformationClass != 4 )
    return 0;
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return -1073741811;
  result = RtlRunOnceExecuteOnce(&RtlpHpTagInitVar, (PRTL_RUN_ONCE_INIT_FN)RtlpHpTagRunOnceInit, &RtlpHpTagContext, 0LL);
  if ( result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0;
  }
  return result;
}
