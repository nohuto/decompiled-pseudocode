/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x140575BA0
 * Callers:
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x1407CC4D4 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     LdrInitSecurityCookie @ 0x140575BE0 (LdrInitSecurityCookie.c)
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
