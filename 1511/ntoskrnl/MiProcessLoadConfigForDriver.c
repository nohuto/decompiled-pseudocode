/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x1403CC914
 * Callers:
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x14074AF5C (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x14002D854 (ExGenRandom.c)
 *     LdrInitSecurityCookie @ 0x1403CC954 (LdrInitSecurityCookie.c)
 */

__int64 __fastcall MiProcessLoadConfigForDriver(__int64 a1)
{
  int v2; // eax
  int v3; // r8d

  ExGenRandom(0);
  v2 = ExGenRandom(0);
  LdrInitSecurityCookie(*(_QWORD *)(a1 + 48), *(_DWORD *)(a1 + 64), v3, v2);
  return 0LL;
}
