/*
 * XREFs of xxxInitSendValidateMinMaxInfoEx @ 0x1C006DDDC
 * Callers:
 *     xxxAdjustSize @ 0x1C006F84C (xxxAdjustSize.c)
 *     xxxMinMaximizeEx @ 0x1C00B1498 (xxxMinMaximizeEx.c)
 *     xxxEndGetWidnowTrackInfoAsync @ 0x1C012412C (xxxEndGetWidnowTrackInfoAsync.c)
 *     ?xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z @ 0x1C01FEF8C (-xxxGetMinMaxTrackInfo@@YAXPEAU_MOVESIZEDATA@@H@Z.c)
 * Callees:
 *     GetSystemMetricsForWindow @ 0x1C006E7C8 (GetSystemMetricsForWindow.c)
 *     GetWindowBordersWithDpiAwareness @ 0x1C006EAD8 (GetWindowBordersWithDpiAwareness.c)
 *     _HasCaptionIcon @ 0x1C006F598 (_HasCaptionIcon.c)
 *     xxxSendMessage @ 0x1C0074E60 (xxxSendMessage.c)
 *     _GetProp @ 0x1C007AFEC (_GetProp.c)
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     SetOrClrWF @ 0x1C00964B4 (SetOrClrWF.c)
 *     _MonitorFromWindow @ 0x1C00AFFA0 (_MonitorFromWindow.c)
 *     _GetClientRect @ 0x1C010B47C (_GetClientRect.c)
 *     GetMonitorMaxArea @ 0x1C01153F0 (GetMonitorMaxArea.c)
 */

__int64 __fastcall xxxInitSendValidateMinMaxInfoEx(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v7; // r8
  int v8; // edx
  __int128 *v9; // r15
  __int64 DesktopWindow; // rax
  __int64 v11; // r8
  __int64 v12; // r13
  int v13; // r12d
  int v14; // ebx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // rdx
  int v18; // eax
  __int64 Prop; // rax
  __int64 v20; // rax
  int v21; // r14d
  int SystemMetricsForWindow; // eax
  int v23; // r12d
  __int64 v24; // rdx
  int v25; // eax
  int v26; // eax
  _DWORD *v27; // rdx
  __int64 v28; // rcx
  bool v29; // zf
  __int64 v30; // rax
  int v31; // ebx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 result; // rax
  bool v35; // cc
  char v36; // al
  int v37; // eax
  int v38; // ebx
  __int64 v39; // rax
  int v40; // r8d
  int v41; // ecx
  int v42; // edx
  __int64 v43; // rax
  int v44; // eax
  __int64 v45; // rax
  __int64 v46; // rax
  __int64 v47; // [rsp+28h] [rbp-48h]
  __int128 v48; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v49[3]; // [rsp+40h] [rbp-30h] BYREF
  _QWORD v50[3]; // [rsp+58h] [rbp-18h] BYREF
  _DWORD *v51; // [rsp+B0h] [rbp+40h] BYREF
  int WindowBordersWithDpiAwareness; // [rsp+B8h] [rbp+48h]
  int v53; // [rsp+C8h] [rbp+58h]

  v53 = a4;
  *(_DWORD *)a2 = GetSystemMetricsForWindow(a1, 57LL);
  *(_DWORD *)(a2 + 4) = GetSystemMetricsForWindow(a1, 58LL);
  v7 = *(_QWORD *)(GetDispInfo() + 88);
  v47 = v7;
  v8 = *(_DWORD *)(a1 + 352) & 0xF;
  if ( !v8
    && (v43 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
    && (*(_DWORD *)(*(_QWORD *)(v43 + 8) + 244LL) & 1) != 0 )
  {
    v9 = (__int128 *)(v7 + 44);
  }
  else if ( v8 != 1
         || (v39 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) == 0
         || (v9 = (__int128 *)(v7 + 60), (*(_DWORD *)(*(_QWORD *)(v39 + 8) + 244LL) & 1) == 0) )
  {
    v9 = (__int128 *)(v7 + 28);
  }
  DesktopWindow = GetDesktopWindow(a1);
  if ( v11 == DesktopWindow )
  {
    LODWORD(v51) = 1;
    v12 = MonitorFromWindow(a1, 33LL);
    v48 = *v9;
    if ( a3 )
      v12 = a3;
  }
  else
  {
    LODWORD(v51) = 0;
    v12 = 0LL;
    GetClientRect(v11, &v48);
  }
  WindowBordersWithDpiAwareness = GetWindowBordersWithDpiAwareness(a1);
  v13 = WindowBordersWithDpiAwareness;
  v14 = v13 * GetSystemMetricsForWindow(a1, 6LL);
  v15 = v13 * GetSystemMetricsForWindow(a1, 5LL);
  DWORD1(v48) -= v14;
  v16 = v15 + DWORD2(v48) - (v48 - v15);
  LODWORD(v48) = v48 - v15;
  v17 = (unsigned __int16)atomCheckpointProp;
  v18 = v14 + HIDWORD(v48) - DWORD1(v48);
  *(_DWORD *)(a2 + 8) = v16;
  *(_DWORD *)(a2 + 12) = v18;
  Prop = GetProp(a1, v17, 1LL);
  if ( Prop && (*(_DWORD *)(Prop + 32) & 0x10) != 0 )
    v20 = *(_QWORD *)(Prop + 24);
  else
    v20 = v48;
  *(_QWORD *)(a2 + 16) = v20;
  v21 = v13 * GetSystemMetricsForWindow(a1, 45LL);
  SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 46LL);
  v23 = WindowBordersWithDpiAwareness * SystemMetricsForWindow;
  if ( (*(_BYTE *)(a1 + 54) & 0xC0) != 0 && *(char *)(a1 + 48) >= 0 )
  {
    *(_DWORD *)(a2 + 24) = GetSystemMetricsForWindow(a1, 34LL);
    v24 = 35LL;
LABEL_12:
    v25 = GetSystemMetricsForWindow(a1, v24);
    goto LABEL_13;
  }
  if ( (int)GetSystemMetricsForWindow(a1, 45LL) > v21 )
    v44 = GetSystemMetricsForWindow(a1, 45LL);
  else
    v44 = v21;
  *(_DWORD *)(a2 + 24) = v44;
  if ( (int)GetSystemMetricsForWindow(a1, 46LL) > v23 )
  {
    v24 = 46LL;
    goto LABEL_12;
  }
  v25 = v23;
LABEL_13:
  *(_DWORD *)(a2 + 28) = v25;
  *(_DWORD *)(a2 + 32) = GetSystemMetricsForWindow(a1, 59LL);
  *(_DWORD *)(a2 + 36) = GetSystemMetricsForWindow(a1, 60LL);
  v49[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v49;
  v49[1] = v12;
  if ( v12 )
    ++*(_DWORD *)(v12 + 8);
  v50[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v50;
  v50[1] = v47;
  ++*(_DWORD *)(v47 + 8);
  if ( !v53 )
    xxxSendMessage(a1, 36LL, 0LL, a2);
  *(_DWORD *)a2 = GetSystemMetricsForWindow(a1, 57LL);
  v26 = GetSystemMetricsForWindow(a1, 58LL);
  v29 = (_DWORD)v51 == 0;
  *(_DWORD *)(a2 + 4) = v26;
  if ( !v29 )
  {
    GetMonitorMaxArea(a1, v12, &v51);
    if ( *(_DWORD *)(a2 + 8) < *((_DWORD *)v9 + 2) - *(_DWORD *)v9
      || *(_DWORD *)(a2 + 12) < *((_DWORD *)v9 + 3) - *((_DWORD *)v9 + 1) )
    {
      SetOrClrWF(0LL, a1, 832LL, 1LL);
      v27 = v51;
    }
    else
    {
      SetOrClrWF(1LL, a1, 832LL, 1LL);
      v30 = GetProp(a1, (unsigned __int16)atomCheckpointProp, 1LL);
      if ( v30 )
      {
        v40 = *(_DWORD *)(v30 + 32);
        if ( ((*(_BYTE *)(a1 + 54) >> 2) & ((v40 & 0x10) != 0)) != 0 )
        {
          v41 = *(_DWORD *)(a2 + 16);
          v42 = v48;
          if ( v41 != (_DWORD)v48 && *(_DWORD *)(v30 + 24) == v41 )
          {
            *(_DWORD *)(v30 + 32) = v40 & 0xFFFFFFEF;
            *(_DWORD *)(a2 + 20) = DWORD1(v48);
            *(_DWORD *)(a2 + 16) = v42;
          }
        }
      }
      v31 = *(_DWORD *)(a2 + 20);
      if ( (signed int)(GetSystemMetricsForWindow(a1, 4LL) + v31) > *((_DWORD *)v9 + 1)
        || v31 + *(_DWORD *)(a2 + 12) < *((_DWORD *)v9 + 3) )
      {
        v27 = v51;
      }
      else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 0
             && (v45 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v45 + 8) + 244LL) & 1) != 0 )
      {
        v27 = (_DWORD *)(v12 + 44);
      }
      else if ( (*(_DWORD *)(a1 + 352) & 0xF) == 1
             && (v46 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 408LL)) != 0
             && (*(_DWORD *)(*(_QWORD *)(v46 + 8) + 244LL) & 1) != 0 )
      {
        v27 = (_DWORD *)(v12 + 60);
      }
      else
      {
        v27 = (_DWORD *)(v12 + 28);
      }
      *(_DWORD *)(a2 + 8) += *(_DWORD *)v9 + v27[2] - *((_DWORD *)v9 + 2) - *v27;
      v28 = (unsigned int)(*((_DWORD *)v9 + 1) + v27[3] - v27[1] - *((_DWORD *)v9 + 3));
      *(_DWORD *)(a2 + 12) += v28;
    }
    *(_DWORD *)(a2 + 16) += *v27;
    *(_DWORD *)(a2 + 20) += v27[1];
  }
  ThreadUnlock1(v28, v27);
  result = ThreadUnlock1(v33, v32);
  if ( (*(_BYTE *)(a1 + 40) & 8) != 0 )
  {
    v23 = GetSystemMetricsForWindow(a1, 35LL);
    if ( *(char *)(a1 + 48) < 0 )
    {
      if ( (*(_BYTE *)(a1 + 54) & 8) != 0 )
        v21 += GetSystemMetricsForWindow(a1, 52LL);
      result = GetSystemMetricsForWindow(a1, 45LL);
    }
    else
    {
      v36 = *(_BYTE *)(a1 + 54);
      if ( (v36 & 8) != 0 )
      {
        if ( (v36 & 3) != 0 )
        {
          v37 = GetSystemMetricsForWindow(a1, 30LL);
          v21 += v37 + 2 * v37;
        }
        else if ( (*(_BYTE *)(a1 + 49) & 4) != 0 )
        {
          v21 += 2 * GetSystemMetricsForWindow(a1, 30LL);
        }
        if ( (unsigned int)HasCaptionIcon(a1) )
          v21 += GetSystemMetricsForWindow(a1, 31LL);
      }
      v38 = GetSystemMetricsForWindow(a1, 45LL);
      result = (unsigned int)(v38 + 2 * *(_DWORD *)(GetDPIMetrics() + 72));
    }
    v21 += 2 * result;
  }
  if ( *(_DWORD *)(a2 + 24) > v21 )
    v21 = *(_DWORD *)(a2 + 24);
  v35 = *(_DWORD *)(a2 + 28) <= v23;
  *(_DWORD *)(a2 + 24) = v21;
  if ( !v35 )
    v23 = *(_DWORD *)(a2 + 28);
  *(_DWORD *)(a2 + 28) = v23;
  return result;
}
