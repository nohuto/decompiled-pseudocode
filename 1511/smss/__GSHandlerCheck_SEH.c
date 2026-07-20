/*
 * XREFs of __GSHandlerCheck_SEH @ 0x14000C3D8
 * Callers:
 *     <none>
 * Callees:
 *     sub_14000C36C @ 0x14000C36C (sub_14000C36C.c)
 *     __C_specific_handler @ 0x14000C498 (__C_specific_handler.c)
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
  sub_14000C36C((__int64)EstablisherFrame, (__int64)DispatcherContext);
  v9 = 1;
  v10 = *((_DWORD *)v8 + 1) & 2;
  if ( (ExceptionRecord->ExceptionFlags & 0x66) == 0 )
    v10 = *((_DWORD *)v8 + 1) & 1;
  if ( v10 )
    return (unsigned int)_C_specific_handler(ExceptionRecord, EstablisherFrame, ContextRecord, DispatcherContext);
  return v9;
}
