/*
 * XREFs of RtlSetHeapInformation @ 0x18006F7D0
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 *     RtlHeapTrkInitialize @ 0x1800E0E00 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpFlushHeap @ 0x180008638 (RtlpFlushHeap.c)
 *     RtlFlushHeaps @ 0x1800094D0 (RtlFlushHeaps.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlRunOnceExecuteOnce @ 0x180034E70 (RtlRunOnceExecuteOnce.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18006F860 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpIsProtectedHeap @ 0x18006F90C (RtlpIsProtectedHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x1800D852C (RtlSetHeapDebuggingInformation.c)
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
  result = RtlRunOnceExecuteOnce(&RtlpHpVirtInitVar, RtlpHpVirtRunOnceInit, 0LL, 0LL);
  if ( result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0;
  }
  return result;
}
