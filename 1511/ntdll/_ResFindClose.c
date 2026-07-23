/*
 * XREFs of _ResFindClose @ 0x1800F98D4
 * Callers:
 *     ResCGetHighestCacheIndex @ 0x1800FA4F0 (ResCGetHighestCacheIndex.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     RtlDeleteCriticalSection @ 0x180059D20 (RtlDeleteCriticalSection.c)
 *     NtClose @ 0x1800A52A0 (NtClose.c)
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
