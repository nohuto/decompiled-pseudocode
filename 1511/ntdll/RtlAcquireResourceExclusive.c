/*
 * XREFs of RtlAcquireResourceExclusive @ 0x18006F420
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x18006F3C0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     RtlpNonNegativeDecrement @ 0x18006F5F0 (RtlpNonNegativeDecrement.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     RtlpPossibleDeadlock @ 0x1800CBF58 (RtlpPossibleDeadlock.c)
 */

char __fastcall RtlAcquireResourceExclusive(__int64 a1, char a2)
{
  int v2; // r9d
  int v6; // ebp
  LARGE_INTEGER *v7; // rsi
  NTSTATUS v8; // eax

  v2 = *(_DWORD *)(a1 + 68);
  if ( v2 < 0 && *(void **)(a1 + 72) == NtCurrentTeb()->ClientId.UniqueThread )
  {
    _InterlockedAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
    return 1;
  }
  else
  {
    while ( 1 )
    {
      while ( !v2 )
      {
        v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), -1, 0);
        if ( !v2 )
        {
          *(_QWORD *)(a1 + 72) = NtCurrentTeb()->ClientId.UniqueThread;
          return 1;
        }
      }
      if ( !a2 )
        break;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 64));
      if ( *(_DWORD *)(a1 + 68) || !(unsigned int)RtlpNonNegativeDecrement() )
      {
        v6 = 0;
        while ( 1 )
        {
          v7 = (LARGE_INTEGER *)&RtlpTimeout;
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
            v7 = 0LL;
          v8 = NtWaitForSingleObject(*(HANDLE *)(a1 + 56), 0, v7);
          if ( v8 != 258 )
            break;
          DbgPrintEx(
            101,
            0,
            "RTL: Acquire Exclusive Sem Timeout %d (%I64u secs)\n",
            v6,
            ((unsigned __int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 63)
          + ((__int64)(((unsigned __int128)(v7->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v7->QuadPart) >> 23));
          DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
          if ( (unsigned int)++v6 > 2 )
            RtlpPossibleDeadlock(a1);
          DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
        }
        if ( v8 < 0 )
          RtlRaiseStatus((unsigned int)v8);
        v2 = *(_DWORD *)(a1 + 68);
      }
    }
    return 0;
  }
}
