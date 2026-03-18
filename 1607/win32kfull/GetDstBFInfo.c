/*
 * XREFs of GetDstBFInfo @ 0x1C024A770
 * Callers:
 *     AAHalftoneBitmap @ 0x1C00F36D4 (AAHalftoneBitmap.c)
 * Callees:
 *     SetGrayColorTable @ 0x1C000D2AC (SetGrayColorTable.c)
 *     ValidateRGBBitFields @ 0x1C00F3BC0 (ValidateRGBBitFields.c)
 *     ComputeInputColorInfo @ 0x1C00F7758 (ComputeInputColorInfo.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall GetDstBFInfo(__int64 a1, __int64 a2, unsigned __int8 a3, unsigned __int8 a4)
{
  __int64 v4; // rsi
  int v7; // r8d
  int v8; // edx
  int v9; // ecx
  int v10; // eax
  __int64 v11; // rbx
  __int128 v12; // [rsp+30h] [rbp-28h] BYREF
  __int64 v13; // [rsp+40h] [rbp-18h]

  v4 = 0LL;
  v12 = 0uLL;
  BYTE1(v12) = a3;
  v13 = 0LL;
  if ( a3 >= 5u )
  {
    if ( a3 <= 6u )
    {
      v7 = 16711680;
      v8 = 65280;
      v9 = 255;
      goto LABEL_7;
    }
    if ( a3 == 0xFC )
    {
      v7 = 63488;
      v8 = 2016;
      goto LABEL_6;
    }
    if ( a3 == 0xFD )
    {
      v7 = 31744;
      v8 = 992;
LABEL_6:
      v9 = 31;
LABEL_7:
      *((_QWORD *)&v12 + 1) = __PAIR64__(v8, v7);
      LODWORD(v13) = v9;
      goto LABEL_12;
    }
  }
  v4 = *(_QWORD *)(a2 + 8);
  a4 = 2 * (*(_BYTE *)a2 & 2);
  if ( v4 )
    goto LABEL_19;
  v9 = v13;
  v8 = HIDWORD(v12);
  v7 = DWORD2(v12);
LABEL_12:
  if ( (a4 & 1) != 0 )
  {
    v10 = v8;
    HIDWORD(v12) = v9;
    v8 = v9;
    LODWORD(v13) = v10;
    v9 = v10;
  }
  if ( (a4 & 2) != 0 )
  {
    *((_QWORD *)&v12 + 1) = __PAIR64__(v7, v8);
  }
  else if ( (a4 & 4) != 0 )
  {
    DWORD2(v12) = v9;
    LODWORD(v13) = v7;
  }
  ValidateRGBBitFields(&v12);
LABEL_19:
  v11 = a1 + 96;
  ComputeInputColorInfo(v4, 4u, a4, &v12, v11);
  SetGrayColorTable(0LL, v11);
}
