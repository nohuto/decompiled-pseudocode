/*
 * XREFs of VfReportIssueWithOptions @ 0x14020BA88
 * Callers:
 *     VfCheckImageCompliance @ 0x1406B7EC4 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x1406B80EC (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x1406B818C (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1406B822C (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x1406CB730 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x1406CC480 (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x1406CC970 (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x1406CCCBC (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x1406CDB40 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x1406CDCDC (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x1401F77D0 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14020AB90 (VfUtilDbgPrint.c)
 *     VfErrorReleaseTriageInformation @ 0x1406B2718 (VfErrorReleaseTriageInformation.c)
 *     VerifierBugCheckIfAppropriate @ 0x1406C028C (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x1406C2AA0 (VfErrorStoreTriageInformation.c)
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
