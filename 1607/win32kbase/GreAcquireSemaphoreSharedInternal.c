/*
 * XREFs of GreAcquireSemaphoreSharedInternal @ 0x1C0026C10
 * Callers:
 *     ?hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z @ 0x1C00C4EA0 (-hbmSelectBitmapInternal@@YAPEAUHBITMAP__@@AEAVXDCOBJ@@PEAU1@HHH@Z.c)
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
