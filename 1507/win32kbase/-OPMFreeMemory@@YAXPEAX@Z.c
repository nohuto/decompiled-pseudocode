/*
 * XREFs of ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C0069F28
 * Callers:
 *     NtGdiGetCertificate @ 0x1C0067550 (NtGdiGetCertificate.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0067730 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00680E0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00686F4 (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006AD40 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C0330 (NtGdiConfigureOPMProtectedOutput.c)
 * Callees:
 *     <none>
 */

void __fastcall OPMFreeMemory(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x4D504F47u);
}
