/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x1800867B0
 * Callers:
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x1800862B4 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEBA_NXZ @ 0x1800241F0 (-ShouldNotify@CNotificationResource@@IEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsWaiting@Animation@Animations@Components@@QEBA_NXZ @ 0x1800865B0 (-IsWaiting@Animation@Animations@Components@@QEBA_NXZ.c)
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ @ 0x1800868C0 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180088658 (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x180088A98 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 */

__int64 __fastcall CKeyframeAnimation::OnAnimationEvent(__int64 a1, int a2)
{
  int v2; // edx
  int v3; // edx
  __int64 v4; // r8
  int v5; // eax
  int v6; // ebx
  __int64 v7; // rcx
  __int64 v9; // rcx
  int v10; // eax
  int v11; // r9d
  unsigned int v12; // [rsp+20h] [rbp-18h]

  v2 = a2 - 1;
  if ( v2 )
  {
    v3 = v2 - 1;
    if ( v3 )
    {
      if ( v3 == 2 )
      {
        *(_DWORD *)(a1 - 16) = 4;
        if ( Components::Animations::Animation::IsWaiting(*(Components::Animations::Animation **)(a1 + 96)) )
          return 0;
        v5 = CKeyframeAnimation::SampleExpressionsAndStartingValue((CKeyframeAnimation *)(v4 - 288));
        v6 = v5;
        if ( v5 >= 0 )
          return 0;
        v12 = 1751;
        goto LABEL_21;
      }
      v6 = -2147024809;
      v12 = 1756;
    }
    else
    {
      v7 = a1 - 288;
      v6 = 0;
      if ( *(_DWORD *)(v7 + 272) == 4 )
      {
        if ( *(_BYTE *)(v7 + 228) )
        {
          *(_DWORD *)(v7 + 272) = 2;
          if ( (unsigned __int8)CNotificationResource::ShouldNotify((CNotificationResource *)v7) )
          {
            v10 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(v9 + 16) + 168LL), 2LL, v9);
            v6 = v10;
            if ( v10 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x406u);
          }
        }
      }
      if ( v6 >= 0 )
        return 0;
      v12 = 1741;
    }
    v11 = v6;
LABEL_22:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, v12);
    return (unsigned int)v6;
  }
  v5 = CBaseExpression::NotifyAnimationCompleted((CBaseExpression *)(a1 - 288));
  v6 = v5;
  if ( v5 < 0 )
  {
    v12 = 1737;
LABEL_21:
    v11 = v5;
    goto LABEL_22;
  }
  return 0;
}
