/*
 * XREFs of bConvertFontRes @ 0x1C0147A10
 * Callers:
 *     bBmfdLoadFont @ 0x1C0148294 (bBmfdLoadFont.c)
 *     bLoadNtFon @ 0x1C015B154 (bLoadNtFon.c)
 * Callees:
 *     vBmfdFill_IFIMETRICS @ 0x1C0147B24 (vBmfdFill_IFIMETRICS.c)
 *     bBMFDIFIMETRICS @ 0x1C014812C (bBMFDIFIMETRICS.c)
 *     fsSelectionFlags @ 0x1C014824C (fsSelectionFlags.c)
 *     pcpComputeGlyphset @ 0x1C01489C0 (pcpComputeGlyphset.c)
 *     vCheckOffsetTable @ 0x1C0148B1C (vCheckOffsetTable.c)
 *     bVerifyResource @ 0x1C0148BC0 (bVerifyResource.c)
 *     vAlignHdrData @ 0x1C0148D60 (vAlignHdrData.c)
 */

__int64 __fastcall bConvertFontRes(int a1, int a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned int v9; // ebx
  char v10; // al
  __int64 v11; // r9
  __int64 v12; // rax
  HSEMAPHORE v13; // rcx

  v4 = a4 + 36;
  v9 = 0;
  vAlignHdrData(a4 + 36, a3);
  if ( (unsigned int)bVerifyResource(v4, a3) && (unsigned int)bBMFDIFIMETRICS(a1, a2, v4, (_DWORD)a3, 0LL) )
  {
    vCheckOffsetTable(v4, a3);
    v10 = fsSelectionFlags(*a3);
    if ( (v10 & 0x21) != 0 )
    {
      switch ( v10 & 0x21 )
      {
        case 1:
          *(_DWORD *)(a4 + 68) = 2;
          break;
        case 32:
          *(_DWORD *)(a4 + 68) = 1;
          break;
        case 33:
          *(_DWORD *)(a4 + 68) = 3;
          break;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 68) = 0;
    }
    EngAcquireSemaphore(ghsemBMFD);
    LOBYTE(v11) = *(_BYTE *)(*a3 + 85LL);
    v12 = pcpComputeGlyphset(&gpcpGlyphsets, *(unsigned __int8 *)(a4 + 40), *(unsigned __int8 *)(a4 + 41), v11);
    v13 = ghsemBMFD;
    *(_QWORD *)(a4 + 72) = v12;
    EngReleaseSemaphore(v13);
    if ( *(_QWORD *)(a4 + 72) )
    {
      vBmfdFill_IFIMETRICS(a4, a3);
      if ( **(_DWORD **)(a4 + 80) )
        return 1;
    }
    else
    {
      EngSetLastError(8u);
    }
  }
  return v9;
}
