/*
 * XREFs of RtlpHpHeapLock @ 0x18002D9C4
 * Callers:
 *     RtlLockHeap @ 0x18002E860 (RtlLockHeap.c)
 *     RtlLockHeapManagerForCloning @ 0x1800DFE20 (RtlLockHeapManagerForCloning.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x18002DA60 (RtlAcquireSRWLockExclusive.c)
 */

struct _TEB *__fastcall RtlpHpHeapLock(__int64 a1)
{
  int v2; // ecx
  struct _TEB *result; // rax

  if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 40);
    if ( v2 && (result = NtCurrentTeb(), v2 == LODWORD(result->ClientId.UniqueThread)) )
    {
      ++*(_WORD *)(a1 + 38);
    }
    else
    {
      RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 320));
      if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
      {
        RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 168));
        if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
        {
          RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 88));
          if ( (*(_BYTE *)(a1 + 20) & 1) == 0 )
            RtlAcquireSRWLockExclusive((PRTL_SRWLOCK)(a1 + 48));
        }
      }
      result = NtCurrentTeb();
      *(_DWORD *)(a1 + 40) = result->ClientId.UniqueThread;
      *(_WORD *)(a1 + 38) = 1;
    }
  }
  return result;
}
