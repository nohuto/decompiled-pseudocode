/*
 * XREFs of KiFatalExceptionHandler @ 0x1401D2B94
 * Callers:
 *     <none>
 * Callees:
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __fastcall __noreturn KiFatalExceptionHandler(ULONG_PTR *a1)
{
  KeBugCheckEx(0x1Eu, *(int *)a1, a1[2], a1[4], a1[5]);
}
