/*
 * XREFs of ?RecloneWindow@CDesktopThumbnailBase@@QEAAXPEAVCWindowData@@@Z @ 0x1800974F0
 * Callers:
 *     ?ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002E4F0 (-ChildContentChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x18001CD40 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?RenderRecursive@CVisual@@QEAAJXZ @ 0x18001F650 (-RenderRecursive@CVisual@@QEAAJXZ.c)
 *     ?CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z @ 0x180020E2C (-CloneVisualTreeForLivePreview@CTopLevelWindow@@QEAAJ_N00PEAPEAV1@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z @ 0x180098020 (-_GetIndex@CDesktopThumbnailBase@@IEAAHPEBVCTopLevelWindow@@@Z.c)
 */

void __fastcall CDesktopThumbnailBase::RecloneWindow(CDesktopThumbnailBase *this, struct CWindowData *a2)
{
  const struct CTopLevelWindow *v3; // rdx
  int Index; // eax
  CVisual *v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // r9
  int v9; // eax
  struct CVisual *v10; // rcx
  __int64 v11; // rsi
  struct CVisual *v12; // rdi
  __int64 v13; // rax
  struct CVisual *v14; // [rsp+48h] [rbp+10h] BYREF

  v14 = 0LL;
  v3 = (const struct CTopLevelWindow *)*((_QWORD *)a2 + 48);
  if ( v3 )
  {
    Index = CDesktopThumbnailBase::_GetIndex(this, v3);
    v7 = (unsigned int)Index;
    if ( Index >= 0 )
    {
      CVisual::RenderRecursive(v6);
      v9 = CTopLevelWindow::CloneVisualTreeForLivePreview(*((CTopLevelWindow **)a2 + 48), 0, 0, v8, &v14);
      if ( v9 >= 0 )
      {
        v11 = v7;
        v12 = v14;
        v11 *= 2LL;
        VisualCollection::InsertRelative(
          (CDesktopThumbnailBase *)((char *)this + 32),
          v14,
          *(struct CVisual **)(*((_QWORD *)this + 33) + 8 * v11 + 8),
          0,
          1);
        VisualCollection::Remove(
          (CDesktopThumbnailBase *)((char *)this + 32),
          *(struct CVisual **)(*((_QWORD *)this + 33) + 8 * v11 + 8));
        v13 = *((_QWORD *)this + 33);
        v10 = *(struct CVisual **)(v13 + 8 * v11 + 8);
        *(_QWORD *)(v13 + 8 * v11 + 8) = v12;
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0xA1u);
        v10 = v14;
      }
      if ( v10 )
        CBaseObject::Release(v10);
    }
  }
}
