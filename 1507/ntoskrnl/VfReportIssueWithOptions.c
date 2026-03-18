/*
 * XREFs of VfReportIssueWithOptions @ 0x14025B0C0
 * Callers:
 *     VfCheckImageCompliance @ 0x1407383E8 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140738610 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1407386B0 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x140738750 (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x14074EDC4 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14074FD0C (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1407501FC (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140750548 (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1407514D0 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x14075166C (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x140246600 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14025A0F4 (VfUtilDbgPrint.c)
 *     VfErrorReleaseTriageInformation @ 0x140732718 (VfErrorReleaseTriageInformation.c)
 *     VerifierBugCheckIfAppropriate @ 0x140741A80 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x140744340 (VfErrorStoreTriageInformation.c)
 */

void __fastcall VfReportIssueWithOptions(int a1, int a2, int a3, int a4, ULONG_PTR a5, _DWORD *Response)
{
  _DWORD *v6; // rbx
  int v11; // r10d

  v6 = Response;
  v11 = *Response;
  if ( *Response && (v11 & 2) == 0 )
  {
    if ( (v11 & 8) == 0 && (VfOptionFlags & 0x200) == 0 && (_BYTE)KdDebuggerEnabled )
    {
      if ( (v11 & 4) != 0 )
      {
        while ( 1 )
        {
          VfUtilDbgPrint("\n*** Verifier assertion failed ***\n");
          DbgPrompt("(B)reak, (I)gnore, (W)arn only, (R)emove assert? ", (PCH)&Response, 2u);
          switch ( (_BYTE)Response )
          {
            case 'B':
              goto LABEL_15;
            case 'I':
              return;
            case 'R':
              goto LABEL_16;
            case 'W':
              goto LABEL_14;
            case 'b':
LABEL_15:
              VfErrorStoreTriageInformation(a1, a2, a3, a4, a5);
              __debugbreak();
            case 'i':
              return;
          }
          if ( (_BYTE)Response == 114 )
            break;
          if ( (_BYTE)Response == 119 )
          {
LABEL_14:
            *v6 = 2;
            return;
          }
        }
LABEL_16:
        *v6 = 0;
      }
    }
    else
    {
      VerifierBugCheckIfAppropriate(a1, a2, a3, a4, a5);
    }
  }
}
