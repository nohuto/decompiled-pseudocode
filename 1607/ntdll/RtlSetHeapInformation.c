/*
 * XREFs of RtlSetHeapInformation @ 0x18007E700
 * Callers:
 *     RtlHeapTrkInitialize @ 0x18008F3E0 (RtlHeapTrkInitialize.c)
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlpFlushHeap @ 0x18004E5D8 (RtlpFlushHeap.c)
 *     RtlFlushHeaps @ 0x180050ED0 (RtlFlushHeaps.c)
 *     RtlpSetRequestedFrontEndHeap @ 0x18007E7C8 (RtlpSetRequestedFrontEndHeap.c)
 *     RtlpIsProtectedHeap @ 0x18007E874 (RtlpIsProtectedHeap.c)
 *     RtlSetHeapDebuggingInformation @ 0x18008F850 (RtlSetHeapDebuggingInformation.c)
 */

__int64 __fastcall RtlSetHeapInformation(__int64 a1, int a2, _DWORD *a3, unsigned __int64 a4)
{
  __int64 result; // rax

  switch ( a2 )
  {
    case -2147483646:
      if ( a3 && a4 == 48 )
      {
        result = RtlSetHeapDebuggingInformation(a1, a3);
LABEL_9:
        if ( (int)result < 0 )
          return result;
        return 0LL;
      }
      return 3221225473LL;
    case 0:
      if ( a4 < 4 )
        return 3221225507LL;
      if ( *a3 == 2 )
      {
        if ( *(_DWORD *)(a1 + 16) != -571548178 )
        {
          if ( (*(_DWORD *)(a1 + 112) & 0x75010F63) == 2 && (NtCurrentPeb()->NtGlobalFlag & 0x800) == 0 )
          {
            result = RtlpSetRequestedFrontEndHeap();
            goto LABEL_9;
          }
          return 3221225485LL;
        }
        return 0LL;
      }
      return 3221225473LL;
    case 1:
      RtlpDisableBreakOnFailureCookie = 0;
      return 0LL;
    case 3:
      if ( !a3 || a4 < 4 || *a3 != 1 || a4 != 8 || a3[1] )
        return 3221225485LL;
      if ( a1 )
      {
        RtlEnterCriticalSection((__int64)&RtlpProcessHeapsListLock);
        if ( !(unsigned int)RtlpIsProtectedHeap(a1) )
          RtlpFlushHeap(a1);
        RtlLeaveCriticalSection((__int64)&RtlpProcessHeapsListLock);
      }
      else
      {
        RtlFlushHeaps();
      }
      return 0LL;
  }
  if ( a2 != 4 )
    return 0LL;
  if ( (RtlpHpHeapFeatures & 1) == 0 )
    return 3221225485LL;
  result = RtlRunOnceExecuteOnce(
             &RtlpHpTagInitVar,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpTagRunOnceInit,
             (__int64)&RtlpHpTagContext,
             0LL);
  if ( (int)result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0LL;
  }
  return result;
}
