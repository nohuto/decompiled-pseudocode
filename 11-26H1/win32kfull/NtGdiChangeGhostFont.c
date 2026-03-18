/*
 * XREFs of NtGdiChangeGhostFont @ 0x14032A2A0
 * Callers:
 *     <none>
 * Callees:
 *     ?GreChangeGhostFont@@YAHPEAXH@Z @ 0x1403106A8 (-GreChangeGhostFont@@YAHPEAXH@Z.c)
 */

_BOOL8 __fastcall NtGdiChangeGhostFont(const void *a1, unsigned int a2)
{
  void *v4; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  GreProbeAndReadFromUntrustedVa(&v4, 8uLL, a1, 8uLL, 1uLL);
  return GreChangeGhostFont(v4, a2) != 0;
}
