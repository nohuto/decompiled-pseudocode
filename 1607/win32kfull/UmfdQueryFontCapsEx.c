/*
 * XREFs of UmfdQueryFontCapsEx @ 0x1C02D9574
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x1C002BA28 (-bRealizeFont@RFONTOBJ@@QEAAHPEAVXDCOBJ@@PEAVPDEVOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UmfdQueryFontCapsEx(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v3; // edx
  int v4; // edx
  int v5; // edx

  v3 = *(_DWORD *)(a1 + 8);
  *a3 = 2;
  if ( v3 )
  {
    v4 = v3 - 1;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
      {
        if ( v5 != 1 )
        {
          *a3 = 0;
          return 0xFFFFFFFFLL;
        }
        a3[1] = 7;
      }
      else
      {
        a3[1] = 1;
      }
    }
    else
    {
      a3[1] = 2;
    }
  }
  else
  {
    a3[1] = 3;
  }
  return 2LL;
}
