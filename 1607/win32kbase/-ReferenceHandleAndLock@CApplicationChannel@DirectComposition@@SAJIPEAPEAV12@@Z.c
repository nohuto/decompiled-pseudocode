/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00446C4
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0004350 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0004E20 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0004F00 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionCurrentBatchId @ 0x1C0044830 (NtDCompositionCurrentBatchId.c)
 *     NtDCompositionCommitChannel @ 0x1C0044B80 (NtDCompositionCommitChannel.c)
 *     NtDCompositionGetDeletedResources @ 0x1C00465A0 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionSynchronize @ 0x1C00468D0 (NtDCompositionSynchronize.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0078A10 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C0078C80 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C0078D80 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C007AAA0 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionReleaseAllResources @ 0x1C007C6C0 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelCallbackId @ 0x1C007D1F0 (NtDCompositionSetChannelCallbackId.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C007D330 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionWaitForChannel @ 0x1C007D420 (NtDCompositionWaitForChannel.c)
 *     ?AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C007E2F8 (-AddCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C007E9F0 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionSetDebugCounter @ 0x1C007FAA0 (NtDCompositionSetDebugCounter.c)
 *     ?RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0080D38 (-RemoveCrossChannelVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C00813E4 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     NtVisualCaptureBits @ 0x1C00E3CC0 (NtVisualCaptureBits.c)
 * Callees:
 *     ?ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C00429D4 (-ReferenceHandleAndLock@CChannel@DirectComposition@@SAJIPEAPEAV12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        __int64 a1,
        struct DirectComposition::CApplicationChannel **a2)
{
  int v3; // edi
  struct DirectComposition::CApplicationChannel *v4; // rbx
  struct DirectComposition::CChannel *v6; // [rsp+40h] [rbp+18h] BYREF

  v6 = 0LL;
  v3 = DirectComposition::CChannel::ReferenceHandleAndLock(a1, &v6);
  if ( v3 >= 0 )
  {
    v4 = v6;
    if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CChannel *))(*(_QWORD *)v6 + 8LL))(v6) == 1 )
    {
      *a2 = v4;
    }
    else
    {
      v3 = -1073741811;
      (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
    }
  }
  return (unsigned int)v3;
}
