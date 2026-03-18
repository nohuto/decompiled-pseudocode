/*
 * XREFs of ?_TimerDPC@FxRequestBase@@KAXPEAU_KDPC@@PEAX11@Z @ 0x1C0077200
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxRequestBase::_TimerDPC(
        _KDPC *Dpc,
        FxRequestBase *Context,
        void *SystemArgument1,
        void *SystemArgument2)
{
  FxIoTarget::TimerCallback(Context->m_Target, Context);
}
