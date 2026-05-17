/*
 * XREFs of RtlAcquireResourceShared @ 0x18006F2D0
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrintEx @ 0x1800492F0 (DbgPrintEx.c)
 *     RtlpNonNegativeDecrement @ 0x18006F5F0 (RtlpNonNegativeDecrement.c)
 *     RtlRaiseStatus @ 0x1800A4A80 (RtlRaiseStatus.c)
 *     NtWaitForSingleObject @ 0x1800A5140 (NtWaitForSingleObject.c)
 *     RtlpPossibleDeadlock @ 0x1800CBF58 (RtlpPossibleDeadlock.c)
 */

char __fastcall RtlAcquireResourceShared(__int64 a1, char a2)
{
  signed __int32 v2; // r9d
  bool v5; // zf
  signed __int32 v6; // eax
  int v8; // esi
  LARGE_INTEGER *v9; // rdi
  NTSTATUS v10; // eax

  v2 = *(_DWORD *)(a1 + 68);
  if ( v2 >= 0 )
  {
LABEL_2:
    v6 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), v2 + 1, v2);
    v5 = v2 == v6;
    v2 = v6;
    if ( !v5 )
      goto LABEL_6;
    return 1;
  }
  if ( *(void **)(a1 + 72) != NtCurrentTeb()->ClientId.UniqueThread )
  {
LABEL_6:
    while ( v2 < 0 )
    {
      if ( !a2 )
        return 0;
      ++*(_DWORD *)(*(_QWORD *)(a1 + 88) + 36LL);
      _InterlockedIncrement((volatile signed __int32 *)(a1 + 48));
      if ( *(int *)(a1 + 68) < 0 || !(unsigned int)RtlpNonNegativeDecrement() )
      {
        v8 = 0;
        while ( 1 )
        {
          v9 = (LARGE_INTEGER *)&RtlpTimeout;
          if ( (*(_BYTE *)(a1 + 80) & 1) != 0 )
            v9 = 0LL;
          v10 = NtWaitForSingleObject(*(HANDLE *)(a1 + 40), 0, v9);
          if ( v10 != 258 )
            break;
          DbgPrintEx(
            101,
            0,
            "RTL: Acquire Shared Sem Timeout %d(%I64u secs)\n",
            v8,
            ((unsigned __int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 63)
          + ((__int64)(((unsigned __int128)(v9->QuadPart * (__int128)0x29406B2A1A85BD43LL) >> 64) - v9->QuadPart) >> 23));
          DbgPrintEx(101, 0, "RTL: Resource at %p\n", (const void *)a1);
          if ( (unsigned int)++v8 > 2 )
            RtlpPossibleDeadlock(a1);
          DbgPrintEx(101, 0, "RTL: Re-Waiting\n");
        }
        if ( v10 < 0 )
          RtlRaiseStatus((unsigned int)v10);
        v2 = *(_DWORD *)(a1 + 68);
      }
    }
    goto LABEL_2;
  }
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 68));
  return 1;
}
