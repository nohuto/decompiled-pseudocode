/*
 * XREFs of ?GetSize@CCompressedSourceBitmap@@UEAAJPEAI0@Z @ 0x180183F20
 * Callers:
 *     ?GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z @ 0x1800C1D50 (-GetSize@CCompressedSourceBitmap@@WBI@EAAJPEAI0@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSize@CBitmap@@UEAAJPEAI0@Z @ 0x180084D70 (-GetSize@CBitmap@@UEAAJPEAI0@Z.c)
 *     ?EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ @ 0x180183D04 (-EnsureWICBitmapFrame@CCompressedSourceBitmap@@IEAAJXZ.c)
 */

__int64 __fastcall CCompressedSourceBitmap::GetSize(CCompressedSourceBitmap *this, unsigned int *a2, unsigned int *a3)
{
  int v6; // eax
  unsigned int v7; // ebx
  int Size; // eax

  if ( *((_DWORD *)this + 42) && *((_DWORD *)this + 43)
    || (v6 = CCompressedSourceBitmap::EnsureWICBitmapFrame((CCompressedSourceBitmap *)((char *)this - 16)),
        v7 = v6,
        v6 >= 0) )
  {
    Size = CBitmap::GetSize(this, a2, a3);
    v7 = Size;
    if ( Size < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, Size, 0x64u);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x60u);
  }
  return v7;
}
