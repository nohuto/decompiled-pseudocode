/*
 * XREFs of PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14002C4D4
 * Callers:
 *     ?zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z @ 0x140018BB0 (-zzzChangeStates@@YAJPEAUtagWND@@PEAUtagSMWP@@@Z.c)
 *     DpiRectIntersectsRectWithSubpixel @ 0x14002C82C (DpiRectIntersectsRectWithSubpixel.c)
 *     ?CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z @ 0x14002D070 (-CalcVisRgnWorker@@YAHQEBUtagWND@@PEAPEAUHRGN__@@K@Z.c)
 *     UpdateCheckpoint @ 0x140030480 (UpdateCheckpoint.c)
 *     ?UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x14004B91C (-UpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z.c)
 *     ?BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z @ 0x14004BFCC (-BuildWindowListWithDpiBoundaryInfo@@YAPEAUtagWLDBI@@PEAUtagWND@@0PEAUtagBWL@@PEAH@Z.c)
 *     GetRect @ 0x14012B140 (GetRect.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401F42C8 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 *     ?xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z @ 0x14026F8C8 (-xxxCalcValidRects@@YAHPEAUtagSMWP@@@Z.c)
 *     NtUserPhysicalToLogicalDpiPointForWindow @ 0x1402B8FD0 (NtUserPhysicalToLogicalDpiPointForWindow.c)
 * Callees:
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x14002C7B8 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x14002F928 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall PhysicalToLogicalInPlaceRectWithSubpixel(const struct tagWND *a1, int *a2, float *a3)
{
  unsigned int v5; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  const struct tagWND *v7; // r9
  __int64 v8; // rax
  int v9; // ecx
  int v10; // eax
  float v11; // xmm5_4
  float v12; // xmm4_4
  float v13; // xmm5_4

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  v7 = TopLevelOrDpiBoundaryWindow;
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v8 = *((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
    if ( v8 )
    {
      v9 = (int)*(float *)(v8 + 52);
      v10 = (int)*(float *)(v8 + 48);
      a2[3] -= v9;
      a2[1] -= v9;
      *a2 -= v10;
      a2[2] -= v10;
      ScaleValueWithSubpixel(a2, a3, 1.0 / **((float **)v7 + 27));
      ScaleValueWithSubpixel(a2 + 1, (float *)((unsigned __int64)(a3 + 1) & -(__int64)(a3 != 0LL)), v11);
      v5 = 1;
      a2[2] = (int)(float)((float)((float)((float)a2[2] * v12) + 0.0) + 0.5);
      a2[3] = (int)(float)((float)((float)((float)a2[3] * v13) + 0.0) + 0.5);
    }
  }
  return v5;
}
