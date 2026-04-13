/*
 * XREFs of sub_180020FF4 @ 0x180020FF4
 * Callers:
 *     sub_1800210F0 @ 0x1800210F0 (sub_1800210F0.c)
 *     sub_18002111C @ 0x18002111C (sub_18002111C.c)
 * Callees:
 *     ??0exception@@QEAA@AEBQEBD@Z @ 0x1800264F8 (--0exception@@QEAA@AEBQEBD@Z.c)
 */

exception *__fastcall sub_180020FF4(exception *a1, char *a2)
{
  char *v4; // [rsp+30h] [rbp+8h] BYREF

  v4 = a2;
  exception::exception(a1, (const char *const *)&v4);
  *(_QWORD *)a1 = &off_18002B390;
  return a1;
}
