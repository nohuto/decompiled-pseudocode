/*
 * XREFs of ?ReleaseResponseRef@CResponseItem@@QEAAXXZ @ 0x1800A5448
 * Callers:
 *     ?ReleaseResponses@CFrameInfo@@QEAAXXZ @ 0x180069118 (-ReleaseResponses@CFrameInfo@@QEAAXXZ.c)
 *     ?ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ @ 0x180069228 (-ReleaseResponses@PendingDxUpdate@CWindowNode@@QEAAXXZ.c)
 *     ?UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ @ 0x18008DADC (-UpdateFrameIndices@CPartitionVerticalBlankScheduler@@AEAAXXZ.c)
 *     ?RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z @ 0x18008DCB0 (-RetireFrame@CPartitionVerticalBlankScheduler@@AEAAJPEAVCFrameInfo@@IPEA_N_N@Z.c)
 *     ?Run@CPartitionVerticalBlankScheduler@@MEAAJXZ @ 0x18008FC60 (-Run@CPartitionVerticalBlankScheduler@@MEAAJXZ.c)
 *     ?Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGET_CAPTUREBITS@@@Z @ 0x1800951F8 (-Target_CaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_TARGE.c)
 *     ?AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z @ 0x1800A5B5C (-AddAsyncFlushResponse@CLegacySurfaceManager@@QEAAJPEAVCChannelContext@@II@Z.c)
 *     ?ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ @ 0x1800A5DCC (-ReleaseCaptureBitsResponse@CLegacySurfaceManager@@QEAA_NXZ.c)
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x1800A5E54 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_CHANNEL_VISUALCAPTUREBITS@@@Z @ 0x1800FB0C4 (-Channel_VisualCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCM.c)
 *     ?Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_SYNCHRONIZE@@@Z @ 0x1800FB328 (-Partition_Synchronize@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PA.c)
 *     ?Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMILCMD_PARTITION_DESKTOPCAPTUREBITS@@@Z @ 0x1800FB450 (-Partition_DesktopCaptureBits@CComposition@@AEAAJPEAVCChannelContext@@PEAVCResourceTable@@PEBUMI.c)
 * Callees:
 *     ?QueueResponse@CResponseItem@@QEAAJXZ @ 0x1800A5470 (-QueueResponse@CResponseItem@@QEAAJXZ.c)
 */

void __fastcall CResponseItem::ReleaseResponseRef(CResponseItem *this)
{
  if ( (*((_DWORD *)this + 4))-- == 1 )
    CResponseItem::QueueResponse(this);
  CMILRefCountBase::Release(this);
}
