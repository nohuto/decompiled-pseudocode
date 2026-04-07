/*
 * XREFs of ?OnZOrderUpdated@CTopLevelWindow3D@@QEAAJ_N@Z @ 0x18002A28C
 * Callers:
 *     ?StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z @ 0x180028544 (-StartAnimation@CTopLevelWindow3D@@AEAAJW4WindowAnimationType@1@@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ @ 0x18002A0B0 (-OnWindowStyleUpdated@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z @ 0x18002D050 (-ZOrder@CWindowList@@UEAAJPEAUIDwmWindow@@0@Z.c)
 * Callees:
 *     ?InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z @ 0x18001CE70 (-InsertRelative@VisualCollection@@QEAAJPEAVCVisual@@0_N1@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180030424 (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CTopLevelWindow3D::OnZOrderUpdated(CTopLevelWindow3D *this, char a2)
{
  unsigned int v2; // ebx
  int v4; // ecx
  __int64 v6; // rdx
  struct CVisual *RootVisualForDesktop; // rax
  int inserted; // eax

  v2 = 0;
  if ( a2 || (v4 = *((_DWORD *)this + 88), (unsigned int)(v4 - 1) <= 1) || (unsigned int)(v4 - 4) <= 5 )
  {
    v6 = *((_QWORD *)this + 39);
    if ( *(_QWORD *)(*(_QWORD *)(v6 + 384) + 24LL) )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(
                               *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                               *(_QWORD *)(v6 + 120));
      inserted = VisualCollection::InsertRelative(
                   (struct CVisual *)((char *)RootVisualForDesktop + 32),
                   this,
                   *(struct CVisual **)(*((_QWORD *)this + 39) + 384LL),
                   1,
                   1);
      v2 = inserted;
      if ( inserted < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, inserted, 0x1ABu);
    }
  }
  return v2;
}
