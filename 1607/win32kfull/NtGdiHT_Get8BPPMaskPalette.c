/*
 * XREFs of NtGdiHT_Get8BPPMaskPalette @ 0x1C02B0AB0
 * Callers:
 *     <none>
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 *     HT_Get8BPPMaskPalette @ 0x1C024A330 (HT_Get8BPPMaskPalette.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1C02ABF28 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1C02ABF70 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 */

__int64 __fastcall NtGdiHT_Get8BPPMaskPalette(
        char *a1,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT a4,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  LONG v10; // eax
  __int64 v11; // rdx
  unsigned int v12; // edi
  struct tagPALETTEENTRY *v13; // rbx
  unsigned int v14; // esi
  struct tagPALETTEENTRY *v15; // rax

  v10 = HT_Get8BPPMaskPalette(0LL, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma);
  v12 = v10;
  if ( a1 )
  {
    v13 = 0LL;
    v14 = 4 * v10;
    if ( 4 * v10 <= 0
      || (unsigned __int64)v10 > 0x9C4000
      || (v15 = (struct tagPALETTEENTRY *)PALLOCMEM2(v14, 1886221639LL, 0), (v13 = v15) == 0LL)
      || !(unsigned int)bSafeReadBits(v15, a1, v14)
      || (v12 = HT_Get8BPPMaskPalette(v13, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma)) == 0
      || !(unsigned int)bSafeCopyBits(a1, v13, v14) )
    {
      v12 = 0;
    }
    if ( v13 )
      Win32FreePool(v13, v11);
  }
  return v12;
}
