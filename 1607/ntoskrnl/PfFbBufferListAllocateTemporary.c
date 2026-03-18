/*
 * XREFs of PfFbBufferListAllocateTemporary @ 0x1400070CC
 * Callers:
 *     PfpEventHandleOutOfBuffers @ 0x14000713C (PfpEventHandleOutOfBuffers.c)
 *     PfpSectInfoHandleOutOfBuffers @ 0x1403EBD28 (PfpSectInfoHandleOutOfBuffers.c)
 * Callees:
 *     PfFbBufferListInsertInFree @ 0x140006744 (PfFbBufferListInsertInFree.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PfFbBufferListAllocateTemporary(_SLIST_ENTRY *RunRef, signed int a2)
{
  struct _SLIST_ENTRY *PoolWithTag; // rax
  __int64 result; // rax

  if ( a2 + _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, a2) > SHIDWORD(RunRef[5].Next) )
  {
    result = 3221225773LL;
  }
  else
  {
    PoolWithTag = (struct _SLIST_ENTRY *)ExAllocatePoolWithTag(
                                           (POOL_TYPE)*((_DWORD *)&RunRef[4].Next + 2),
                                           a2,
                                           HIDWORD(RunRef[4].Next));
    if ( PoolWithTag )
    {
      PfFbBufferListInsertInFree(RunRef, PoolWithTag, a2, 1, 0);
      return 0LL;
    }
    result = 3221225626LL;
  }
  _InterlockedExchangeAdd((volatile signed __int32 *)&RunRef[6].Next + 2, -a2);
  return result;
}
