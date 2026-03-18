/*
 * XREFs of ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180110850
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x180101C84 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180110664 (-ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAJXZ @ 0x180110DC0 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x180121130 (-CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z.c)
 *     ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x1801538A0 (-ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?Calculate@Animation@Animations@Components@@QEAAXXZ @ 0x1801548BC (-Calculate@Animation@Animations@Components@@QEAAXXZ.c)
 *     ?Commit@Animation@Animations@Components@@QEAAJXZ @ 0x180154B5C (-Commit@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801557A4 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::CalculateValueWorker(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  unsigned int v6; // edi
  int v7; // eax
  LONGLONG v8; // rbx
  bool v9; // zf
  __int64 v10; // rcx
  int v11; // eax
  int v12; // eax
  Components::Animations::Animation *v13; // r8
  Components::Animations::Animation *v14; // rcx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v20; // [rsp+30h] [rbp-38h] BYREF
  char v21; // [rsp+34h] [rbp-34h]
  LONGLONG v22; // [rsp+48h] [rbp-20h] BYREF

  if ( !*((_QWORD *)this + 27) )
    return 1;
  v7 = CKeyframeAnimation::ApplyPlaybackStateChanges((LPCGUID)this, a2);
  v6 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x29Du);
    return v6;
  }
  v8 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL)
     - Components::Animations::Time::s_luBegin.QuadPart
     - (*((_QWORD *)this + 29)
      - Components::Animations::Time::s_luBegin.QuadPart);
  if ( v8 < 0 )
    return 0;
  v9 = (*((_BYTE *)this + 260) & 2) == 0;
  *((_QWORD *)this + 30) = a2;
  if ( !v9 )
  {
    v10 = *((_QWORD *)this + 27);
    if ( (*(_BYTE *)(v10 + 252) & 4) == 0 || *(_DWORD *)(v10 + 212) >= *(_DWORD *)(v10 + 208) )
    {
      v11 = CKeyframeAnimation::ProcessExpressionKeyFrames(this);
      v6 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2B6u);
        return v6;
      }
      *((_BYTE *)this + 260) &= ~2u;
    }
  }
  if ( (*(_BYTE *)(*((_QWORD *)this + 27) + 252LL) & 4) != 0 )
  {
    v22 = v8;
    v12 = Components::Animations::TimeDelta::ToMilliseconds((Components::Animations::TimeDelta *)&v22);
    Components::Animations::Animation::UpdateTime(v13, v12);
    v14 = (Components::Animations::Animation *)*((_QWORD *)this + 27);
    *((_QWORD *)this + 29) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
    Components::Animations::Animation::Calculate(v14);
    v15 = Components::Animations::Animation::Commit(*((Components::Animations::Animation **)this + 27));
    v6 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x2C9u);
      return v6;
    }
    if ( (*(_BYTE *)(*((_QWORD *)this + 27) + 252LL) & 0x10) != 0 )
    {
      --*((_DWORD *)a2 + 4);
      v16 = Components::Animations::Animation::ApiReset(*((Components::Animations::Animation **)this + 27), 1);
      v6 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2D3u);
        return v6;
      }
      *((_DWORD *)this + 63) = 0;
      *((_DWORD *)this + 64) = 0;
      --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 96LL);
      *((_BYTE *)this + 260) &= ~1u;
    }
    goto LABEL_27;
  }
  if ( *((_BYTE *)this + 52) )
  {
    v20 = 17;
    v21 = 0;
    CExpressionValue::Reset((CExpressionValue *)&v20, 1);
    v17 = CExpressionValue::CopyFrom((CExpressionValue *)&v20, (CKeyframeAnimation *)((char *)this + 48));
    v6 = v17;
    if ( v17 >= 0 )
    {
      v18 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)&v20);
      v6 = v18;
      if ( v18 >= 0 )
      {
        CExpressionValue::Reset((CExpressionValue *)&v20, 0);
LABEL_27:
        *((_QWORD *)this + 30) = 0LL;
        return 0;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x2E8u);
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x2E6u);
    }
    CExpressionValue::Reset((CExpressionValue *)&v20, 0);
    return v6;
  }
  return 1;
}
