/*
 * XREFs of zzzInternalShowCaret @ 0x1C00ABA64
 * Callers:
 *     zzzShowCaret @ 0x1C00AB9A4 (zzzShowCaret.c)
 *     xxxScrollWindowEx @ 0x1C00ADA68 (xxxScrollWindowEx.c)
 *     xxxEndPaint @ 0x1C0100BCC (xxxEndPaint.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C0087F70 (xxxWindowEvent.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00ABBD0 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00AE2D8 (-UT_InvertCaret@@YAXXZ.c)
 */

void zzzInternalShowCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  v1 = *(_DWORD *)(v0 + 268);
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 268) = v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(v0 + 264) ^ ((unsigned __int8)*(_DWORD *)(v0 + 264) ^ (unsigned __int8)(*(_DWORD *)(v0 + 264) >> 1)) & 1;
      *(_DWORD *)(v0 + 264) = v3;
      if ( (v3 & 1) != 0 )
        UT_InvertCaret();
      CreateCaretTimer(*(struct tagWND **)(v0 + 256), (struct tagQ *)v0);
      xxxWindowEvent(0x8002u, *(__int64 **)(v0 + 256), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
  }
  else
  {
    v4 = *(_DWORD *)(v0 + 264);
    if ( (v4 & 1) == 0 )
    {
      *(_DWORD *)(v0 + 264) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1;
      if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1) & 1) != 0 )
        UT_InvertCaret();
    }
  }
}
