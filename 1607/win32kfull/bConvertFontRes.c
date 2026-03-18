/*
 * XREFs of bConvertFontRes @ 0x1C00193B8
 * Callers:
 *     bBmfdLoadFont @ 0x1C001F2CC (bBmfdLoadFont.c)
 *     bLoadNtFon @ 0x1C01584F0 (bLoadNtFon.c)
 * Callees:
 *     bVerifyResource @ 0x1C0018F18 (bVerifyResource.c)
 *     vAlignHdrData @ 0x1C00190C8 (vAlignHdrData.c)
 *     vCheckOffsetTable @ 0x1C00191B8 (vCheckOffsetTable.c)
 *     pcpComputeGlyphset @ 0x1C001925C (pcpComputeGlyphset.c)
 *     vBmfdFill_IFIMETRICS @ 0x1C0019518 (vBmfdFill_IFIMETRICS.c)
 *     bBMFDIFIMETRICS @ 0x1C001C7D8 (bBMFDIFIMETRICS.c)
 *     fsSelectionFlags @ 0x1C001C8F8 (fsSelectionFlags.c)
 */

__int64 __fastcall bConvertFontRes(int a1, int a2, __int64 *a3, __int64 a4)
{
  __int16 *v4; // rbp
  unsigned int v9; // ebx
  char v10; // al
  __int64 v11; // rax
  HSEMAPHORE v12; // rcx

  v4 = (__int16 *)(a4 + 36);
  v9 = 0;
  vAlignHdrData((_WORD *)(a4 + 36), a3);
  if ( bVerifyResource(v4, a3) && (unsigned int)bBMFDIFIMETRICS(a1, a2, (_DWORD)v4, (_DWORD)a3, 0LL) )
  {
    vCheckOffsetTable((__int64)v4, a3);
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
    v11 = pcpComputeGlyphset(
            &gpcpGlyphsets,
            *(unsigned __int8 *)(a4 + 40),
            *(unsigned __int8 *)(a4 + 41),
            *(_BYTE *)(*a3 + 85));
    v12 = ghsemBMFD;
    *(_QWORD *)(a4 + 72) = v11;
    EngReleaseSemaphore(v12);
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
