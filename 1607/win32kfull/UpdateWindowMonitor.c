/*
 * XREFs of UpdateWindowMonitor @ 0x1C0072260
 * Callers:
 *     UpdateMonitorForWindowAndChildren @ 0x1C007219C (UpdateMonitorForWindowAndChildren.c)
 *     zzzUpdateWindowsAfterModeChange @ 0x1C00D7A00 (zzzUpdateWindowsAfterModeChange.c)
 *     ?xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z @ 0x1C01DB124 (-xxxForceUpdateWindowTreeDpiAwarenessContext@@YAXPEAUtagWND@@KH@Z.c)
 * Callees:
 *     UpdateWindowSpriteDPI @ 0x1C0062C8C (UpdateWindowSpriteDPI.c)
 *     ShouldUseLogPixelsForWindowMetrics @ 0x1C0072364 (ShouldUseLogPixelsForWindowMetrics.c)
 *     _IsTopLevelWindow @ 0x1C00725F0 (_IsTopLevelWindow.c)
 *     ?FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z @ 0x1C00A7414 (-FindShadow@@YAPEAUtagSHADOW@@PEAUtagWND@@@Z.c)
 *     UpdateWindowDPITransform @ 0x1C0111C18 (UpdateWindowDPITransform.c)
 */

void __fastcall UpdateWindowMonitor(struct tagWND *a1, __int64 a2)
{
  bool v4; // zf
  int v5; // eax
  int v6; // ebx
  struct tagSHADOW *Shadow; // rax

  do
  {
    if ( !a2 )
      break;
    ValidateHmonitorNoRip(*((_QWORD *)a1 + 43));
    v4 = (*((_DWORD *)a1 + 72) & 0x8000000) == 0;
    *((_QWORD *)a1 + 43) = *(_QWORD *)a2;
    v5 = !v4 || *(_WORD *)(a2 + 154) != *((_WORD *)a1 + 178);
    *((_DWORD *)a1 + 72) ^= (*((_DWORD *)a1 + 72) ^ (v5 << 27)) & 0x8000000;
    v6 = *((_DWORD *)a1 + 72);
    *((_WORD *)a1 + 178) = *(_WORD *)(a2 + 154);
    *((_DWORD *)a1 + 72) = v6 ^ (v6 ^ ((unsigned int)ShouldUseLogPixelsForWindowMetrics(a1) << 28)) & 0x10000000;
    if ( !(unsigned int)IsTopLevelWindow(a1) )
      break;
    UpdateWindowSpriteDPI((__int64)a1, a2);
    UpdateWindowDPITransform(a1, a2);
    if ( (*(_BYTE *)(*((_QWORD *)a1 + 19) + 86LL) & 2) == 0 )
      break;
    Shadow = FindShadow(a1);
    a1 = Shadow ? (struct tagWND *)*((_QWORD *)Shadow + 1) : 0LL;
  }
  while ( a1 );
}
