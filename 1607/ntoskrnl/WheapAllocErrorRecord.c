/*
 * XREFs of WheapAllocErrorRecord @ 0x140230334
 * Callers:
 *     WheapReportBootError @ 0x14022FDE8 (WheapReportBootError.c)
 *     WheaReportHwError @ 0x140230000 (WheaReportHwError.c)
 * Callees:
 *     WheapInitializeErrorRecordWrapper @ 0x14014784C (WheapInitializeErrorRecordWrapper.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall WheapAllocErrorRecord(__int64 a1, int *a2)
{
  unsigned int v4; // ecx
  PVOID PoolWithTag; // rax
  __int64 v6; // rbx
  unsigned int v7; // ecx

  v4 = *(_DWORD *)(a1 + 32);
  *a2 = v4;
  if ( KeGetCurrentIrql() > 2u )
  {
    v6 = *(_QWORD *)(a1 + 48);
    v7 = 0;
    if ( *(_DWORD *)(a1 + 28) )
    {
      while ( *(_DWORD *)(v6 + 28) == 1 || _InterlockedCompareExchange((volatile signed __int32 *)(v6 + 28), 1, 0) )
      {
        ++v7;
        v6 += *(unsigned int *)(v6 + 16);
        if ( v7 >= *(_DWORD *)(a1 + 28) )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      v6 = 0LL;
    }
    if ( v6 )
    {
      *(_DWORD *)(v6 + 24) = 1;
      goto LABEL_11;
    }
LABEL_12:
    *a2 = 0;
    return v6;
  }
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, *(_DWORD *)(a1 + 36));
  v6 = (__int64)PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_12;
  memset(PoolWithTag, 0, (unsigned int)*a2);
  WheapInitializeErrorRecordWrapper(v6, *a2, a1);
LABEL_11:
  *(_QWORD *)(v6 + 32) = a1;
  return v6;
}
