/*
 * XREFs of ?UnloadTheme@CDesktopManager@@AEAAXXZ @ 0x180046080
 * Callers:
 *     ?UpdateSettings@CDesktopManager@@QEAAJK@Z @ 0x18001DDE0 (-UpdateSettings@CDesktopManager@@QEAAJK@Z.c)
 *     ??1CDesktopManager@@EEAA@XZ @ 0x180075FA4 (--1CDesktopManager@@EEAA@XZ.c)
 * Callees:
 *     ?ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z @ 0x1800190F0 (-ReleaseContents@CBitmapSourceArray@@QEAAX_N@Z.c)
 *     ?CleanupThemeStatics@CTopLevelWindow@@SAXXZ @ 0x180046D20 (-CleanupThemeStatics@CTopLevelWindow@@SAXXZ.c)
 *     IsOpenThemeDataPresent @ 0x18004F7C0 (IsOpenThemeDataPresent.c)
 *     ??_GCWindowArrangementTransition@@QEAAPEAXI@Z @ 0x18007FA94 (--_GCWindowArrangementTransition@@QEAAPEAXI@Z.c)
 */

void __fastcall CDesktopManager::UnloadTheme(CDesktopManager *this)
{
  unsigned int v2; // edx
  __int64 v3; // rdi
  CWindowArrangementTransition *v4; // rcx
  void *v5; // rcx
  void *v6; // rcx
  void *v7; // rcx
  void *v8; // rcx
  void *v9; // rcx
  HMODULE v10; // rcx

  if ( (unsigned __int8)IsOpenThemeDataPresent() )
  {
    v3 = *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 165);
    if ( v3 )
    {
      v4 = *(CWindowArrangementTransition **)(v3 + 520);
      if ( v4 )
      {
        CWindowArrangementTransition::`scalar deleting destructor'(v4, v2);
        *(_QWORD *)(v3 + 520) = 0LL;
      }
    }
    CTopLevelWindow::CleanupThemeStatics();
    CBitmapSourceArray::ReleaseContents((CBitmapSourceArray *)&CWindowIconic::s_rgpBitmapPendingImages, 1);
    v5 = (void *)*((_QWORD *)this + 181);
    if ( v5 )
    {
      CloseThemeData(v5);
      *((_QWORD *)this + 181) = 0LL;
    }
    v6 = (void *)*((_QWORD *)this + 183);
    if ( v6 )
    {
      CloseThemeData(v6);
      *((_QWORD *)this + 183) = 0LL;
    }
    v7 = (void *)*((_QWORD *)this + 184);
    if ( v7 )
    {
      CloseThemeData(v7);
      *((_QWORD *)this + 184) = 0LL;
    }
    v8 = (void *)*((_QWORD *)this + 185);
    if ( v8 )
    {
      CloseThemeData(v8);
      *((_QWORD *)this + 185) = 0LL;
    }
    v9 = (void *)*((_QWORD *)this + 186);
    if ( v9 )
    {
      CloseThemeData(v9);
      *((_QWORD *)this + 186) = 0LL;
    }
    v10 = (HMODULE)*((_QWORD *)this + 182);
    if ( v10 )
    {
      FreeLibrary(v10);
      *((_QWORD *)this + 182) = 0LL;
    }
  }
}
