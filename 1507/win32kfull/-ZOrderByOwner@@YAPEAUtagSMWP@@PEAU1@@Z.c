/*
 * XREFs of ?ZOrderByOwner@@YAPEAUtagSMWP@@PEAU1@@Z @ 0x1C00836EC
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x1C00634F0 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z @ 0x1C0063454 (-FindValidWindowPos@@YAPEAUtagWINDOWPOS@@PEAUtagSMWP@@@Z.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     GetLastTopMostWindow @ 0x1C0081574 (GetLastTopMostWindow.c)
 *     SetWindowGroupBand @ 0x1C0083598 (SetWindowGroupBand.c)
 *     ?TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@1PEAPEAUHWND__@@2@Z @ 0x1C0083B08 (-TrackZorder@@YAPEAUtagWND@@PEAUtagWINDOWPOS@@PEAU1@1PEAPEAUHWND__@@2@Z.c)
 *     ?ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z @ 0x1C0083CBC (-ZOrderByOwner2@@YAPEAUtagSMWP@@PEAU1@H@Z.c)
 *     ?CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z @ 0x1C0083EC8 (-CheckTopmost@@YAHPEAUtagWINDOWPOS@@@Z.c)
 *     ?SetTopmostEnum@@YAXPEAUtagWND@@HH@Z @ 0x1C00F8D64 (-SetTopmostEnum@@YAXPEAUtagWND@@HH@Z.c)
 *     memmove @ 0x1C015D180 (memmove.c)
 */

struct tagSMWP *__fastcall ZOrderByOwner(struct tagSMWP *a1)
{
  struct tagSMWP *v1; // rdi
  int v2; // r12d
  HWND *v3; // rcx
  int v4; // esi
  int v5; // eax
  __int128 *v6; // rcx
  int v7; // r15d
  _OWORD *v8; // rcx
  unsigned int v9; // r14d
  int v10; // r8d
  __int64 v11; // r13
  __int64 v12; // rbx
  __int64 v13; // r15
  __int64 v14; // r13
  _QWORD *LastTopMostWindow; // rax
  __int64 *v16; // rax
  __int64 v17; // rax
  int v18; // edx
  unsigned int v19; // r8d
  int v20; // r15d
  __int64 v21; // r8
  struct tagWND *v22; // r11
  struct tagWND *v23; // r14
  __int64 v24; // rbx
  __int64 v25; // r10
  int v26; // r8d
  __int128 v28; // [rsp+30h] [rbp-89h]
  __int128 v29; // [rsp+40h] [rbp-79h]
  __int128 v30; // [rsp+50h] [rbp-69h]
  __int128 v31; // [rsp+60h] [rbp-59h]
  __int128 v32; // [rsp+70h] [rbp-49h]
  __int128 v33; // [rsp+80h] [rbp-39h]
  __int128 v34; // [rsp+90h] [rbp-29h]
  __int128 v35; // [rsp+A0h] [rbp-19h]
  __int128 v36; // [rsp+B0h] [rbp-9h]
  __int128 v37; // [rsp+C0h] [rbp+7h]
  __int64 v38; // [rsp+D0h] [rbp+17h]
  HWND v39; // [rsp+128h] [rbp+6Fh] BYREF
  int v40; // [rsp+130h] [rbp+77h]
  HWND v41; // [rsp+138h] [rbp+7Fh] BYREF

  v1 = a1;
  if ( FindValidWindowPos(a1) )
  {
    v2 = *((_DWORD *)v1 + 7);
    if ( v2 )
    {
      while ( 1 )
      {
        v3 = (HWND *)*((_QWORD *)v1 + 5);
        --v2;
        v4 = *((_DWORD *)v1 + 7) - 1;
        v40 = v2;
        if ( *v3 )
          break;
        if ( v4 )
          memmove(v3, v3 + 21, 168LL * v4);
        --*((_DWORD *)v1 + 7);
LABEL_45:
        if ( !v2 )
          return v1;
      }
      v41 = v3[1];
      v5 = CheckTopmost((struct tagWINDOWPOS *)v3);
      v6 = (__int128 *)*((_QWORD *)v1 + 5);
      v7 = v5;
      LODWORD(v39) = v5;
      v28 = *v6;
      v29 = v6[1];
      v30 = v6[2];
      v31 = v6[3];
      v32 = v6[4];
      v33 = v6[5];
      v34 = v6[6];
      v35 = v6[7];
      v36 = v6[8];
      v37 = v6[9];
      v38 = *((_QWORD *)v6 + 20);
      if ( v4 )
      {
        memmove(v6, (char *)v6 + 168, 168LL * v4);
        v8 = (_OWORD *)(168LL * v4 + *((_QWORD *)v1 + 5));
        *v8 = v28;
        v8[1] = v29;
        v8[2] = v30;
        v8[3] = v31;
        v8[4] = v32;
        v8[5] = v33;
        v8[6] = v34;
        v8 += 8;
        *(v8 - 1) = v35;
        *v8 = v36;
        v8[1] = v37;
        *((_QWORD *)v8 + 4) = v38;
      }
      v1 = ZOrderByOwner2(v1, v4);
      if ( !v1 )
        return v1;
      if ( !v7 )
      {
LABEL_35:
        v21 = *((int *)v1 + 7);
        v22 = 0LL;
        v39 = 0LL;
        v41 = 0LL;
        if ( (int)v21 <= 0 )
          v23 = 0LL;
        else
          v23 = *(struct tagWND **)(LODWORD(gSharedInfo[2])
                                  * (unsigned int)(unsigned __int16)*(_DWORD *)(168 * v21 + *((_QWORD *)v1 + 5) - 168)
                                  + gSharedInfo[1]);
        if ( v4 != (_DWORD)v21 )
        {
          v24 = 168LL * v4;
          do
          {
            v25 = v24 + *((_QWORD *)v1 + 5);
            if ( *(_QWORD *)v25 == (_QWORD)v28 )
            {
              v26 = v30 ^ ((unsigned __int8)v30 ^ (unsigned __int8)*(_DWORD *)(v25 + 32)) & 4;
              *(_OWORD *)v25 = v28;
              *(_OWORD *)(v25 + 16) = v29;
              *(_OWORD *)(v25 + 32) = v30;
              *(_OWORD *)(v25 + 48) = v31;
              *(_OWORD *)(v25 + 64) = v32;
              *(_OWORD *)(v25 + 80) = v33;
              *(_OWORD *)(v25 + 96) = v34;
              *(_OWORD *)(v25 + 112) = v35;
              *(_OWORD *)(v25 + 128) = v36;
              *(_OWORD *)(v25 + 144) = v37;
              *(_QWORD *)(v25 + 160) = v38;
              *(_DWORD *)(v25 + 32) = v26;
              if ( (v26 & 0x20000) != 0 )
                *(_DWORD *)(v25 + 32) = v26 & 0xFFFDFBFF | 0x400;
            }
            ++v4;
            v24 += 168LL;
            v22 = TrackZorder((struct tagWINDOWPOS *)v25, v22, v23, &v41, &v39);
          }
          while ( v4 != *((_DWORD *)v1 + 7) );
          v2 = v40;
        }
        goto LABEL_45;
      }
      v9 = 0;
      v10 = gSharedInfo[2];
      v11 = gSharedInfo[1];
      v12 = *(_QWORD *)(v10 * (unsigned int)(unsigned __int16)v28 + v11);
      if ( v7 == 2 )
      {
        v13 = *((_QWORD *)v1 + 5) + 168LL * v4;
        v14 = *(_QWORD *)(v10 * (unsigned int)(unsigned __int16)*(_DWORD *)v13 + v11);
        if ( (*(_BYTE *)(v14 + 48) & 8) == 0 || v41 != (HWND)-2LL )
          goto LABEL_24;
        LastTopMostWindow = (_QWORD *)GetLastTopMostWindow(v12);
        if ( LastTopMostWindow )
          LastTopMostWindow = (_QWORD *)*LastTopMostWindow;
        *(_QWORD *)(v13 + 8) = LastTopMostWindow;
        if ( LastTopMostWindow != *(_QWORD **)v13 )
          goto LABEL_24;
        if ( (*(_WORD *)(v14 + 66) & 0x3FFF) == 0x29D || (v16 = *(__int64 **)(v14 + 80)) == 0LL )
          v17 = 0LL;
        else
          v17 = *v16;
        *(_QWORD *)(v13 + 8) = v17;
        v7 = (int)v39;
      }
      if ( v7 == 1 )
      {
        v18 = 1;
        goto LABEL_25;
      }
LABEL_24:
      v18 = 0;
LABEL_25:
      if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)&v34 + 1) + 384LL) + 776LL) & 2) != 0
        && (unsigned int)(*(_DWORD *)(v12 + 304) - 1) <= 1 )
      {
        v19 = 0;
        v20 = 1;
        v9 = (v18 != 0) + 1;
      }
      else
      {
        v20 = 0;
        v19 = ((unsigned int)v30 >> 9) & 1;
      }
      if ( *(_DWORD *)(v12 + 304) == 1 )
        SetTopmostEnum((struct tagWND *)v12, v18, v19);
      if ( v20 && *(_DWORD *)(v12 + 304) != v9 && *(_QWORD *)(v12 + 88) == GetDesktopWindow(v12) )
        SetWindowGroupBand((struct tagWND *)v12, v9, 1);
      goto LABEL_35;
    }
  }
  return v1;
}
