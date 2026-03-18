/*
 * XREFs of ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x180161EEC
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18012BC60 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z @ 0x180160EA0 (-ApiInstantAdvance@Animation@Animations@Components@@QEAAJM@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800BF57C (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x180162B68 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x1801639E4 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 *     ?Commit@AnimationTarget@Animations@Components@@QEAAJXZ @ 0x1801652D0 (-Commit@AnimationTarget@Animations@Components@@QEAAJXZ.c)
 */

__int64 __fastcall Components::Animations::Animation::Commit(
        Components::Animations::Animation *this,
        __int64 a2,
        float a3)
{
  int v3; // ebx
  char v4; // r12
  int v6; // r14d
  int v7; // esi
  __int64 v8; // r15
  int v9; // eax
  __int64 v10; // rsi
  __int64 (__fastcall *v11)(__int64); // rbx
  int v12; // eax
  Components::Animations::AnimationManager *v13; // rbx
  _DWORD v15[2]; // [rsp+30h] [rbp-40h] BYREF
  Components::Animations::Animation *v16; // [rsp+A0h] [rbp+30h] BYREF

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
    goto LABEL_25;
  switch ( *((_DWORD *)this + 57) )
  {
    case 0x12:
      v12 = (**(__int64 (__fastcall ***)(_QWORD))v10)(*((_QWORD *)this + 32));
LABEL_24:
      v3 = v12;
      if ( v12 < 0 )
        return (unsigned int)v3;
      break;
    case 0x23:
      a3 = *(double *)(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL) + 8LL);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 8LL))(*((_QWORD *)this + 32));
      goto LABEL_24;
    case 0x34:
      a3 = *(double *)(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL) + 8LL);
      v12 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v10 + 16LL))(*((_QWORD *)this + 32));
      goto LABEL_24;
    case 0x45:
      Components::Animations::Value::GetColor(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL), (__int64)v15);
      v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 24LL);
      goto LABEL_18;
    case 0x46:
      Components::Animations::Value::GetColor(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL), (__int64)v15);
      v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 32LL);
      goto LABEL_18;
    case 0x47:
      Components::Animations::Value::GetQuaternion(*(_QWORD *)(*((_QWORD *)this + 3) + 232LL), v15);
      v11 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v10 + 40LL);
LABEL_18:
      a3 = *(float *)&v15[1];
      v12 = v11(v10);
      goto LABEL_24;
  }
LABEL_25:
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
