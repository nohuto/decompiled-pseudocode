/*
 * XREFs of ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0045F38
 * Callers:
 *     ?DestroyHandle@CChannel@DirectComposition@@SAJI@Z @ 0x1C0010CC8 (-DestroyHandle@CChannel@DirectComposition@@SAJI@Z.c)
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C001196C (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     NtDCompositionConfirmFrame @ 0x1C0011A20 (NtDCompositionConfirmFrame.c)
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z @ 0x1C00127F4 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C0013040 (-ReleaseSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z @ 0x1C00130CC (-ReferenceSystemResource@CConnection@DirectComposition@@QEAAJI@Z.c)
 *     ?CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z @ 0x1C0013130 (-CreateSystemResource@CConnection@DirectComposition@@QEAAJIPEAI@Z.c)
 *     ?RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z @ 0x1C00131C0 (-RetrieveBatches@CConnection@DirectComposition@@AEAAJ_KPEAPEBUUCE_RDP_HEADER@@@Z.c)
 *     ?Disconnect@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0013638 (-Disconnect@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Connect@CConnection@DirectComposition@@QEAAJPEAX@Z @ 0x1C0013810 (-Connect@CConnection@DirectComposition@@QEAAJPEAX@Z.c)
 *     ?RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z @ 0x1C0013A40 (-RegisterChannel@CConnection@DirectComposition@@QEAAJPEAVCChannel@2@PEAI@Z.c)
 *     ?NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001ABEC (-NotifyBatchProcessed@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z @ 0x1C001AC10 (-ReturnProcessedBatch@CApplicationChannel@DirectComposition@@QEAAXPEAVCBatch@2@@Z.c)
 *     ?SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z @ 0x1C001B040 (-SubmitBatch@CApplicationChannel@DirectComposition@@IEAAXPEAVCBatch@2@0_N@Z.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z @ 0x1C001C6C4 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@_N0@Z.c)
 *     ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z @ 0x1C001C94C (-BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0_N@Z.c)
 *     ?UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ @ 0x1C001D1C0 (-UnlockAndUnreference@CApplicationChannel@DirectComposition@@UEAAXXZ.c)
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1C001E25C (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     NtDCompositionGetFrameSurfaceUpdates @ 0x1C0039690 (NtDCompositionGetFrameSurfaceUpdates.c)
 *     NtDCompositionGetFrameLegacyTokens @ 0x1C003C5F0 (NtDCompositionGetFrameLegacyTokens.c)
 *     ?InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C003EE50 (-InFrame@CCompositionToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 *     ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C0045E58 (-NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z.c)
 *     ?Synchronize@CSynchronizationManager@DirectComposition@@SAJPEAVCBatch@2@@Z @ 0x1C00460F4 (-Synchronize@CSynchronizationManager@DirectComposition@@SAJPEAVCBatch@2@@Z.c)
 *     ?RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z @ 0x1C0046180 (-RemoveFromSynchronizationTable@CSynchronizationManager@DirectComposition@@SAXPEAVCBatch@2@@Z.c)
 *     ?GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ @ 0x1C0046E88 (-GetDefaultConnection@CConnection@DirectComposition@@SAPEAV12@XZ.c)
 *     ?OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ @ 0x1C00749E0 (-OnDwmRenderThreadExit@CConnection@DirectComposition@@SAXXZ.c)
 *     ?Create@CDwmChannel@DirectComposition@@SAJPEAI@Z @ 0x1C007C060 (-Create@CDwmChannel@DirectComposition@@SAJPEAI@Z.c)
 *     ?Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007D970 (-Create@CConnection@DirectComposition@@SAJPEAXPEAPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     ?ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z @ 0x1C007DA40 (-ReclaimSessionGlobalConnection@CConnection@DirectComposition@@SAJPEAPEAV12@@Z.c)
 *     ?DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z @ 0x1C007EFD0 (-DestroyHandle@CConnection@DirectComposition@@SAJPEAUHDCOMPOSITIONCONNECTION__@@@Z.c)
 *     NtDCompositionEnableMMCSS @ 0x1C00D5F90 (NtDCompositionEnableMMCSS.c)
 *     ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x1C00D6780 (-DesktopCaptureBits@CConnection@DirectComposition@@QEAAJPEAUHMONITOR__@@HHIIW4DXGI_FORMAT@@PEAX2.c)
 *     ?EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z @ 0x1C00D68C0 (-EnableMMCSS@CConnection@DirectComposition@@QEAAJH@Z.c)
 *     ?ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z @ 0x1C00D6980 (-ForceRender@CConnection@DirectComposition@@QEAAJ_N0W4Enum@DwmHardwareTeardown@@@Z.c)
 *     ?RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z @ 0x1C00D6B10 (-RenderBlack@CConnection@DirectComposition@@QEAAJ_N@Z.c)
 *     ?Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z @ 0x1C00D6BA8 (-Synchronize@CConnection@DirectComposition@@QEAAJPEAX_N@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CCriticalSection::AcquireExclusive(struct _ERESOURCE *this)
{
  KeEnterCriticalRegion();
  ExAcquireResourceExclusiveLite(this, 1u);
}
