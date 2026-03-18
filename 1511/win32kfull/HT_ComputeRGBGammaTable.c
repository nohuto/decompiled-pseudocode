/*
 * XREFs of HT_ComputeRGBGammaTable @ 0x1C024D720
 * Callers:
 *     <none>
 * Callees:
 *     RaisePower @ 0x1C0001738 (RaisePower.c)
 *     DivFD6 @ 0x1C00C0F60 (DivFD6.c)
 */

LONG __stdcall HT_ComputeRGBGammaTable(
        USHORT GammaTableEntries,
        USHORT GammaTableType,
        USHORT RedGamma,
        USHORT GreenGamma,
        USHORT BlueGamma,
        LPBYTE pGammaTable)
{
  LONG v10; // ebp
  int v11; // r12d
  int v12; // r13d
  int v13; // eax
  LPBYTE v14; // rsi
  LPBYTE v15; // rbx
  LPBYTE v16; // r14
  unsigned int v17; // eax
  __int16 v18; // di
  __int64 v19; // r15
  int v20; // eax
  LONG result; // eax
  unsigned int v22; // [rsp+20h] [rbp-38h]
  LONG v23; // [rsp+28h] [rbp-30h]
  unsigned int v24; // [rsp+60h] [rbp+8h]

  v23 = GammaTableEntries;
  v10 = GammaTableEntries;
  if ( (unsigned int)GammaTableEntries - 2 > 0xFE )
    return 0;
  v11 = 0;
  v12 = DivFD6(1, (unsigned int)GammaTableEntries - 1);
  v13 = RedGamma;
  v14 = pGammaTable;
  v24 = 100 * v13;
  v22 = 100 * GreenGamma;
  if ( GammaTableType == 1 )
  {
    v15 = &pGammaTable[GammaTableEntries];
    v16 = &v15[GammaTableEntries];
    v17 = 1;
  }
  else
  {
    v15 = pGammaTable + 1;
    v17 = 3;
    v16 = pGammaTable + 2;
  }
  v18 = GammaTableEntries - 1;
  if ( v18 )
  {
    v19 = v17;
    do
    {
      *v14 = (char)(32 - RaisePower(v11, v24, 1LL)) / 64;
      *v15 = (char)(32 - RaisePower(v11, v22, 1LL)) / 64;
      v20 = RaisePower(v11, 100 * (unsigned int)BlueGamma, 1LL);
      v14 += v19;
      v15 += v19;
      v11 += v12;
      *v16 = (255 * v20 + 500000) / 1000000;
      v16 += v19;
      --v18;
    }
    while ( v18 );
    v10 = v23;
  }
  *v16 = -1;
  result = v10;
  *v15 = -1;
  *v14 = -1;
  return result;
}
