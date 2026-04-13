/*
 * XREFs of ??0exception@@QEAA@AEBV0@@Z_0 @ 0x180058D68
 * Callers:
 *     ??0bad_alloc@std@@QEAA@AEBV01@@Z @ 0x1800538F4 (--0bad_alloc@std@@QEAA@AEBV01@@Z.c)
 *     ??0length_error@std@@QEAA@AEBV01@@Z @ 0x18005395C (--0length_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0logic_error@std@@QEAA@AEBV01@@Z @ 0x1800539BC (--0logic_error@std@@QEAA@AEBV01@@Z.c)
 *     ??0out_of_range@std@@QEAA@AEBV01@@Z @ 0x1800539E4 (--0out_of_range@std@@QEAA@AEBV01@@Z.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
exception *__fastcall exception::exception(exception *this, const struct exception *a2)
{
  return __imp_??0exception@@QEAA@AEBV0@@Z(this, a2);
}
