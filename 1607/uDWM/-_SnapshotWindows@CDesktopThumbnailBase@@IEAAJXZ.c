/*
 * XREFs of ?_SnapshotWindows@CDesktopThumbnailBase@@IEAAJXZ @ 0x18009805C
 * Callers:
 *     ?UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ @ 0x1800978B8 (-UpdateWindowClones@CDesktopThumbnailBase@@QEAAJXZ.c)
 * Callees:
 *     ?ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z @ 0x1800053D4 (-ShouldCloneWindow@CTransitionVisualController@@SA_NPEAUHWND__@@@Z.c)
 *     ?GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z @ 0x180030360 (-GetWindowListForDesktop@CWindowList@@QEAAPEAU_LIST_ENTRY@@_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 *     ?_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x180097C9C (-_AddWindow@CDesktopThumbnailBase@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 */

__int64 __fastcall CDesktopThumbnailBase::_SnapshotWindows(CDesktopThumbnailBase *this)
{
  __int64 v1; // rdx
  unsigned int v2; // edi
  struct _LIST_ENTRY *WindowListForDesktop; // r14
  struct _LIST_ENTRY *Flink; // rbx
  unsigned __int8 v6; // cl
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // eax

  v1 = *((_QWORD *)this + 37);
  v2 = 0;
  if ( v1 != -1 )
  {
    WindowListForDesktop = CWindowList::GetWindowListForDesktop(
                             *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 165),
                             v1);
    Flink = WindowListForDesktop->Flink;
    if ( WindowListForDesktop->Flink != WindowListForDesktop )
    {
      while ( 1 )
      {
        if ( Flink )
        {
          if ( (*(unsigned __int8 (__fastcall **)(CDesktopThumbnailBase *, _QWORD))(*(_QWORD *)this + 200LL))(
                 this,
                 LODWORD(Flink[7].Flink)) )
          {
            if ( Flink[24].Flink )
            {
              v6 = (unsigned __int8)Flink[36].Flink;
              if ( (v6 & 1) != 0 && ((v6 | BYTE4(Flink[36].Flink)) & 4) == 0 )
              {
                if ( Flink[2].Blink )
                {
                  if ( (*(unsigned __int8 (__fastcall **)(CDesktopThumbnailBase *, struct _LIST_ENTRY *))(*(_QWORD *)this + 192LL))(
                         this,
                         Flink) )
                  {
                    if ( CTransitionVisualController::ShouldCloneWindow((HWND)Flink[2].Blink) )
                    {
                      v9 = CDesktopThumbnailBase::_AddWindow(this, (struct CTopLevelWindow *)Flink[24].Flink, v7, v8);
                      v2 = v9;
                      if ( v9 < 0 )
                        break;
                    }
                  }
                }
              }
            }
          }
        }
        Flink = Flink->Flink;
        if ( Flink == WindowListForDesktop )
          return v2;
      }
      MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v9, 0x60u);
    }
  }
  return v2;
}
