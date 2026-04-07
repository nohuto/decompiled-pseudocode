/*
 * XREFs of ?GetNineGridLayout@CDrawNineGridInstruction@@SAXU_MARGINS@@AEBUMilPointAndSizeL@@PEAUNineGridLayout@@@Z @ 0x180011EA0
 * Callers:
 *     ?Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z @ 0x180011C30 (-Initialize@CDrawNineGridInstruction@@AEAAJPEAVCBitmapSource@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall CDrawNineGridInstruction::GetNineGridLayout(
        struct _MARGINS *a1,
        const struct MilPointAndSizeL *a2,
        struct NineGridLayout *a3)
{
  int v3; // r11d
  __int64 v4; // r9
  int v5; // r10d
  int cxRightWidth; // edx
  int cxLeftWidth; // eax
  int v9; // eax
  int cyBottomHeight; // edx
  int cyTopHeight; // eax
  int v12; // eax
  int v13; // ecx
  int v14; // eax

  v3 = *((_DWORD *)a2 + 2);
  v4 = 0LL;
  v5 = *((_DWORD *)a2 + 3);
  cxRightWidth = a1->cxRightWidth;
  cxLeftWidth = a1->cxLeftWidth;
  *(_DWORD *)a3 = 0;
  if ( cxLeftWidth + cxRightWidth > v3 )
  {
    v9 = v3 * cxLeftWidth / (cxLeftWidth + cxRightWidth);
    *((_DWORD *)a3 + 1) = v9;
  }
  else
  {
    *((_DWORD *)a3 + 1) = cxLeftWidth;
    v9 = v3 - cxRightWidth;
  }
  cyBottomHeight = a1->cyBottomHeight;
  *((_DWORD *)a3 + 2) = v9;
  cyTopHeight = a1->cyTopHeight;
  *((_DWORD *)a3 + 3) = v3;
  *((_DWORD *)a3 + 4) = 0;
  if ( cyTopHeight + cyBottomHeight > v5 )
  {
    v12 = v5 * cyTopHeight / (cyTopHeight + cyBottomHeight);
    *((_DWORD *)a3 + 5) = v12;
  }
  else
  {
    *((_DWORD *)a3 + 5) = cyTopHeight;
    v12 = v5 - cyBottomHeight;
  }
  v13 = *(_DWORD *)a2;
  *((_DWORD *)a3 + 6) = v12;
  v14 = *((_DWORD *)a2 + 1);
  *((_DWORD *)a3 + 7) = v5;
  do
  {
    *((_DWORD *)a3 + v4 + 4) += v14;
    *((_DWORD *)a3 + v4++) += v13;
  }
  while ( v4 <= 3 );
}
