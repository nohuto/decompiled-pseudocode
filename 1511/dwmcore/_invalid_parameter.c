/*
 * XREFs of _invalid_parameter @ 0x1800BBE74
 * Callers:
 *     _recalloc @ 0x1800BBC30 (_recalloc.c)
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
