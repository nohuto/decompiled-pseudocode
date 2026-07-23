/*
 * XREFs of PspSetCreateThreadNotifyRoutine @ 0x14054D184
 * Callers:
 *     PsSetCreateThreadNotifyRoutine @ 0x14054D17C (PsSetCreateThreadNotifyRoutine.c)
 *     PsSetCreateThreadNotifyRoutineEx @ 0x140681E88 (PsSetCreateThreadNotifyRoutineEx.c)
 * Callees:
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocateCallBack @ 0x14054D210 (ExAllocateCallBack.c)
 */

__int64 __fastcall PspSetCreateThreadNotifyRoutine(__int64 a1, char a2)
{
  struct _EX_RUNDOWN_REF *v3; // rdi
  __int64 v4; // rbx

  v3 = (struct _EX_RUNDOWN_REF *)ExAllocateCallBack(a1, a2 != 0);
  if ( !v3 )
    return 3221225626LL;
  v4 = 0LL;
  while ( !ExCompareExchangeCallBack((signed __int64 *)&PspCreateThreadNotifyRoutine.Ptr + v4, v3, 0LL) )
  {
    v4 = (unsigned int)(v4 + 1);
    if ( (unsigned int)v4 >= 0x40 )
    {
      ExFreePoolWithTag(v3, 0);
      return 3221225626LL;
    }
  }
  if ( a2 )
  {
    _InterlockedIncrement(&PspCreateThreadNotifyRoutineExCount);
    if ( (PspNotifyEnableMask & 0x10) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 4u);
  }
  else
  {
    _InterlockedIncrement(&PspCreateThreadNotifyRoutineCount);
    if ( (PspNotifyEnableMask & 8) == 0 )
      _interlockedbittestandset(&PspNotifyEnableMask, 3u);
  }
  return 0LL;
}
