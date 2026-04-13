/*
 * XREFs of ??0runtime_error@std@@QEAA@PEBD@Z @ 0x180022E48
 * Callers:
 *     ??0_Locinfo@std@@QEAA@PEBD@Z @ 0x180022EBC (--0_Locinfo@std@@QEAA@PEBD@Z.c)
 * Callees:
 *     <none>
 */

std::runtime_error *__fastcall std::runtime_error::runtime_error(std::runtime_error *this, const char *a2)
{
  const char *v4; // [rsp+38h] [rbp+10h] BYREF

  v4 = a2;
  exception::exception(this, &v4);
  *(_QWORD *)this = &std::system_error::`vftable';
  return this;
}
