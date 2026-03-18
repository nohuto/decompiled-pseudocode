/*
 * XREFs of ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18012BEF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ShouldNotify@CNotificationResource@@IEAA_NXZ @ 0x180065004 (-ShouldNotify@CNotificationResource@@IEAA_NXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18011E4FC (-QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@.c)
 */

__int64 __fastcall CKeyframeAnimation::OnAnimationEvent(__int64 a1, int a2)
{
  char v2; // al
  int v3; // edx
  int v4; // edx
  int v5; // ebx
  __int64 v7; // r8
  __int64 v8; // r8
  int v9; // eax
  __int64 v10; // rdi
  int v11; // eax

  *(_BYTE *)(a1 + 124) &= ~2u;
  v2 = *(_BYTE *)(a1 + 124);
  v3 = a2 - 1;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      if ( v4 != 2 )
      {
        v5 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x4D2u);
        return (unsigned int)v5;
      }
      *(_DWORD *)(a1 - 8) = 4;
      *(_BYTE *)(a1 + 124) = v2 | 2;
    }
    else
    {
      v7 = a1 - 136;
      v5 = 0;
      if ( *(_DWORD *)(a1 - 136 + 128) == 4 )
      {
        if ( *(_BYTE *)(v7 + 100) )
        {
          *(_DWORD *)(v7 + 128) = 2;
          if ( (unsigned __int8)CNotificationResource::ShouldNotify((CNotificationResource *)(a1 - 136)) )
          {
            v9 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(v8 + 16) + 168LL), 2, (int *)v8);
            v5 = v9;
            if ( v9 < 0 )
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x303u);
          }
        }
      }
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4C9u);
        return (unsigned int)v5;
      }
    }
  }
  else
  {
    v10 = a1 - 136;
    v5 = 0;
    if ( (unsigned __int8)CNotificationResource::ShouldNotify((CNotificationResource *)(a1 - 136)) )
    {
      v11 = CExpressionManager::QueueAnimationStateChange(*(_QWORD *)(*(_QWORD *)(v10 + 16) + 168LL), 1, (int *)v10);
      v5 = v11;
      if ( v11 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2E0u);
    }
    *(_DWORD *)(v10 + 128) = 1;
    if ( v5 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x4C5u);
      return (unsigned int)v5;
    }
  }
  return 0;
}
