/*
 * XREFs of GdiThreadCalloutCleanup @ 0x1C007F470
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0034410 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GdiThreadCalloutCleanup(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(a1, a2, a3);
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0104228)(ThreadWin32Thread + 80, 0LL);
}
