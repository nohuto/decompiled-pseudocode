/*
 * XREFs of xxxDrawWindowFrame @ 0x1C0057540
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     ?xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z @ 0x1C0114054 (-xxxDWPPrint@@YAHPEAUtagWND@@PEAUHDC__@@_J@Z.c)
 *     xxxRedrawHungWindow @ 0x1C0124828 (xxxRedrawHungWindow.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxDrawCaptionBar @ 0x1C004ED9C (xxxDrawCaptionBar.c)
 *     GetWindowBorders @ 0x1C004F1E0 (GetWindowBorders.c)
 *     IsVisible @ 0x1C0057870 (IsVisible.c)
 *     GetRect @ 0x1C0087D10 (GetRect.c)
 *     DrawEdge @ 0x1C0094D78 (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GetCaptionHeight @ 0x1C00F3714 (GetCaptionHeight.c)
 *     xxxDrawScrollBar @ 0x1C0119440 (xxxDrawScrollBar.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     DrawSize @ 0x1C0232E48 (DrawSize.c)
 *     xxxMenuBarDraw @ 0x1C0241C80 (xxxMenuBarDraw.c)
 */

char __fastcall xxxDrawWindowFrame(__int64 a1, HDC a2, __int16 a3)
{
  int v6; // esi
  int ClipBox; // eax
  __int64 v8; // rcx
  __int64 v9; // rcx
  int WindowBorders; // ebp
  __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  unsigned int v15; // r15d
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _DWORD *v19; // rcx
  int v20; // ebp
  int CaptionHeight; // eax
  bool v22; // zf
  unsigned int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rcx
  _DWORD *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _DWORD *v31; // rcx
  __int64 v32; // rcx
  __int64 v33; // rcx
  int v35; // ecx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v39; // ecx
  __int64 v40; // rcx
  __int64 v41; // rcx
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rcx
  int v47; // ecx
  unsigned int v49; // [rsp+20h] [rbp-68h]
  int v50; // [rsp+28h] [rbp-60h] BYREF
  int v51; // [rsp+2Ch] [rbp-5Ch]
  int v52; // [rsp+30h] [rbp-58h]
  int v53; // [rsp+34h] [rbp-54h]
  _BYTE v54[16]; // [rsp+38h] [rbp-50h] BYREF

  v6 = 36876;
  ClipBox = IsVisible(a1, a2);
  if ( ClipBox )
  {
    LOBYTE(ClipBox) = *(_BYTE *)(v8 + 41) & 0x81;
    if ( (_BYTE)ClipBox != 1 )
    {
      v9 = *(_QWORD *)(v8 + 112) - *(_QWORD *)(a1 + 128);
      if ( !v9 )
        v9 = *(_QWORD *)(a1 + 120) - *(_QWORD *)(a1 + 136);
      if ( v9 )
      {
        if ( *(_QWORD *)(a1 + 160) || (ClipBox = GreGetClipBox(a2, v54, 1LL), ClipBox != 1) )
        {
          if ( ((unsigned __int8)~*(_BYTE *)(a1 + 41) & (*(_BYTE *)(a1 + 55) >> 5) & 1) != 0 )
          {
            if ( (*(_BYTE *)(a1 + 40) & 0x40) != 0 )
              v6 = 36877;
            if ( (a3 & 0x2000) != 0 )
              v6 |= 0x2000u;
            LOBYTE(ClipBox) = xxxDrawCaptionBar(a1, a2, v6);
            return ClipBox;
          }
          WindowBorders = GetWindowBorders(*(_DWORD *)(a1 + 52), *(_DWORD *)(a1 + 48));
          if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x4000) == 0 )
            {
LABEL_61:
              v14 = (_DWORD *)(gpsi + 2288LL);
              goto LABEL_13;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v11)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_61;
          }
          if ( (unsigned int)IsDPIDWMSysMet(5LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v35 = 0)
              : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v35) )
          {
            v14 = (_DWORD *)(gpsi + 2676LL);
          }
          else
          {
            v14 = (_DWORD *)(gpsi + 1900LL);
          }
LABEL_13:
          v15 = WindowBorders * *v14;
          if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) == 0 )
            {
LABEL_77:
              v19 = (_DWORD *)(gpsi + 2292LL);
              goto LABEL_17;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v16)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_77;
          }
          if ( (unsigned int)IsDPIDWMSysMet(6LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v39 = 0)
              : (v39 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v39) )
          {
            v19 = (_DWORD *)(gpsi + 2680LL);
          }
          else
          {
            v19 = (_DWORD *)(gpsi + 1904LL);
          }
LABEL_17:
          v49 = *v19 * WindowBorders;
          GetRect(a1, &v50, 34LL);
          v50 += v15;
          v52 -= v15;
          v20 = v51 + v49;
          v53 -= v49;
          if ( (*(_BYTE *)(a1 + 40) & ((a3 & 0x2000) == 0)) != 0 )
            v20 += xxxMenuBarDraw(a1, a2, v15, v49);
          if ( ((unsigned __int8)~*(_BYTE *)(a1 + 48) & ((*(_BYTE *)(a1 + 54) & 0xC4) == 0)) == 0
            || (*(_BYTE *)(a1 + 49) & 1) != 0
            || ((unsigned __int8)~*(_BYTE *)(a1 + 41) & (*(_BYTE *)(a1 + 50) >> 1) & 1) != 0 )
          {
            if ( (a3 & 0x2000) != 0 )
              v6 = 45068;
            if ( (a3 & 1) != 0 )
              v6 |= 1u;
            xxxDrawCaptionBar(a1, a2, v6 | 0x800);
          }
          CaptionHeight = GetCaptionHeight(a1);
          v22 = (*(_BYTE *)(a1 + 44) & 0x10) == 0;
          v51 = CaptionHeight + v20;
          if ( v22 )
          {
            v23 = v49;
LABEL_27:
            if ( (((a3 & 0x2000) == 0) & (*(_BYTE *)(a1 + 40) >> 1)) != 0 )
            {
              if ( (*(_BYTE *)(a1 + 40) & 4) != 0 )
                DrawSize(a1, a2, v15, v23);
              xxxDrawScrollBar((struct tagWND *)a1, a2, 1);
            }
            LOBYTE(ClipBox) = ((a3 & 0x2000) == 0) & (*(_BYTE *)(a1 + 40) >> 2);
            if ( (_BYTE)ClipBox )
              LOBYTE(ClipBox) = xxxDrawScrollBar((struct tagWND *)a1, a2, 0);
            return ClipBox;
          }
          if ( (unsigned int)IsDPIAbsoluteSysMet(45LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) == 0 )
            {
LABEL_93:
              v27 = (_DWORD *)(gpsi + 2448LL);
              goto LABEL_37;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v24)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_93;
          }
          if ( (unsigned int)IsDPIDWMSysMet(45LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v43 = 0)
              : (v43 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v43) )
          {
            v27 = (_DWORD *)(gpsi + 2836LL);
          }
          else
          {
            v27 = (_DWORD *)(gpsi + 2060LL);
          }
LABEL_37:
          v15 += *v27;
          if ( (unsigned int)IsDPIAbsoluteSysMet(46LL) )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) == 0
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) == 0 )
            {
LABEL_109:
              v31 = (_DWORD *)(gpsi + 2452LL);
LABEL_41:
              v23 = *v31 + v49;
              DrawEdge(a2);
              goto LABEL_27;
            }
          }
          else if ( (unsigned int)IsDPIDWMSysMet(v28)
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) == 0
                 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) == 0
                 && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                          + 8LL)
                              + 260LL) & 1 )
          {
            goto LABEL_109;
          }
          if ( (unsigned int)IsDPIDWMSysMet(46LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v47 = 0)
              : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v47) )
          {
            v31 = (_DWORD *)(gpsi + 2840LL);
          }
          else
          {
            v31 = (_DWORD *)(gpsi + 2064LL);
          }
          goto LABEL_41;
        }
      }
    }
  }
  return ClipBox;
}
