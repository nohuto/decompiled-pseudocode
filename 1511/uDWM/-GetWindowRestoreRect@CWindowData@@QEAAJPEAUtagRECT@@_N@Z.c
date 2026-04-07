/*
 * XREFs of ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x18008071C
 * Callers:
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x180076780 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18007D8FC (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 *     ?GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z @ 0x180082378 (-GetWindowRectForLivePreview@CWindowIconic@@AEAAJPEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z @ 0x1800302CC (-GetPhysicalPtFromLogical@CWindowList@@QEAAXPEAVCWindowData@@AEAUtagRECT@@PEAH2@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     floor_0 @ 0x18004FF2A (floor_0.c)
 *     memset_0 @ 0x18004FF66 (memset_0.c)
 */

__int64 __fastcall CWindowData::GetWindowRestoreRect(CWindowData *this, struct tagRECT *a2, char a3)
{
  unsigned int v3; // edi
  CWindowList *v7; // rcx
  signed int LastError; // eax
  float v9; // xmm0_4
  float v10; // xmm2_4
  int v11; // eax
  int v12; // ebx
  double v13; // xmm0_8
  double v14; // xmm0_8
  HMONITOR v15; // rbx
  RECT rcWork; // xmm0
  __int64 v17; // rcx
  HMONITOR v18; // rax
  unsigned int v20; // [rsp+20h] [rbp-49h]
  int v21; // [rsp+30h] [rbp-39h] BYREF
  int v22; // [rsp+34h] [rbp-35h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+38h] [rbp-31h] BYREF
  struct tagMONITORINFO mi; // [rsp+68h] [rbp-1h] BYREF

  v3 = 0;
  if ( (*((_DWORD *)this + 25) & 0x20000000) == 0 )
  {
    *a2 = *((struct tagRECT *)this + 3);
    return v3;
  }
  wndpl.length = 44;
  memset_0(&wndpl.flags, 0, 0x28uLL);
  SetLastError(0);
  if ( GetWindowPlacement(*((HWND *)this + 5), &wndpl) )
  {
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 43) - 1.0)) & _xmm);
    if ( v9 >= 0.0000011920929
      || (v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)this + 44) - 1.0)) & _xmm), v10 >= 0.0000011920929) )
    {
      CWindowList::GetPhysicalPtFromLogical(v7, this, &wndpl.rcNormalPosition, &v22, &v21);
      v11 = wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left;
      if ( wndpl.rcNormalPosition.right - wndpl.rcNormalPosition.left < 0 )
        v11 = 0;
      v12 = wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top;
      if ( wndpl.rcNormalPosition.bottom - wndpl.rcNormalPosition.top < 0 )
        v12 = 0;
      v13 = floor_0((float)((float)v11 * *((float *)this + 43)) + 0.5);
      wndpl.rcNormalPosition.left = v22 + (int)v13;
      v14 = floor_0((float)((float)v12 * *((float *)this + 44)) + 0.5);
      wndpl.rcNormalPosition.right = v21 + (int)v14;
    }
    SetLastError(0);
    v15 = MonitorFromRect(&wndpl.rcNormalPosition, 1u);
    if ( v15 )
    {
      if ( (wndpl.flags & 2) != 0 )
      {
        mi.cbSize = 40;
        SetLastError(0);
        if ( !GetMonitorInfoW(v15, &mi) )
        {
          LastError = GetLastError();
          if ( LastError > 0 )
            LastError = (unsigned __int16)LastError | 0x80070000;
          v20 = 8065;
          goto LABEL_23;
        }
        rcWork = mi.rcWork;
      }
      else
      {
        *a2 = wndpl.rcNormalPosition;
        if ( !a3 )
          return v3;
        v17 = *((_QWORD *)this + 50);
        if ( !v17 )
          return v3;
        v18 = MonitorFromRect((LPCRECT)(*(_QWORD *)(v17 + 32) + 48LL), 0);
        if ( !v18 || v18 != v15 )
          return v3;
        rcWork = *(RECT *)(*(_QWORD *)(*((_QWORD *)this + 50) + 32LL) + 48LL);
      }
      *a2 = rcWork;
      return v3;
    }
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v20 = 8059;
  }
  else
  {
    LastError = GetLastError();
    if ( LastError > 0 )
      LastError = (unsigned __int16)LastError | 0x80070000;
    v20 = 8030;
  }
LABEL_23:
  if ( LastError >= 0 )
    LastError = -2003304445;
  v3 = LastError;
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LastError, v20);
  return v3;
}
