/*
 * XREFs of __scrt_dllmain_exception_filter @ 0x180025CAC
 * Callers:
 *     dllmain_dispatch @ 0x180025998 (dllmain_dispatch.c)
 * Callees:
 *     <none>
 */

int __fastcall _scrt_dllmain_exception_filter(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int ExceptionNum,
        struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return o__seh_filter_dll_0(ExceptionNum, ExceptionPtr);
}
