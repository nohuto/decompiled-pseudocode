/*
 * XREFs of _invalid_parameter @ 0x180024784
 * Callers:
 *     _recalloc @ 0x180024480 (_recalloc.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __cdecl __noreturn invalid_parameter(
        const wchar_t *Expression,
        const wchar_t *FunctionName,
        const wchar_t *FileName,
        unsigned int LineNo,
        uintptr_t Reserved)
{
  invoke_watson(Expression, FunctionName, FileName, LineNo, Reserved);
}
