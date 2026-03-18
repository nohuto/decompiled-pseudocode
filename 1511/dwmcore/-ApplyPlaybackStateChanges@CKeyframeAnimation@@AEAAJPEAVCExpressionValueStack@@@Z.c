/*
 * XREFs of ?ApplyPlaybackStateChanges@CKeyframeAnimation@@AEAAJPEAVCExpressionValueStack@@@Z @ 0x18012BA64
 * Callers:
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18012BC60 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ @ 0x180160860 (-ToMilliseconds@TimeDelta@Animations@Components@@QEBAHXZ.c)
 *     ?ApiPause@Animation@Animations@Components@@QEAAJXZ @ 0x180160F9C (-ApiPause@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiPlay@Animation@Animations@Components@@QEAAJXZ @ 0x180161008 (-ApiPlay@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?UpdateTime@Animation@Animations@Components@@QEAAXH@Z @ 0x180163474 (-UpdateTime@Animation@Animations@Components@@QEAAXH@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ApplyPlaybackStateChanges(LPCGUID pActivityId, struct CExpressionValueStack *a2)
{
  unsigned int Data1; // eax
  int v4; // ecx
  int v6; // eax
  unsigned int v7; // edi
  int v8; // eax
  Components::Animations::Animation *v9; // rcx
  int v10; // eax
  int v11; // eax
  Components::Animations::Animation *v12; // rcx
  int v13; // eax
  int v14; // eax
  __int64 v16; // [rsp+40h] [rbp+8h] BYREF

  Data1 = pActivityId[16].Data1;
  v4 = *(_DWORD *)&pActivityId[15].Data4[4];
  if ( Data1 == v4 )
    return 0;
  if ( v4 )
  {
    if ( !Data1 )
    {
      v9 = *(Components::Animations::Animation **)pActivityId[13].Data4;
      *(_QWORD *)&pActivityId[15].Data1 = a2;
      v10 = Components::Animations::Animation::ApiReset(v9, 1);
      v7 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x2B1u);
        return v7;
      }
      *(_QWORD *)&pActivityId[15].Data1 = 0LL;
      v11 = CBaseExpression::SetOutputValue(
              pActivityId,
              (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 24LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1)));
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x2B7u);
        return v7;
      }
      --*((_DWORD *)a2 + 4);
      goto LABEL_18;
    }
LABEL_22:
    v12 = *(Components::Animations::Animation **)pActivityId[13].Data4;
    if ( Data1 == 2 )
    {
      v13 = Components::Animations::Animation::ApiPause(v12);
      v7 = v13;
      if ( v13 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x2C3u);
        return v7;
      }
    }
    else
    {
      v14 = Components::Animations::Animation::ApiPlay(v12);
      v7 = v14;
      if ( v14 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2CFu);
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
    v16 = *(_QWORD *)(*(_QWORD *)&pActivityId[1].Data1 + 472LL) - *(_QWORD *)&pActivityId[14].Data1;
    if ( (int)Components::Animations::TimeDelta::ToMilliseconds((Components::Animations::TimeDelta *)&v16) > 0 )
      Components::Animations::Animation::UpdateTime(*(Components::Animations::Animation **)pActivityId[13].Data4, 0);
    if ( pActivityId[16].Data1 == 2 )
    {
      v8 = Components::Animations::Animation::ApiPause(*(Components::Animations::Animation **)pActivityId[13].Data4);
      v7 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x29Eu);
        return v7;
      }
    }
    goto LABEL_18;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x288u);
  return v7;
}
