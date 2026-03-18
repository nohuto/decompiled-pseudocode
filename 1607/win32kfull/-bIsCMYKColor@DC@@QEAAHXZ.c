/*
 * XREFs of ?bIsCMYKColor@DC@@QEAAHXZ @ 0x1C013A064
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C00341DC (GreSetDIBitsToDeviceInternal.c)
 *     ?GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@PEAUHBITMAP__@@IIPEAEPEAUtagBITMAPINFO@@III@Z @ 0x1C0036410 (-GreGetDIBitsInternalWorker@@YAHKAEAVDCOBJ@@AEAVPDEVOBJ@@AEAVSURFREF@@AEAVXEPALOBJ@@PEAUHDC__@@P.c)
 *     GreCreateDIBitmapReal @ 0x1C003B1A0 (GreCreateDIBitmapReal.c)
 *     GreStretchDIBitsInternal @ 0x1C00BDAD8 (GreStretchDIBitsInternal.c)
 *     NtGdiExtFloodFill @ 0x1C0137AF0 (NtGdiExtFloodFill.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DC::bIsCMYKColor(DC *this)
{
  int v1; // r8d
  unsigned int v2; // edx

  v1 = *((_DWORD *)this + 28);
  v2 = 1;
  if ( (v1 & 1) == 0 || !*(_QWORD *)(*((_QWORD *)this + 10) + 112LL) || (v1 & 0x10000000) == 0 )
    return 0;
  return v2;
}
