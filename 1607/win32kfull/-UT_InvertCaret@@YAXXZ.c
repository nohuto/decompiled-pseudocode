/*
 * XREFs of ?UT_InvertCaret@@YAXXZ @ 0x1C00AE2D8
 * Callers:
 *     CaretBlinkProc @ 0x1C00AB6D0 (CaretBlinkProc.c)
 *     zzzSetCaretPos @ 0x1C00AB760 (zzzSetCaretPos.c)
 *     zzzInternalShowCaret @ 0x1C00ABA64 (zzzInternalShowCaret.c)
 *     zzzInternalHideCaret @ 0x1C00ABB10 (zzzInternalHideCaret.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     GreSaveDC @ 0x1C0049A00 (GreSaveDC.c)
 *     IsVisible @ 0x1C00AE7B0 (IsVisible.c)
 *     GrePolyPatBlt @ 0x1C00AE914 (GrePolyPatBlt.c)
 *     _ExcludeUpdateRgn @ 0x1C0125A3C (_ExcludeUpdateRgn.c)
 */

void UT_InvertCaret(void)
{
  __int64 v0; // rdi
  __int64 v1; // rbx
  HDC DC; // rax
  HDC v3; // rsi
  int v4; // ebp
  unsigned __int64 v5; // rcx
  __int64 v6; // rbx
  _DWORD v7[4]; // [rsp+60h] [rbp-28h] BYREF
  __int64 v8; // [rsp+70h] [rbp-18h]

  v0 = *(_QWORD *)(gptiCurrent + 384LL);
  v1 = *(_QWORD *)(v0 + 256);
  if ( v1 && (unsigned int)IsVisible(*(_QWORD *)(v0 + 256)) )
  {
    DC = (HDC)_GetDC();
    v3 = DC;
    if ( *(_QWORD *)(v1 + 160) )
    {
      v4 = 1;
      GreSaveDC(DC);
      if ( (*(_BYTE *)(v1 + 45) & 1) != 0 )
        ExcludeUpdateRgn(v3);
    }
    else
    {
      v4 = 0;
    }
    v5 = *(_QWORD *)(v0 + 288);
    if ( v5 > 1 )
    {
      v6 = GreSelectBitmap(ghdcMem, *(_QWORD *)(v0 + 288));
      NtGdiBitBltInternal(
        v3,
        *(_DWORD *)(v0 + 272),
        *(_DWORD *)(v0 + 276),
        *(_DWORD *)(v0 + 284),
        *(_DWORD *)(v0 + 280),
        ghdcMem,
        0,
        0,
        0x660046u,
        0,
        0);
      GreSelectBitmap(ghdcMem, v6);
    }
    else
    {
      v7[0] = *(_DWORD *)(v0 + 272);
      v7[1] = *(_DWORD *)(v0 + 276);
      v7[2] = *(_DWORD *)(v0 + 284);
      v7[3] = *(_DWORD *)(v0 + 280);
      if ( v5 == 1 )
        v8 = *(_QWORD *)(gpsi + 5336LL);
      else
        v8 = ghbrWhite;
      GrePolyPatBlt(v3, 0x5A0049u, (struct _POLYPATBLT *)v7, 1u);
    }
    if ( v4 )
      GreRestoreDC(v3, 0xFFFFFFFFLL);
    _ReleaseDC(v3);
  }
  else
  {
    *(_DWORD *)(v0 + 264) &= ~1u;
  }
}
