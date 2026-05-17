/*
 * XREFs of RtlConvertSharedToExclusive @ 0x18006CE60
 * Callers:
 *     <none>
 * Callees:
 *     RtlReleaseResource @ 0x18006D0B0 (RtlReleaseResource.c)
 */

__int64 __fastcall RtlConvertSharedToExclusive(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx

  result = *(unsigned int *)(a1 + 68);
  if ( (int)result >= 0 )
  {
    while ( (_DWORD)result == 1 )
    {
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 68), -1, 1);
      if ( (_DWORD)result == 1 )
      {
        result = (__int64)NtCurrentTeb();
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(result + 72);
        return result;
      }
    }
    RtlReleaseResource(a1);
    LOBYTE(v3) = 1;
    return RtlAcquireResourceExclusive(a1, v3);
  }
  return result;
}
