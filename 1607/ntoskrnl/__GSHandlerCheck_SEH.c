/*
 * XREFs of __GSHandlerCheck_SEH @ 0x140159E38
 * Callers:
 *     <none>
 * Callees:
 *     __C_specific_handler @ 0x14014CFE0 (__C_specific_handler.c)
 *     __GSHandlerCheckCommon @ 0x1401514B0 (__GSHandlerCheckCommon.c)
 */

__int64 __fastcall _GSHandlerCheck_SEH(
        struct _EXCEPTION_RECORD *ExceptionRecord,
        void *EstablisherFrame,
        struct _CONTEXT *ContextRecord,
        struct _DISPATCHER_CONTEXT *DispatcherContext)
{
  char *v8; // rbx
  unsigned int v9; // edx
  int v10; // r11d

  v8 = (char *)DispatcherContext->HandlerData + 16 * *(unsigned int *)DispatcherContext->HandlerData;
  _GSHandlerCheckCommon((__int64)EstablisherFrame, (__int64)DispatcherContext);
  v9 = 1;
  v10 = *((_DWORD *)v8 + 1) & 2;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    v10 = *((_DWORD *)v8 + 1) & 1;
  if ( v10 )
    return (unsigned int)_C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
  return v9;
}
