/*
 * XREFs of ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C0077A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall FxTimer::_FxTimerWorkItemCallback(FxTimer *Parameter)
{
  FxTimer::TimerHandler(Parameter);
}
