/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C00948A8
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C003E778 (xxxMinMaximizeEx.c)
 *     xxxAdjustSize @ 0x1C005CB5C (xxxAdjustSize.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C0207890 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0227630 (xxxEndGetWidnowTrackInfoAsync.c)
 * Callees:
 *     SetOrClrWF @ 0x1C005B694 (SetOrClrWF.c)
 *     _GetProp @ 0x1C006524C (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00665E0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0068C74 (xxxSendMessage.c)
 *     _MonitorFromWindow @ 0x1C0082D50 (_MonitorFromWindow.c)
 *     GetMonitorMaxArea @ 0x1C0085A80 (GetMonitorMaxArea.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C0093900 (GetWindowBordersWithDpiAwareness.c)
 *     _HasCaptionIcon @ 0x1C00943D8 (_HasCaptionIcon.c)
 *     GetSystemMetricsForWindow @ 0x1C0095290 (GetSystemMetricsForWindow.c)
 *     _GetClientRect @ 0x1C00E5834 (_GetClientRect.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 DispInfo; // rax
  int v11; // r8d
  __int64 v12; // rdx
  __int128 *v13; // r15
  __int64 DesktopWindow; // rax
  __int64 v15; // r8
  __int64 v16; // r13
  int v17; // r12d
  int v18; // ebx
  int v19; // eax
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // eax
  __int64 Prop; // rax
  __int64 v24; // rax
  int v25; // r14d
  int SystemMetricsForWindow; // eax
  int v27; // r12d
  __int64 v28; // rdx
  int v29; // eax
  int v30; // eax
  _DWORD *v31; // rdx
  __int64 v32; // rcx
  bool v33; // zf
  __int64 v34; // rax
  int v35; // ebx
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 result; // rax
  bool v39; // cc
  char v40; // al
  int v41; // eax
  int v42; // ebx
  __int64 v43; // rdx
  __int64 v44; // rcx
  __int64 v45; // r8
  int v46; // r8d
  int v47; // ecx
  int v48; // edx
  int v49; // eax
  int v50; // edx
  __int64 v51; // [rsp+28h] [rbp-48h]
  __int128 v52; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v53[3]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v54[3]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD *v55; // [rsp+B0h] [rbp+40h] BYREF
  int WindowBordersWithDpiAwareness; // [rsp+B8h] [rbp+48h]
  int v57; // [rsp+C8h] [rbp+58h]

  v57 = a4;
  *(_DWORD *)a2 = GetSystemMetricsForWindow(a1, 57LL);
  *(_DWORD *)(a2 + 4) = GetSystemMetricsForWindow(a1, 58LL);
  DispInfo = GetDispInfo(v8, v7, v9);
  v11 = *(_DWORD *)(a1 + 344);
  v12 = *(_QWORD *)(DispInfo + 88);
  v51 = v12;
  if ( v11 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
  {
    if ( v11 != 1
      || (v13 = (__int128 *)(v12 + 60),
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0) )
    {
      v13 = (__int128 *)(v12 + 28);
    }
  }
  else
  {
    v13 = (__int128 *)(v12 + 44);
  }
  DesktopWindow = GetDesktopWindow(a1);
  if ( v15 == DesktopWindow )
  {
    LODWORD(v55) = 1;
    v16 = MonitorFromWindow(a1, 33LL, v15);
    v52 = *v13;
    if ( a3 )
      v16 = a3;
  }
  else
  {
    LODWORD(v55) = 0;
    v16 = 0LL;
    GetClientRect(v15, &v52);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
  v17 = WindowBordersWithDpiAwareness;
  v18 = v17 * GetSystemMetricsForWindow(a1, 6LL);
  v19 = v17 * GetSystemMetricsForWindow(a1, 5LL);
  DWORD1(v52) -= v18;
  v20 = v19 + DWORD2(v52) - (v52 - v19);
  LODWORD(v52) = v52 - v19;
  v21 = (unsigned __int16)atomCheckpointProp;
  v22 = v18 + HIDWORD(v52) - DWORD1(v52);
  *(_DWORD *)(a2 + 8) = v20;
  *(_DWORD *)(a2 + 12) = v22;
  Prop = GetProp(a1, v21, 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 32) & 0x10) != 0 )
    v24 = *(_QWORD *)(Prop + 24);
  else
    v24 = v52;
  *(_QWORD *)(a2 + 16) = v24;
  v25 = v17 * GetSystemMetricsForWindow(a1, 45LL);
  SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 46LL);
  v27 = WindowBordersWithDpiAwareness * SystemMetricsForWindow;
  if ( (*(_BYTE *)(a1 + 54) & 0xC0) != 0 && *(char *)(a1 + 48) >= 0 )
  {
    *(_DWORD *)(a2 + 24) = GetSystemMetricsForWindow(a1, 34LL);
    v28 = 35LL;
LABEL_12:
    v29 = GetSystemMetricsForWindow(a1, v28);
    goto LABEL_13;
  }
  if ( (int)GetSystemMetricsForWindow(a1, 45LL) > v25 )
    v49 = GetSystemMetricsForWindow(a1, 45LL);
  else
    v49 = v25;
  *(_DWORD *)(a2 + 24) = v49;
  if ( (int)GetSystemMetricsForWindow(a1, 46LL) > v27 )
  {
    v28 = 46LL;
    goto LABEL_12;
  }
  v29 = v27;
LABEL_13:
  *(_DWORD *)(a2 + 28) = v29;
  *(_DWORD *)(a2 + 32) = GetSystemMetricsForWindow(a1, 59LL);
  *(_DWORD *)(a2 + 36) = GetSystemMetricsForWindow(a1, 60LL);
  v53[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v53;
  v53[1] = v16;
  if ( v16 )
    ++*(_DWORD *)(v16 + 8);
  v54[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v54;
  v54[1] = v51;
  ++*(_DWORD *)(v51 + 8);
  if ( !v57 )
    xxxSendMessage((struct tagWND *)a1, 0x24u, 0LL, a2);
  *(_DWORD *)a2 = GetSystemMetricsForWindow(a1, 57LL);
  v30 = GetSystemMetricsForWindow(a1, 58LL);
  v33 = (_DWORD)v55 == 0;
  *(_DWORD *)(a2 + 4) = v30;
  if ( !v33 )
  {
    GetMonitorMaxArea(a1, v16, &v55);
    if ( *(_DWORD *)(a2 + 8) < *((_DWORD *)v13 + 2) - *(_DWORD *)v13
      || *(_DWORD *)(a2 + 12) < *((_DWORD *)v13 + 3) - *((_DWORD *)v13 + 1) )
    {
      SetOrClrWF(0, (_DWORD *)a1, 0x340u, 1);
      v31 = v55;
    }
    else
    {
      SetOrClrWF(1, (_DWORD *)a1, 0x340u, 1);
      v34 = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( v34 )
      {
        v46 = *(_DWORD *)(v34 + 32);
        if ( ((*(_BYTE *)(a1 + 54) >> 2) & ((v46 & 0x10) != 0)) != 0 )
        {
          v47 = *(_DWORD *)(a2 + 16);
          v48 = v52;
          if ( v47 != (_DWORD)v52 && *(_DWORD *)(v34 + 24) == v47 )
          {
            *(_DWORD *)(v34 + 32) = v46 & 0xFFFFFFEF;
            *(_DWORD *)(a2 + 20) = DWORD1(v52);
            *(_DWORD *)(a2 + 16) = v48;
          }
        }
      }
      v35 = *(_DWORD *)(a2 + 20);
      if ( (signed int)(v35 + GetSystemMetricsForWindow(a1, 4LL)) > *((_DWORD *)v13 + 1)
        || v35 + *(_DWORD *)(a2 + 12) < *((_DWORD *)v13 + 3) )
      {
        v31 = v55;
      }
      else
      {
        v50 = *(_DWORD *)(a1 + 344);
        if ( v50 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) == 0 )
        {
          if ( v50 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 416LL) + 8LL) + 260LL) & 1) != 0 )
            v31 = (_DWORD *)(v16 + 60);
          else
            v31 = (_DWORD *)(v16 + 28);
        }
        else
        {
          v31 = (_DWORD *)(v16 + 44);
        }
      }
      *(_DWORD *)(a2 + 8) += *(_DWORD *)v13 + v31[2] - *((_DWORD *)v13 + 2) - *v31;
      v32 = (unsigned int)(*((_DWORD *)v13 + 1) + v31[3] - v31[1] - *((_DWORD *)v13 + 3));
      *(_DWORD *)(a2 + 12) += v32;
    }
    *(_DWORD *)(a2 + 16) += *v31;
    *(_DWORD *)(a2 + 20) += v31[1];
  }
  ThreadUnlock1(v32, v31);
  result = ThreadUnlock1(v37, v36);
  if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
  {
    v27 = GetSystemMetricsForWindow(a1, 35LL);
    if ( *(char *)(a1 + 48) < 0 )
    {
      if ( (*(_BYTE *)(a1 + 54) & 8) != 0 )
        v25 += GetSystemMetricsForWindow(a1, 52LL);
      result = GetSystemMetricsForWindow(a1, 45LL);
    }
    else
    {
      v40 = *(_BYTE *)(a1 + 54);
      if ( (v40 & 8) != 0 )
      {
        if ( (v40 & 3) != 0 )
        {
          v41 = GetSystemMetricsForWindow(a1, 30LL);
          v25 += v41 + 2 * v41;
        }
        else if ( (*(_BYTE *)(a1 + 49) & 4) != 0 )
        {
          v25 += 2 * GetSystemMetricsForWindow(a1, 30LL);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
          v25 += GetSystemMetricsForWindow(a1, 31LL);
      }
      v42 = GetSystemMetricsForWindow(a1, 45LL);
      result = (unsigned int)(v42 + 2 * *(_DWORD *)(GetDPIMetrics(v44, v43, v45) + 72));
    }
    v25 += 2 * result;
  }
  if ( *(_DWORD *)(a2 + 24) > v25 )
    v25 = *(_DWORD *)(a2 + 24);
  v39 = *(_DWORD *)(a2 + 28) <= v27;
  *(_DWORD *)(a2 + 24) = v25;
  if ( !v39 )
    v27 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 28) = v27;
  return result;
}
