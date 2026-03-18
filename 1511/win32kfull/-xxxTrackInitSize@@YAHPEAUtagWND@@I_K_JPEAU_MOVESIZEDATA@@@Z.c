/*
 * XREFs of ?xxxTrackInitSize@@YAHPEAUtagWND@@I_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C020B08C
 * Callers:
 *     xxxMoveSize @ 0x1C020DCC8 (xxxMoveSize.c)
 * Callees:
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     PtInRect @ 0x1C0066AB8 (PtInRect.c)
 *     zzzSetCursor @ 0x1C0070694 (zzzSetCursor.c)
 *     zzzClipCursorEx @ 0x1C008AA64 (zzzClipCursorEx.c)
 *     xxxReleaseCapture @ 0x1C0091ED0 (xxxReleaseCapture.c)
 *     bSetDevDragRect @ 0x1C00D56E0 (bSetDevDragRect.c)
 *     FindNCHit @ 0x1C0102F28 (FindNCHit.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     xxxDrawDragRectEx @ 0x1C020BDC8 (xxxDrawDragRectEx.c)
 *     _ClientToScreen @ 0x1C02499F8 (_ClientToScreen.c)
 */

__int64 __fastcall xxxTrackInitSize(struct tagWND *a1, int a2, unsigned __int64 a3, int a4, struct _MOVESIZEDATA *a5)
{
  __int64 v8; // rcx
  int NCHit; // r15d
  int v10; // esi
  _OWORD *v11; // r8
  int v12; // esi
  int v13; // esi
  __int64 v14; // r8
  __int64 v15; // r9
  int v17; // eax
  int v18; // ecx
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rax
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // [rsp+20h] [rbp-20h] BYREF
  __int128 v24; // [rsp+28h] [rbp-18h] BYREF

  LODWORD(v23) = (__int16)a4;
  HIDWORD(v23) = SHIWORD(a4);
  ClientToScreen(a1, &v23);
  NCHit = FindNCHit(v8, (unsigned __int16)v23 | (WORD2(v23) << 16));
  v10 = a2 - 256;
  if ( !v10 )
  {
    if ( *((_DWORD *)a5 + 40) == 9 )
    {
      v22 = 0LL;
      if ( a1 )
        v22 = *(_QWORD *)a1;
      xxxSendMessage(a1, 0x20u, v22, 0x2000000LL);
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
      v24 = *((_OWORD *)a1 + 7);
      if ( PtInRect(&v24, v23) && (unsigned int)(NCHit - 10) <= 7 )
        xxxSendMessage(a1, 0x20u, *(_QWORD *)a1, (unsigned __int16)NCHit | 0x2000000LL);
      else
        zzzSetCursor(*(_QWORD *)&gasyscur[76]);
      return 1LL;
    }
LABEL_11:
    v17 = *((_DWORD *)a5 + 40);
    if ( !v17 )
    {
      if ( (unsigned int)(NCHit - 10) <= 7 )
      {
        if ( a1 )
          v11 = *(_OWORD **)a1;
        xxxSendMessage(a1, 0x20u, (unsigned __int64)v11, (unsigned __int16)NCHit | 0x2000000LL);
        *((_DWORD *)a5 + 45) &= ~1u;
        v18 = dword_1C02EABF4[NCHit];
        v19 = dword_1C02EABC4[NCHit];
        *((_DWORD *)a5 + 41) = v18;
        v20 = v19 + v18;
        *((_DWORD *)a5 + 42) = v19;
        *((_DWORD *)a5 + 40) = v20;
        v21 = dword_1C02EAC48[v20];
        *((_DWORD *)a5 + 38) = *((_DWORD *)a5 + dword_1C02EAC78[v20] + 26) - v23;
        *((_DWORD *)a5 + 39) = *((_DWORD *)a5 + v21 + 26) - HIDWORD(v23);
      }
      return 1LL;
    }
    if ( v17 != 9 || NCHit != 2 )
      return 1LL;
    if ( a1 )
      v11 = *(_OWORD **)a1;
    xxxSendMessage(a1, 0x20u, (unsigned __int64)v11, 0x2000000LL);
    *((_DWORD *)a5 + 38) = *((_DWORD *)a5 + 26) - v23;
    *((_DWORD *)a5 + 39) = *((_DWORD *)a5 + 27) - HIDWORD(v23);
LABEL_33:
    *((_DWORD *)a5 + 45) &= ~1u;
    return 1LL;
  }
  v13 = v12 - 1;
  if ( !v13 )
  {
    if ( !PtInRect((_DWORD *)a5 + 2, v23) )
      goto LABEL_7;
    goto LABEL_11;
  }
  if ( v13 != 1 )
    return 1LL;
LABEL_7:
  bSetDevDragRect((HDEV)*gpDispInfo, 0LL, v11, 0);
  if ( (*(_DWORD *)(gptiCurrent + 440LL) & 0x10) != 0 )
  {
    xxxDrawDragRectEx(a5, 0LL, 2LL, (char *)a5 + 8);
    *(_DWORD *)(gptiCurrent + 440LL) &= ~0x10u;
  }
  *((_DWORD *)a5 + 45) &= ~1u;
  zzzClipCursorEx(0LL, 0LL, v14, v15);
  xxxReleaseCapture();
  *((_DWORD *)a5 + 45) |= 8u;
  return 0LL;
}
