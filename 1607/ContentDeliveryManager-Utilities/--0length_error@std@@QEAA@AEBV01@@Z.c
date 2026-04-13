/*
 * XREFs of ??0length_error@std@@QEAA@AEBV01@@Z @ 0x18005395C
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@@QEAA@AEBV0@@Z_0 @ 0x180058D68 (--0exception@@QEAA@AEBV0@@Z_0.c)
 */

std::length_error *__fastcall std::length_error::length_error(
        std::length_error *this,
        const struct std::length_error *a2)
{
  exception::exception(this, a2);
  *(_QWORD *)this = &std::length_error::`vftable';
  return this;
}
