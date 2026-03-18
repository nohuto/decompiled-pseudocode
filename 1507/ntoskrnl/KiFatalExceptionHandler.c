/*
 * XREFs of KiFatalExceptionHandler @ 0x140200208
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalExceptionHandler(ULONG_PTR *a1)
{
  KeBugCheckEx(0x1Eu, *(int *)a1, a1[2], a1[4], a1[5]);
}
