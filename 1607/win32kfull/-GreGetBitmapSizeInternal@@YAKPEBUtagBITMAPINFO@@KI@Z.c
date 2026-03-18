/*
 * XREFs of ?GreGetBitmapSizeInternal@@YAKPEBUtagBITMAPINFO@@KI@Z @ 0x1C02A6A10
 * Callers:
 *     NtGdiGetDIBitsInternal @ 0x1C004C070 (NtGdiGetDIBitsInternal.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01E5E1C (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 *     ?bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z @ 0x1C02A6BAC (-bCaptureBitmapInfo@@YAHPEAUtagBITMAPINFO@@KIPEAPEAU1@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapSizeInternal(const struct tagBITMAPINFO *a1, int a2, unsigned int a3)
{
  int v5; // r10d
  int biHeight_high; // edx
  int v7; // ebx
  DWORD biClrUsed; // r8d
  DWORD biCompression; // eax
  unsigned int v10; // ecx
  __int64 result; // rax
  int v12; // edx
  int v13; // edx
  int v14; // edx

  if ( !a1 )
    return 0LL;
  v5 = 2;
  if ( a3 == 12 )
  {
    biHeight_high = HIWORD(a1->bmiHeader.biHeight);
    v7 = 3;
    biClrUsed = 0;
    goto LABEL_13;
  }
  if ( a3 < 0x28 )
    return 0LL;
  biCompression = a1->bmiHeader.biCompression;
  v7 = 4;
  biHeight_high = a1->bmiHeader.biBitCount;
  biClrUsed = a1->bmiHeader.biClrUsed;
  if ( biCompression != 3 )
  {
    switch ( biCompression )
    {
      case 0u:
LABEL_13:
        if ( biHeight_high != 1 )
        {
          if ( biHeight_high != 4 )
          {
            if ( biHeight_high != 8 )
            {
              v10 = 0;
              if ( a2 == 1 )
                a2 = 0;
              if ( ((biHeight_high - 16) & 0xFFFFFFE7) != 0 || biHeight_high == 40 )
                return 0LL;
LABEL_38:
              if ( biClrUsed && biClrUsed <= v10 )
                goto LABEL_41;
              goto LABEL_40;
            }
LABEL_35:
            v10 = 256;
            goto LABEL_38;
          }
LABEL_37:
          v10 = 16;
          goto LABEL_38;
        }
LABEL_27:
        v10 = 2;
        goto LABEL_38;
      case 0xAu:
        v12 = biHeight_high - 1;
        if ( !v12 )
          goto LABEL_27;
        v13 = v12 - 3;
        if ( !v13 )
          goto LABEL_37;
        v14 = v13 - 4;
        if ( !v14 )
          goto LABEL_35;
        if ( v14 == 24 )
        {
LABEL_33:
          v10 = 0;
          goto LABEL_38;
        }
        break;
      case 2u:
      case 0xCu:
        if ( biHeight_high == 4 )
          goto LABEL_37;
        break;
      case 1u:
      case 0xBu:
        if ( biHeight_high == 8 )
          goto LABEL_35;
        break;
      default:
        if ( biCompression - 4 <= 1 )
          goto LABEL_33;
        break;
    }
    return 0LL;
  }
  if ( a2 == 1 )
    a2 = 0;
  if ( ((biHeight_high - 16) & 0xFFFFFFEF) != 0 )
    return 0LL;
  if ( a3 > 0x28 )
  {
    v10 = 0;
LABEL_40:
    biClrUsed = v10;
    goto LABEL_41;
  }
  biClrUsed = 3;
LABEL_41:
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v7 = 0;
    v5 = v7;
  }
  result = (v5 * biClrUsed + a3 + 3) & 0xFFFFFFFC;
  if ( (unsigned int)result < a3 )
    return 0LL;
  return result;
}
