/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180068908
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180030B1C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x180028054 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180028384 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x1800677A4 (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x180068E6C (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x180069ABC (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x18006A2D8 (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x18006A63C (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x18006A878 (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x180076458 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x1800786D0 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this, struct CWindowData *a2)
{
  bool v2; // zf
  bool v3; // r13
  unsigned int v5; // r15d
  int v6; // eax
  int v7; // ebx
  __int64 v8; // rax
  int v9; // eax
  int updated; // eax
  __int64 v11; // r12
  __int64 v12; // r14
  __int64 v13; // rdx
  CTopLevelWindow *v14; // rbx
  __int64 v15; // r9
  struct CWindowData *MDIOwner; // r13
  int v17; // eax
  CTopLevelWindow *LivePreviewWindow; // rax
  int v19; // eax
  int started; // eax
  int v22; // [rsp+30h] [rbp-48h]
  BOOL v23; // [rsp+40h] [rbp-38h]
  __int128 v24; // [rsp+48h] [rbp-30h] BYREF
  int v25; // [rsp+58h] [rbp-20h]
  int v26; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v27; // [rsp+60h] [rbp-18h]
  bool v28; // [rsp+C0h] [rbp+48h]
  struct CWindowData *v29; // [rsp+C8h] [rbp+50h] BYREF
  char v30; // [rsp+D0h] [rbp+58h]
  char v31; // [rsp+D8h] [rbp+60h]

  v29 = a2;
  v2 = *((_DWORD *)this + 86) == 0;
  v31 = 1;
  v3 = v2;
  v25 = 0;
  v5 = 0;
  v26 = 0;
  v28 = v2;
  v27 = 0;
  v24 = 0LL;
  if ( a2 )
  {
    v6 = DynArrayImpl<0>::AddMultipleAndSet((__int64)&v24, 8u, 1, &v29);
    v7 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xC0u);
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x2DBu);
      goto LABEL_40;
    }
    v5 = v27;
  }
  v8 = *((_QWORD *)this + 65);
  if ( (!v8 || *(_DWORD *)(v8 + 112) == 1) && *((_DWORD *)this + 136) != 4 )
  {
    v9 = CLivePreview::_CollectExcludedImmersiveWindows(this, &v24);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x2E0u);
      goto LABEL_40;
    }
    v5 = v27;
  }
  updated = CLivePreview::_UpdateAddedImmersiveBackground(this);
  v7 = updated;
  if ( updated >= 0 )
  {
    v11 = 0LL;
    if ( v5 )
    {
      while ( 1 )
      {
        v30 = 0;
        v12 = *(_QWORD *)(v24 + 8 * v11);
        v23 = !v3
           || (*(_BYTE *)(v12 + 556) & 1) != 0
           || *(_DWORD *)(v12 + 112) != 1 && *(_BYTE *)(*((_QWORD *)this + 67) + 56LL);
        v13 = (unsigned int)(*((_DWORD *)this + 86) - 1);
        if ( (int)v13 < 0 )
        {
LABEL_25:
          v31 = 0;
        }
        else
        {
          while ( *(_QWORD *)(*((_QWORD *)this + 40) + 48 * v13 + 24) != *(_QWORD *)(v12 + 40) )
          {
            v13 = (unsigned int)(v13 - 1);
            if ( (int)v13 < 0 )
              goto LABEL_25;
          }
          v30 = 1;
        }
        v14 = 0LL;
        if ( (*(_BYTE *)(v12 + 553) & 1) != 0 )
        {
          MDIOwner = CWindowData::GetMDIOwner((CWindowData *)v12);
          if ( MDIOwner )
          {
            if ( !v30 )
            {
              LOBYTE(v15) = 1;
              LOBYTE(v22) = 1;
              v17 = CLivePreview::_SetupWindowPreview(this, MDIOwner, *((_QWORD *)MDIOwner + 5), v15, v23, 0LL, v22);
              v7 = v17;
              if ( v17 < 0 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x309u);
                goto LABEL_40;
              }
            }
            LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, *((HWND *)MDIOwner + 5));
            v14 = LivePreviewWindow;
            if ( LivePreviewWindow )
              CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v12 + 16));
          }
          v3 = v28;
        }
        if ( !v30 )
        {
          LOBYTE(v22) = v14 == 0LL;
          v19 = CLivePreview::_SetupWindowPreview(this, v12, *(_QWORD *)(v12 + 40), 0LL, v23, v14, v22);
          v7 = v19;
          if ( v19 < 0 )
            break;
        }
        CLivePreview::OnWindowTitleChange(this, (unsigned __int16 **)v12);
        v11 = (unsigned int)(v11 + 1);
        if ( (unsigned int)v11 >= v5 )
          goto LABEL_38;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x317u);
    }
    else
    {
LABEL_38:
      started = CLivePreview::_StartAnimateOpaqueVisuals(this);
      v7 = started;
      if ( started < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x31Du);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x2E3u);
  }
LABEL_40:
  DynArrayImpl<0>::~DynArrayImpl<0>((void **)&v24);
  return (unsigned int)v7;
}
