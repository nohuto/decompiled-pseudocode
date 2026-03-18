/*
 * XREFs of GdiThreadCalloutCleanup @ 0x1C0070270
 * Callers:
 *     <none>
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00384E0 (W32GetThreadWin32Thread.c)
 */

__int64 __fastcall GdiThreadCalloutCleanup(__int64 a1)
{
  __int64 ThreadWin32Thread; // rax

  ThreadWin32Thread = W32GetThreadWin32Thread(a1);
  return ((__int64 (__fastcall *)(__int64, _QWORD))qword_1C0101410)(ThreadWin32Thread + 80, 0LL);
}
