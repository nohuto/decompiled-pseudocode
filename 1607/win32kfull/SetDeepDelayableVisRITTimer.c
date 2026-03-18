/*
 * XREFs of SetDeepDelayableVisRITTimer @ 0x1C005E060
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C005DED0 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C005E280 (InternalSetTimer.c)
 */

__int64 __fastcall SetDeepDelayableVisRITTimer(__int64 a1, int a2)
{
  int v2; // ecx

  v2 = 0;
  if ( (gdwRITdemonLockState & 1) != 0 )
  {
    a2 = 864000000;
    v2 = 3600000;
  }
  return InternalSetTimer(0, gtmridAniCursor, a2, (unsigned int)zzzAnimateCursor, v2, 20);
}
