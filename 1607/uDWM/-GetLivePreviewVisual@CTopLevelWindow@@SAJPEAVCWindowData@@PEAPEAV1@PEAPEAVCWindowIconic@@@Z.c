/*
 * XREFs of ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18007E4E8
 * Callers:
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x18007487C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 * Callees:
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x18001F7A4 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180020E2C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z @ 0x180039E58 (-Create@CWindowIconic@@SAJPEAVCWindowData@@PEAPEAV1@_N@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z @ 0x180080F5C (-GetWindowRestoreRect@CWindowData@@QEAAJPEAUtagRECT@@_N@Z.c)
 */

__int64 __fastcall CTopLevelWindow::GetLivePreviewVisual(
        struct CWindowData *a1,
        struct CTopLevelWindow **a2,
        struct CWindowIconic **a3)
{
  unsigned int v3; // ebx
  CTopLevelWindow *v6; // r9
  __int64 v7; // rax
  __int64 v8; // rdi
  int WindowRestoreRect; // eax
  signed int LastError; // eax
  int v11; // r9d
  __int64 v12; // rcx
  unsigned int v14; // [rsp+20h] [rbp-58h]
  __int128 v15; // [rsp+30h] [rbp-48h]
  struct tagRECT rc; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  *a2 = 0LL;
  *a3 = 0LL;
  v6 = (CTopLevelWindow *)*((_QWORD *)a1 + 48);
  if ( (*((_BYTE *)a1 + 577) & 1) != 0 )
    goto LABEL_18;
  v7 = *((_QWORD *)a1 + 51);
  if ( !v7 )
  {
    if ( v6 && (*((_DWORD *)a1 + 25) & 0x20000000) == 0 )
    {
      WindowRestoreRect = CTopLevelWindow::CloneVisualTreeForLivePreview(v6, 0, 0, (__int64)v6, a2);
      v3 = WindowRestoreRect;
      if ( WindowRestoreRect < 0 )
      {
        v14 = 4929;
        goto LABEL_20;
      }
      return v3;
    }
LABEL_18:
    WindowRestoreRect = CWindowIconic::Create(a1, a3, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v14 = 4908;
      goto LABEL_20;
    }
    *a2 = (struct CTopLevelWindow *)*((_QWORD *)*a3 + 11);
    v12 = *((_QWORD *)*a3 + 11);
    if ( v12 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    return v3;
  }
  v8 = *(_QWORD *)(v7 + 24);
  v15 = *(_OWORD *)(v8 + 660);
  rc = *(struct tagRECT *)(*(_QWORD *)(v7 + 32) + 48LL);
  if ( (*((_DWORD *)a1 + 25) & 0x20000000) != 0 )
  {
    WindowRestoreRect = CWindowData::GetWindowRestoreRect(a1, &rc, 1);
    v3 = WindowRestoreRect;
    if ( WindowRestoreRect < 0 )
    {
      v14 = 4919;
LABEL_20:
      v11 = WindowRestoreRect;
LABEL_21:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, v14);
      return v3;
    }
  }
  SetLastError(0);
  if ( !OffsetRect(&rc, -(int)v15, -DWORD2(v15)) )
  {
    LastError = GetLastError();
    v3 = LastError;
    if ( LastError > 0 )
      v3 = (unsigned __int16)LastError | 0x80070000;
    v14 = 4922;
    if ( (v3 & 0x80000000) == 0 )
      v3 = -2003304445;
    v11 = v3;
    goto LABEL_21;
  }
  CVisual::SetOffset((struct tagPOINT *)v8, (const struct tagPOINT *)&rc);
  *a2 = (struct CTopLevelWindow *)v8;
  _InterlockedIncrement((volatile signed __int32 *)(v8 + 8));
  return v3;
}
