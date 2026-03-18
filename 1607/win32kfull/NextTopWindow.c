/*
 * XREFs of NextTopWindow @ 0x1C0105548
 * Callers:
 *     xxxActivateWindow @ 0x1C00AB2EC (xxxActivateWindow.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     ?IsTopmostRealApp@@YAHPEAUtagWND@@@Z @ 0x1C020E260 (-IsTopmostRealApp@@YAHPEAUtagWND@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C007B420 (_GetDesktopWindow.c)
 *     GetWindowCloakState @ 0x1C009E3B4 (GetWindowCloakState.c)
 *     SkipWindowOnMonitor @ 0x1C00B2640 (SkipWindowOnMonitor.c)
 *     ?NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z @ 0x1C0105670 (-NTW_GetNextTop@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@@Z.c)
 *     ?GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z @ 0x1C01056B0 (-GNT_NextTopScan@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEAU1@1@Z.c)
 *     ?CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z @ 0x1C01056F0 (-CheckTopLevelOnly@@YAPEAUtagWND@@PEAU1@@Z.c)
 */

struct tagWND *__fastcall NextTopWindow(struct tagTHREADINFO *a1, __int64 a2, struct tagWND *a3, char a4)
{
  int v7; // r15d
  struct tagWND *v8; // rdx
  struct tagWND *v9; // r10
  struct tagWND *TopScan; // r12
  struct tagWND *v11; // rdi
  struct tagWND *v12; // rbx
  __int64 DesktopWindow; // rax
  struct tagWND *v14; // r11
  __int64 v15; // rdx
  struct tagWND *v17; // rax
  struct tagWND *v18; // r10
  struct tagWND *NextTop; // rax

  v7 = 0;
  TopScan = GNT_NextTopScan(a1, 0LL, 0LL);
  if ( v9 )
  {
    v11 = CheckTopLevelOnly(v9);
    v12 = v11;
    if ( v11 )
    {
      a3 = CheckTopLevelOnly(a3);
      while ( 1 )
      {
        if ( (a4 & 1) != 0 )
        {
          v18 = 0LL;
          do
          {
            NextTop = NTW_GetNextTop(a1, v18);
            if ( NextTop == v12 && v18 )
              break;
            v18 = NextTop;
          }
          while ( NextTop );
          v12 = v18;
        }
        else
        {
          v12 = NTW_GetNextTop(a1, v12);
        }
        if ( v12 == v11 )
          break;
        if ( v12 == TopScan )
        {
          if ( v7 )
            return 0LL;
          v7 = 1;
        }
        if ( !v12 )
          break;
        GetDesktopWindow((__int64)v11);
        DesktopWindow = GetDesktopWindow((__int64)v12);
        if ( v15 != DesktopWindow || v14 == v12 )
          break;
LABEL_11:
        if ( v12 != a3
          && (*((_BYTE *)v12 + 55) & 0x18) == 0x10
          && (*((_BYTE *)v12 + 51) & 8) == 0
          && ((a4 & 2) == 0 || *((char *)v12 + 48) >= 0)
          && !(unsigned int)GetWindowCloakState((__int64)v12)
          && ((a4 & 4) == 0 || !(unsigned int)SkipWindowOnMonitor((__int64)v12)) )
        {
          return v12;
        }
      }
    }
  }
  else
  {
    v17 = NTW_GetNextTop(a1, v8);
    v11 = CheckTopLevelOnly(v17);
    v12 = v11;
    if ( v11 )
      goto LABEL_11;
  }
  return 0LL;
}
