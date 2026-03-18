/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x180110664
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180110850 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x1801017F0 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x1801538A0 (-ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ.c)
 *     ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x180153EEC (-ApiPause@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x180153F58 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x1801540A4 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x1801557A4 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(
        LPCGUID pActivityId,
        struct CExpressionValueStack *this)
{
  unsigned int Data1; // eax
  int v4; // ecx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  Components::Animations::Animation *v9; // rcx
  int v10; // eax
  const struct CExpressionValue *v11; // rax
  int v12; // eax
  Components::Animations::Animation *v13; // rcx
  int v14; // eax
  int v15; // eax
  __int64 v17; // [rsp+40h] [rbp+8h] BYREF

  Data1 = pActivityId[16].Data1;
  v4 = *(_DWORD *)&pActivityId[15].Data4[4];
  if ( Data1 == v4 )
    return 0;
  if ( v4 )
  {
    if ( !Data1 )
    {
      v9 = *(Components::Animations::Animation **)pActivityId[13].Data4;
      *(_QWORD *)&pActivityId[15].Data1 = this;
      v10 = Components::Animations::Animation::ApiReset(v9, 1);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x22Fu);
        return v7;
      }
      *(_QWORD *)&pActivityId[15].Data1 = 0LL;
      v11 = CExpressionValueStack::PeekStackValue(this, 0);
      v12 = CBaseExpression::SetOutputValue(pActivityId, v11);
      v7 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x235u);
        return v7;
      }
      --*((_DWORD *)this + 4);
      goto LABEL_18;
    }
LABEL_22:
    v13 = *(Components::Animations::Animation **)pActivityId[13].Data4;
    if ( Data1 == 2 )
    {
      v14 = Components::Animations::Animation::ApiPause(v13);
      v7 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x241u);
        return v7;
      }
    }
    else
    {
      v15 = Components::Animations::Animation::ApiPlay(v13);
      v7 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x24Du);
        return v7;
      }
    }
LABEL_18:
    if ( *(_DWORD *)&pActivityId[15].Data4[4] == 1 )
    {
      if ( pActivityId[16].Data1 != 1 && (pActivityId[16].Data2 & 1) != 0 )
      {
        --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&pActivityId[1].Data1 + 168LL) + 96LL);
        LOBYTE(pActivityId[16].Data2) &= ~1u;
      }
    }
    else if ( pActivityId[16].Data1 == 1 && (pActivityId[16].Data2 & 1) == 0 )
    {
      ++*(_DWORD *)(*(_QWORD *)(*(_QWORD *)&pActivityId[1].Data1 + 168LL) + 96LL);
      LOBYTE(pActivityId[16].Data2) |= 1u;
    }
    *(_DWORD *)&pActivityId[15].Data4[4] = pActivityId[16].Data1;
    return 0;
  }
  if ( !Data1 )
    goto LABEL_22;
  v6 = Components::Animations::Animation::ApiPlay(*(Components::Animations::Animation **)pActivityId[13].Data4);
  v7 = v6;
  if ( v6 >= 0 )
  {
    v17 = *(_QWORD *)(*(_QWORD *)&pActivityId[1].Data1 + 472LL) - *(_QWORD *)&pActivityId[14].Data1;
    if ( (int)Components::Animations::TimeDelta::ToMilliseconds((Components::Animations::TimeDelta *)&v17) > 0 )
      Components::Animations::Animation::UpdateTime(*(Components::Animations::Animation **)pActivityId[13].Data4, 0);
    if ( pActivityId[16].Data1 == 2 )
    {
      v8 = Components::Animations::Animation::ApiPause(*(Components::Animations::Animation **)pActivityId[13].Data4);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x21Cu);
        return v7;
      }
    }
    goto LABEL_18;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x206u);
  return v7;
}
