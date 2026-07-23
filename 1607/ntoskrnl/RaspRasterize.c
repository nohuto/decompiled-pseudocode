/*
 * XREFs of RaspRasterize @ 0x1401294D0
 * Callers:
 *     BgpRasPrintGlyph @ 0x140127D20 (BgpRasPrintGlyph.c)
 *     RaspGetXExtent @ 0x1401410C8 (RaspGetXExtent.c)
 * Callees:
 *     RaspGetUnscaledGlyphData @ 0x14012842C (RaspGetUnscaledGlyphData.c)
 *     RaspScanConvert @ 0x140128500 (RaspScanConvert.c)
 *     RaspCreatePointList @ 0x140128DD4 (RaspCreatePointList.c)
 *     RaspFreeMemory @ 0x140129BE8 (RaspFreeMemory.c)
 *     RaspScaleCoordinates @ 0x140129F00 (RaspScaleCoordinates.c)
 */

__int64 __fastcall RaspRasterize(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        _QWORD *a6,
        _DWORD *a7,
        _DWORD *a8,
        __int64 a9)
{
  __int64 v9; // rdi
  __int64 v11; // rcx
  int UnscaledGlyphData; // ebx
  int v13; // eax
  int v14; // r8d
  int v15; // r9d
  __int64 v16; // r14
  int v17; // edx
  __int64 *v19; // [rsp+40h] [rbp-10h] BYREF
  __int64 v20; // [rsp+48h] [rbp-8h] BYREF
  __int64 v21; // [rsp+70h] [rbp+20h] BYREF
  int v22; // [rsp+88h] [rbp+38h] BYREF

  v22 = a4;
  v9 = a9;
  v19 = 0LL;
  v20 = 0LL;
  v11 = *(_QWORD *)(a1 + 8);
  v21 = 0LL;
  UnscaledGlyphData = RaspGetUnscaledGlyphData(v11, a2, &v21, (__int64)&v22, a9);
  if ( UnscaledGlyphData >= 0 )
  {
    UnscaledGlyphData = RaspScaleCoordinates(a1, v21);
    if ( UnscaledGlyphData >= 0 )
    {
      v13 = RaspCreatePointList(v21, &v20);
      v16 = v20;
      UnscaledGlyphData = v13;
      if ( v13 >= 0 )
      {
        UnscaledGlyphData = RaspScanConvert(v21, v20, v14, v15, a5, &v19, a8, v9);
        if ( UnscaledGlyphData < 0 )
        {
          if ( v19 )
            RaspFreeMemory(v19, v9);
        }
        else
        {
          v17 = *((_DWORD *)v19 + 1) >> 2;
          *a6 = v19;
          *a7 = v17;
        }
      }
      if ( v16 )
        RaspFreeMemory(v16, v9);
    }
  }
  if ( v21 )
    RaspFreeMemory(v21, v9);
  return (unsigned int)UnscaledGlyphData;
}
