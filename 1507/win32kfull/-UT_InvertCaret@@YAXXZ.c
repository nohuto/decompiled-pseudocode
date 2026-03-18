/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C0056F94
 * Callers:
 *     zzzInternalHideCaret @ 0x1C0077FC8 (zzzInternalHideCaret.c)
 *     zzzSetCaretPos @ 0x1C0078090 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C0079DA8 (zzzInternalShowCaret.c)
 *     CaretBlinkProc @ 0x1C00F91D0 (CaretBlinkProc.c)
 * Callees:
 *     GreSaveDC @ 0x1C00167D0 (GreSaveDC.c)
 *     IsVisible @ 0x1C0057870 (IsVisible.c)
 *     GrePolyPatBlt @ 0x1C00865E0 (GrePolyPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     _ExcludeUpdateRgn @ 0x1C00FC0C8 (_ExcludeUpdateRgn.c)
 */

void __fastcall UT_InvertCaret(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 v4; // rcx
  HDC DC; // rax
  HDC v6; // rsi
  int v7; // ebp
  __int64 v8; // rbx

  v2 = *(_QWORD *)(gptiCurrent + 392LL);
  v3 = *(_QWORD *)(v2 + 248);
  if ( v3 && (unsigned int)IsVisible(*(_QWORD *)(v2 + 248), a2) )
  {
    DC = (HDC)_GetDC(v4);
    v6 = DC;
    if ( *(_QWORD *)(v3 + 160) )
    {
      v7 = 1;
      GreSaveDC(DC);
      if ( (*(_BYTE *)(v3 + 45) & 1) != 0 )
        ExcludeUpdateRgn(v6);
    }
    else
    {
      v7 = 0;
    }
    if ( *(_QWORD *)(v2 + 280) > 1uLL )
    {
      v8 = GreSelectBitmap(ghdcMem, *(_QWORD *)(v2 + 280));
      NtGdiBitBltInternal(
        v6,
        *(_DWORD *)(v2 + 264),
        *(_DWORD *)(v2 + 268),
        *(_DWORD *)(v2 + 276),
        *(_DWORD *)(v2 + 272),
        ghdcMem,
        0,
        0,
        6684742,
        0,
        0);
      GreSelectBitmap(ghdcMem, v8);
    }
    else
    {
      GrePolyPatBlt(v6);
    }
    if ( v7 )
      GreRestoreDC(v6, 0xFFFFFFFFLL);
    _ReleaseDC(v6);
  }
  else
  {
    *(_DWORD *)(v2 + 256) &= ~1u;
  }
}
