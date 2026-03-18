/*
 * XREFs of GreAcquireSemaphoreSharedInternal @ 0x1C006E1E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall GreAcquireSemaphoreSharedInternal(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return ExEnterPriorityRegionAndAcquireResourceShared(a1);
  return result;
}
