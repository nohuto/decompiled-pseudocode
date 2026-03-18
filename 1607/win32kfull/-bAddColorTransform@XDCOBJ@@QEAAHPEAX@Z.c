/*
 * XREFs of ?bAddColorTransform@XDCOBJ@@QEAAHPEAX@Z @ 0x1C0285670
 * Callers:
 *     ?hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z @ 0x1C0285858 (-hCreate@COLORTRANSFORMOBJ@@QEAAPEAXAEAVXDCOBJ@@PEAUtagLOGCOLORSPACEW@@PEAXK2K2K@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0060508 (PALLOCMEM2.c)
 */

__int64 __fastcall XDCOBJ::bAddColorTransform(XDCOBJ *this, void *a2)
{
  __int64 result; // rax

  result = (__int64)PALLOCMEM2(0x10uLL, 1650745671LL, 1);
  if ( result )
  {
    *(_QWORD *)result = a2;
    *(_QWORD *)(result + 8) = *(_QWORD *)(*(_QWORD *)this + 2496LL);
    *(_QWORD *)(*(_QWORD *)this + 2496LL) = result;
    return 1LL;
  }
  return result;
}
