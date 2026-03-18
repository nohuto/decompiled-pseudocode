/*
 * XREFs of FlushWorkItemRoutineKernelMode @ 0x1C00F8F60
 * Callers:
 *     <none>
 * Callees:
 *     LookUpTableFlushComplete @ 0x1C006F6EC (LookUpTableFlushComplete.c)
 *     EnableFlushTimer @ 0x1C00F8CB0 (EnableFlushTimer.c)
 *     LookUpTableFlushPartial @ 0x1C00F92F4 (LookUpTableFlushPartial.c)
 */

signed __int16 __fastcall FlushWorkItemRoutineKernelMode(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  signed __int16 result; // ax

  if ( *(_BYTE *)(a1 + 428) )
  {
    *(_BYTE *)(a1 + 428) = 0;
    LookUpTableFlushComplete(a1);
  }
  else
  {
    LookUpTableFlushPartial(a1, a2, a3, a4);
  }
  if ( *(_DWORD *)(a1 + 256) )
    EnableFlushTimer(*(_QWORD *)(a1 + 416), *(_DWORD *)(a1 + 424));
  result = _InterlockedCompareExchange16((volatile signed __int16 *)(a1 + 320), 0, 1);
  if ( result == 2 )
    return KeSetEvent((PRKEVENT)(a1 + 296), 0, 0);
  return result;
}
