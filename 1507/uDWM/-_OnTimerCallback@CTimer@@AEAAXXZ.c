/*
 * XREFs of ?_OnTimerCallback@CTimer@@AEAAXXZ @ 0x18000A534
 * Callers:
 *     ?s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18000A450 (-s_TimerTickProc@CTimer@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z.c)
 *     ?Start@CTimer@@QEAAJK@Z @ 0x18000A708 (-Start@CTimer@@QEAAJK@Z.c)
 * Callees:
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

void __fastcall CTimer::_OnTimerCallback(CTimer *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbx

  if ( *((_QWORD *)this + 8) )
  {
    v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 16);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
    (***((void (__fastcall ****)(_QWORD))this + 8))(*((_QWORD *)this + 8));
    EnterCriticalSection(v2);
  }
}
