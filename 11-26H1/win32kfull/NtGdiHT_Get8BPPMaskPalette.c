/*
 * XREFs of NtGdiHT_Get8BPPMaskPalette @ 0x14032F920
 * Callers:
 *     <none>
 * Callees:
 *     ?bSafeReadBits@@YAHPEAX0K@Z @ 0x1400D9610 (-bSafeReadBits@@YAHPEAX0K@Z.c)
 *     ?bSafeCopyBits@@YAHPEAX0K@Z @ 0x1400D9968 (-bSafeCopyBits@@YAHPEAX0K@Z.c)
 *     HT_Get8BPPMaskPalette @ 0x140183780 (HT_Get8BPPMaskPalette.c)
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 */

__int64 __fastcall NtGdiHT_Get8BPPMaskPalette(
        void *a1,
        BOOL Use8BPPMaskPal,
        BYTE CMYMask,
        USHORT a4,
        USHORT GreenGamma,
        USHORT BlueGamma)
{
  unsigned int v10; // eax
  __int64 v11; // r8
  unsigned int v12; // edi
  struct tagPALETTEENTRY *v13; // rbx
  unsigned int v14; // esi
  struct tagPALETTEENTRY *v15; // rax

  v10 = HT_Get8BPPMaskPalette(0LL, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma);
  v12 = v10;
  if ( a1 )
  {
    if ( (v13 = 0LL, v14 = 4 * v10, (int)(4 * v10) > 0)
      && v10 <= 0x9C4000
      && (v15 = (struct tagPALETTEENTRY *)PALLOCNOZ(v14, 1886221639LL, v11), (v13 = v15) != 0LL)
      && (unsigned int)bSafeReadBits(v15, a1, v14)
      && (v12 = HT_Get8BPPMaskPalette(v13, Use8BPPMaskPal, CMYMask, a4, GreenGamma, BlueGamma)) != 0
      && (unsigned int)bSafeCopyBits(a1, v13, v14)
      || (v12 = 0, v13) )
    {
      Win32FreePool(v13);
    }
  }
  return v12;
}
