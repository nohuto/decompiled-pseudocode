/*
 * XREFs of RtlReleaseResource @ 0x180061E10
 * Callers:
 *     RtlConvertSharedToExclusive @ 0x180061CB0 (RtlConvertSharedToExclusive.c)
 * Callees:
 *     RtlpNonNegativeDecrement @ 0x180061EE0 (RtlpNonNegativeDecrement.c)
 *     RtlRaiseStatus @ 0x1800932C0 (RtlRaiseStatus.c)
 *     ZwReleaseSemaphore @ 0x1800939A0 (ZwReleaseSemaphore.c)
 */

__int64 __fastcall RtlReleaseResource(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  signed __int32 v6; // edx
  bool v7; // zf
  __int64 v8; // r9
  __int64 v9; // rdx
  int v10; // eax
  char v11; // [rsp+30h] [rbp+8h] BYREF

  result = *(unsigned int *)(a1 + 68);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1 )
      *(_QWORD *)(a1 + 72) = 0LL;
    if ( !_InterlockedIncrement((volatile signed __int32 *)(a1 + 68)) )
    {
      if ( *(_DWORD *)(a1 + 48) )
      {
        v9 = (unsigned int)_InterlockedExchange((volatile __int32 *)(a1 + 48), 0);
        if ( (_DWORD)v9 )
        {
          v10 = ZwReleaseSemaphore(*(_QWORD *)(a1 + 40), v9, &v11, a4);
          if ( v10 < 0 )
            RtlRaiseStatus((unsigned int)v10);
        }
      }
      result = RtlpNonNegativeDecrement(a1 + 64);
      if ( (_DWORD)result )
      {
        result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v11, v8);
        if ( (int)result < 0 )
          RtlRaiseStatus((unsigned int)result);
      }
    }
  }
  else
  {
    result = (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 68), 0xFFFFFFFF);
    if ( (_DWORD)result == 1 )
    {
      v6 = *(_DWORD *)(a1 + 64);
      v7 = v6 == 0;
      if ( v6 > 0 )
      {
        do
        {
          result = (unsigned int)_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 64), v6 - 1, v6);
          if ( v6 == (_DWORD)result )
            break;
          v6 = result;
        }
        while ( (int)result > 0 );
        v7 = v6 == 0;
      }
      if ( !v7 )
      {
        result = ZwReleaseSemaphore(*(_QWORD *)(a1 + 56), 1LL, &v11, a4);
        if ( (int)result < 0 )
          RtlRaiseStatus((unsigned int)result);
      }
    }
  }
  return result;
}
