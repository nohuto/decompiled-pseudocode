/*
 * XREFs of EtwpQueryPersistedMemory @ 0x1406AA2CC
 * Callers:
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 * Callees:
 *     KsrClaimPersistedMemory_0 @ 0x1400012A0 (KsrClaimPersistedMemory_0.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall EtwpQueryPersistedMemory(unsigned int a1, __int64 a2, _QWORD *a3, unsigned int *a4)
{
  int v6; // eax
  int v7; // ebx
  PVOID PoolWithTag; // rdi

  v6 = KsrClaimPersistedMemory_0();
  v7 = v6;
  if ( v6 == -1073741789 )
  {
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * a1, 0x4B777445u);
    if ( PoolWithTag )
    {
      v7 = KsrClaimPersistedMemory_0();
      if ( v7 < 0 )
      {
        ExFreePoolWithTag(PoolWithTag, 0);
      }
      else
      {
        *a4 = a1;
        *a3 = PoolWithTag;
      }
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else if ( v6 >= 0 )
  {
    return (unsigned int)-1073741823;
  }
  return (unsigned int)v7;
}
