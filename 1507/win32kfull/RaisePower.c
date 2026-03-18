/*
 * XREFs of RaisePower @ 0x1C00A7894
 * Callers:
 *     BuildExpandAAInfo @ 0x1C0003AC0 (BuildExpandAAInfo.c)
 *     pDCIAdjClr @ 0x1C00A57C8 (pDCIAdjClr.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00A61B0 (HT_CreateDeviceHalftoneInfo.c)
 *     AdjustSrcDevGamma @ 0x1C00A67F0 (AdjustSrcDevGamma.c)
 *     ComputeRGBLUTAA @ 0x1C00A6FC0 (ComputeRGBLUTAA.c)
 *     HT_ComputeRGBGammaTable @ 0x1C024D790 (HT_ComputeRGBGammaTable.c)
 *     ComputeBGRMappingTable @ 0x1C024E430 (ComputeBGRMappingTable.c)
 * Callees:
 *     MulFD6 @ 0x1C00A7520 (MulFD6.c)
 *     DivFD6 @ 0x1C00A7640 (DivFD6.c)
 *     AntiLog @ 0x1C00A7984 (AntiLog.c)
 *     Log @ 0x1C00A7ABC (Log.c)
 *     FD6DivL @ 0x1C00A7B80 (FD6DivL.c)
 */

__int64 __fastcall RaisePower(int a1, signed int a2, char a3)
{
  char v3; // si
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  int v7; // edi
  unsigned int v8; // eax
  __int64 v9; // rcx
  __int64 result; // rax
  unsigned int v11; // r9d

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 1000000;
  if ( (a3 & 2) == 0 )
  {
    if ( a2 != 1000000 )
    {
      if ( a2 == 1000000 * (a2 / 1000000) )
      {
        v4 = a2 / 1000000;
        v3 = a3 | 2;
      }
      goto LABEL_5;
    }
    return (unsigned int)a1;
  }
  if ( a2 == 1 )
    return (unsigned int)a1;
LABEL_5:
  if ( a1 <= 0 )
  {
    v5 = -a1;
    v7 = 1;
    if ( !a1 )
      return 0LL;
  }
  else
  {
    v7 = 0;
  }
  if ( !v4 )
    return v7 != 0 ? -1000000 : 1000000;
  if ( v5 != 10000000 )
    v6 = Log(v5);
  if ( (v3 & 2) != 0 )
  {
    v7 = (v4 & 1) != 0 ? v7 : 0;
    if ( (v3 & 1) != 0 )
      v11 = FD6DivL(v6, v4);
    else
      v11 = v4 * v6;
    v9 = v11;
  }
  else
  {
    if ( (v3 & 1) != 0 )
      v8 = DivFD6(v6, v4);
    else
      v8 = MulFD6(v6, v4);
    v9 = v8;
  }
  result = AntiLog(v9);
  if ( v7 )
    return (unsigned int)-(int)result;
  return result;
}
