/*
 * XREFs of ?UpdateThumbnailsForNewWindow@CWindowList@@AEAAJPEAVCWindowData@@@Z @ 0x18002D7A8
 * Callers:
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800313BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z @ 0x1800189B0 (-SetDirtyFlags@CThumbnailVisual@@UEAAXK@Z.c)
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180022D90 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ @ 0x18003FFD0 (-EnsureThumbnailVisual@CDCompThumbnailData@@UEAAJXZ.c)
 *     ?OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z @ 0x180041108 (-OnThumbnailAdded@CTopLevelWindow@@QEAAJPEAVCVisual@@@Z.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CWindowList::UpdateThumbnailsForNewWindow(CWindowList *this, struct CWindowData *a2)
{
  unsigned int v2; // ebx
  __int64 v3; // rsi
  __int64 i; // rsi
  __int64 v7; // r14
  __int64 (__fastcall *v8)(CDCompThumbnailData *__hidden); // rbx
  int v9; // eax
  CVisual *v10; // rcx
  CThumbnailVisual *v11; // rcx
  int v12; // eax

  v2 = 0;
  v3 = 0LL;
  if ( *((_DWORD *)a2 + 120) )
  {
    while ( 1 )
    {
      v7 = *(_QWORD *)(*((_QWORD *)a2 + 57) + 8 * v3);
      v8 = *(__int64 (__fastcall **)(CDCompThumbnailData *__hidden))(*(_QWORD *)v7 + 8LL);
      v9 = v8 == CDCompThumbnailData::EnsureThumbnailVisual
         ? CDCompThumbnailData::EnsureThumbnailVisual(*(CDCompThumbnailData **)(*((_QWORD *)a2 + 57) + 8 * v3))
         : v8(*(CDCompThumbnailData **)(*((_QWORD *)a2 + 57) + 8 * v3));
      v2 = v9;
      if ( v9 < 0 )
        break;
      v10 = (CVisual *)*((_QWORD *)a2 + 48);
      if ( *(_BYTE *)(v7 + 34) )
      {
        CVisual::SetDirtyFlags(v10, 0x8000000);
      }
      else
      {
        v12 = CTopLevelWindow::OnThumbnailAdded(v10, *(struct CVisual **)(v7 + 88));
        v2 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v12, 0x1548u);
          return v2;
        }
      }
      v3 = (unsigned int)(v3 + 1);
      if ( (unsigned int)v3 >= *((_DWORD *)a2 + 120) )
        goto LABEL_2;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x153Du);
  }
  else
  {
LABEL_2:
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)a2 + 128); i = (unsigned int)(i + 1) )
    {
      v11 = *(CThumbnailVisual **)(*(_QWORD *)(*((_QWORD *)a2 + 61) + 8 * i) + 88LL);
      if ( v11 )
        CThumbnailVisual::SetDirtyFlags(v11, 0x2000);
    }
  }
  return v2;
}
