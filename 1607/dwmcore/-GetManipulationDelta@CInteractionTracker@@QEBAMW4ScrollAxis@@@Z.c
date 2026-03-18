/*
 * XREFs of ?GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A790
 * Callers:
 *     ?CacheInContactCenterPoint@CInteractionTracker@@QEAAXXZ @ 0x180149F84 (-CacheInContactCenterPoint@CInteractionTracker@@QEAAXXZ.c)
 *     ?GetInContactDeltaForAxis@CScrollScaleAnimation@@MEAAMXZ @ 0x18015F310 (-GetInContactDeltaForAxis@CScrollScaleAnimation@@MEAAMXZ.c)
 *     ?GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ @ 0x18015FA00 (-GetInContactDeltaForAxis@CScrollPositionAnimation@@MEAAMXZ.c)
 * Callees:
 *     <none>
 */

__m128 __fastcall CInteractionTracker::GetManipulationDelta(__int64 a1, int a2)
{
  __int64 v2; // rax
  __int128 v3; // xmm2
  int v4; // edx
  __int128 v6; // [rsp+0h] [rbp-A8h]

  v2 = *(_QWORD *)(a1 + 544);
  v3 = 0LL;
  if ( v2 )
  {
    v6 = *(_OWORD *)(v2 + 268);
    if ( a2 )
    {
      v4 = a2 - 1;
      if ( v4 )
      {
        if ( v4 == 1 )
          return (__m128)HIDWORD(v6);
      }
      else
      {
        return (__m128)DWORD1(v6);
      }
    }
    else
    {
      return (__m128)(unsigned int)v6;
    }
  }
  return (__m128)v3;
}
