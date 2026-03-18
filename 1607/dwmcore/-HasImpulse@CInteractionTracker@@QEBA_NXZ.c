/*
 * XREFs of ?HasImpulse@CInteractionTracker@@QEBA_NXZ @ 0x18014ACFC
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?HasImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z @ 0x18014AC9C (-HasImpulse@CInteractionTracker@@QEBA_NW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::HasImpulse(CInteractionTracker *this)
{
  char v1; // bl

  v1 = 0;
  if ( *((_BYTE *)this + 616)
    || CInteractionTracker::HasImpulse((__int64)this, 0)
    || CInteractionTracker::HasImpulse((__int64)this, 1)
    || CInteractionTracker::HasImpulse((__int64)this, 2) )
  {
    return 1;
  }
  return v1;
}
