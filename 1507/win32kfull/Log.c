/*
 * XREFs of Log @ 0x1C00A7ABC
 * Callers:
 *     pDCIAdjClr @ 0x1C00A57C8 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00A67F0 (AdjustSrcDevGamma.c)
 *     ComputeRGBLUTAA @ 0x1C00A6FC0 (ComputeRGBLUTAA.c)
 *     RaisePower @ 0x1C00A7894 (RaisePower.c)
 * Callees:
 *     FractionToMantissa @ 0x1C00031D4 (FractionToMantissa.c)
 *     FD6DivL @ 0x1C00A7B80 (FD6DivL.c)
 */

__int64 __fastcall Log(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r8
  int v3; // edi
  int v4; // ecx

  if ( (int)a1 < 10000 )
  {
    if ( (int)a1 < 100 )
    {
      if ( (int)a1 < 10 )
      {
        if ( (int)a1 <= 0 )
          return 4288967296LL;
        v1 = -6000000;
        LODWORD(a1) = 100000000 * a1;
      }
      else
      {
        v1 = -5000000;
        LODWORD(a1) = 10000000 * a1;
      }
    }
    else if ( (int)a1 < 1000 )
    {
      v1 = -4000000;
      LODWORD(a1) = 1000000 * a1;
    }
    else
    {
      v1 = -3000000;
      LODWORD(a1) = 100000 * a1;
    }
  }
  else
  {
    v1 = 1000000;
    if ( (int)a1 >= 1000000 )
    {
      if ( (int)a1 >= 10000000 )
      {
        if ( (int)a1 < 100000000 )
        {
          LODWORD(a1) = 10 * a1;
        }
        else if ( (int)a1 < 1000000000 )
        {
          v1 = 2000000;
        }
        else
        {
          if ( (int)a1 >= 2147483642 )
            return 3331930LL;
          v1 = 3000000;
          LODWORD(a1) = FD6DivL(a1, 10LL);
        }
      }
      else
      {
        v1 = 0;
        LODWORD(a1) = 100 * a1;
      }
    }
    else if ( (int)a1 < 100000 )
    {
      v1 = -2000000;
      LODWORD(a1) = 10000 * a1;
    }
    else
    {
      v1 = -1000000;
      LODWORD(a1) = 1000 * a1;
    }
  }
  v2 = (int)a1 / 1000000 - 100;
  v3 = MantissaTable[v2];
  v4 = (int)a1 % 1000000;
  if ( v4 )
    v3 += FractionToMantissa(v4, MantissaCorrectData[v2]);
  return (unsigned int)(v3 + v1);
}
