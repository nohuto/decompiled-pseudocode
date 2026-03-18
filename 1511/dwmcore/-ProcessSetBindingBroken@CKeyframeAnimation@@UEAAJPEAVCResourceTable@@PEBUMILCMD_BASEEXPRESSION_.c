/*
 * XREFs of ?ProcessSetBindingBroken@CKeyframeAnimation@@UEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETBINDINGBROKEN@@@Z @ 0x18012C220
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z @ 0x1800B4CF8 (--0CExpressionValueStack@@QEAA@PEAVCExpressionManager@@@Z.c)
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x1800FE96C (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 *     ??1CExpressionValueStack@@UEAA@XZ @ 0x1801194D4 (--1CExpressionValueStack@@UEAA@XZ.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x18011F7F0 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ @ 0x180129144 (-NotifyAnimationDisconnected@CBaseExpression@@IEAAJXZ.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?ApiReset@Animation@Animations@Components@@QEAAJ_N@Z @ 0x180161154 (-ApiReset@Animation@Animations@Components@@QEAAJ_N@Z.c)
 */

__int64 __fastcall CKeyframeAnimation::ProcessSetBindingBroken(
        CBaseExpression *pActivityId,
        struct CResourceTable *a2,
        const struct MILCMD_BASEEXPRESSION_SETBINDINGBROKEN *a3)
{
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  void *v13[8]; // [rsp+30h] [rbp-48h] BYREF

  if ( !*((_BYTE *)pActivityId + 100) )
    return 0;
  v5 = CBaseExpression::NotifyAnimationDisconnected(pActivityId);
  v8 = v5;
  if ( v5 >= 0 )
  {
    if ( *((_DWORD *)a3 + 2) && *((_DWORD *)pActivityId + 63) == 1 )
    {
      CExpressionValueStack::CExpressionValueStack(
        (CExpressionValueStack *)v13,
        *(struct CExpressionManager **)(*((_QWORD *)pActivityId + 2) + 168LL),
        v6,
        v7);
      *((_QWORD *)pActivityId + 30) = v13;
      v9 = CExpressionValueStack::EnsureAvailableStackSpace((CExpressionValueStack *)v13, 1u);
      v8 = v9;
      if ( v9 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x250u);
LABEL_8:
        CExpressionValueStack::~CExpressionValueStack(v13);
        return v8;
      }
      v10 = Components::Animations::Animation::ApiReset(*((Components::Animations::Animation **)pActivityId + 27), 1);
      v8 = v10;
      if ( v10 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0x253u);
        goto LABEL_8;
      }
      v11 = CBaseExpression::SetOutputValue(
              (LPCGUID)pActivityId,
              (const struct CExpressionValue *)(*(_QWORD *)(*((_QWORD *)pActivityId + 30) + 24LL)
                                              + 24LL
                                              * (unsigned int)(*(_DWORD *)(*((_QWORD *)pActivityId + 30) + 16LL) - 1)));
      v8 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x256u);
        goto LABEL_8;
      }
      --*(_DWORD *)(*((_QWORD *)pActivityId + 30) + 16LL);
      *((_QWORD *)pActivityId + 30) = 0LL;
      CExpressionValueStack::~CExpressionValueStack(v13);
    }
    CExpressionManager::UnregisterExpression(
      *(CExpressionManager **)(*((_QWORD *)pActivityId + 2) + 168LL),
      pActivityId);
    return 0;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x249u);
  return v8;
}
