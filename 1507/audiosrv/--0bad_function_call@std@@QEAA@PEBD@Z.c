/*
 * XREFs of ??0bad_function_call@std@@QEAA@PEBD@Z @ 0x180042D50
 * Callers:
 *     ?_Xbad_function_call@std@@YAXXZ @ 0x180042EA0 (-_Xbad_function_call@std@@YAXXZ.c)
 * Callees:
 *     ??0exception@@QEAA@XZ_0 @ 0x180043A7A (--0exception@@QEAA@XZ_0.c)
 */

std::bad_function_call *__fastcall std::bad_function_call::bad_function_call(
        std::bad_function_call *this,
        const char *a2)
{
  exception::exception(this);
  *(_QWORD *)this = &std::bad_function_call::`vftable';
  return this;
}
