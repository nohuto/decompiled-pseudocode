/*
 * XREFs of RaisePower @ 0x1C0001738
 * Callers:
 *     BuildExpandAAInfo @ 0x1C00034E0 (BuildExpandAAInfo.c)
 *     pDCIAdjClr @ 0x1C00BEF78 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00BF960 (AdjustSrcDevGamma.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x1C00BFB60 (HT_CreateDeviceHalftoneInfo.c)
 *     ComputeRGBLUTAA @ 0x1C00C08DC (ComputeRGBLUTAA.c)
 *     HT_ComputeRGBGammaTable @ 0x1C024D720 (HT_ComputeRGBGammaTable.c)
 *     ComputeBGRMappingTable @ 0x1C024E3C0 (ComputeBGRMappingTable.c)
 * Callees:
 *     AntiLog @ 0x1C0001800 (AntiLog.c)
 *     Log @ 0x1C0001938 (Log.c)
 *     FD6DivL @ 0x1C00019FC (FD6DivL.c)
 *     MulFD6 @ 0x1C00C0E40 (MulFD6.c)
 *     DivFD6 @ 0x1C00C0F60 (DivFD6.c)
 */

__int64 __fastcall RaisePower(int a1, __int64 a2, __int64 a3)
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
    if ( (_DWORD)a2 != 1000000 )
    {
      a2 = (unsigned int)((int)a2 / 1000000);
      if ( v4 == 1000000 * (_DWORD)a2 )
      {
        v4 = a2;
        v3 = a3 | 2;
      }
      goto LABEL_5;
    }
    return (unsigned int)a1;
  }
  if ( (_DWORD)a2 == 1 )
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
    v6 = Log(v5, a2, a3, 1000000LL);
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
