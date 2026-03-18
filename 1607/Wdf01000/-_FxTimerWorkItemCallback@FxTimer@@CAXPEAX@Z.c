/*
 * XREFs of ?_FxTimerWorkItemCallback@FxTimer@@CAXPEAX@Z @ 0x1C000FE30
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
