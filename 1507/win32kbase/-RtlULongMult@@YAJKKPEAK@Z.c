/*
 * XREFs of ?RtlULongMult@@YAJKKPEAK@Z @ 0x1C00B3AEC
 * Callers:
 *     DrvCreatePhysicalMonitorObjects @ 0x1C0067880 (DrvCreatePhysicalMonitorObjects.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00686F4 (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlULongMult(unsigned int a1, unsigned int a2, unsigned int *a3)
{
  unsigned __int64 v3; // r9

  v3 = a2 * (unsigned __int64)a1;
  if ( v3 > 0xFFFFFFFF )
  {
    *a3 = -1;
    return 3221225621LL;
  }
  else
  {
    *a3 = v3;
    return 0LL;
  }
}
