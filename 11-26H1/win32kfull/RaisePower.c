/*
 * XREFs of RaisePower @ 0x140146BD0
 * Callers:
 *     pDCIAdjClr @ 0x140144E04 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x140145CDC (AdjustSrcDevGamma.c)
 *     ComputeRGBLUTAA @ 0x1401460F4 (ComputeRGBLUTAA.c)
 *     BuildExpandAAInfo @ 0x1401485D0 (BuildExpandAAInfo.c)
 *     HT_CreateDeviceHalftoneInfo @ 0x14017F0FC (HT_CreateDeviceHalftoneInfo.c)
 *     HT_ComputeRGBGammaTable @ 0x140303D30 (HT_ComputeRGBGammaTable.c)
 *     ComputeBGRMappingTable @ 0x140304568 (ComputeBGRMappingTable.c)
 * Callees:
 *     MulFD6 @ 0x140146A98 (MulFD6.c)
 *     DivFD6 @ 0x140146D00 (DivFD6.c)
 *     AntiLog @ 0x14014701C (AntiLog.c)
 *     Log @ 0x140147308 (Log.c)
 *     FD6DivL @ 0x1401E6950 (FD6DivL.c)
 */

__int64 __fastcall RaisePower(int a1, __int64 a2, __int64 a3)
{
  char v3; // si
  unsigned int v4; // ebx
  unsigned int v5; // r10d
  unsigned int v6; // r9d
  int v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // r9d
  __int64 result; // rax

  v3 = a3;
  v4 = a2;
  v5 = a1;
  v6 = 1000000;
  if ( (a3 & 2) != 0 )
  {
    if ( (_DWORD)a2 != 1 )
      goto LABEL_5;
    return (unsigned int)a1;
  }
  if ( (_DWORD)a2 == 1000000 )
    return (unsigned int)a1;
  a2 = (unsigned int)((int)a2 / 1000000);
  if ( v4 == 1000000 * (_DWORD)a2 )
  {
    v4 = a2;
    v3 = a3 | 2;
  }
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
    v6 = Log(v5, a2, a3);
  if ( (v3 & 2) == 0 )
  {
    if ( (v3 & 1) != 0 )
      v8 = DivFD6(v6, v4, a3);
    else
      v8 = MulFD6(v6, v4);
    goto LABEL_13;
  }
  v7 = (v4 & 1) != 0 ? v7 : 0;
  if ( (v3 & 1) != 0 )
  {
    v8 = FD6DivL(v6, v4);
LABEL_13:
    v9 = v8;
    goto LABEL_14;
  }
  v9 = v4 * v6;
LABEL_14:
  result = AntiLog(v9);
  if ( v7 )
    return (unsigned int)-(int)result;
  return result;
}
