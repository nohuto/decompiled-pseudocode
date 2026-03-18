/*
 * XREFs of Win32FreePoolImpl_0 @ 0x1C0002C20
 * Callers:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 *     ?DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@PEAKPEAGKPEAJG@Z @ 0x1C0020430 (-DrvGetRegistryHandleFromDeviceMap@@YAPEAXPEAUtagGRAPHICS_DEVICE@@W4_DISP_DRIVER_REGISTRY_TYPE@@.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C0024A30 (--1SURFMEM@@QEAA@XZ.c)
 *     GreCombineRgn @ 0x1C0026E40 (GreCombineRgn.c)
 *     ?bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00361E0 (-bDeleteSurface@SURFACE@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     NtDCompositionRetireFrame @ 0x1C003A8A0 (NtDCompositionRetireFrame.c)
 *     NtDCompositionDiscardFrame @ 0x1C003AC20 (NtDCompositionDiscardFrame.c)
 *     ??_ECFlipToken@@MEAAPEAXI@Z @ 0x1C003BDE0 (--_ECFlipToken@@MEAAPEAXI@Z.c)
 *     ?Release@CRegion@@QEBAJXZ @ 0x1C003EA44 (-Release@CRegion@@QEBAJXZ.c)
 *     HMFreeObject @ 0x1C0041860 (HMFreeObject.c)
 *     FreeTmpBuffer @ 0x1C0042690 (FreeTmpBuffer.c)
 *     FreeThreadBufferWithTag @ 0x1C0064B70 (FreeThreadBufferWithTag.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 Win32FreePoolImpl_0()
{
  return Win32FreePoolImpl();
}
