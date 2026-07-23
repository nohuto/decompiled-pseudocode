/*
 * XREFs of EtwCreateTraceInstanceId @ 0x1800F3960
 * Callers:
 *     <none>
 * Callees:
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 */

__int64 __fastcall EtwCreateTraceInstanceId(__int64 a1, __int64 a2)
{
  if ( a1 && a2 && (*(_QWORD *)a2 = a1, *(_DWORD *)(a1 + 4) == LODWORD(NtCurrentTeb()->ClientId.UniqueProcess)) )
  {
    if ( *(_DWORD *)a1 == -1 )
      _InterlockedCompareExchange((volatile signed __int32 *)a1, -1, 0);
    *(_DWORD *)(a2 + 8) = _InterlockedIncrement((volatile signed __int32 *)a1);
    return 0LL;
  }
  else
  {
    RtlSetLastWin32Error(87);
    return 87LL;
  }
}
