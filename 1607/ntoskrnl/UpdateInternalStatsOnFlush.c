/*
 * XREFs of UpdateInternalStatsOnFlush @ 0x1400AF2DC
 * Callers:
 *     LookUpTableFlushPartial @ 0x1400AF06C (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x14014915C (LookUpTableFlushComplete.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UpdateInternalStatsOnFlush(__int64 a1, unsigned int a2)
{
  __int64 result; // rax

  if ( a2 )
  {
    if ( *(_DWORD *)(a1 + 368) > a2 || !*(_QWORD *)(a1 + 352) )
      *(_DWORD *)(a1 + 368) = a2;
    if ( *(_DWORD *)(a1 + 364) < a2 )
      *(_DWORD *)(a1 + 364) = a2;
    ++*(_QWORD *)(a1 + 352);
    result = a2;
    *(_QWORD *)(a1 + 344) += a2;
  }
  return result;
}
