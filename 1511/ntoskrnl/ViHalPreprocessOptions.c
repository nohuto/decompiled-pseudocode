/*
 * XREFs of ViHalPreprocessOptions @ 0x1406BDA64
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x1406B9A14 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x1406B9B1C (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x1406B9BB4 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x1406B9C44 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x1406B9CD0 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x1406B9D60 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x1406B9DFC (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x1406B9E88 (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x1406B9EF4 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x1406B9F6C (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x1406BA81C (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x1406BAAF8 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x1406BAE24 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x1406BB584 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x1406BB8C0 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x1406BBC4C (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x1406BBDF4 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x1406BBFD8 (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x1406BC964 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x1406BCC98 (ViCheckPadding.c)
 *     ViCheckTag @ 0x1406BCE4C (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x1406BD110 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x1406BD234 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x1406BD6B0 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x1406BD7BC (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x1406BD8CC (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x1406BDE24 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x1406BE1F4 (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x1400E6934 (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 */

ULONG ViHalPreprocessOptions(ULONG *a1, const char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, ...)
{
  const CHAR *v7; // rdi
  int v8; // ebx
  ULONG result; // eax

  v7 = a2;
  if ( (a3 & 0x10000000) != 0 )
  {
    v8 = 1;
    LODWORD(a3) = a3 & 0xEFFFFFFF;
  }
  else
  {
    v8 = 0;
  }
  if ( *a1 == -1 )
  {
    if ( (unsigned int)a3 >= 0x26 )
    {
      *a1 = 4;
    }
    else
    {
      a2 = (const char *)ViHalDefaultActions;
      *a1 = *((_DWORD *)ViHalDefaultActions + (unsigned int)a3);
    }
  }
  result = *a1;
  if ( *a1 )
  {
    if ( (result & 0x10) != 0 )
      *a1 = 0;
    VfUtilDbgPrint("**************** HAL Verifier Detected Violation ****************\n", a2, a3);
    VfUtilDbgPrint("**\n");
    VfUtilDbgPrint("** VF: ");
    if ( v8 )
      DbgPrintEx(0x65u, 0, v7, a5, a6);
    else
      DbgPrintEx(0x65u, 0, v7, a4, a5, a6);
    VfUtilDbgPrint("\n");
    VfUtilDbgPrint("**\n");
    return VfUtilDbgPrint("*****************************************************************\n");
  }
  return result;
}
