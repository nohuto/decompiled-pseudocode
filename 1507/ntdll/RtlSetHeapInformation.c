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
             &RtlpHpVirtInitVar,
             (unsigned int (__fastcall *)(volatile signed __int64 *, __int64, unsigned __int64 *))RtlpHpVirtRunOnceInit,
             0LL,
             0LL);
  if ( (int)result >= 0 )
  {
    RtlpHpHeapFeatures |= 2u;
    return 0LL;
  }
  return result;
}
