/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180086F40
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z @ 0x1800869E0 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_K@Z.c)
 * Callees:
 *     ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x1800190B4 (-ApiPause@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiSeek@Animation@Animations@Components@@QEAAJM@Z @ 0x180019114 (-ApiSeek@Animation@Animations@Components@@QEAAJM@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019AD0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x1800862B4 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ @ 0x180088A98 (-NotifyAnimationCompleted@CBaseExpression@@IEAAJXZ.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x1800B1A88 (-ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801135A4 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        CKeyframeAnimation *this,
        struct CExpressionValueStack *a2)
{
  int v3; // eax
  int v5; // ecx
  unsigned int v6; // edi
  int v8; // eax
  __int64 v9; // rax
  float v10; // xmm6_4
  float v11; // xmm6_4
  __int64 v12; // rdi
  int v13; // eax
  Components::Animations::Animation *v14; // rcx
  int v15; // eax
  __int64 *v16; // rax
  __int64 v17; // rcx
  int v18; // ebp
  Components::Animations::Animation *v19; // rcx
  int v20; // eax
  const struct CExpressionValue *v21; // rax
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  int v25; // eax
  int v26; // eax
  unsigned __int64 v27; // rdi
  float v28; // xmm0_4
  LARGE_INTEGER Frequency; // [rsp+50h] [rbp+8h] BYREF

  v3 = *((_DWORD *)this + 112);
  v5 = *((_DWORD *)this + 111);
  if ( v3 != v5 )
  {
    if ( v5 )
    {
      if ( !v3 )
      {
        v16 = (__int64 *)*((_QWORD *)this + 29);
        if ( v16 )
          v17 = *v16;
        else
          v17 = 0LL;
        if ( v17 )
        {
          v18 = *((_DWORD *)a2 + 4);
          v19 = (Components::Animations::Animation *)*((_QWORD *)this + 48);
          *((_QWORD *)this + 50) = a2;
          v20 = Components::Animations::Animation::ApiReset(v19, 1);
          v6 = v20;
          if ( v20 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x3F6u);
            return v6;
          }
          *((_QWORD *)this + 50) = 0LL;
          if ( *((_DWORD *)a2 + 4) == v18 + 1 )
          {
            v21 = CExpressionValueStack::PeekStackValue(a2, 0);
            v22 = CBaseExpression::SetOutputValue(this, v21);
            v6 = v22;
            if ( v22 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x405u);
              return v6;
            }
            --*((_DWORD *)a2 + 4);
          }
        }
        v23 = *((_QWORD *)this + 49);
        if ( v23 )
        {
          if ( (*(_BYTE *)(v23 + 176) & 4) != 0 )
          {
            v24 = CBaseExpression::NotifyAnimationCompleted(this);
            v6 = v24;
            if ( v24 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v24, 0x40Eu);
              return v6;
            }
          }
        }
        goto LABEL_11;
      }
    }
    else if ( v3 )
    {
      v8 = Components::Animations::Animation::ApiPlay(*((Components::Animations::Animation **)this + 48));
      v6 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x3C5u);
        return v6;
      }
      Frequency.QuadPart = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL) - *((_QWORD *)this + 51);
      if ( (int)Components::Animations::TimeDelta::ToMilliseconds((Components::Animations::TimeDelta *)&Frequency) > 0 )
        Components::Animations::Animation::UpdateTime(*((Components::Animations::Animation **)this + 48), 0);
      if ( *((_DWORD *)this + 112) == 2 )
      {
        v26 = Components::Animations::Animation::ApiPause(*((Components::Animations::Animation **)this + 48));
        v6 = v26;
        if ( v26 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x3DBu);
          return v6;
        }
      }
LABEL_11:
      if ( *((_DWORD *)this + 111) == 1 )
      {
        if ( *((_DWORD *)this + 112) != 1 && (*((_BYTE *)this + 452) & 1) != 0 )
        {
          --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 96LL);
          *((_BYTE *)this + 452) &= ~1u;
        }
      }
      else if ( *((_DWORD *)this + 112) == 1 && (*((_BYTE *)this + 452) & 1) == 0 )
      {
        ++*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 96LL);
        *((_BYTE *)this + 452) |= 1u;
      }
      *((_DWORD *)this + 111) = *((_DWORD *)this + 112);
      goto LABEL_2;
    }
    v14 = (Components::Animations::Animation *)*((_QWORD *)this + 48);
    if ( v3 == 2 )
    {
      v15 = Components::Animations::Animation::ApiPause(v14);
      v6 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x41Au);
        return v6;
      }
    }
    else
    {
      v25 = Components::Animations::Animation::ApiPlay(v14);
      v6 = v25;
      if ( v25 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v25, 0x426u);
        return v6;
      }
      *((_QWORD *)this + 52) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
    }
    goto LABEL_11;
  }
LABEL_2:
  if ( (*((_BYTE *)this + 452) & 2) != 0 && *((_DWORD *)this + 111) )
  {
    v9 = *((_QWORD *)this + 54);
    v10 = (float)(int)v9;
    if ( v9 < 0 )
      v10 = v10 + 1.8446744e19;
    v11 = v10 / 10000000.0;
    v12 = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
    if ( *((_QWORD *)this + 53) != v12 )
    {
      QueryPerformanceFrequency(&Frequency);
      v27 = v12 - *((_QWORD *)this + 53);
      v28 = (float)(int)(v27 / Frequency.QuadPart);
      if ( ((v27 / Frequency.QuadPart) & 0x8000000000000000uLL) != 0LL )
        v28 = v28 + 1.8446744e19;
      v11 = v11 + v28;
    }
    v13 = Components::Animations::Animation::ApiSeek(*((Components::Animations::Animation **)this + 48), v11);
    v6 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x45Au);
      return v6;
    }
    *((_QWORD *)this + 52) = *(_QWORD *)(*((_QWORD *)this + 2) + 472LL);
  }
  return 0;
}
