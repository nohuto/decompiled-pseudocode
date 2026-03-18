/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180101EC0
 * Callers:
 *     ?ProcessSetBindingBroken@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18010E230 (-ProcessSetBindingBroken@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SET.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x180110AE0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 * Callees:
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x180051AB0 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
    v4 = a1 + 136;
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
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0xB8Cu);
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
