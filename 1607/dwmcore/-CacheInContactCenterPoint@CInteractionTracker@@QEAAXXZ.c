/*
 * XREFs of ?CacheInContactCenterPoint@CInteractionTracker@@QEAAXXZ @ 0x180149F84
 * Callers:
 *     ?GetInContactDeltaForAxis@CScrollScaleAnimation@@MEAAMXZ @ 0x18015F310 (-GetInContactDeltaForAxis@CScrollScaleAnimation@@MEAAMXZ.c)
 * Callees:
 *     ?GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z @ 0x18014A790 (-GetManipulationDelta@CInteractionTracker@@QEBAMW4ScrollAxis@@@Z.c)
 */

void __fastcall CInteractionTracker::CacheInContactCenterPoint(CInteractionTracker *this, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r10

  if ( *((_QWORD *)this + 68) )
  {
    if ( CInteractionTracker::GetManipulationDelta(this, 2LL, a3, this) != 1.0 )
    {
      *(_QWORD *)(v3 + 604) = *(_QWORD *)(v4 + 296);
      *(_DWORD *)(v3 + 612) = *(_DWORD *)(v4 + 304);
    }
  }
}
