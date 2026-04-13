/*
 * XREFs of ??0out_of_range@std@@QEAA@PEBD@Z @ 0x180053A0C
 * Callers:
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x180053B3C (-_Xout_of_range@std@@YAXPEBD@Z.c)
 * Callees:
 *     ??0exception@@QEAA@AEBQEBD@Z_0 @ 0x180058DDC (--0exception@@QEAA@AEBQEBD@Z_0.c)
 */

std::out_of_range *__fastcall std::out_of_range::out_of_range(std::out_of_range *this, char *a2)
{
  char *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  exception::exception(this, (const char *const *)&v4);
  *(_QWORD *)this = &std::out_of_range::`vftable';
  return this;
}
