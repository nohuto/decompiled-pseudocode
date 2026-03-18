/*
 * XREFs of ?OPMAllocateMemory@@YAPEAX_KW4_POOL_TYPE@@@Z @ 0x1C00813D0
 * Callers:
 *     OPMInitialize @ 0x1C0052E28 (OPMInitialize.c)
 *     NtGdiGetCertificateByHandle @ 0x1C0083C70 (NtGdiGetCertificateByHandle.c)
 *     NtGdiSetOPMSigningKeyAndSequenceNumbers @ 0x1C0083E30 (NtGdiSetOPMSigningKeyAndSequenceNumbers.c)
 *     ?CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH@Z @ 0x1C008457C (-CreateProtectedOutput@COPM@@QEAAJW4_DXGKMDT_OPM_VIDEO_OUTPUT_SEMANTICS@@AEAU_LUID@@KPEAPEAXPEAH.c)
 *     ??0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z @ 0x1C0084CE0 (--0CMonitorPDO@@QEAA@AEAU_LUID@@KPEAJ@Z.c)
 *     ?AddElement@?$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z @ 0x1C0084F2C (-AddElement@-$CList@VCOPMProtectedOutput@@@@QEAAJPEAVCOPMProtectedOutput@@PEAK@Z.c)
 *     NtGdiConfigureOPMProtectedOutput @ 0x1C00C1530 (NtGdiConfigureOPMProtectedOutput.c)
 *     NtGdiGetCertificate @ 0x1C00C17E0 (NtGdiGetCertificate.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall OPMAllocateMemory(SIZE_T a1, POOL_TYPE a2)
{
  return ExAllocatePoolWithTag(a2, a1, 0x4D504F47u);
}
