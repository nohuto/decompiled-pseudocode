/*
 * XREFs of ?StaticThreadThunk@FxSystemThread@@CAXPEAX@Z @ 0x1C0090220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall FxSystemThread::StaticThreadThunk(FxSystemThread *Context)
{
  FxSystemThread::Thread(Context);
}
