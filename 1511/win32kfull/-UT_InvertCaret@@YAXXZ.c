/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C00CB970
 * Callers:
 *     zzzInternalHideCaret @ 0x1C00CA3B0 (zzzInternalHideCaret.c)
 *     zzzInternalShowCaret @ 0x1C00CA470 (zzzInternalShowCaret.c)
 *     CaretBlinkProc @ 0x1C00CA620 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C00CDD00 (zzzSetCaretPos.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     IsVisible @ 0x1C00CBE50 (IsVisible.c)
 *     _ExcludeUpdateRgn @ 0x1C00CC3D8 (_ExcludeUpdateRgn.c)
 *     GreSaveDC @ 0x1C00CC540 (GreSaveDC.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  __int64 v2; // rcx
  __int64 DC; // rax
  HDC v4; // rsi
  int v5; // ebp
  unsigned __int64 v6; // rcx
  __int64 v7; // rbx
  _DWORD v8[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v9; // [rsp+70h] [rbp-18h]

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  v1 = *(_QWORD *)(v0 + 248);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 248)) )
  {
    DC = _GetDC(v2);
    v4 = (HDC)DC;
    if ( *(_QWORD *)(v1 + 160) )
    {
      v5 = 1;
      GreSaveDC(DC);
      if ( (*(_BYTE *)(v1 + 45) & 1) != 0 )
        ExcludeUpdateRgn(v4);
    }
    else
    {
      v5 = 0;
    }
    v6 = *(_QWORD *)(v0 + 280);
    if ( v6 > 1 )
    {
      v7 = GreSelectBitmap(ghdcMem, *(_QWORD *)(v0 + 280));
      NtGdiBitBltInternal(
        v4,
        *(_DWORD *)(v0 + 264),
        *(_DWORD *)(v0 + 268),
        *(_DWORD *)(v0 + 276),
        *(_DWORD *)(v0 + 272),
        ghdcMem,
        0,
        0,
        0x660046u,
        0,
        0);
      GreSelectBitmap(ghdcMem, v7);
    }
    else
    {
      v8[0] = *(_DWORD *)(v0 + 264);
      v8[1] = *(_DWORD *)(v0 + 268);
      v8[2] = *(_DWORD *)(v0 + 276);
      v8[3] = *(_DWORD *)(v0 + 272);
      if ( v6 == 1 )
        v9 = *(_QWORD *)(gpsi + 3944LL);
      else
        v9 = ghbrWhite;
      GrePolyPatBlt(v4, 0x5A0049u, (struct _POLYPATBLT *)v8, 1u);
    }
    if ( v5 )
      GreRestoreDC(v4, 0xFFFFFFFFLL);
    _ReleaseDC(v4);
  }
  else
  {
    *(_DWORD *)(v0 + 256) &= ~1u;
  }
}
