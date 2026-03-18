/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C00716CC
 * Callers:
 *     xxxAdjustSize @ 0x1C0072CC4 (xxxAdjustSize.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C0092890 (xxxEndGetWidnowTrackInfoAsync.c)
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C0207BD4 (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     xxxSendMessage @ 0x1C0057FE8 (xxxSendMessage.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C00707C8 (GetWindowBordersWithDpiAwareness.c)
 *     _HasCaptionIcon @ 0x1C00711D8 (_HasCaptionIcon.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     _MonitorFromWindow @ 0x1C0077FC0 (_MonitorFromWindow.c)
 *     SetOrClrWF @ 0x1C0080070 (SetOrClrWF.c)
 *     _GetClientRect @ 0x1C00EC1E4 (_GetClientRect.c)
 *     GetMonitorMaxArea @ 0x1C00F40D4 (GetMonitorMaxArea.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 DispInfo; // rax
  int v8; // r8d
  __int64 v9; // rdx
  __int128 *v10; // r15
  __int64 DesktopWindow; // rax
  __int64 v12; // r8
  __int64 v13; // r13
  int v14; // r12d
  int v15; // ebx
  int v16; // eax
  int v17; // ecx
  __int64 v18; // rdx
  int v19; // eax
  __int64 Prop; // rax
  __int64 v21; // rax
  int v22; // r14d
  int SystemMetricsForWindow; // eax
  int v24; // r12d
  __int64 v25; // rdx
  int v26; // eax
  int v27; // eax
  _DWORD *v28; // rdx
  __int64 v29; // rcx
  bool v30; // zf
  __int64 v31; // rax
  int v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 result; // rax
  bool v36; // cc
  char v37; // al
  int v38; // eax
  int v39; // ebx
  int v40; // r8d
  int v41; // ecx
  int v42; // edx
  int v43; // eax
  int v44; // edx
  __int64 v45; // [rsp+28h] [rbp-48h]
  __int128 v46; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v47[3]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v48[3]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD *v49; // [rsp+B0h] [rbp+40h] BYREF
  int WindowBordersWithDpiAwareness; // [rsp+B8h] [rbp+48h]
  int v51; // [rsp+C8h] [rbp+58h]

  v51 = a4;
  *(_DWORD *)a2 = GetSystemMetricsForWindow(a1, 57LL);
  *(_DWORD *)(a2 + 4) = GetSystemMetricsForWindow(a1, 58LL);
  DispInfo = GetDispInfo();
  v8 = *(_DWORD *)(a1 + 344);
  v9 = *(_QWORD *)(DispInfo + 88);
  v45 = v9;
  if ( v8 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
  {
    if ( v8 != 1
      || (v10 = (__int128 *)(v9 + 60),
          (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0) )
    {
      v10 = (__int128 *)(v9 + 28);
    }
  }
  else
  {
    v10 = (__int128 *)(v9 + 44);
  }
  DesktopWindow = GetDesktopWindow(a1);
  if ( v12 == DesktopWindow )
  {
    LODWORD(v49) = 1;
    v13 = MonitorFromWindow(a1, 33LL);
    v46 = *v10;
    if ( a3 )
      v13 = a3;
  }
  else
  {
    LODWORD(v49) = 0;
    v13 = 0LL;
    GetClientRect(v12, &v46);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
  v14 = WindowBordersWithDpiAwareness;
  v15 = v14 * GetSystemMetricsForWindow(a1, 6LL);
  v16 = v14 * GetSystemMetricsForWindow(a1, 5LL);
  DWORD1(v46) -= v15;
  v17 = v16 + DWORD2(v46) - (v46 - v16);
  LODWORD(v46) = v46 - v16;
  v18 = (unsigned __int16)atomCheckpointProp;
  v19 = v15 + HIDWORD(v46) - DWORD1(v46);
  *(_DWORD *)(a2 + 8) = v17;
  *(_DWORD *)(a2 + 12) = v19;
  Prop = GetProp(a1, v18, 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 32) & 0x10) != 0 )
    v21 = *(_QWORD *)(Prop + 24);
  else
    v21 = v46;
  *(_QWORD *)(a2 + 16) = v21;
  v22 = v14 * GetSystemMetricsForWindow(a1, 45LL);
  SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 46LL);
  v24 = WindowBordersWithDpiAwareness * SystemMetricsForWindow;
  if ( (*(_BYTE *)(a1 + 54) & 0xC0) != 0 && *(char *)(a1 + 48) >= 0 )
  {
    *(_DWORD *)(a2 + 24) = GetSystemMetricsForWindow(a1, 34LL);
    v25 = 35LL;
LABEL_12:
    v26 = GetSystemMetricsForWindow(a1, v25);
    goto LABEL_13;
  }
  if ( (int)GetSystemMetricsForWindow(a1, 45LL) > v22 )
    v43 = GetSystemMetricsForWindow(a1, 45LL);
  else
    v43 = v22;
  *(_DWORD *)(a2 + 24) = v43;
  if ( (int)GetSystemMetricsForWindow(a1, 46LL) > v24 )
  {
    v25 = 46LL;
    goto LABEL_12;
  }
  v26 = v24;
LABEL_13:
  *(_DWORD *)(a2 + 28) = v26;
  *(_DWORD *)(a2 + 32) = GetSystemMetricsForWindow(a1, 59LL);
  *(_DWORD *)(a2 + 36) = GetSystemMetricsForWindow(a1, 60LL);
  v47[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v47;
  v47[1] = v13;
  if ( v13 )
    ++*(_DWORD *)(v13 + 8);
  v48[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v48;
  v48[1] = v45;
  ++*(_DWORD *)(v45 + 8);
  if ( !v51 )
    xxxSendMessage((struct tagWND *)a1, 0x24u, 0LL, a2);
  *(_DWORD *)a2 = GetSystemMetricsForWindow(a1, 57LL);
  v27 = GetSystemMetricsForWindow(a1, 58LL);
  v30 = (_DWORD)v49 == 0;
  *(_DWORD *)(a2 + 4) = v27;
  if ( !v30 )
  {
    GetMonitorMaxArea(a1, v13, &v49);
    if ( *(_DWORD *)(a2 + 8) < *((_DWORD *)v10 + 2) - *(_DWORD *)v10
      || *(_DWORD *)(a2 + 12) < *((_DWORD *)v10 + 3) - *((_DWORD *)v10 + 1) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      v28 = v49;
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v31 = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( v31 )
      {
        v40 = *(_DWORD *)(v31 + 32);
        if ( ((*(_BYTE *)(a1 + 54) >> 2) & ((v40 & 0x10) != 0)) != 0 )
        {
          v41 = *(_DWORD *)(a2 + 16);
          v42 = v46;
          if ( v41 != (_DWORD)v46 && *(_DWORD *)(v31 + 24) == v41 )
          {
            *(_DWORD *)(v31 + 32) = v40 & 0xFFFFFFEF;
            *(_DWORD *)(a2 + 20) = DWORD1(v46);
            *(_DWORD *)(a2 + 16) = v42;
          }
        }
      }
      v32 = *(_DWORD *)(a2 + 20);
      if ( (signed int)(v32 + GetSystemMetricsForWindow(a1, 4LL)) > *((_DWORD *)v10 + 1)
        || v32 + *(_DWORD *)(a2 + 12) < *((_DWORD *)v10 + 3) )
      {
        v28 = v49;
      }
      else
      {
        v44 = *(_DWORD *)(a1 + 344);
        if ( v44 || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) == 0 )
        {
          if ( v44 == 1 && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL) + 8LL) + 244LL) & 1) != 0 )
            v28 = (_DWORD *)(v13 + 60);
          else
            v28 = (_DWORD *)(v13 + 28);
        }
        else
        {
          v28 = (_DWORD *)(v13 + 44);
        }
      }
      *(_DWORD *)(a2 + 8) += *(_DWORD *)v10 + v28[2] - *((_DWORD *)v10 + 2) - *v28;
      v29 = (unsigned int)(*((_DWORD *)v10 + 1) + v28[3] - v28[1] - *((_DWORD *)v10 + 3));
      *(_DWORD *)(a2 + 12) += v29;
    }
    *(_DWORD *)(a2 + 16) += *v28;
    *(_DWORD *)(a2 + 20) += v28[1];
  }
  ThreadUnlock1(v29, v28);
  result = ThreadUnlock1(v34, v33);
  if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
  {
    v24 = GetSystemMetricsForWindow(a1, 35LL);
    if ( *(char *)(a1 + 48) < 0 )
    {
      if ( (*(_BYTE *)(a1 + 54) & 8) != 0 )
        v22 += GetSystemMetricsForWindow(a1, 52LL);
      result = GetSystemMetricsForWindow(a1, 45LL);
    }
    else
    {
      v37 = *(_BYTE *)(a1 + 54);
      if ( (v37 & 8) != 0 )
      {
        if ( (v37 & 3) != 0 )
        {
          v38 = GetSystemMetricsForWindow(a1, 30LL);
          v22 += v38 + 2 * v38;
        }
        else if ( (*(_BYTE *)(a1 + 49) & 4) != 0 )
        {
          v22 += 2 * GetSystemMetricsForWindow(a1, 30LL);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
          v22 += GetSystemMetricsForWindow(a1, 31LL);
      }
      v39 = GetSystemMetricsForWindow(a1, 45LL);
      result = (unsigned int)(v39 + 2 * *(_DWORD *)(GetDPIMetrics() + 72));
    }
    v22 += 2 * result;
  }
  if ( *(_DWORD *)(a2 + 24) > v22 )
    v22 = *(_DWORD *)(a2 + 24);
  v36 = *(_DWORD *)(a2 + 28) <= v24;
  *(_DWORD *)(a2 + 24) = v22;
  if ( !v36 )
    v24 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 28) = v24;
  return result;
}
