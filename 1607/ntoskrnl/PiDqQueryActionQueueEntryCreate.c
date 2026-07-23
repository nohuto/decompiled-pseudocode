/*
 * XREFs of PiDqQueryActionQueueEntryCreate @ 0x14048CEE8
 * Callers:
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqQueryApplyObjectEvent @ 0x14048C498 (PiDqQueryApplyObjectEvent.c)
 *     PiDqQueryEnumObject @ 0x1404DC1E8 (PiDqQueryEnumObject.c)
 * Callees:
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall PiDqQueryActionQueueEntryCreate(int a1, __int64 a2, volatile signed __int32 *a3, __int64 a4)
{
  unsigned int v4; // ebx
  _DWORD *PoolWithTag; // rax

  v4 = 0;
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x28uLL, 0x58706E50u);
  *(_QWORD *)a4 = PoolWithTag;
  if ( PoolWithTag )
  {
    PoolWithTag[8] = a1;
    *((_QWORD *)PoolWithTag + 2) = a2;
    if ( a2 )
      _InterlockedIncrement((volatile signed __int32 *)(a2 + 8));
    *(_QWORD *)(*(_QWORD *)a4 + 24LL) = a3;
    if ( a3 )
      _InterlockedIncrement(a3);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v4;
}
