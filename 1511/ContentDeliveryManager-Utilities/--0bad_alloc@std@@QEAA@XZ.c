/*
 * XREFs of ??0bad_alloc@std@@QEAA@XZ @ 0x180022B0C
 * Callers:
 *     ?_Xbad_alloc@std@@YAXXZ @ 0x180022C48 (-_Xbad_alloc@std@@YAXXZ.c)
 * Callees:
 *     ??0exception@@QEAA@AEBQEBDH@Z_0 @ 0x1800280B4 (--0exception@@QEAA@AEBQEBDH@Z_0.c)
 */

std::bad_alloc *__fastcall std::bad_alloc::bad_alloc(std::bad_alloc *this)
{
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = "bad allocation";
  exception::exception(this, (const char *const *)&v3, 1);
  *(_QWORD *)this = &std::bad_alloc::`vftable';
  return this;
}
