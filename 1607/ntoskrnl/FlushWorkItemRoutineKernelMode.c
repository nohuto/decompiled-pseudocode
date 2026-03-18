/*
 * XREFs of FlushWorkItemRoutineKernelMode @ 0x1400AF00C
 * Callers:
 *     <none>
 * Callees:
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     LookUpTableFlushPartial @ 0x1400AF06C (LookUpTableFlushPartial.c)
 *     EnableFlushTimer @ 0x1400FAE98 (EnableFlushTimer.c)
 *     LookUpTableFlushComplete @ 0x14014915C (LookUpTableFlushComplete.c)
 */

signed __int16 __fastcall FlushWorkItemRoutineKernelMode(__int64 a1)
{
  __int64 v2; // r8
  signed __int16 result; // ax

  if ( *(_BYTE *)(a1 + 428) )
  {
    *(_BYTE *)(a1 + 428) = 0;
    LookUpTableFlushComplete();
  }
  else
  {
    LookUpTableFlushPartial();
  }
  if ( *(_DWORD *)(a1 + 256) )
    EnableFlushTimer(*(_QWORD *)(a1 + 416), *(unsigned int *)(a1 + 424), v2);
  result = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 320), 0, 1);
  if ( result == 2 )
    return KeSetEvent((PRKEVENT)(a1 + 296), 0, 0);
  return result;
}
