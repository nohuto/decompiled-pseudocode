/*
 * XREFs of Log @ 0x1C0006AFC
 * Callers:
 *     RaisePower @ 0x1C00068F0 (RaisePower.c)
 *     pDCIAdjClr @ 0x1C00F3FD4 (pDCIAdjClr.c)
 *     AdjustSrcDevGamma @ 0x1C00F4A14 (AdjustSrcDevGamma.c)
 *     ComputeRGBLUTAA @ 0x1C00F57F4 (ComputeRGBLUTAA.c)
 * Callees:
 *     FD6DivL @ 0x1C0006BC0 (FD6DivL.c)
 *     FractionToMantissa @ 0x1C0006D04 (FractionToMantissa.c)
 */

__int64 __fastcall Log(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // r8
  int v3; // edi
  __int64 v4; // rcx

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
  v4 = (unsigned int)((int)a1 % 1000000);
  if ( (_DWORD)v4 )
    v3 += FractionToMantissa(v4, (unsigned int)MantissaCorrectData[v2]);
  return (unsigned int)(v3 + v1);
}
