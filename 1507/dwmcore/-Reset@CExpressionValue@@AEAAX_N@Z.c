/*
 * XREFs of ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754
 * Callers:
 *     _dynamic_initializer_for__CExpressionValueStack::s_emptyValue__ @ 0x180001010 (_dynamic_initializer_for__CExpressionValueStack--s_emptyValue__.c)
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     _dynamic_atexit_destructor_for__CExpressionValueStack::s_emptyValue__ @ 0x18009C690 (_dynamic_atexit_destructor_for__CExpressionValueStack--s_emptyValue__.c)
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x1800E093C (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18010D50C (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??1CBaseExpression@@UEAA@XZ @ 0x18010D564 (--1CBaseExpression@@UEAA@XZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010D618 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18010DF68 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18010E508 (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180110850 (-CalculateValueWorker@CKeyframeAnimation@@UEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x180110E50 (-ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z.c)
 *     ??0CExpressionValue@@QEAA@XZ @ 0x180120F98 (--0CExpressionValue@@QEAA@XZ.c)
 *     ??1CExpressionValue@@QEAA@XZ @ 0x180120FC4 (--1CExpressionValue@@QEAA@XZ.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180121458 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CExpressionValue::Reset(CExpressionValue *this, char a2)
{
  if ( *((_BYTE *)this + 4) )
  {
    if ( (*(_DWORD *)this == 101 || *(_DWORD *)this == 262) && *((_QWORD *)this + 1) )
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
  *(_DWORD *)this = 17;
}
