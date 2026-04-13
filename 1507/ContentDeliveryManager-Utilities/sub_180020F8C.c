/*
 * XREFs of sub_180020F8C @ 0x180020F8C
 * Callers:
 *     ?cancel_current_task@Concurrency@@YAXXZ @ 0x1800210C8 (-cancel_current_task@Concurrency@@YAXXZ.c)
 * Callees:
 *     ??0exception@@QEAA@AEBQEBDH@Z @ 0x180026534 (--0exception@@QEAA@AEBQEBDH@Z.c)
 */

exception *__fastcall sub_180020F8C(exception *a1)
{
  char *v3; // [rsp+30h] [rbp+8h] BYREF

  v3 = "bad allocation";
  exception::exception(a1, (const char *const *)&v3, 1);
  *(_QWORD *)a1 = &off_18002B380;
  return a1;
}
