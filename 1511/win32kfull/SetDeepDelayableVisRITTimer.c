/*
 * XREFs of SetDeepDelayableVisRITTimer @ 0x1C00EBA94
 * Callers:
 *     ?zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C00EB900 (-zzzAnimateCursor@@YAXPEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     InternalSetTimer @ 0x1C004A670 (InternalSetTimer.c)
 */

__int64 __fastcall SetDeepDelayableVisRITTimer(__int64 a1, unsigned int a2)
{
  int v2; // ecx

  v2 = 0;
  if ( (gdwRITdemonLockState & 1) != 0 )
  {
    a2 = 864000000;
    v2 = 3600000;
  }
  return InternalSetTimer(0LL, gtmridAniCursor, a2, (__int64)zzzAnimateCursor, v2, 20);
}
