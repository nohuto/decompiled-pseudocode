/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x18011E4FC
 * Callers:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x180129144 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x18012BEF0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A19F4 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  int v7; // ebx
  unsigned int v8; // edi
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  if ( a3[2] > 0 )
  {
    v4 = a1 + 216;
    LODWORD(v11) = a2;
    *((_QWORD *)&v11 + 1) = a3;
    v5 = *(unsigned int *)(v4 + 24);
    v6 = v5 + 1;
    if ( (int)v5 + 1 < (unsigned int)v5 )
    {
      v7 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
      v8 = -2147024362;
LABEL_12:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x1B5Bu);
      return v8;
    }
    if ( v6 > *(_DWORD *)(v4 + 20) )
    {
      v10 = DynArrayImpl<1>::AddMultipleAndSet(v4, 0x10u, (__int64)a3, &v11);
      v7 = v10;
      if ( v10 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
      v8 = v7;
      if ( v7 < 0 )
        goto LABEL_12;
    }
    else
    {
      *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v11;
      *(_DWORD *)(v4 + 24) = v6;
    }
    (*(void (__fastcall **)(int *))(*(_QWORD *)a3 + 8LL))(a3);
  }
  return 0;
}
