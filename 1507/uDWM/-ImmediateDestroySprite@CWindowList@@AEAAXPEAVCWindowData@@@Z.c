/*
 * XREFs of ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002EABC
 * Callers:
 *     ?UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z @ 0x18001C2A0 (-UpdateSceneImpl@CDesktopManager@@AEAAJPEAVCVisual@@@Z.c)
 *     ?DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002EDB0 (-DestroySprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18002F410 (-CreateSprite@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ??1CWindowList@@UEAA@XZ @ 0x180076E54 (--1CWindowList@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@?$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z @ 0x1800066D0 (-Remove@-$DynArray@PEAVCWindowData@@$0A@@@QEAAHAEBQEAVCWindowData@@@Z.c)
 *     ?Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z @ 0x180014F60 (-Remove@VisualCollection@@QEAAJPEAVCVisual@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800176E4 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x180018D24 (-OnVisibilityUpdated@CWindowData@@QEAAJXZ.c)
 *     ?GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z @ 0x18002988C (-GetShellWindowForDesktop@CWindowList@@QEAAPEAUHWND__@@_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x180029B3C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180029C10 (-CheckForMaximizedChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z @ 0x180029D28 (-UpdateDesktopWindowReplacement@CWindowList@@AEAAJ_K@Z.c)
 *     ?OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002CF60 (-OnGDISurfaceChange@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002E0BC (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18002E510 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 */

void __fastcall CWindowList::ImmediateDestroySprite(CWindowList *this, struct CWindowData *a2)
{
  struct CWindowData *v4; // rcx
  struct CWindowData **v5; // rax
  bool v6; // si
  __int64 v7; // rax
  char v8; // bp
  char v9; // bp
  struct CVisual *v10; // rsi
  struct CVisual *RootVisualForDesktop; // rax
  struct CVisual *v12; // rsi
  struct CVisual *v13; // rax
  CBaseObject *v14; // rcx
  struct CWindowData *Buffer; // [rsp+38h] [rbp+10h] BYREF

  Buffer = a2;
  DynArray<CWindowData *,0>::Remove((__int64 *)this + 31, (__int64 *)&Buffer);
  v4 = *(struct CWindowData **)a2;
  v5 = (struct CWindowData **)*((_QWORD *)a2 + 1);
  if ( *(struct CWindowData **)(*(_QWORD *)a2 + 8LL) != a2 || *v5 != a2 )
    __fastfail(3u);
  *v5 = v4;
  *((_QWORD *)v4 + 1) = v5;
  *((_QWORD *)a2 + 1) = a2;
  *(_QWORD *)a2 = a2;
  v6 = (*((_BYTE *)a2 + 552) & 4) != 0;
  if ( (*((_BYTE *)a2 + 552) & 4) != 0 )
  {
    Buffer = a2;
    RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 280), &Buffer);
    *((_BYTE *)a2 + 552) &= ~4u;
  }
  v7 = *((_QWORD *)a2 + 46);
  if ( v7 )
    *(_BYTE *)(v7 + 264) &= ~0x80u;
  *((_QWORD *)a2 + 4) = 0LL;
  v8 = *((_BYTE *)a2 + 552);
  *((_BYTE *)a2 + 552) = v8 & 0xFE;
  v9 = v8 & 1;
  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 19) )
  {
    CWindowList::CheckForMaximizedChange(this, a2);
    if ( v9 )
    {
      if ( *((_DWORD *)a2 + 28) == 1 || !v6 )
        CWindowList::ShowHide(this, a2, 1);
    }
    else
    {
      CWindowData::OnVisibilityUpdated((CWindowData **)a2);
    }
  }
  v10 = (struct CVisual *)*((_QWORD *)a2 + 47);
  if ( v10 )
  {
    RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CVisual *)((char *)RootVisualForDesktop + 32), v10);
  }
  v12 = (struct CVisual *)*((_QWORD *)a2 + 46);
  if ( v12 )
  {
    v13 = CWindowList::GetRootVisualForDesktop(this, *((_QWORD *)a2 + 15));
    VisualCollection::Remove((struct CVisual *)((char *)v13 + 32), v12);
  }
  v14 = (CBaseObject *)*((_QWORD *)a2 + 44);
  if ( v14 )
  {
    CBaseObject::Release(v14);
    *((_QWORD *)a2 + 44) = 0LL;
  }
  CWindowList::OnGDISurfaceChange(v14, a2);
  if ( *((HWND *)a2 + 5) == CWindowList::GetShellWindowForDesktop(this, *((_QWORD *)a2 + 15)) )
    CWindowList::UpdateDesktopWindowReplacement(this, *((_QWORD *)a2 + 15));
  if ( !*((_QWORD *)a2 + 3) )
    CWindowList::ImmediateDestroyWindow(this, a2);
}
