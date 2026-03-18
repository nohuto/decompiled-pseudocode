/*
 * XREFs of ?CheckForIdle@CInteractionTracker@@AEAA_N_N@Z @ 0x18014A2B0
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18014AEE0 (-OnChanged@CInteractionTracker@@MEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z @ 0x18014B54C (-SetCustomAnimation@CInteractionTracker@@AEAA_NPEAVCBaseExpression@@W4CustomAnimationTarget@@@Z.c)
 * Callees:
 *     ??$RunForAllScrollAnimations@V_lambda_a8a097d538bd29a5823eb139eb293c73_@@@CInteractionTracker@@AEAAXAEBV_lambda_a8a097d538bd29a5823eb139eb293c73_@@@Z @ 0x18014972C (--$RunForAllScrollAnimations@V_lambda_a8a097d538bd29a5823eb139eb293c73_@@@CInteractionTracker@@A.c)
 *     ??$RunForAllScrollAnimationsWithAxis@V_lambda_d10c4ee2d6fa048af20684fb87925053_@@@CInteractionTracker@@AEAAXAEBV_lambda_d10c4ee2d6fa048af20684fb87925053_@@@Z @ 0x18014984C (--$RunForAllScrollAnimationsWithAxis@V_lambda_d10c4ee2d6fa048af20684fb87925053_@@@CInteractionTr.c)
 *     ?IsOutOfBounds@CInteractionTracker@@QEAA_NXZ @ 0x18014AE14 (-IsOutOfBounds@CInteractionTracker@@QEAA_NXZ.c)
 *     ?TransitionToIdle@CInteractionTracker@@AEAAXXZ @ 0x18014C300 (-TransitionToIdle@CInteractionTracker@@AEAAXXZ.c)
 *     ?TransitionToInertia@CInteractionTracker@@AEAAXXZ @ 0x18014C474 (-TransitionToInertia@CInteractionTracker@@AEAAXXZ.c)
 */

char __fastcall CInteractionTracker::CheckForIdle(CInteractionTracker *this, char a2)
{
  char v3; // di
  int v5; // ecx
  int v6; // ecx
  int v7; // edx
  _QWORD *v8; // rcx
  CInteractionTracker *v9; // rcx
  int v10; // eax
  char v11; // cl
  char v13; // [rsp+30h] [rbp+8h] BYREF
  char *v14; // [rsp+40h] [rbp+18h] BYREF

  v13 = 0;
  v3 = 1;
  v5 = *((_DWORD *)this + 51) - 1;
  if ( !v5 )
    goto LABEL_12;
  v6 = v5 - 1;
  if ( !v6 )
  {
    v14 = &v13;
    CInteractionTracker::RunForAllScrollAnimations<_lambda_a8a097d538bd29a5823eb139eb293c73_>((__int64)this, &v14);
    if ( v13 )
      return 0;
    v14 = (char *)this;
    CInteractionTracker::RunForAllScrollAnimationsWithAxis<_lambda_d10c4ee2d6fa048af20684fb87925053_>(
      (__int64)this,
      &v14);
    if ( !CInteractionTracker::IsOutOfBounds(this) )
    {
      v11 = v13;
LABEL_13:
      if ( !v11 )
        goto LABEL_14;
      return 0;
    }
    CInteractionTracker::TransitionToInertia(v9);
    v10 = *((_DWORD *)this + 34);
    *((_QWORD *)this + 74) = *((_QWORD *)this + 16);
    *((_DWORD *)this + 150) = v10;
LABEL_12:
    v11 = 1;
    v13 = 1;
    goto LABEL_13;
  }
  if ( v6 == 1 )
  {
    v7 = 0;
    v8 = (_QWORD *)((char *)this + 440);
    while ( !*v8 || !*(_QWORD *)*v8 )
    {
      ++v7;
      ++v8;
      if ( (unsigned __int64)v7 >= 2 )
        goto LABEL_14;
    }
    return 0;
  }
LABEL_14:
  if ( a2 )
  {
    CInteractionTracker::TransitionToIdle(this);
    if ( v13 )
      return 0;
  }
  return v3;
}
