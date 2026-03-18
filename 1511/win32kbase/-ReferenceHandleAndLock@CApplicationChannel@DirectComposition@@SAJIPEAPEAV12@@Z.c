/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C0019DA0
 * Callers:
 *     NtDCompositionAttachMouseWheelToHwnd @ 0x1C00045C0 (NtDCompositionAttachMouseWheelToHwnd.c)
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0004A30 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0005390 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0005490 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C00116B0 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0012004 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0012928 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     NtDCompositionCurrentBatchId @ 0x1C00195A0 (NtDCompositionCurrentBatchId.c)
 *     NtDCompositionSetResourceBufferProperty @ 0x1C0019940 (NtDCompositionSetResourceBufferProperty.c)
 *     NtDCompositionReleaseResource @ 0x1C0019BE0 (NtDCompositionReleaseResource.c)
 *     NtDCompositionCreateResource @ 0x1C0019C90 (NtDCompositionCreateResource.c)
 *     NtDCompositionSetResourceFloatProperty @ 0x1C0019EA0 (NtDCompositionSetResourceFloatProperty.c)
 *     NtDCompositionSetResourceCallbackId @ 0x1C001E120 (NtDCompositionSetResourceCallbackId.c)
 *     NtDCompositionAddVisualChild @ 0x1C001E2B0 (NtDCompositionAddVisualChild.c)
 *     NtDCompositionCommitChannel @ 0x1C001E4D0 (NtDCompositionCommitChannel.c)
 *     NtDCompositionRemoveVisualChild @ 0x1C001E5F0 (NtDCompositionRemoveVisualChild.c)
 *     NtDCompositionSetResourceReferenceArrayProperty @ 0x1C004F9A0 (NtDCompositionSetResourceReferenceArrayProperty.c)
 *     NtDCompositionSetResourceDeletedNotificationTag @ 0x1C0071470 (NtDCompositionSetResourceDeletedNotificationTag.c)
 *     NtDCompositionGetDeletedResources @ 0x1C0071700 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionSynchronize @ 0x1C0072B70 (NtDCompositionSynchronize.c)
 *     NtDCompositionSetResourceAnimationProperty @ 0x1C0074800 (NtDCompositionSetResourceAnimationProperty.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C0074A90 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C0075230 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C0075330 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionOpenSharedResource @ 0x1C0076180 (NtDCompositionOpenSharedResource.c)
 *     NtDCompositionOpenSharedResourceHandle @ 0x1C0076C00 (NtDCompositionOpenSharedResourceHandle.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0076CF0 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionReleaseAllResources @ 0x1C0078FE0 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetVisualInputSink @ 0x1C0079100 (NtDCompositionSetVisualInputSink.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C0079160 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionWaitForChannel @ 0x1C0079B50 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionSetChannelCallbackId @ 0x1C007A460 (NtDCompositionSetChannelCallbackId.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C007A990 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionSetDebugCounter @ 0x1C007BB50 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionSetResourceHandleProperty @ 0x1C007D6A0 (NtDCompositionSetResourceHandleProperty.c)
 *     NtDCompositionCapturePointer @ 0x1C00D5BB0 (NtDCompositionCapturePointer.c)
 *     NtDCompositionReplaceVisualChildren @ 0x1C00D6180 (NtDCompositionReplaceVisualChildren.c)
 *     NtVisualCaptureBits @ 0x1C00D6540 (NtVisualCaptureBits.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        __int64 a1,
        struct DirectComposition::CApplicationChannel **a2)
{
  struct DirectComposition::CApplicationChannel *v2; // rdi
  int v4; // ebp
  int v5; // r15d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v7; // rsi
  struct _ERESOURCE *v8; // rbx
  struct _RTL_GENERIC_TABLE *v9; // rcx
  __int64 v10; // rbx
  _QWORD *v11; // rax
  struct _ERESOURCE *v12; // rdi
  int Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v15; // [rsp+28h] [rbp-20h]

  v2 = 0LL;
  v4 = 0;
  v5 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  if ( CurrentProcessWin32Process && (v7 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v8 = *(struct _ERESOURCE **)(v7 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v8, 1u);
    v9 = *(struct _RTL_GENERIC_TABLE **)v7;
    Buffer = v5;
    v15 = 0LL;
    v10 = 0LL;
    v11 = RtlLookupElementGenericTable(v9, &Buffer);
    if ( v11 && (v10 = v11[1]) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v10 + 8));
    else
      v4 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v7 + 8));
    KeLeaveCriticalRegion();
    if ( v10 )
    {
      v12 = *(struct _ERESOURCE **)(v10 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v12, 1u);
      v2 = (struct DirectComposition::CApplicationChannel *)v10;
    }
  }
  else
  {
    v4 = -1073741823;
  }
  if ( v4 < 0 )
    return (unsigned int)v4;
  if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CApplicationChannel *))(*(_QWORD *)v2 + 8LL))(v2) == 1 )
  {
    *a2 = v2;
    return (unsigned int)v4;
  }
  (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v2)(v2);
  return 3221225485LL;
}
