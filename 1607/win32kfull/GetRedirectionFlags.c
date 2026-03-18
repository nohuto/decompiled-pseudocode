/*
 * XREFs of GetRedirectionFlags @ 0x1C0053B04
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C0053734 (zzzUpdateLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0061F00 (_SetLayeredWindowAttributes.c)
 *     RecreateRedirectionBitmap @ 0x1C00D7E4C (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01DE224 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     _GetLayeredWindowAttributes @ 0x1C01DE5A0 (_GetLayeredWindowAttributes.c)
 *     xxxPrintWindow @ 0x1C01DE6D4 (xxxPrintWindow.c)
 * Callees:
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 */

__int64 __fastcall GetRedirectionFlags(__int64 a1)
{
  __int64 Prop; // rax
  unsigned int v2; // r10d

  Prop = GetProp(a1, (unsigned __int16)atomLayer, 1LL);
  if ( Prop )
    return *(unsigned int *)(Prop + 32);
  return v2;
}
