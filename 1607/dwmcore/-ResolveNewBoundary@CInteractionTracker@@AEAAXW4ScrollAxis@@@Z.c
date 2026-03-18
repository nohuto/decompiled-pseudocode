/*
 * XREFs of ?ResolveNewBoundary@CInteractionTracker@@AEAAXW4ScrollAxis@@@Z @ 0x18014B10C
 * Callers:
 *     ?SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B59C (-SetMaxPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMaxScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B678 (-SetMaxScale@CInteractionTracker@@AEAAXM@Z.c)
 *     ?SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z @ 0x18014B6EC (-SetMinPosition@CInteractionTracker@@AEAAXAEBUD2DVector3@@@Z.c)
 *     ?SetMinScale@CInteractionTracker@@AEAAXM@Z @ 0x18014B7C8 (-SetMinScale@CInteractionTracker@@AEAAXM@Z.c)
 * Callees:
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18014AE14 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEAAMXZ @ 0x18015DE28 (-GetBoundedEndpoint@CScrollAnimation@@QEAAMXZ.c)
 */

void __fastcall CInteractionTracker::ResolveNewBoundary(CInteractionTracker *a1, int a2)
{
  int v2; // eax
  float *v4; // r11
  float BoundedEndpoint; // xmm3_4
  int v6; // ebx
  float v7; // xmm0_4
  bool v8; // cc
  CInteractionTracker *v9; // rcx

  v2 = *((_DWORD *)a1 + 51);
  if ( !v2 )
  {
    if ( !CInteractionTracker::IsOutOfBounds(a1) )
      return;
    goto LABEL_15;
  }
  if ( v2 != 2 )
    return;
  BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint(*((CScrollAnimation **)a1 + a2 + 52));
  if ( !a2 )
  {
    if ( v4[35] > BoundedEndpoint )
      goto LABEL_13;
    v8 = BoundedEndpoint <= v4[38];
    goto LABEL_12;
  }
  v6 = a2 - 1;
  if ( !v6 )
  {
    if ( v4[36] > BoundedEndpoint )
      goto LABEL_13;
    v8 = BoundedEndpoint <= v4[39];
LABEL_12:
    if ( v8 )
      return;
    goto LABEL_13;
  }
  if ( v6 != 1 )
    return;
  v7 = v4[45];
  if ( v7 <= BoundedEndpoint )
  {
    v8 = BoundedEndpoint == v7;
    goto LABEL_12;
  }
LABEL_13:
  v9 = (CInteractionTracker *)v4;
LABEL_15:
  CInteractionTracker::TransitionToInertia(v9);
}
