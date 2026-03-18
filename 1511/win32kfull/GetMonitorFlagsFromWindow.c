/*
 * XREFs of GetMonitorFlagsFromWindow @ 0x1C007BE54
 * Callers:
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     UpdateWindowSpriteDPI @ 0x1C007BDC4 (UpdateWindowSpriteDPI.c)
 *     ?xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142AB0 (-xxxShowGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 *     ?xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z @ 0x1C0142CB0 (-xxxHideGhostWindow@@YAXPEAUtagWND@@0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetMonitorFlagsFromWindow(__int64 a1)
{
  int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 344);
  if ( v1 == 2 )
    return 32LL;
  result = 64LL;
  if ( v1 == 1 )
    return 128LL;
  return result;
}
