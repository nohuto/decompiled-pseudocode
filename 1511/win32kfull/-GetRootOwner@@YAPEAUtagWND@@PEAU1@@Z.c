/*
 * XREFs of ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0100F30
 * Callers:
 *     SetWindowGroupBand @ 0x1C0076224 (SetWindowGroupBand.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z @ 0x1C007681C (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C0100E88 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0079284 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall GetRootOwner(struct tagWND *a1)
{
  struct tagWND *RealOwner; // rax
  __int64 v3; // r8

  while ( 1 )
  {
    RealOwner = GetRealOwner(a1);
    if ( !RealOwner || *((char *)RealOwner + 43) < 0 )
      break;
    a1 = RealOwner;
  }
  return (struct tagWND *)v3;
}
