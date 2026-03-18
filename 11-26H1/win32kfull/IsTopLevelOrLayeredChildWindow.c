/*
 * XREFs of IsTopLevelOrLayeredChildWindow @ 0x1400A8258
 * Callers:
 *     ?IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z @ 0x1400A8060 (-IsWindowNCRenderingEnabled@@YA_NPEBUtagWND@@@Z.c)
 *     ?_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z @ 0x1400A8164 (-_GetWindowCompositionInfo@@YAHPEBUtagWND@@PEAUWINDOWCOMPOSITIONINFO@@@Z.c)
 *     xxxSetWindowStyle @ 0x1401C9A38 (xxxSetWindowStyle.c)
 *     NtUserGetWindowCompositionAttribute @ 0x1401E07E0 (NtUserGetWindowCompositionAttribute.c)
 *     NtUserUpdateLayeredWindow @ 0x140234060 (NtUserUpdateLayeredWindow.c)
 *     NtUserSetWindowCompositionAttribute @ 0x140235EA0 (NtUserSetWindowCompositionAttribute.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x14004D980 (_GetTopLevelWindow.c)
 */

__int64 __fastcall IsTopLevelOrLayeredChildWindow(_QWORD *a1)
{
  unsigned int v2; // ebx
  __int64 v3; // rcx
  __int64 v4; // rdx
  __int64 v5; // r8

  v2 = 0;
  v3 = a1[13];
  if ( v3 )
  {
    v4 = a1[3];
    if ( v4 )
    {
      v5 = *(_QWORD *)(v4 + 8);
      if ( v5 )
      {
        if ( v3 == *(_QWORD *)(v5 + 24) )
          return 1LL;
      }
    }
  }
  if ( (*(_BYTE *)(a1[5] + 26LL) & 8) == 0 )
    return 0LL;
  LOBYTE(v2) = GetTopLevelWindow((__int64)a1) != 0;
  return v2;
}
