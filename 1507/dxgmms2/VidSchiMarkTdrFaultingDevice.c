/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1C007AAE0
 * Callers:
 *     VidSchiReportHwHang @ 0x1C001DFB4 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0003ED4 (VidSchiMarkDeviceAsError.c)
 */

char __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( a1 != *(_QWORD *)(v1 + 176) )
  {
    *(_BYTE *)(a1 + 172) = 1;
    LOBYTE(v1) = VidSchiMarkDeviceAsError(a1, 7);
  }
  return v1;
}
