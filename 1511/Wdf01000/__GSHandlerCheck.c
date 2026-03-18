/*
 * XREFs of __GSHandlerCheck @ 0x1C0036750
 * Callers:
 *     <none>
 * Callees:
 *     __GSHandlerCheckCommon @ 0x1C0036770 (__GSHandlerCheckCommon.c)
 */

__int64 __fastcall _GSHandlerCheck(
        _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        _CONTEXT *ContextRecord,
        _DISPATCHER_CONTEXT *DispatcherContext)
{
  _GSHandlerCheckCommon(EstablisherFrame, DispatcherContext, (_GS_HANDLER_DATA *)DispatcherContext->HandlerData);
  return 1LL;
}
