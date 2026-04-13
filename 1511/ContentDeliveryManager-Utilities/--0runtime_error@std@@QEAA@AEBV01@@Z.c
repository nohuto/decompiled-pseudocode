/*
 * XREFs of ??0runtime_error@std@@QEAA@AEBV01@@Z @ 0x18000A6C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

std::runtime_error *__fastcall std::runtime_error::runtime_error(
        std::runtime_error *this,
        const struct std::runtime_error *a2)
{
  exception::exception(this, a2);
  *(_QWORD *)this = &std::system_error::`vftable';
  return this;
}
