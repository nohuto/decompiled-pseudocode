/*
 * XREFs of ?_ClearAnimationOpaqueVisuals@CLivePreview@@AEAAJXZ @ 0x180068D34
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z @ 0x180030B1C (-Activate@CLivePreview@@QEAAJ_NPEAUHWND__@@1W4LIVEPREVIEW_TRIGGER@@I0PEAUtagRECT@@@Z.c)
 *     ??1CLivePreview@@MEAA@XZ @ 0x180067FC8 (--1CLivePreview@@MEAA@XZ.c)
 *     ?ValidateVisual@CLivePreview@@UEAAJXZ @ 0x180068310 (-ValidateVisual@CLivePreview@@UEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?RemoveAll@VisualCollection@@QEAAJXZ @ 0x1800150D0 (-RemoveAll@VisualCollection@@QEAAJXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001CF70 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ @ 0x180025000 (-StopLivePreviewAnimation@CTopLevelWindow@@QEAAXXZ.c)
 *     ?ShrinkToSize@?$DynArrayImpl@$0A@@@IEAAXI@Z @ 0x1800282D0 (-ShrinkToSize@-$DynArrayImpl@$0A@@@IEAAXI@Z.c)
 */

__int64 __fastcall CLivePreview::_ClearAnimationOpaqueVisuals(CLivePreview *this)
{
  unsigned int v1; // ebx
  int v2; // eax
  __int64 v4; // r14
  __int64 v5; // rsi
  CVisual *v6; // rbx
  int v7; // eax
  CBaseObject *v8; // rcx
  __int64 v9; // rcx
  struct CVisual *v10; // rdx
  __int64 v11; // rcx

  v1 = 0;
  v2 = *((_DWORD *)this + 86) - 1;
  v4 = v2;
  if ( v2 < 0 )
  {
LABEL_7:
    *((_DWORD *)this + 86) = 0;
    DynArrayImpl<0>::ShrinkToSize((__int64)this + 320, 0x30u);
    v9 = *((_QWORD *)this + 61);
    if ( v9 )
    {
      VisualCollection::RemoveAll((VisualCollection *)(v9 + 32));
      v10 = (struct CVisual *)*((_QWORD *)this + 61);
      v11 = *((_QWORD *)v10 + 3);
      if ( v11 )
        VisualCollection::Remove((VisualCollection *)(v11 + 32), v10);
      *((_DWORD *)this + 102) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 384, 0x10u);
      *((_DWORD *)this + 110) = 0;
      DynArrayImpl<0>::ShrinkToSize((__int64)this + 416, 0x20u);
    }
  }
  else
  {
    v5 = 48LL * v2;
    while ( 1 )
    {
      v6 = *(CVisual **)(v5 + *((_QWORD *)this + 40));
      CVisual::RenderRecursive(v6);
      CTopLevelWindow::StopLivePreviewAnimation(v6);
      v7 = VisualCollection::Remove((VisualCollection *)(*((_QWORD *)v6 + 3) + 32LL), v6);
      v1 = v7;
      if ( v7 < 0 )
        break;
      v8 = *(CBaseObject **)(*((_QWORD *)this + 40) + v5 + 16);
      if ( v8 )
      {
        CBaseObject::Release(v8);
        *(_QWORD *)(*((_QWORD *)this + 40) + v5 + 16) = 0LL;
      }
      v5 -= 48LL;
      if ( --v4 < 0 )
        goto LABEL_7;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v7, 0x89u);
  }
  return v1;
}
