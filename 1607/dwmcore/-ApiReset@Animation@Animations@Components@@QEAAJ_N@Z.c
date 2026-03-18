/*
 * XREFs of ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378
 * Callers:
 *     ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019620 (-ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_.c)
 *     ?xwPreDelete@Animation@Animations@Components@@UEAAXXZ @ 0x180086000 (-xwPreDelete@Animation@Animations@Components@@UEAAXXZ.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x1800862B4 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x1800864B0 (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180086F40 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ @ 0x1801947C0 (-xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ.c)
 * Callees:
 *     ?GetTimeLength@Animation@Animations@Components@@QEBAMXZ @ 0x1800191B8 (-GetTimeLength@Animation@Animations@Components@@QEBAMXZ.c)
 *     ?ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z @ 0x1800192AC (-ResetTime@Sequence@Animations@Components@@QEAAXI_N@Z.c)
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x18002D3CC (-Round@Math@Animations@Components@@SAHM@Z.c)
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180085810 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Stop@Sequence@Animations@Components@@QEAAXXZ @ 0x180085EF4 (-Stop@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z @ 0x1800865D0 (-PrepareSequenceForIteration@Animation@Animations@Components@@AEAAXI@Z.c)
 *     ?OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z @ 0x1800867B0 (-OnAnimationEvent@CKeyframeAnimation@@UEAAJW4AnimationEventType@@@Z.c)
 *     ?SetScalarValue@CKeyframeAnimation@@UEAAJM@Z @ 0x180086980 (-SetScalarValue@CKeyframeAnimation@@UEAAJM@Z.c)
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x1800AD458 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800C29B0 (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x180194030 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiReset(Components::Animations::Animation *this, char a2)
{
  int v3; // esi
  __int64 (__fastcall ***v4)(CKeyframeAnimation *__hidden, float); // rbx
  __int64 (__fastcall *v5)(CKeyframeAnimation *__hidden, float); // rax
  CKeyframeAnimation *v6; // rcx
  float v7; // xmm1_4
  int v8; // eax
  bool v9; // sf
  Components::Animations::Sequence *v10; // rcx
  __int64 v11; // rcx
  void (__fastcall *v12)(__int64, __int64); // rax
  Components::Animations::AnimationManager *v14; // rbx
  __int64 v15; // rcx
  Components::Animations::Sequence *v16; // rcx
  int v17; // edx
  float TimeLength; // xmm0_4
  int v19; // edx
  unsigned int v20; // edx
  int v21; // r11d
  __int64 (__fastcall *v22)(CKeyframeAnimation *__hidden, float); // rax
  int v23; // eax
  int v24; // [rsp+30h] [rbp-10h] BYREF
  Components::Animations::Animation *v25; // [rsp+50h] [rbp+10h] BYREF

  if ( (*((_BYTE *)this + 104) & 4) == 0 )
  {
LABEL_16:
    v3 = 0;
    goto LABEL_17;
  }
  v3 = 0;
  if ( !a2 )
    goto LABEL_11;
  if ( *((_DWORD *)this + 20) == 1 )
  {
    *((_DWORD *)this + 9) = *((_DWORD *)this + 8);
    Components::Animations::Animation::PrepareSequenceForIteration(this, 0);
    v16 = *(Components::Animations::Sequence **)(v15 + 16);
    v17 = 0;
LABEL_28:
    Components::Animations::Sequence::ResetTime(v16, v17, 1);
    goto LABEL_5;
  }
  if ( *((_DWORD *)this + 20) == 2 )
  {
    *((_DWORD *)this + 9) = *((_DWORD *)this + 8);
    TimeLength = Components::Animations::Animation::GetTimeLength(this);
    Components::Animations::Math::Round(TimeLength * 1000.0);
    v19 = *((_DWORD *)this + 12);
    if ( v19 >= 1 )
      v20 = v19 - 1;
    else
      v20 = 0;
    Components::Animations::Animation::PrepareSequenceForIteration(this, v20);
    v16 = (Components::Animations::Sequence *)*((_QWORD *)this + 2);
    v17 = v21;
    goto LABEL_28;
  }
LABEL_5:
  Components::Animations::Sequence::Calculate(*((Components::Animations::Sequence **)this + 2));
  v4 = (__int64 (__fastcall ***)(CKeyframeAnimation *__hidden, float))*((_QWORD *)this + 12);
  if ( !v4 )
    goto LABEL_11;
  if ( *((_DWORD *)this + 16) == 18 )
  {
    v5 = **v4;
    v6 = (CKeyframeAnimation *)*((_QWORD *)this + 12);
    if ( v5 == CKeyframeAnimation::SetScalarValue )
    {
      v7 = **(double **)(*((_QWORD *)this + 2) + 232LL);
      v8 = CKeyframeAnimation::SetScalarValue(v6, v7);
    }
    else
    {
      v8 = ((__int64 (__fastcall *)(CKeyframeAnimation *))v5)(v6);
    }
    v3 = v8;
    v9 = v8 < 0;
  }
  else
  {
    if ( *((_DWORD *)this + 16) == 35 )
    {
      v23 = ((__int64 (__fastcall *)(_QWORD))(*v4)[1])(*((_QWORD *)this + 12));
    }
    else if ( *((_DWORD *)this + 16) == 52 )
    {
      v23 = ((__int64 (__fastcall *)(_QWORD))(*v4)[2])(*((_QWORD *)this + 12));
    }
    else
    {
      switch ( *((_DWORD *)this + 16) )
      {
        case 'E':
          Components::Animations::Value::GetColor(*(_QWORD *)(*((_QWORD *)this + 2) + 232LL), &v24);
          v22 = (*v4)[3];
          break;
        case 'F':
          Components::Animations::Value::GetColor(*(_QWORD *)(*((_QWORD *)this + 2) + 232LL), &v24);
          v22 = (*v4)[4];
          break;
        case 'G':
          Components::Animations::Value::GetQuaternion(*(_QWORD *)(*((_QWORD *)this + 2) + 232LL), &v24);
          v22 = (*v4)[5];
          break;
        default:
          goto LABEL_11;
      }
      v23 = ((__int64 (__fastcall *)(__int64 (__fastcall ***)(CKeyframeAnimation *__hidden, float)))v22)(v4);
    }
    v3 = v23;
    v9 = v23 < 0;
  }
  if ( v9 )
    goto LABEL_17;
LABEL_11:
  if ( (*((_BYTE *)this + 104) & 1) != 0 )
  {
    v14 = Components::Animations::AnimationManager::s_PORT_pSingleton;
    v25 = this;
    Components::Animations::ArrayListF<Components::Animations::Animation *>::Add(
      (char *)Components::Animations::AnimationManager::s_PORT_pSingleton + 88,
      &v25);
    *((_BYTE *)v14 + 184) |= 4u;
    *((_BYTE *)this + 104) &= ~1u;
  }
  v10 = (Components::Animations::Sequence *)*((_QWORD *)this + 2);
  if ( (*((_BYTE *)v10 + 264) & 1) != 0 )
    Components::Animations::Sequence::Stop(v10);
  if ( v3 >= 0 )
    goto LABEL_16;
LABEL_17:
  *((_BYTE *)this + 104) &= 0x89u;
  *((_DWORD *)this + 9) = 0;
  if ( v3 >= 0 )
  {
    v11 = *((_QWORD *)this + 12);
    v12 = *(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 64LL);
    if ( (char *)v12 == (char *)CKeyframeAnimation::OnAnimationEvent )
      CKeyframeAnimation::OnAnimationEvent(v11, 2LL);
    else
      v12(v11, 2LL);
  }
  return (unsigned int)v3;
}
