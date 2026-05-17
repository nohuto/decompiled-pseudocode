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

__int64 __fastcall ResFindClose(unsigned __int64 a1)
{
  __int64 *v3; // rdi
  char *v4; // rdx
  __int64 v5; // r9
  unsigned __int64 v6; // r8

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
      v6 = *(_QWORD *)(a1 + 8);
      if ( v6 )
        RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v6);
      RtlDeleteCriticalSection(v3, v4, v6, v5);
      RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
      return 1LL;
    }
  }
}
