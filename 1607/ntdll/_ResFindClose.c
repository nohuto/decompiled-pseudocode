/*
 * XREFs of _ResFindClose @ 0x1801041AC
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x180104DDC (ResCGetHighestCacheIndex.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlDeleteCriticalSection @ 0x1800523A0 (RtlDeleteCriticalSection.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     NtClose @ 0x1800A6600 (NtClose.c)
 */

__int64 __fastcall ResFindClose(_RTL_CRITICAL_SECTION *BaseAddress)
{
  _RTL_CRITICAL_SECTION *v3; // rdi
  void *v4; // r8

  if ( BaseAddress == (_RTL_CRITICAL_SECTION *)1 )
    return 1LL;
  if ( BaseAddress == (_RTL_CRITICAL_SECTION *)-1LL )
  {
    RtlSetLastWin32Error(6);
    return 0LL;
  }
  else
  {
    v3 = BaseAddress + 1;
    RtlEnterCriticalSection(BaseAddress + 1);
    if ( NtClose(BaseAddress->DebugInfo) < 0 )
    {
      RtlLeaveCriticalSection(v3);
      return 0LL;
    }
    else
    {
      v4 = *(void **)&BaseAddress->LockCount;
      if ( v4 )
        RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v4);
      RtlDeleteCriticalSection(v3);
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, BaseAddress);
      return 1LL;
    }
  }
}
