/*
 * XREFs of ViHalPreprocessOptions @ 0x140709ABC
 * Callers:
 *     ADD_MAP_REGISTERS @ 0x140705A88 (ADD_MAP_REGISTERS.c)
 *     DECREMENT_ADAPTER_CHANNELS @ 0x140705B90 (DECREMENT_ADAPTER_CHANNELS.c)
 *     DECREMENT_COMMON_BUFFERS @ 0x140705C28 (DECREMENT_COMMON_BUFFERS.c)
 *     DECREMENT_SCATTER_GATHER_LISTS @ 0x140705CB8 (DECREMENT_SCATTER_GATHER_LISTS.c)
 *     INCREASE_MAPPED_TRANSFER_BYTE_COUNT @ 0x140705D44 (INCREASE_MAPPED_TRANSFER_BYTE_COUNT.c)
 *     INCREMENT_ADAPTER_CHANNELS @ 0x140705DD4 (INCREMENT_ADAPTER_CHANNELS.c)
 *     SUBTRACT_MAP_REGISTERS @ 0x140705E70 (SUBTRACT_MAP_REGISTERS.c)
 *     VERIFY_BUFFER_LOCKED @ 0x140705EFC (VERIFY_BUFFER_LOCKED.c)
 *     VF_ASSERT_IRQL @ 0x140705F68 (VF_ASSERT_IRQL.c)
 *     VF_ASSERT_MAX_IRQL @ 0x140705FE0 (VF_ASSERT_MAX_IRQL.c)
 *     VfBuildScatterGatherList @ 0x140706890 (VfBuildScatterGatherList.c)
 *     VfBuildScatterGatherListEx @ 0x140706B6C (VfBuildScatterGatherListEx.c)
 *     VfFlushAdapterBuffers @ 0x140706E98 (VfFlushAdapterBuffers.c)
 *     VfGetScatterGatherList @ 0x1407075F8 (VfGetScatterGatherList.c)
 *     VfGetScatterGatherListEx @ 0x140707934 (VfGetScatterGatherListEx.c)
 *     VfMapTransfer @ 0x140707CC0 (VfMapTransfer.c)
 *     VfMapTransferEx @ 0x140707E68 (VfMapTransferEx.c)
 *     VfPutDmaAdapter @ 0x14070804C (VfPutDmaAdapter.c)
 *     ViAllocateMapRegistersFromFile @ 0x1407089D8 (ViAllocateMapRegistersFromFile.c)
 *     ViCheckPadding @ 0x140708D0C (ViCheckPadding.c)
 *     ViCheckTag @ 0x140708EC0 (ViCheckTag.c)
 *     ViCopyDeviceDescription @ 0x140709184 (ViCopyDeviceDescription.c)
 *     ViFlushDoubleBuffer @ 0x1407092A8 (ViFlushDoubleBuffer.c)
 *     ViGetAdapterInformationInternal @ 0x140709708 (ViGetAdapterInformationInternal.c)
 *     ViGetMdlBufferSa @ 0x140709814 (ViGetMdlBufferSa.c)
 *     ViGetRealDmaOperation @ 0x140709924 (ViGetRealDmaOperation.c)
 *     ViMapDoubleBuffer @ 0x140709E7C (ViMapDoubleBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14070A24C (ViReleaseDmaAdapter.c)
 * Callees:
 *     DbgPrintEx @ 0x140081B0C (DbgPrintEx.c)
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
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
