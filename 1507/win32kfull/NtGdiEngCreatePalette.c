/*
 * XREFs of NtGdiEngCreatePalette @ 0x1C01244F0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     memset @ 0x1C015D4C0 (memset.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C02AAA50 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     ?bSecureBits@@YAHPEAXKPEAPEAX@Z @ 0x1C02AAAA4 (-bSecureBits@@YAHPEAXKPEAPEAX@Z.c)
 */

HPALETTE __fastcall NtGdiEngCreatePalette(int a1, ULONG a2, ULONG *a3, FLONG a4, FLONG flGreen, FLONG flBlue)
{
  void *v10; // rbp
  ULONG *v11; // r8
  HPALETTE Palette; // rdi
  int Bits; // eax
  void *v15; // [rsp+30h] [rbp-468h] BYREF
  ULONG pulColors[256]; // [rsp+40h] [rbp-458h] BYREF

  memset(pulColors, 0, sizeof(pulColors));
  v10 = 0LL;
  v15 = 0LL;
  if ( a2 > 0x10000 )
    return 0LL;
  if ( (a1 & 0xFFFF7FFF) != 1
    || !a2
    || (a2 <= 0x100
      ? (void *)(Bits = bSafeReadBits(pulColors, a3, 4 * a2))
      : (Bits = bSecureBits(a3, 4 * a2, &v15), v10 = v15),
        (Palette = (HPALETTE)Bits) != 0LL) )
  {
    v11 = a3;
    if ( a2 <= 0x100 )
      v11 = pulColors;
    Palette = EngCreatePalette(a1 | 0x8000u, a2, v11, a4, flGreen, flBlue);
  }
  if ( v10 )
    MmUnsecureVirtualMemory(v10);
  return Palette;
}
