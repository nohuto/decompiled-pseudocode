/*
 * XREFs of ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x180154B5C
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180110850 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180153DF0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?GetVector4@Value@Animations@Components@@QEBA?AVVector4@23@XZ @ 0x18009C19C (-GetVector4@Value@Animations@Components@@QEBA-AVVector4@23@XZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x180155D14 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 *     ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x180157214 (-Commit@AnimationTarget@Animations@Components@@QEAAJXZ.c)
 */

__int64 __fastcall Components::Animations::Animation::Commit(
        Components::Animations::Animation *this,
        __int64 a2,
        float a3)
{
  int v3; // ebx
  char v4; // bp
  int v6; // r14d
  int v7; // esi
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rsi
  int v11; // eax
  int v12; // eax
  Components::Animations::AnimationManager *v13; // rbx
  _DWORD v15[2]; // [rsp+30h] [rbp-58h] BYREF
  Components::Animations::Animation *v16; // [rsp+90h] [rbp+8h] BYREF

  v3 = 0;
  v4 = 0;
  if ( (*((_BYTE *)this + 252) & 0x12) != 0 )
  {
    v6 = *((_DWORD *)this + 10);
    v7 = 0;
    v8 = *((_QWORD *)this + 4);
    while ( v7 != v6 )
    {
      v9 = Components::Animations::AnimationTarget::Commit(*(Components::Animations::AnimationTarget **)(v8 + 8LL * v7));
      if ( v9 )
      {
        if ( v9 < 0 )
          v3 = v9;
      }
      else
      {
        v4 = 1;
      }
      ++v7;
    }
    if ( v3 < 0 )
      return (unsigned int)v3;
  }
  v10 = *((_QWORD *)this + 32);
  if ( !v10 )
    goto LABEL_20;
  v11 = *((_DWORD *)this + 57);
  switch ( v11 )
  {
    case 17:
      v12 = (**(__int64 (__fastcall ***)(_QWORD))v10)(*((_QWORD *)this + 32));
LABEL_19:
      v3 = v12;
      if ( v12 < 0 )
        return (unsigned int)v3;
      break;
    case 34:
      a3 = *(double *)(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL) + 8LL);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)this + 32));
      goto LABEL_19;
    case 51:
      a3 = *(double *)(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL) + 8LL);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 32));
      goto LABEL_19;
    case 68:
      Components::Animations::Value::GetVector4(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL), (__int64)v15);
      a3 = *(float *)&v15[1];
      v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL))(v10);
      goto LABEL_19;
  }
LABEL_20:
  if ( (*((_BYTE *)this + 252) & 0x40) == 0
    || (LOBYTE(a2) = 1, v3 = Components::Animations::Animation::ApiReset(this, a2, a3), v3 >= 0) )
  {
    if ( (*((_BYTE *)this + 252) & 0x11) == 0x11 )
    {
      v13 = Components::Animations::AnimationManager::s_PORT_pSingleton;
      v16 = this;
      Components::Animations::ArrayListF<Components::Animations::Animation *>::Add(
        (char *)Components::Animations::AnimationManager::s_PORT_pSingleton + 88,
        &v16);
      *((_BYTE *)v13 + 392) |= 4u;
      *((_BYTE *)this + 252) &= ~1u;
    }
    return v4 == 0;
  }
  return (unsigned int)v3;
}
