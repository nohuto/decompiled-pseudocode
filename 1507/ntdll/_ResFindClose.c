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

__int64 __fastcall ResFindClose(unsigned __int64 a1)
{
  __int64 *v3; // rdi
  unsigned __int64 v4; // r8

  if ( a1 == 1 )
    return 1LL;
  if ( a1 == -1LL )
  {
    RtlSetLastWin32Error(6u);
    return 0LL;
  }
  else
  {
    v3 = (__int64 *)(a1 + 40);
    RtlEnterCriticalSection(a1 + 40);
    if ( NtClose(*(HANDLE *)a1) < 0 )
    {
      RtlLeaveCriticalSection((__int64)v3);
      return 0LL;
    }
    else
    {
      v4 = *(_QWORD *)(a1 + 8);
      if ( v4 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v4);
      RtlDeleteCriticalSection(v3);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
      return 1LL;
    }
  }
}
