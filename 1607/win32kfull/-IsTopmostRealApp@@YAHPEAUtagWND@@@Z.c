/*
 * XREFs of ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C020E260
 * Callers:
 *     _SelectPalette @ 0x1C01045F0 (_SelectPalette.c)
 * Callees:
 *     NextTopWindow @ 0x1C0105548 (NextTopWindow.c)
 */

__int64 __fastcall IsTopmostRealApp(struct tagWND *a1)
{
  unsigned int v1; // ebx
  __int64 v2; // r9

  v1 = 0;
  v2 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 3) + 8LL) + 160LL);
  if ( !v2 || *(_QWORD *)(*(_QWORD *)(v2 + 16) + 384LL) != gpqForeground )
    return 0LL;
  LOBYTE(v1) = a1 == NextTopWindow(gptiCurrent, 0LL, 0LL, 2);
  return v1;
}
