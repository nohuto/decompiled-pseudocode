/*
 * XREFs of ?OPMFreeMemory@@YAXPEAX@Z @ 0x1C00819B0
 * Callers:
 *     ?Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C006EFD0 (-Win32KDriverUnload@@YAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     NtGdiGetCertificateByHandle @ 0x1C0083C70 (NtGdiGetCertificateByHandle.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0083E30 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     ?DestroyHandleInternal@?$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedOutput@@K@Z @ 0x1C0084A8C (-DestroyHandleInternal@-$CMonitorHandleTable@VCOPMProtectedOutput@@PEAX@@AEAAJPEAVCOPMProtectedO.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C0084F2C (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     ??_ECMonitorPDO@@UEAAPEAXI@Z @ 0x1C00BD540 (--_ECMonitorPDO@@UEAAPEAXI@Z.c)
 *     ??_GCMutex@@QEAAPEAXI@Z @ 0x1C00BD5C4 (--_GCMutex@@QEAAPEAXI@Z.c)
 *     ??_ECOPMProtectedOutput@@UEAAPEAXI@Z @ 0x1C00C1230 (--_ECOPMProtectedOutput@@UEAAPEAXI@Z.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C1530 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C00C17E0 (NtGdiGetCertificate.c)
 * Callees:
 *     <none>
 */

void __fastcall OPMFreeMemory(void *a1)
{
  if ( a1 )
    ExFreePoolWithTag(a1, 0x4D504F47u);
}
