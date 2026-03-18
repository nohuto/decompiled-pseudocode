/*
 * XREFs of GetFontIntensityCorrection @ 0x140221604
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetFontIntensityCorrection(unsigned __int8 *a1, int a2)
{
  unsigned int v2; // r8d

  v2 = 0;
  if ( a1 )
  {
    while ( v2 < *a1 )
    {
      if ( a1[80 * v2 + 4] == a2 )
        return (__int64)&a1[80 * v2 + 4];
      ++v2;
    }
  }
  return 0LL;
}
