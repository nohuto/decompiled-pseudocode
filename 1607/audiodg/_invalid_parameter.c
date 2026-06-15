/*
 * XREFs of _invalid_parameter @ 0x140018B54
 * Callers:
 *     _recalloc @ 0x1400184E0 (_recalloc.c)
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
