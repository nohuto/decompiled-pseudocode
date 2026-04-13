/*
 * XREFs of ??0out_of_range@std@@QEAA@AEBV01@@Z @ 0x1800539E4
 * Callers:
 *     <none>
 * Callees:
 *     ??0exception@@QEAA@AEBV0@@Z_0 @ 0x180058D68 (--0exception@@QEAA@AEBV0@@Z_0.c)
 */

std::out_of_range *__fastcall std::out_of_range::out_of_range(
        std::out_of_range *this,
        const struct std::out_of_range *a2)
{
  exception::exception(this, a2);
  *(_QWORD *)this = &std::out_of_range::`vftable';
  return this;
}
