/*
 * XREFs of GetRedirectionFlags @ 0x1C006BF30
 * Callers:
 *     zzzUpdateLayeredWindow @ 0x1C006BA10 (zzzUpdateLayeredWindow.c)
 *     _SetLayeredWindowAttributes @ 0x1C0079C68 (_SetLayeredWindowAttributes.c)
 *     RecreateRedirectionBitmap @ 0x1C009AB98 (RecreateRedirectionBitmap.c)
 *     ?RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z @ 0x1C01E79C4 (-RestoreOldRedirectionBitmap@@YAHPEAUtagWND@@PEAUHBITMAP__@@@Z.c)
 *     _GetLayeredWindowAttributes @ 0x1C01E7D50 (_GetLayeredWindowAttributes.c)
 *     xxxPrintWindow @ 0x1C01E7E84 (xxxPrintWindow.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
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
