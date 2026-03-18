/*
 * XREFs of VfReportIssueWithOptions @ 0x140223544
 * Callers:
 *     VfCheckImageCompliance @ 0x140703D18 (VfCheckImageCompliance.c)
 *     VfCheckPagePriority @ 0x140704170 (VfCheckPagePriority.c)
 *     VfCheckPageProtection @ 0x140704210 (VfCheckPageProtection.c)
 *     VfCheckPoolType @ 0x1407042B0 (VfCheckPoolType.c)
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
 *     VfDeadlockAcquireResource @ 0x140713510 (VfDeadlockAcquireResource.c)
 *     VfDeadlockReleaseResource @ 0x14071425C (VfDeadlockReleaseResource.c)
 *     ViDeadlockAddResource @ 0x14071474C (ViDeadlockAddResource.c)
 *     ViDeadlockAnalyze @ 0x140714A9C (ViDeadlockAnalyze.c)
 *     ViDeadlockRemoveResource @ 0x140715928 (ViDeadlockRemoveResource.c)
 *     ViDeadlockRemoveThread @ 0x140715AC4 (ViDeadlockRemoveThread.c)
 * Callees:
 *     DbgPrompt @ 0x140211374 (DbgPrompt.c)
 *     VfUtilDbgPrint @ 0x14022264C (VfUtilDbgPrint.c)
 *     VfErrorReleaseTriageInformation @ 0x1406FE488 (VfErrorReleaseTriageInformation.c)
 *     VerifierBugCheckIfAppropriate @ 0x14070C2E8 (VerifierBugCheckIfAppropriate.c)
 *     VfErrorStoreTriageInformation @ 0x14070EB30 (VfErrorStoreTriageInformation.c)
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
