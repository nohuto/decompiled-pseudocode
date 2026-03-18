/*
 * XREFs of ViHalPreprocessOptions @ 0x14073E7D0
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x14073A048 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x14073A150 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x14073A1E8 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x14073A278 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x14073A304 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x14073A394 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x14073A430 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x14073A4BC (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x14073A528 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x14073A5A0 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x14073B110 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x14073B444 (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x14073B770 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x14073BF14 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x14073C2A4 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x14073C630 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x14073C7D8 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14073C9BC (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x14073D498 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x14073D8A0 (ViCheckPadding.c)
 *     ViCheckTag @ 0x14073DA54 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x14073DD18 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x14073DE3C (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x14073E33C (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x14073E4D4 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x14073E5E4 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x14073EBE8 (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14073F00C (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x140131EAC (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
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
