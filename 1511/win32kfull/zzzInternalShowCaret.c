/*
 * XREFs of zzzInternalShowCaret @ 0x1C00CA470
 * Callers:
 *     NtUserShowCaret @ 0x1C00502B0 (NtUserShowCaret.c)
 *     xxxEndPaint @ 0x1C00C81F8 (xxxEndPaint.c)
 *     xxxScrollWindowEx @ 0x1C00CB5C8 (xxxScrollWindowEx.c)
 *     zzzShowCaret @ 0x1C02268C8 (zzzShowCaret.c)
 * Callees:
 *     xxxWindowEvent @ 0x1C00608D0 (xxxWindowEvent.c)
 *     ?CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z @ 0x1C00CA538 (-CreateCaretTimer@@YAXPEAUtagWND@@PEAUtagQ@@@Z.c)
 *     ?UT_InvertCaret@@YAXXZ @ 0x1C00CB970 (-UT_InvertCaret@@YAXXZ.c)
 */

void zzzInternalShowCaret()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // ecx

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  v1 = *(_DWORD *)(v0 + 260);
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 260) = v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(v0 + 256) ^ ((unsigned __int8)*(_DWORD *)(v0 + 256) ^ (unsigned __int8)(*(_DWORD *)(v0 + 256) >> 1)) & 1;
      *(_DWORD *)(v0 + 256) = v3;
      if ( (v3 & 1) != 0 )
        UT_InvertCaret();
      CreateCaretTimer(*(struct tagWND **)(v0 + 248), (struct tagQ *)v0);
      xxxWindowEvent(0x8002u, *(__int64 **)(v0 + 248), -8, 0, gdwDeferWinEvent != 0 ? 2 : 0);
    }
  }
  else
  {
    v4 = *(_DWORD *)(v0 + 256);
    if ( (v4 & 1) == 0 )
    {
      *(_DWORD *)(v0 + 256) = v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1;
      if ( (((unsigned __int8)v4 ^ ((unsigned __int8)v4 ^ (unsigned __int8)(v4 >> 1)) & 1) & 1) != 0 )
        UT_InvertCaret();
    }
  }
}
