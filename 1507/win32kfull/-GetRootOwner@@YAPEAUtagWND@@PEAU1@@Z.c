/*
 * XREFs of ?GetRootOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C00F8E0C
 * Callers:
 *     SetWindowGroupBand @ 0x1C0083598 (SetWindowGroupBand.c)
 *     ?TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z @ 0x1C0083BD4 (-TrackBackground@@YAHPEAUtagWINDOWPOS@@PEAUtagWND@@111@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C00F8D64 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 * Callees:
 *     ?GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C0082BD8 (-GetRealOwner@@YAPEAUtagWND@@PEAU1@@Z.c)
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
