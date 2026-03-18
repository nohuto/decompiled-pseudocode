/*
 * XREFs of ?QueueAnimationStateChange@CExpressionManager@@QEAAJW4AnimationEventType@@PEAVCBaseExpression@@@Z @ 0x180088658
 * Callers:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x180019A78 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x1800867B0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x180088A98 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddRef@CResource@@UEAAKXZ @ 0x18008DE90 (-AddRef@CResource@@UEAAKXZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CExpressionManager::QueueAnimationStateChange(__int64 a1, int a2, int *a3)
{
  __int64 v4; // rcx
  __int64 v5; // rax
  unsigned int v6; // edx
  unsigned int (__fastcall *v7)(CResource *__hidden); // rax
  int v8; // ebx
  int v10; // eax
  __int128 v11; // [rsp+30h] [rbp-18h] BYREF

  if ( a3[2] <= 0 )
    return 0;
  v4 = a1 + 248;
  LODWORD(v11) = a2;
  *((_QWORD *)&v11 + 1) = a3;
  v5 = *(unsigned int *)(v4 + 24);
  v6 = v5 + 1;
  if ( (int)v5 + 1 < (unsigned int)v5 )
  {
    v8 = -2147024362;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
    goto LABEL_10;
  }
  if ( v6 > *(_DWORD *)(v4 + 20) )
  {
    v10 = DynArrayImpl<1>::AddMultipleAndSet(v4, 16LL, a3, &v11);
    v8 = v10;
    if ( v10 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xC0u);
LABEL_10:
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x357u);
      return (unsigned int)v8;
    }
    goto LABEL_5;
  }
  *(_OWORD *)(*(_QWORD *)v4 + 16 * v5) = v11;
  *(_DWORD *)(v4 + 24) = v6;
LABEL_5:
  v7 = *(unsigned int (__fastcall **)(CResource *__hidden))(*(_QWORD *)a3 + 8LL);
  if ( v7 == CResource::AddRef )
    CResource::AddRef((CResource *)a3);
  else
    v7((CResource *)a3);
  return 0;
}
