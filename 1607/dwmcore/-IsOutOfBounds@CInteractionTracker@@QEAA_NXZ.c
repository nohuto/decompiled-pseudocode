/*
 * XREFs of ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18014AE14
 * Callers:
 *     ?CheckForIdle@CInteractionTracker@@AEAA_N_N@Z @ 0x18014A2B0 (-CheckForIdle@CInteractionTracker@@AEAA_N_N@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014AEE0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z @ 0x18014B10C (-ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z @ 0x18014ADA0 (-IsOutOfBounds@CInteractionTracker@@QEAA_NW4ScrollAxis@@@Z.c)
 */

char __fastcall CInteractionTracker::IsOutOfBounds(CInteractionTracker *this)
{
  char IsOutOfBounds; // al
  float *v2; // rcx
  int v3; // r9d
  float *v4; // rcx
  char v5; // r8

  IsOutOfBounds = CInteractionTracker::IsOutOfBounds((float *)this, 0);
  LOBYTE(v3) = 1;
  if ( IsOutOfBounds
    || (unsigned __int8)CInteractionTracker::IsOutOfBounds(v2, 1)
    || (unsigned __int8)CInteractionTracker::IsOutOfBounds(v4, v3 + 1) )
  {
    return v3;
  }
  return v5;
}
