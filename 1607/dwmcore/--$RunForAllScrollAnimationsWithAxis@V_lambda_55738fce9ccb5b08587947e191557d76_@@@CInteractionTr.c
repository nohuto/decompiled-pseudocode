/*
 * XREFs of ??$RunForAllScrollAnimationsWithAxis@V_lambda_55738fce9ccb5b08587947e191557d76_@@@CInteractionTracker@@AEAAXAEBV_lambda_55738fce9ccb5b08587947e191557d76_@@@Z @ 0x180149788
 * Callers:
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 * Callees:
 *     ?GetBoundedEndpoint@CScrollAnimation@@QEAAMXZ @ 0x18015DE28 (-GetBoundedEndpoint@CScrollAnimation@@QEAAMXZ.c)
 */

void __fastcall CInteractionTracker::RunForAllScrollAnimationsWithAxis<_lambda_55738fce9ccb5b08587947e191557d76_>(
        __int64 a1,
        __int64 a2)
{
  int v4; // ebx
  __int64 v5; // rdi
  float *v6; // r11
  float BoundedEndpoint; // xmm3_4
  float v8; // xmm0_4
  bool v9; // cc
  char v10; // cl

  v4 = 0;
  v5 = 416LL;
  do
  {
    if ( !*(_QWORD *)(v5 + a1) )
      goto LABEL_16;
    BoundedEndpoint = CScrollAnimation::GetBoundedEndpoint(*(CScrollAnimation **)(v5 + *(_QWORD *)a2));
    if ( v4 )
    {
      if ( v4 == 1 )
      {
        if ( v6[36] > BoundedEndpoint )
          goto LABEL_14;
        v9 = BoundedEndpoint <= v6[39];
      }
      else
      {
        if ( v4 != 2 )
          goto LABEL_16;
        v8 = v6[45];
        if ( v8 > BoundedEndpoint )
        {
LABEL_14:
          v10 = 1;
          goto LABEL_15;
        }
        v9 = BoundedEndpoint == v8;
      }
    }
    else
    {
      if ( v6[35] > BoundedEndpoint )
        goto LABEL_14;
      v9 = BoundedEndpoint <= v6[38];
    }
    if ( !v9 )
      goto LABEL_14;
    v10 = 0;
LABEL_15:
    **(_BYTE **)(a2 + 8) |= v10;
LABEL_16:
    ++v4;
    v5 += 8LL;
  }
  while ( v4 < 3 );
}
