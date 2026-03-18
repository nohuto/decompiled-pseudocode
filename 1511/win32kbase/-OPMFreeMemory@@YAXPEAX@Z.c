/*
 * XREFs of ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C007E0A0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0062380 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     NtGdiGetCertificateByHandle @ 0x1C0082230 (NtGdiGetCertificateByHandle.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C00823F0 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C0082FA0 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C00835B4 (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C0D70 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C00C0F30 (NtGdiGetCertificate.c)
 * Callees:
 *     <none>
 */

void __fastcall OPMFreeMemory(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x4D504F47u);
}
