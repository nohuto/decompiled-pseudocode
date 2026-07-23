/*
 * XREFs of MiProcessLoadConfigForDriver @ 0x1404830E8
 * Callers:
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MiReloadBootLoadedDrivers @ 0x1407A57F0 (MiReloadBootLoadedDrivers.c)
 * Callees:
 *     ExGenRandom @ 0x1400EE314 (ExGenRandom.c)
 *     LdrInitSecurityCookie @ 0x140483128 (LdrInitSecurityCookie.c)
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
