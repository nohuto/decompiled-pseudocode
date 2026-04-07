/*
 * XREFs of ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180073444
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180033768 (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 * Callees:
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x18002AA44 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ?Grow@?$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z @ 0x18002AA90 (-Grow@-$DynArrayImpl@$0A@@@IEAAJIIHPEAPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z @ 0x18006E994 (-OnWindowTitleChange@CLivePreview@@QEAAXPEBVCWindowData@@@Z.c)
 *     ?_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV?$DynArray@PEAVCWindowData@@$0A@@@@Z @ 0x1800739D8 (-_CollectExcludedImmersiveWindows@CLivePreview@@AEAAJAEAV-$DynArray@PEAVCWindowData@@$0A@@@@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800740F8 (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x18007487C (-_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowS.c)
 *     ?_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV?$DynArray@PEAVCWindowData@@$0A@@@_N@Z @ 0x180074BE0 (-_StartAnimateOpaqueVisuals@CLivePreview@@AEAAJAEBV-$DynArray@PEAVCWindowData@@$0A@@@_N@Z.c)
 *     ?_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ @ 0x180074E5C (-_UpdateAddedImmersiveBackground@CLivePreview@@AEAAJXZ.c)
 *     ?UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z @ 0x18007EF48 (-UpdateTitle@CTopLevelWindow@@QEAAJPEAG@Z.c)
 *     ?GetMDIOwner@CWindowData@@QEAAPEAV1@XZ @ 0x180080C90 (-GetMDIOwner@CWindowData@@QEAAPEAV1@XZ.c)
 */

__int64 __fastcall CLivePreview::_AnimateOpaqueVisuals(CLivePreview *this, struct CWindowData *a2)
{
  bool v2; // zf
  bool v3; // r13
  unsigned int v5; // r14d
  int v6; // eax
  int v7; // ebx
  struct CWindowData **v8; // rcx
  struct CWindowData *v9; // xmm0_8
  __int64 v10; // rax
  int v11; // eax
  int updated; // eax
  __int64 v13; // r12
  __int64 v14; // r15
  __int64 v15; // rdx
  CTopLevelWindow *v16; // rbx
  __int64 v17; // r9
  struct CWindowData *MDIOwner; // r13
  int v19; // eax
  CTopLevelWindow *LivePreviewWindow; // rax
  int v21; // eax
  int started; // eax
  int v24; // [rsp+30h] [rbp-48h]
  BOOL v25; // [rsp+40h] [rbp-38h]
  __int128 v26; // [rsp+48h] [rbp-30h] BYREF
  int v27; // [rsp+58h] [rbp-20h]
  int v28; // [rsp+5Ch] [rbp-1Ch]
  unsigned int v29; // [rsp+60h] [rbp-18h]
  bool v30; // [rsp+C0h] [rbp+48h]
  struct CWindowData *v31; // [rsp+C8h] [rbp+50h] BYREF
  struct CWindowData **v32; // [rsp+D0h] [rbp+58h] BYREF
  char v33; // [rsp+D8h] [rbp+60h]

  v31 = a2;
  v2 = *((_DWORD *)this + 86) == 0;
  v33 = 1;
  v3 = v2;
  v27 = 0;
  v5 = 0;
  v28 = 0;
  v30 = v2;
  v29 = 0;
  v26 = 0LL;
  if ( !a2 )
    goto LABEL_7;
  v32 = &v31;
  v6 = DynArrayImpl<0>::Grow((__int64)&v26, 8u, 1, 0, (unsigned __int64 *)&v32);
  v7 = v6;
  if ( v6 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v6, 0xC0u);
    v5 = v29;
  }
  else
  {
    v8 = (struct CWindowData **)(v26 + 8 * v29);
    v5 = v29 + 1;
    v9 = *v32;
    ++v29;
    *v8 = v9;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x2D9u);
  }
  else
  {
LABEL_7:
    v10 = *((_QWORD *)this + 65);
    if ( (!v10 || *(_DWORD *)(v10 + 112) == 1) && *((_DWORD *)this + 136) != 4 )
    {
      v11 = CLivePreview::_CollectExcludedImmersiveWindows(this, &v26);
      v7 = v11;
      if ( v11 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v11, 0x2DEu);
        goto LABEL_40;
      }
      v5 = v29;
    }
    updated = CLivePreview::_UpdateAddedImmersiveBackground(this);
    v7 = updated;
    if ( updated >= 0 )
    {
      v13 = 0LL;
      if ( v5 )
      {
        while ( 1 )
        {
          LOBYTE(v32) = 0;
          v14 = *(_QWORD *)(v26 + 8 * v13);
          v25 = !v3
             || (*(_BYTE *)(v14 + 580) & 1) != 0
             || *(_DWORD *)(v14 + 112) != 1 && *(_BYTE *)(*((_QWORD *)this + 67) + 56LL);
          v15 = (unsigned int)(*((_DWORD *)this + 86) - 1);
          if ( (int)v15 < 0 )
          {
LABEL_25:
            v33 = 0;
          }
          else
          {
            while ( *(_QWORD *)(*((_QWORD *)this + 40) + 48 * v15 + 24) != *(_QWORD *)(v14 + 40) )
            {
              v15 = (unsigned int)(v15 - 1);
              if ( (int)v15 < 0 )
                goto LABEL_25;
            }
            LOBYTE(v32) = 1;
          }
          v16 = 0LL;
          if ( (*(_BYTE *)(v14 + 577) & 1) != 0 )
          {
            MDIOwner = CWindowData::GetMDIOwner((CWindowData *)v14);
            if ( MDIOwner )
            {
              if ( !(_BYTE)v32 )
              {
                LOBYTE(v17) = 1;
                LOBYTE(v24) = 1;
                v19 = CLivePreview::_SetupWindowPreview(this, MDIOwner, *((_QWORD *)MDIOwner + 5), v17, v25, 0LL, v24);
                v7 = v19;
                if ( v19 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0x307u);
                  goto LABEL_40;
                }
              }
              LivePreviewWindow = CLivePreview::_FindLivePreviewWindow(this, *((HWND *)MDIOwner + 5));
              v16 = LivePreviewWindow;
              if ( LivePreviewWindow )
                CTopLevelWindow::UpdateTitle(LivePreviewWindow, *(unsigned __int16 **)(v14 + 16));
            }
            v3 = v30;
          }
          if ( !(_BYTE)v32 )
          {
            LOBYTE(v24) = v16 == 0LL;
            v21 = CLivePreview::_SetupWindowPreview(this, v14, *(_QWORD *)(v14 + 40), 0LL, v25, v16, v24);
            v7 = v21;
            if ( v21 < 0 )
              break;
          }
          CLivePreview::OnWindowTitleChange(this, (unsigned __int16 **)v14);
          v13 = (unsigned int)(v13 + 1);
          if ( (unsigned int)v13 >= v5 )
            goto LABEL_38;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v21, 0x315u);
      }
      else
      {
LABEL_38:
        started = CLivePreview::_StartAnimateOpaqueVisuals(this);
        v7 = started;
        if ( started < 0 )
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, started, 0x31Bu);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, updated, 0x2E1u);
    }
  }
LABEL_40:
  DynArrayImpl<0>::~DynArrayImpl<0>((__int64)&v26);
  return (unsigned int)v7;
}
