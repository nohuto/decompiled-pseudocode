/*
 * XREFs of ?xxxTM_MoveDragRect@@YAXPEAU_MOVESIZEDATA@@_J@Z @ 0x1C020A7DC
 * Callers:
 *     ?xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z @ 0x1C0208098 (-xxxMS_TrackMove@@YAXPEAUtagWND@@W4_WM_VALUE@@_K_JPEAU_MOVESIZEDATA@@@Z.c)
 * Callees:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0069380 (xxxSendTransformableMessageTimeout.c)
 *     bSetDevDragRect @ 0x1C00FA430 (bSetDevDragRect.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?SwapRect@@YAXPEAUtagRECT@@0@Z @ 0x1C015D788 (-SwapRect@@YAXPEAUtagRECT@@0@Z.c)
 *     ?MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z @ 0x1C020589C (-MoveRect@@YAHPEAU_MOVESIZEDATA@@KW4_MOVERECT_STYLE@@@Z.c)
 *     ?SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z @ 0x1C0205CA0 (-SizeRect@@YAHPEAU_MOVESIZEDATA@@KPEAUtagMONITOR@@PEAK@Z.c)
 *     ?xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z @ 0x1C0209C0C (-xxxSizeOrMoveRect@@YAHPEAU_MOVESIZEDATA@@KPEAKPEAUtagRECT@@PEAPEAUtagCHECKPOINT@@@Z.c)
 *     xxxDrawDragRectEx @ 0x1C020B728 (xxxDrawDragRectEx.c)
 */

void __fastcall xxxTM_MoveDragRect(struct _MOVESIZEDATA *a1, unsigned int a2)
{
  char *v2; // r12
  __int128 v3; // xmm0
  int v4; // edi
  bool v5; // zf
  char *v6; // r13
  __int128 v9; // xmm0
  char v10; // si
  unsigned int v11; // r14d
  struct tagWND *v12; // rcx
  unsigned __int64 v13; // r8
  __int64 v14; // rcx
  __int128 v15; // xmm0
  int v16; // eax
  int v17; // eax
  unsigned __int64 v18; // r8
  struct tagWND *v19; // rcx
  unsigned __int64 v20; // r8
  struct tagWND *v21; // rcx
  unsigned int v22; // [rsp+50h] [rbp-19h] BYREF
  struct tagRECT *v23; // [rsp+58h] [rbp-11h] BYREF
  __int64 v24; // [rsp+60h] [rbp-9h]
  struct tagRECT v25; // [rsp+68h] [rbp-1h] BYREF
  __int128 v26; // [rsp+78h] [rbp+Fh] BYREF

  v2 = (char *)a1 + 8;
  v3 = *(_OWORD *)((char *)a1 + 8);
  v4 = 0;
  v24 = *((_QWORD *)a1 + 23);
  v5 = *((_DWORD *)a1 + 40) == 9;
  v6 = (char *)a1 + 24;
  *(_OWORD *)((char *)a1 + 24) = v3;
  v9 = *(_OWORD *)((char *)a1 + 40);
  v10 = 0;
  v22 = 0;
  v23 = 0LL;
  *(_OWORD *)((char *)a1 + 56) = v9;
  if ( !v5 )
  {
    if ( !(unsigned int)SizeRect(a1, a2, 0LL, &v22) )
      return;
    v10 = v22;
    v11 = 532;
    goto LABEL_10;
  }
  if ( (*((_DWORD *)a1 + 45) & 0x800) != 0 )
  {
    if ( !(unsigned int)xxxSizeOrMoveRect(a1, a2, &v22, &v25, (struct tagCHECKPOINT **)&v23) )
      return;
    v10 = v22;
    if ( (v22 & 1) != 0 )
    {
      SwapRect(v23, &v25);
      xxxMinMaximizeEx(*(struct tagWND **)a1, 9u, 4, 0LL, 0LL);
      SwapRect(&v25, v23);
      v11 = 532;
      goto LABEL_10;
    }
  }
  else if ( !(unsigned int)MoveRect((__int64)a1, a2, 0) )
  {
    return;
  }
  v11 = 534;
LABEL_10:
  if ( (v10 & 2) != 0 && (v12 = *(struct tagWND **)a1, (*(_BYTE *)(*(_QWORD *)a1 + 54LL) & 1) != 0) )
  {
    v13 = *((int *)a1 + 40);
    v26 = *(_OWORD *)v6;
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(v12, v11, v13, (struct _LARGE_STRING *)&v26, 0, 0, 0LL, 1, 0);
    xxxMinMaximizeEx(*(struct tagWND **)a1, 3u, 22, *((_QWORD *)a1 + 26), 0LL);
    v14 = *(_QWORD *)a1;
    if ( (*(_BYTE *)(*(_QWORD *)a1 + 289LL) & 3) != 0 || (*(_BYTE *)(v14 + 55) & 1) != 0 )
      v4 = 1;
    *((_DWORD *)a1 + 45) ^= (*((_DWORD *)a1 + 45) ^ (v4 << 7)) & 0x80;
    v15 = *(_OWORD *)(v14 + 112);
    *(_OWORD *)v6 = v15;
    *(_OWORD *)((char *)a1 + 56) = v15;
    *(_OWORD *)v2 = v15;
    *(_OWORD *)((char *)a1 + 40) = v15;
    v26 = v15;
  }
  else
  {
    v16 = *((_DWORD *)a1 + 45);
    if ( (v16 & 0x4000000) != 0 )
    {
      if ( (v16 & 0x20) != 0 )
      {
        if ( (v10 & 8) != 0 )
        {
          xxxDrawDragRectEx(a1, 0LL, 0x80000000LL, v2);
        }
        else if ( (v10 & 4) != 0 )
        {
          bSetDevDragRect((HDEV)*gpDispInfo, 0LL, 0LL, 0);
        }
      }
      v17 = *((_DWORD *)a1 + 45);
      if ( (v17 & 0x2000000) != 0 )
      {
        if ( (v17 & 0x20) != 0 )
        {
          v18 = *((int *)a1 + 40);
          v19 = *(struct tagWND **)a1;
          v26 = *(_OWORD *)((char *)a1 + 56);
          *((_DWORD *)a1 + 45) = v17 & 0xFFFFFFDF;
          _InterlockedIncrement(&glSendMessage);
          xxxSendTransformableMessageTimeout(v19, v11, v18, (struct _LARGE_STRING *)&v26, 0, 0, 0LL, 1, 0);
          xxxDrawDragRectEx(a1, (char *)a1 + 56, 2147483651LL, (char *)a1 + 40);
          *((_DWORD *)a1 + 45) |= 0x20u;
        }
        else
        {
          v6 = (char *)a1 + 56;
          v2 = (char *)a1 + 40;
        }
      }
    }
    v20 = *((int *)a1 + 40);
    v21 = *(struct tagWND **)a1;
    v26 = *(_OWORD *)v6;
    _InterlockedIncrement(&glSendMessage);
    xxxSendTransformableMessageTimeout(v21, v11, v20, (struct _LARGE_STRING *)&v26, 0, 0, 0LL, 1, 0);
    xxxDrawDragRectEx(a1, &v26, 3LL, v2);
  }
  if ( *((_DWORD *)a1 + 40) == 9
    && ((*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x4000) != 0 || *((_QWORD *)a1 + 23) == v24) )
  {
    *((_DWORD *)a1 + 38) += v26 - (__int16)a2;
    *((_DWORD *)a1 + 39) += DWORD1(v26) - SHIWORD(a2);
  }
}
