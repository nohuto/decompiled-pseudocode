/*
 * XREFs of ?_SetupWindowPreview@CLivePreview@@AEAAJPEAVCWindowData@@PEAUHWND__@@_NW4Enum@LivePreviewWindowState@@PEAVCVisual@@2@Z @ 0x18007487C
 * Callers:
 *     ?_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z @ 0x180073444 (-_AnimateOpaqueVisuals@CLivePreview@@AEAAJPEAVCWindowData@@@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x1800747BC (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x18002AD08 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z @ 0x1800740F8 (-_FindLivePreviewWindow@CLivePreview@@AEAAPEAVCTopLevelWindow@@PEAUHWND__@@@Z.c)
 *     ?_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowState@@@Z @ 0x1800747BC (-_SetupOwneePreview@CLivePreview@@AEAAJPEBVCWindowData@@PEAUHWND__@@W4Enum@LivePreviewWindowStat.c)
 *     ?GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z @ 0x18007E4E8 (-GetLivePreviewVisual@CTopLevelWindow@@SAJPEAVCWindowData@@PEAPEAV1@PEAPEAVCWindowIconic@@@Z.c)
 */

__int64 __fastcall CLivePreview::_SetupWindowPreview(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char a4,
        unsigned int a5,
        struct CVisual *a6,
        char a7)
{
  unsigned int v7; // ebx
  __int64 v8; // rsi
  volatile signed __int32 *LivePreviewWindow; // rax
  struct CVisual *v12; // r14
  int LivePreviewVisual; // eax
  CBaseObject *v14; // r12
  __int64 v15; // rax
  unsigned int v16; // edx
  int v17; // esi
  _OWORD *v18; // rcx
  int v19; // eax
  __int64 v20; // rcx
  VisualCollection *v21; // rcx
  unsigned int v23; // [rsp+20h] [rbp-50h]
  CBaseObject *v24; // [rsp+30h] [rbp-40h] BYREF
  CBaseObject *v25; // [rsp+38h] [rbp-38h] BYREF
  __int128 v26; // [rsp+40h] [rbp-30h] BYREF
  __int128 v27; // [rsp+50h] [rbp-20h]
  __int128 v28; // [rsp+60h] [rbp-10h]

  v7 = 0;
  v8 = a3;
  v24 = 0LL;
  v25 = 0LL;
  if ( a4 )
  {
    LivePreviewWindow = (volatile signed __int32 *)CLivePreview::_FindLivePreviewWindow(
                                                     (CLivePreview *)a1,
                                                     *(HWND *)(a2 + 40));
    v24 = (CBaseObject *)LivePreviewWindow;
    if ( LivePreviewWindow )
    {
      _InterlockedIncrement(LivePreviewWindow + 2);
      v12 = v24;
      goto LABEL_27;
    }
  }
  LivePreviewVisual = CTopLevelWindow::GetLivePreviewVisual((struct CWindowData *)a2, &v24, &v25);
  v12 = v24;
  v7 = LivePreviewVisual;
  v14 = v25;
  if ( LivePreviewVisual >= 0 )
  {
    *((_QWORD *)&v27 + 1) = *(_QWORD *)(a2 + 40);
    DWORD2(v28) = a5;
    v15 = *(unsigned int *)(a1 + 344);
    *(_QWORD *)&v26 = v24;
    *((_QWORD *)&v26 + 1) = a2;
    *(_QWORD *)&v27 = v25;
    v16 = v15 + 1;
    *(_QWORD *)&v28 = v8;
    if ( (int)v15 + 1 < (unsigned int)v15 )
    {
      v17 = -2147024362;
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024362, 0xB5u);
      v7 = -2147024362;
LABEL_13:
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v17, 0x19Fu);
      goto LABEL_25;
    }
    if ( v16 > *(_DWORD *)(a1 + 340) )
    {
      v19 = DynArrayImpl<0>::AddMultipleAndSet(a1 + 320, 0x30u, 1, &v26);
      v17 = v19;
      if ( v19 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v19, 0xC0u);
      v7 = v17;
      if ( v17 < 0 )
        goto LABEL_13;
      v8 = a3;
    }
    else
    {
      v18 = (_OWORD *)(*(_QWORD *)(a1 + 320) + 48 * v15);
      *v18 = v26;
      v18[1] = v27;
      v18[2] = v28;
      *(_DWORD *)(a1 + 344) = v16;
    }
    v20 = a1;
    if ( *(_DWORD *)(a2 + 112) != 1 )
      v20 = *(_QWORD *)(a1 + 488);
    v21 = (VisualCollection *)(v20 + 32);
    if ( a7 )
    {
      LivePreviewVisual = VisualCollection::InsertRelative(v21, v12, a6, 0, 1);
      v7 = LivePreviewVisual;
      if ( LivePreviewVisual < 0 )
      {
        v23 = 433;
        goto LABEL_24;
      }
    }
    else
    {
      LivePreviewVisual = VisualCollection::InsertRelative(v21, v12, a6, 1, 1);
      v7 = LivePreviewVisual;
      if ( LivePreviewVisual < 0 )
      {
        v23 = 437;
        goto LABEL_24;
      }
    }
    LivePreviewVisual = CLivePreview::_SetupOwneePreview(a1, a2, v8, a5);
    v7 = LivePreviewVisual;
    if ( LivePreviewVisual >= 0 )
      goto LABEL_27;
    v23 = 440;
    goto LABEL_24;
  }
  v23 = 401;
LABEL_24:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, LivePreviewVisual, v23);
LABEL_25:
  if ( v14 )
    CBaseObject::Release(v14);
LABEL_27:
  if ( v12 )
    CBaseObject::Release(v12);
  return v7;
}
