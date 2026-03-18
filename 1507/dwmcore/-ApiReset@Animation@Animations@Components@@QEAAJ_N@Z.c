/*
 * XREFs of ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4
 * Callers:
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180110664 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180110850 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180153DF0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x180153F58 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?CleanUp@Animation@Animations@Components@@AEAAXXZ @ 0x180154A78 (-CleanUp@Animation@Animations@Components@@AEAAXXZ.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x180154B5C (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?Invoke@Animation@Animations@Components@@UEAAJII@Z @ 0x180154FC0 (-Invoke@Animation@Animations@Components@@UEAAJII@Z.c)
 *     ?xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ @ 0x1801561F0 (-xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetVector4@Value@Animations@Components@@QEBA?AVVector4@23@XZ @ 0x18009C19C (-GetVector4@Value@Animations@Components@@QEBA-AVVector4@23@XZ.c)
 *     ?Round@Math@Animations@Components@@SAHM@Z @ 0x180153810 (-Round@Math@Animations@Components@@SAHM@Z.c)
 *     ?GetTimeLength@Animation@Animations@Components@@QEBAMXZ @ 0x180154F7C (-GetTimeLength@Animation@Animations@Components@@QEBAMXZ.c)
 *     ?OnAnimationReset@Animation@Animations@Components@@AEAAXHM@Z @ 0x18015518C (-OnAnimationReset@Animation@Animations@Components@@AEAAXHM@Z.c)
 *     ?ProcessPendingEvents@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801552FC (-ProcessPendingEvents@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x180155D14 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 *     ?Calculate@Sequence@Animations@Components@@QEAAXXZ @ 0x180156314 (-Calculate@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?Stop@Sequence@Animations@Components@@QEAAJXZ @ 0x180157000 (-Stop@Sequence@Animations@Components@@QEAAJXZ.c)
 *     ?Update@Timer@Animations@Components@@QEAAXH@Z @ 0x1801571D8 (-Update@Timer@Animations@Components@@QEAAXH@Z.c)
 *     ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x180157214 (-Commit@AnimationTarget@Animations@Components@@QEAAJXZ.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiReset(
        Components::Animations::Animation *this,
        __int64 a2,
        float a3)
{
  int v4; // esi
  int v5; // eax
  Components::Animations::Timer *v6; // rcx
  float TimeLength; // xmm0_4
  int v8; // eax
  Components::Animations::Timer *v9; // r9
  int v10; // ebp
  int v11; // ebx
  __int64 v12; // r14
  int v13; // eax
  __int64 v14; // r14
  int v15; // eax
  int v16; // eax
  int v17; // eax
  Components::Animations::AnimationManager *v18; // rbx
  Components::Animations::Sequence *v19; // rcx
  int v20; // r9d
  int v21; // r8d
  __int64 v22; // r10
  int v23; // eax
  _DWORD v25[2]; // [rsp+30h] [rbp-58h] BYREF
  Components::Animations::Animation *v26; // [rsp+90h] [rbp+8h] BYREF

  if ( (*((_BYTE *)this + 252) & 4) == 0 )
  {
LABEL_35:
    v4 = 0;
    goto LABEL_36;
  }
  v4 = 0;
  if ( !(_BYTE)a2 )
    goto LABEL_24;
  v5 = *((_DWORD *)this + 60);
  if ( v5 == 1 )
  {
    v6 = *(Components::Animations::Timer **)(*((_QWORD *)this + 3) + 224LL);
    *((_DWORD *)v6 + 1) = 0;
LABEL_7:
    Components::Animations::Timer::Update(v6, 0);
    goto LABEL_8;
  }
  if ( v5 == 2 )
  {
    TimeLength = Components::Animations::Animation::GetTimeLength(this);
    v8 = Components::Animations::Math::Round(TimeLength * 1000.0);
    *((_DWORD *)v9 + 1) = v8;
    v6 = v9;
    goto LABEL_7;
  }
LABEL_8:
  Components::Animations::Sequence::Calculate(*((Components::Animations::Sequence **)this + 3));
  v10 = *((_DWORD *)this + 10);
  v11 = 0;
  v12 = *((_QWORD *)this + 4);
  while ( v11 != v10 )
  {
    v13 = Components::Animations::AnimationTarget::Commit(*(Components::Animations::AnimationTarget **)(v12 + 8LL * v11));
    if ( v13 < 0 && v4 >= 0 )
      v4 = v13;
    ++v11;
  }
  v14 = *((_QWORD *)this + 32);
  if ( !v14 )
    goto LABEL_24;
  v15 = *((_DWORD *)this + 57);
  switch ( v15 )
  {
    case 17:
      v16 = (**(__int64 (__fastcall ***)(_QWORD))v14)(*((_QWORD *)this + 32));
LABEL_23:
      v4 = v16;
      if ( v16 < 0 )
        goto LABEL_36;
      break;
    case 34:
      a3 = *(double *)(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL) + 8LL);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 8LL))(*((_QWORD *)this + 32));
      goto LABEL_23;
    case 51:
      a3 = *(double *)(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL) + 8LL);
      v16 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v14 + 16LL))(*((_QWORD *)this + 32));
      goto LABEL_23;
    case 68:
      Components::Animations::Value::GetVector4(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL), (__int64)v25);
      a3 = *(float *)&v25[1];
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 24LL))(v14);
      goto LABEL_23;
  }
LABEL_24:
  v17 = Components::Animations::Animation::ProcessPendingEvents(this, 0);
  if ( v17 < 0 && v4 >= 0 )
    v4 = v17;
  if ( (*((_BYTE *)this + 252) & 1) != 0 )
  {
    v18 = Components::Animations::AnimationManager::s_PORT_pSingleton;
    v26 = this;
    Components::Animations::ArrayListF<Components::Animations::Animation *>::Add(
      (char *)Components::Animations::AnimationManager::s_PORT_pSingleton + 88,
      &v26);
    *((_BYTE *)v18 + 392) |= 4u;
    *((_BYTE *)this + 252) &= ~1u;
  }
  v19 = (Components::Animations::Sequence *)*((_QWORD *)this + 3);
  if ( (*((_BYTE *)v19 + 244) & 1) == 0 || (v4 = Components::Animations::Sequence::Stop(v19), v4 >= 0) )
  {
    v20 = *((_DWORD *)this + 32);
    v21 = 0;
    v22 = *((_QWORD *)this + 15);
    while ( v21 != v20 )
    {
      a2 = *(_QWORD *)(v22 + 8LL * v21);
      *(_BYTE *)(*(_QWORD *)(a2 + 40) + 4LL) ^= (*(_BYTE *)(a2 + 68) ^ *(_BYTE *)(*(_QWORD *)(a2 + 40) + 4LL)) & 1;
      *(_BYTE *)(a2 + 68) &= ~2u;
      ++v21;
    }
    if ( v4 >= 0 )
      goto LABEL_35;
  }
LABEL_36:
  *((_BYTE *)this + 252) &= 9u;
  *((_BYTE *)this + 253) &= ~1u;
  *((_DWORD *)this + 53) = 0;
  if ( v4 >= 0 )
  {
    Components::Animations::Animation::OnAnimationReset(this, (unsigned __int8)a2, a3);
    v23 = Components::Animations::Animation::ProcessPendingEvents(this, 1);
    if ( v23 < 0 )
      return (unsigned int)v23;
  }
  return (unsigned int)v4;
}
