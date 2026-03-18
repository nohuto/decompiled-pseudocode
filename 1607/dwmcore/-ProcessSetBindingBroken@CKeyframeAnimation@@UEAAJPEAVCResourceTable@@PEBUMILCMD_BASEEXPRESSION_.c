/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x180019620
 * Callers:
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x18003CEA0 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x180019A78 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x180019AD0 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180086378 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180087B00 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x18008BDC8 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x180112A74 (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 *     ??1CExpressionValueStack@@UEAA@XZ @ 0x180158948 (--1CExpressionValueStack@@UEAA@XZ.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CKeyframeAnimation *this,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v5; // eax
  unsigned int v6; // edi
  int v8; // eax
  int v9; // eax
  const struct CExpressionValue *v10; // rax
  int v11; // eax
  _BYTE v12[64]; // [rsp+30h] [rbp-48h] BYREF

  if ( (*((_BYTE *)this + 452) & 1) != 0 )
  {
    --*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 96LL);
    *((_BYTE *)this + 452) &= ~1u;
  }
  if ( !*((_BYTE *)this + 228) )
    return 0;
  v5 = CBaseExpression::NotifyAnimationDisconnected(this);
  v6 = v5;
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x32Fu);
    return v6;
  }
  if ( *((_DWORD *)a3 + 2) && *((_DWORD *)this + 111) == 1 )
  {
    CExpressionValueStack::CExpressionValueStack(
      (CExpressionValueStack *)v12,
      *(struct CExpressionManager **)(*((_QWORD *)this + 2) + 168LL));
    *((_QWORD *)this + 50) = v12;
    v8 = CExpressionValueStack::EnsureAvailableStackSpace((CExpressionValueStack *)v12, 1u);
    v6 = v8;
    if ( v8 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x336u);
    }
    else
    {
      v9 = Components::Animations::Animation::ApiReset(*((Components::Animations::Animation **)this + 48), 1);
      v6 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x339u);
      }
      else
      {
        v10 = CExpressionValueStack::PeekStackValue(*((CExpressionValueStack **)this + 50), 0);
        v11 = CBaseExpression::SetOutputValue(this, v10);
        v6 = v11;
        if ( v11 >= 0 )
        {
          --*(_DWORD *)(*((_QWORD *)this + 50) + 16LL);
          *((_QWORD *)this + 50) = 0LL;
          CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)v12);
          goto LABEL_6;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x33Cu);
      }
    }
    CExpressionValueStack::~CExpressionValueStack((CExpressionValueStack *)v12);
    return v6;
  }
LABEL_6:
  CExpressionManager::UnregisterExpression(*(CExpressionManager **)(*((_QWORD *)this + 2) + 168LL), this);
  return 0;
}
