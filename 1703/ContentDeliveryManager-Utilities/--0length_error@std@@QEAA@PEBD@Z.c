/*
 * XREFs of ??0length_error@std@@QEAA@PEBD@Z @ 0x18006A614
 * Callers:
 *     ?_Xlength_error@std@@YAXPEBD@Z @ 0x18006A714 (-_Xlength_error@std@@YAXPEBD@Z.c)
 *     ?_Xout_of_range@std@@YAXPEBD@Z @ 0x18006A738 (-_Xout_of_range@std@@YAXPEBD@Z.c)
 * Callees:
 *     ??0exception@@QEAA@AEBQEBD@Z_0 @ 0x18006F886 (--0exception@@QEAA@AEBQEBD@Z_0.c)
 */

std::length_error *__fastcall std::length_error::length_error(std::length_error *this, char *a2)
{
  char *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  exception::exception(this, (const char *const *)&v4);
  *(_QWORD *)this = &std::length_error::`vftable';
  return this;
}
