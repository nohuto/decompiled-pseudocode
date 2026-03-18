/*
 * XREFs of LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14002BD18
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
 *     NtUserLogicalToPhysicalDpiPointForWindow @ 0x1402B7C20 (NtUserLogicalToPhysicalDpiPointForWindow.c)
 * Callees:
 *     ?ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z @ 0x14002C7B8 (-ScaleValueWithSubpixel@@YAXPEAJPEAMM@Z.c)
 *     ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x14002F928 (-GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z.c)
 */

__int64 __fastcall LogicalToPhysicalInPlaceRectWithSubpixel(const struct tagWND *a1, int *a2, float *a3)
{
  unsigned int v5; // ebx
  const struct tagWND *TopLevelOrDpiBoundaryWindow; // rax
  float *v8; // rax
  __int64 v9; // r11
  __int64 v10; // r11
  int v11; // r9d
  float v12; // xmm0_4
  __int64 v13; // rax
  int v14; // ecx
  int v15; // edx

  v5 = 0;
  TopLevelOrDpiBoundaryWindow = GetTopLevelOrDpiBoundaryWindow(a1);
  if ( TopLevelOrDpiBoundaryWindow )
  {
    v8 = (float *)*((_QWORD *)TopLevelOrDpiBoundaryWindow + 27);
    if ( v8 )
    {
      ScaleValueWithSubpixel(a2, a3, *v8);
      ScaleValueWithSubpixel(
        a2 + 1,
        (float *)((unsigned __int64)(a3 + 1) & -(__int64)(a3 != 0LL)),
        *(float *)(*(_QWORD *)(v9 + 216) + 20LL));
      v5 = 1;
      v11 = (int)(float)((float)((float)((float)a2[2] * **(float **)(v10 + 216)) + 0.0) + 0.5);
      a2[2] = v11;
      v12 = (float)((float)((float)a2[3] * *(float *)(*(_QWORD *)(v10 + 216) + 20LL)) + 0.0) + 0.5;
      a2[3] = (int)v12;
      v13 = *(_QWORD *)(v10 + 216);
      v14 = (int)*(float *)(v13 + 48);
      v15 = (int)*(float *)(v13 + 52);
      *a2 += v14;
      a2[2] = v14 + v11;
      a2[1] += v15;
      a2[3] = v15 + (int)v12;
    }
  }
  return v5;
}
