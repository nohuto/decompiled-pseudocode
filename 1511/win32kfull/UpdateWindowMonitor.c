/*
 * XREFs of UpdateWindowMonitor @ 0x1C006CF60
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C006CE7C (UpdateMonitorForWindowAndChildren.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C009AA24 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z @ 0x1C01E4858 (-xxxForceUpdateWindowTreeDpiAwareness@@YAXPEAUtagWND@@W4PROCESS_DPI_AWARENESS@@H@Z.c)
 * Callees:
 *     _IsTopLevelWindow @ 0x1C0056918 (_IsTopLevelWindow.c)
 *     UpdateWindowSpriteDPI @ 0x1C007BDC4 (UpdateWindowSpriteDPI.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00F15DC (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UpdateWindowDPITransform @ 0x1C00F17E0 (UpdateWindowDPITransform.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *a1, __int64 a2)
{
  struct tagWND *v4; // rcx
  int v5; // edx
  int v6; // eax
  struct tagSHADOW *Shadow; // rax

  do
  {
    if ( !a2 )
      break;
    ValidateHmonitorNoRip(*((_QWORD *)a1 + 44));
    *((_QWORD *)a1 + 44) = *(_QWORD *)a2;
    v4 = a1;
    v5 = *((_DWORD *)a1 + 72) ^ (*((_DWORD *)a1 + 72) ^ (*((_DWORD *)a1 + 72) | ((*(_WORD *)(a2 + 152) != *((_WORD *)a1 + 180)) << 27))) & 0x8000000;
    *((_DWORD *)a1 + 72) = v5;
    *((_WORD *)a1 + 180) = *(_WORD *)(a2 + 152);
    v6 = 0;
    if ( *((_DWORD *)a1 + 86) == 2 )
    {
      do
      {
        if ( *((_DWORD *)v4 + 91) )
          break;
        v4 = (struct tagWND *)*((_QWORD *)v4 + 11);
      }
      while ( v4 );
      if ( v4 && *((_DWORD *)v4 + 91) == 1 )
        v6 = 1;
    }
    *((_DWORD *)a1 + 72) = v5 ^ (v5 ^ (v6 << 28)) & 0x10000000;
    if ( !(unsigned int)IsTopLevelWindow((__int64)a1) )
      break;
    UpdateWindowSpriteDPI(a1, a2);
    UpdateWindowDPITransform(a1, a2);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 19) + 86LL) & 2) == 0 )
      break;
    Shadow = FindShadow(a1);
    a1 = Shadow ? (struct tagWND *)*((_QWORD *)Shadow + 1) : 0LL;
  }
  while ( a1 );
}
