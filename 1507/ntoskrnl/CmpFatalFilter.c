/*
 * XREFs of CmpFatalFilter @ 0x140652B2C
 * Callers:
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 * Callees:
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall __noreturn CmpFatalFilter(int **a1, ULONG_PTR BugCheckParameter4)
{
  KeBugCheckEx(0x135u, **a1, (ULONG_PTR)a1[1], *(_QWORD *)(BugCheckParameter4 + 40), BugCheckParameter4);
}
