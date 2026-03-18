/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020AB48
 * Callers:
 *     xxxMoveSize @ 0x1C020D52C (xxxMoveSize.c)
 * Callees:
 *     zzzClipCursorEx @ 0x1C003D634 (zzzClipCursorEx.c)
 *     zzzSetCursor @ 0x1C0062174 (zzzSetCursor.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     PtInRect @ 0x1C008D7D8 (PtInRect.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     FindNCHit @ 0x1C00FAEF8 (FindNCHit.c)
 *     xxxReleaseCapture @ 0x1C00FB250 (xxxReleaseCapture.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 *     _ClientToScreen @ 0x1C0249A38 (_ClientToScreen.c)
 */

__int64 __fastcall xxxTrackInitSize(struct tagWND *a1, int a2, unsigned __int64 a3, int a4, struct _MOVESIZEDATA *a5)
{
  __int64 v8; // rcx
  int NCHit; // r15d
  int v10; // esi
  _OWORD *v11; // r8
  int v12; // esi
  int v13; // esi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  int v18; // ecx
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  unsigned __int64 v21; // [rsp+20h] [rbp-20h] BYREF
  __int128 v22; // [rsp+28h] [rbp-18h] BYREF

  LODWORD(v21) = (__int16)a4;
  HIDWORD(v21) = SHIWORD(a4);
  ClientToScreen(a1, &v21);
  NCHit = FindNCHit(v8, (unsigned __int16)v21 | (WORD2(v21) << 16));
  v10 = a2 - 256;
  if ( !v10 )
  {
    if ( *((_DWORD *)a5 + 40) == 9 )
    {
      v20 = 0LL;
      if ( a1 )
        v20 = *(_QWORD *)a1;
      xxxSendMessage(a1, 0x20u, v20, 0x2000000LL);
    }
    if ( a3 > 0x28 || (_DWORD)a3 != 13 && (_DWORD)a3 != 27 && (unsigned int)(a3 - 37) > 3 )
      return 1LL;
    goto LABEL_33;
  }
  v11 = 0LL;
  v12 = v10 - 256;
  if ( !v12 )
  {
    if ( a3 != 1 )
    {
      v22 = *((_OWORD *)a1 + 7);
      if ( PtInRect(&v22, v21) && (unsigned int)(NCHit - 10) <= 7 )
        xxxSendMessage(a1, 0x20u, *(_QWORD *)a1, (unsigned __int16)NCHit | 0x2000000LL);
      else
        zzzSetCursor(*(_QWORD *)&gasyscur[76]);
      return 1LL;
    }
LABEL_11:
    v15 = *((_DWORD *)a5 + 40);
    if ( !v15 )
    {
      if ( (unsigned int)(NCHit - 10) <= 7 )
      {
        if ( a1 )
          v11 = *(_OWORD **)a1;
        xxxSendMessage(a1, 0x20u, (unsigned __int64)v11, (unsigned __int16)NCHit | 0x2000000LL);
        *((_DWORD *)a5 + 45) &= ~1u;
        v16 = dword_1C02EBC34[NCHit];
        v17 = dword_1C02EBC04[NCHit];
        *((_DWORD *)a5 + 41) = v16;
        v18 = v17 + v16;
        *((_DWORD *)a5 + 42) = v17;
        *((_DWORD *)a5 + 40) = v18;
        v19 = dword_1C02EBC88[v18];
        *((_DWORD *)a5 + 38) = *((_DWORD *)a5 + dword_1C02EBCB8[v18] + 26) - v21;
        *((_DWORD *)a5 + 39) = *((_DWORD *)a5 + v19 + 26) - HIDWORD(v21);
      }
      return 1LL;
    }
    if ( v15 != 9 || NCHit != 2 )
      return 1LL;
    if ( a1 )
      v11 = *(_OWORD **)a1;
    xxxSendMessage(a1, 0x20u, (unsigned __int64)v11, 0x2000000LL);
    *((_DWORD *)a5 + 38) = *((_DWORD *)a5 + 26) - v21;
    *((_DWORD *)a5 + 39) = *((_DWORD *)a5 + 27) - HIDWORD(v21);
LABEL_33:
    *((_DWORD *)a5 + 45) &= ~1u;
    return 1LL;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !PtInRect((_DWORD *)a5 + 2, v21) )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( v13 != 1 )
    return 1LL;
LABEL_7:
  bSetDevDragRect((HDEV)*gpDispInfo, 0LL, v11, 0);
  if ( (*(_DWORD *)(gptiCurrent + 448LL) & 0x10) != 0 )
  {
    xxxDrawDragRectEx(a5, 0LL, 2LL, (char *)a5 + 8);
    *(_DWORD *)(gptiCurrent + 448LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 45) &= ~1u;
  zzzClipCursorEx(0LL, 0);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 45) |= 8u;
  return 0LL;
}
