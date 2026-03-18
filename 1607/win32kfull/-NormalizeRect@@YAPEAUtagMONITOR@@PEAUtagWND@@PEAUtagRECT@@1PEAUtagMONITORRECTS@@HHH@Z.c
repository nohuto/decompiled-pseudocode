/*
 * XREFs of ?NormalizeRect@@YAPEAUtagMONITOR@@PEAUtagWND@@PEAUtagRECT@@1PEAUtagMONITORRECTS@@HHH@Z @ 0x1C00AC918
 * Callers:
 *     ComputeProposedPerMonRect @ 0x1C00ABCDC (ComputeProposedPerMonRect.c)
 *     xxxDeferWindowPosAndCheckPoint @ 0x1C00AC04C (xxxDeferWindowPosAndCheckPoint.c)
 * Callees:
 *     GetMonitorFlagsFromWindow @ 0x1C0058654 (GetMonitorFlagsFromWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C006EAD8 (GetWindowBordersWithDpiAwareness.c)
 *     GetWindowExtendedMargin @ 0x1C00ACD48 (GetWindowExtendedMargin.c)
 *     IsValidMonitor @ 0x1C00ACDA8 (IsValidMonitor.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z @ 0x1C01CD3A4 (-FindNewMonitor@@YAPEAUtagMONITOR@@PEAUtagRECT@@0@Z.c)
 */

struct tagMONITOR *__fastcall NormalizeRect(
        struct tagWND *a1,
        struct tagRECT *a2,
        struct tagRECT *a3,
        struct tagMONITORRECTS *a4,
        int a5,
        int a6,
        int a7)
{
  __int128 v8; // xmm0
  __int64 v10; // r12
  struct tagMONITOR *v13; // rbx
  __int64 v14; // rcx
  unsigned __int16 v15; // di
  int v16; // edx
  __int64 v17; // r8
  INT v18; // ebx
  char *v19; // rax
  INT v20; // eax
  INT v21; // ecx
  INT v22; // eax
  int v23; // r8d
  int v24; // edx
  __int64 v25; // rax
  _DWORD *v26; // rbx
  __int64 v27; // rax
  int v28; // edx
  __int64 v29; // rax
  __int64 v30; // rax
  int WindowBordersWithDpiAwareness; // eax
  LONG v32; // r8d
  int v33; // edx
  LONG v34; // r9d
  struct tagMONITOR *result; // rax
  int v36; // edx
  int v37; // edi
  int v38; // r13d
  int v39; // r11d
  int v40; // r9d
  int v41; // r10d
  int v42; // edx
  int v43; // edi
  LONG v44; // ecx
  LONG v45; // ecx
  LONG right; // ecx
  LONG v47; // edx
  int v48; // eax
  LONG left; // edx
  LONG v50; // ecx
  int v51; // ecx
  LONG bottom; // eax
  LONG v53; // edx
  int v54; // ecx
  LONG v55; // eax
  LONG top; // ecx
  LONG v57; // eax
  int v58; // eax
  int v59; // ecx
  int v60; // r8d
  int v61; // r8d
  unsigned int MonitorFlagsFromWindow; // eax
  struct tagMONITOR *NewMonitor; // [rsp+30h] [rbp-38h] BYREF
  int v64; // [rsp+38h] [rbp-30h] BYREF
  unsigned __int16 v65; // [rsp+3Eh] [rbp-2Ah]
  int v66; // [rsp+40h] [rbp-28h]
  int v67; // [rsp+44h] [rbp-24h]
  __int128 v68; // [rsp+48h] [rbp-20h] BYREF

  v8 = (__int128)*a3;
  v66 = 0;
  v10 = 112LL * a5;
  v68 = v8;
  v13 = *(struct tagMONITOR **)((char *)a4 + v10 + 112);
  NewMonitor = v13;
  if ( !v13 || !(unsigned int)IsValidMonitor(v13) )
  {
    NewMonitor = FindNewMonitor((struct tagRECT *)((char *)a4 + v10 + 8), (struct tagRECT *)((char *)a4 + v10 + 24));
    v13 = NewMonitor;
    if ( !NewMonitor )
    {
      v13 = *(struct tagMONITOR **)(GetDispInfo(v14) + 88);
      NewMonitor = v13;
    }
  }
  v15 = *((_WORD *)v13 + 77);
  v16 = *((_DWORD *)a1 + 88) & 0xF;
  v17 = *(unsigned __int16 *)((char *)a4 + v10 + 104);
  if ( v16 == 2 )
  {
    if ( a7 && (*(_DWORD *)(*((_QWORD *)a1 + 2) + 568LL) & 0x2000000) == 0 && !a6 && v15 != (_WORD)v17 )
    {
      v18 = (unsigned __int16)v17;
      goto LABEL_13;
    }
  }
  else
  {
    if ( v16 )
      LOWORD(v18) = *(_WORD *)(gpsi + 8678LL);
    else
      LOWORD(v18) = 96;
    v19 = (char *)a4 + 72;
    if ( !v16 )
      v19 = (char *)a4 + 40;
    ScaleDPIRect(&v68, &v68, v17, (unsigned __int16)v18, *(_QWORD *)((char *)a4 + v10 + 8), *(_QWORD *)&v19[v10]);
    v66 = 1;
    if ( !a6 )
    {
      v18 = (unsigned __int16)v18;
LABEL_13:
      v20 = EngMulDiv(a3->right - a3->left, v15, v18);
      v21 = a3->bottom - a3->top;
      DWORD2(v68) = v68 + v20;
      v22 = EngMulDiv(v21, v15, v18);
      v23 = DWORD1(v68);
      v13 = NewMonitor;
      HIDWORD(v68) = DWORD1(v68) + v22;
      goto LABEL_16;
    }
    v13 = NewMonitor;
  }
  v23 = DWORD1(v68);
LABEL_16:
  if ( a6 )
  {
    if ( a6 == 1 )
    {
      v24 = *((_DWORD *)a1 + 88) & 0xF;
      if ( !v24
        && (v25 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v25 + 8) + 244LL) & 1) != 0 )
      {
        v26 = (_DWORD *)((char *)v13 + 92);
      }
      else if ( v24 == 1
             && (v27 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v27 + 8) + 244LL) & 1) != 0 )
      {
        v26 = (_DWORD *)((char *)v13 + 108);
      }
      else
      {
        v26 = (_DWORD *)((char *)v13 + 76);
      }
    }
    else
    {
      v28 = *((_DWORD *)a1 + 88) & 0xF;
      if ( !v28
        && (v29 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
        && (*(_DWORD *)(*(_QWORD *)(v29 + 8) + 244LL) & 1) != 0 )
      {
        v26 = (_DWORD *)((char *)v13 + 44);
      }
      else if ( v28 == 1
             && (v30 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v30 + 8) + 244LL) & 1) != 0 )
      {
        v26 = (_DWORD *)((char *)v13 + 60);
      }
      else
      {
        v26 = (_DWORD *)((char *)v13 + 28);
      }
    }
    WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness((__int64)a1);
    v32 = *v26 - WindowBordersWithDpiAwareness;
    a2->left = v32;
    v33 = 2 * WindowBordersWithDpiAwareness;
    v34 = v26[1] - WindowBordersWithDpiAwareness;
    result = NewMonitor;
    a2->top = v34;
    a2->right = v32 + v33 + v26[2] - *v26;
    a2->bottom = v34 + v33 + v26[3] - v26[1];
  }
  else
  {
    v36 = *(_DWORD *)((char *)a4 + v10 + 8);
    v37 = *(_DWORD *)((char *)a4 + v10 + 12);
    v38 = *(_DWORD *)((char *)a4 + v10 + 16) - v36;
    v39 = *(_DWORD *)((char *)a4 + v10 + 20) - v37;
    v40 = *((_DWORD *)v13 + 7) - v36;
    v41 = *((_DWORD *)v13 + 8) - v37;
    v67 = v36;
    v42 = *((_DWORD *)v13 + 9) - *((_DWORD *)v13 + 7);
    v64 = v37;
    v43 = *((_DWORD *)v13 + 10) - *((_DWORD *)v13 + 8);
    if ( v42 != v38 || v43 != v39 )
    {
      v40 += ((v42 - v38) * ((int)v68 - v67) + v38 / 2) / v38;
      v41 += ((v43 - v39) * (v23 - v64) + v39 / 2) / v39;
    }
    v44 = v40 + DWORD2(v68);
    a2->left = v40 + v68;
    a2->right = v44;
    v45 = v41 + HIDWORD(v68);
    a2->top = v41 + v23;
    a2->bottom = v45;
    GetWindowExtendedMargin(a1, &v64);
    right = a2->right;
    v47 = *((_DWORD *)v13 + 21);
    if ( right > v47 )
    {
      v48 = v47 + HIWORD(v64) - right;
      a2->left += v48;
      a2->right = right + v48;
    }
    left = a2->left;
    v50 = *((_DWORD *)v13 + 19);
    if ( a2->left < v50 )
    {
      v51 = v50 - (unsigned __int16)v64 - left;
      a2->right += v51;
      a2->left = left + v51;
    }
    bottom = a2->bottom;
    v53 = *((_DWORD *)v13 + 22);
    if ( bottom > v53 )
    {
      v54 = v53 + v65 - bottom;
      v55 = v53 + v65;
      a2->top += v54;
      a2->bottom = v55;
    }
    top = a2->top;
    v57 = *((_DWORD *)v13 + 20);
    if ( top < v57 )
    {
      v58 = v57 - top;
      a2->bottom += v58;
      a2->top = top + v58;
    }
    if ( (*((_BYTE *)a1 + 54) & 4) != 0 )
    {
      v59 = 0;
      v60 = *((_DWORD *)v13 + 21);
      if ( a2->right - HIWORD(v64) > v60 )
      {
        v59 = 1;
        a2->right = HIWORD(v64) + v60;
      }
      v61 = *((_DWORD *)v13 + 22);
      if ( a2->bottom - v65 > v61 )
      {
        ++v59;
        a2->bottom = v65 + v61;
      }
      if ( v59 == 2 )
      {
        ++a2->left;
        --a2->right;
        ++a2->top;
        --a2->bottom;
      }
    }
    if ( v66 )
    {
      MonitorFlagsFromWindow = GetMonitorFlagsFromWindow((__int64)a1);
      PhysicalToLogicalDPIRect(a2, a2, MonitorFlagsFromWindow, &NewMonitor);
      return NewMonitor;
    }
    return v13;
  }
  return result;
}
