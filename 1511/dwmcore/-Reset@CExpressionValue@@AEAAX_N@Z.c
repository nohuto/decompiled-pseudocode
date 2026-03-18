/*
 * XREFs of ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180136C70
 * Callers:
 *     ?ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180085CF4 (-ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x1800FE96C (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180127EDC (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x180127F34 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1801291B0 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18012BC60 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x18012C0C0 (-ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

void __fastcall CExpressionValue::Reset(CExpressionValue *this, char a2)
{
  if ( *((_BYTE *)this + 4) )
  {
    if ( (*(_DWORD *)this == 104 || *(_DWORD *)this == 265) && *((_QWORD *)this + 1) )
      (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
        WPF::g_pProcessHeap,
        *((_QWORD *)this + 1));
    *((_BYTE *)this + 4) = 0;
  }
  if ( a2 )
  {
    *((_QWORD *)this + 1) = 0LL;
    *((_QWORD *)this + 2) = 0LL;
  }
  *(_DWORD *)this = 18;
}
