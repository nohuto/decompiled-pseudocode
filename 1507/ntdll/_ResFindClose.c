/*
 * XREFs of _ResFindClose @ 0x1800F9FBC
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x1800FABD8 (ResCGetHighestCacheIndex.c)
 * Callees:
 *     RtlDeleteCriticalSection @ 0x1800081B0 (RtlDeleteCriticalSection.c)
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     NtClose @ 0x1800939F0 (NtClose.c)
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
