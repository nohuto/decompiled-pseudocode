/*
 * XREFs of ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x1800864B0
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Add@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnimation@23@@Z @ 0x1800AD458 (-Add@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAJAEBQEAVAnima.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetColor@Value@Animations@Components@@QEBA?AVColor@23@XZ @ 0x1800C29B0 (-GetColor@Value@Animations@Components@@QEBA-AVColor@23@XZ.c)
 *     ?GetQuaternion@Value@Animations@Components@@QEBA?AUQuaternion@23@XZ @ 0x180194030 (-GetQuaternion@Value@Animations@Components@@QEBA-AUQuaternion@23@XZ.c)
 */

__int64 __fastcall Components::Animations::Animation::Commit(Components::Animations::Animation *this)
{
  __int64 v1; // rbx
  __int64 (__fastcall *v3)(CKeyframeAnimation *__hidden, float); // rax
  float v4; // xmm1_4
  __int64 v5; // r8
  unsigned int v6; // ecx
  __int64 v7; // rdx
  __int64 v8; // rax
  char v9; // al
  __int64 result; // rax
  Components::Animations::AnimationManager *v11; // rbx
  __int64 (__fastcall *v12)(__int64); // rax
  int v13; // [rsp+30h] [rbp-10h] BYREF
  Components::Animations::Animation *v14; // [rsp+50h] [rbp+10h] BYREF

  v1 = *((_QWORD *)this + 12);
  if ( v1 )
  {
    switch ( *((_DWORD *)this + 16) )
    {
      case 0x12:
        v3 = **(__int64 (__fastcall ***)(CKeyframeAnimation *__hidden, float))v1;
        v4 = **(double **)(*((_QWORD *)this + 2) + 232LL);
        if ( v3 == CKeyframeAnimation::SetScalarValue )
        {
          v5 = *(_QWORD *)(v1 + 112);
          v6 = *(_DWORD *)(v5 + 16);
          if ( v6 == -1 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xC9u);
          }
          else
          {
            if ( *(_DWORD *)(v5 + 48) != v6 )
            {
              *(_DWORD *)(v5 + 16) = v6 + 1;
              v7 = 9LL * v6;
              v8 = *(_QWORD *)(v5 + 24);
              *(float *)(v8 + 8 * v7) = v4;
              *(_DWORD *)(v8 + 8 * v7 + 64) = 18;
              *(_BYTE *)(v8 + 8 * v7 + 68) = 1;
              goto LABEL_7;
            }
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0xD6u);
          }
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x1D9u);
          goto LABEL_7;
        }
        result = ((__int64 (__fastcall *)(__int64))v3)(v1);
        break;
      case 0x23:
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 8LL))(v1);
        break;
      case 0x34:
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 16LL))(v1);
        break;
      default:
        switch ( *((_DWORD *)this + 16) )
        {
          case 'E':
            Components::Animations::Value::GetColor(*(_QWORD *)(*((_QWORD *)this + 2) + 232LL), &v13);
            v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 24LL);
            break;
          case 'F':
            Components::Animations::Value::GetColor(*(_QWORD *)(*((_QWORD *)this + 2) + 232LL), &v13);
            v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL);
            break;
          case 'G':
            Components::Animations::Value::GetQuaternion(*(_QWORD *)(*((_QWORD *)this + 2) + 232LL), &v13);
            v12 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 40LL);
            break;
          default:
            goto LABEL_7;
        }
        result = v12(v1);
        break;
    }
    if ( (int)result < 0 )
      return result;
  }
LABEL_7:
  if ( (*((_BYTE *)this + 104) & 0x20) == 0
    || (result = Components::Animations::Animation::ApiReset(this, 1), (int)result >= 0) )
  {
    v9 = *((_BYTE *)this + 104);
    if ( (v9 & 0x10) != 0 && (v9 & 1) != 0 )
    {
      v11 = Components::Animations::AnimationManager::s_PORT_pSingleton;
      v14 = this;
      Components::Animations::ArrayListF<Components::Animations::Animation *>::Add(
        (char *)Components::Animations::AnimationManager::s_PORT_pSingleton + 88,
        &v14);
      *((_BYTE *)v11 + 184) |= 4u;
      *((_BYTE *)this + 104) &= ~1u;
    }
    return 1LL;
  }
  return result;
}
