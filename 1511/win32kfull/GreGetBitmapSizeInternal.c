/*
 * XREFs of GreGetBitmapSizeInternal @ 0x1C02A580C
 * Callers:
 *     bCaptureBitmapInfo @ 0x1C00352D4 (bCaptureBitmapInfo.c)
 *     NtGdiGetDIBitsInternal @ 0x1C00423A0 (NtGdiGetDIBitsInternal.c)
 *     NtGdiCreateDIBSection @ 0x1C004B100 (NtGdiCreateDIBSection.c)
 *     ?xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z @ 0x1C01F00DC (-xxxDIBtoBMP@@YAPEAUHBITMAP__@@PEAUtagBITMAPINFOHEADER@@PEAUHPALETTE__@@K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GreGetBitmapSizeInternal(__int64 a1, int a2, unsigned int a3)
{
  int v5; // r10d
  int v6; // edx
  int v7; // ebx
  unsigned int v8; // r8d
  int v9; // eax
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
    v6 = *(unsigned __int16 *)(a1 + 10);
    v7 = 3;
    v8 = 0;
    goto LABEL_13;
  }
  if ( a3 < 0x28 )
    return 0LL;
  v9 = *(_DWORD *)(a1 + 16);
  v7 = 4;
  v6 = *(unsigned __int16 *)(a1 + 14);
  v8 = *(_DWORD *)(a1 + 32);
  if ( v9 != 3 )
  {
    switch ( v9 )
    {
      case 0:
LABEL_13:
        if ( v6 != 1 )
        {
          if ( v6 != 4 )
          {
            if ( v6 != 8 )
            {
              v10 = 0;
              if ( a2 == 1 )
                a2 = 0;
              if ( ((v6 - 16) & 0xFFFFFFE7) != 0 || v6 == 40 )
                return 0LL;
LABEL_38:
              if ( v8 && v8 <= v10 )
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
      case 10:
        v12 = v6 - 1;
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
      case 2:
      case 12:
        if ( v6 == 4 )
          goto LABEL_37;
        break;
      case 1:
      case 11:
        if ( v6 == 8 )
          goto LABEL_35;
        break;
      default:
        if ( (unsigned int)(v9 - 4) <= 1 )
          goto LABEL_33;
        break;
    }
    return 0LL;
  }
  if ( a2 == 1 )
    a2 = 0;
  if ( ((v6 - 16) & 0xFFFFFFEF) != 0 )
    return 0LL;
  if ( a3 > 0x28 )
  {
    v10 = 0;
LABEL_40:
    v8 = v10;
    goto LABEL_41;
  }
  v8 = 3;
LABEL_41:
  if ( a2 != 1 )
  {
    if ( a2 == 2 )
      v7 = 0;
    v5 = v7;
  }
  result = (v5 * v8 + a3 + 3) & 0xFFFFFFFC;
  if ( (unsigned int)result < a3 )
    return 0LL;
  return result;
}
