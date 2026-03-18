/*
 * XREFs of __GSHandlerCheck_SEH @ 0x1C003C358
 * Callers:
 *     <none>
 * Callees:
 *     __GSHandlerCheckCommon @ 0x1C003B484 (__GSHandlerCheckCommon.c)
 *     __C_specific_handler_0 @ 0x1C003C350 (__C_specific_handler_0.c)
 */

__int64 __fastcall _GSHandlerCheck_SEH(
        _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        _CONTEXT *ContextRecord,
        _DISPATCHER_CONTEXT *DispatcherContext)
{
  char *v8; // rbx
  unsigned int v9; // edx
  int v10; // r11d

  v8 = (char *)DispatcherContext->HandlerData + 16 * *(unsigned int *)DispatcherContext->HandlerData;
  _GSHandlerCheckCommon(EstablisherFrame, DispatcherContext, (_GS_HANDLER_DATA *)(v8 + 4));
  v9 = 1;
  v10 = *((_DWORD *)v8 + 1) & 2;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    v10 = *((_DWORD *)v8 + 1) & 1;
  if ( v10 )
    return (unsigned int)_C_specific_handler_0(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
  return v9;
}
