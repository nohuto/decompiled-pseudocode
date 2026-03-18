/*
 * XREFs of VidSchiMarkTdrFaultingDevice @ 0x1C008CDB0
 * Callers:
 *     VidSchiReportHwHang @ 0x1C0023200 (VidSchiReportHwHang.c)
 * Callees:
 *     VidSchiMarkDeviceAsError @ 0x1C0013E38 (VidSchiMarkDeviceAsError.c)
 */

char __fastcall VidSchiMarkTdrFaultingDevice(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 32);
  if ( a1 != *(_QWORD *)(v1 + 184) )
  {
    *(_BYTE *)(a1 + 172) = 1;
    LOBYTE(v1) = VidSchiMarkDeviceAsError(a1, 7);
  }
  return v1;
}
