/*
 * XREFs of ?bTryAcquireExclussiveAccess@UMPDOBJ@@QEAA_NXZ @ 0x1C02A2588
 * Callers:
 *     NtGdiSetPUMPDOBJ @ 0x1C011BF90 (NtGdiSetPUMPDOBJ.c)
 *     ?Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z @ 0x1C011C86C (-Thunk@UMPDOBJ@@QEAAKPEAXK0K@Z.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 */

bool __fastcall UMPDOBJ::bTryAcquireExclussiveAccess(UMPDOBJ *this)
{
  return _InterlockedCompareExchange64(
           (volatile signed __int64 *)this + 3,
           W32GetThreadWin32Thread((__int64)KeGetCurrentThread()),
           0LL) == 0;
}
