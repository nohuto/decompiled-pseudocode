/*
 * XREFs of ?ReferenceHandleAndLock@CApplicationChannel@DirectComposition@@SAJIPEAPEAV12@@Z @ 0x1C002CF70
 * Callers:
 *     NtDCompositionTelemetryTouchInteractionUpdate @ 0x1C0003A60 (NtDCompositionTelemetryTouchInteractionUpdate.c)
 *     NtDCompositionTelemetryTouchInteractionBegin @ 0x1C0003ED0 (NtDCompositionTelemetryTouchInteractionBegin.c)
 *     NtDCompositionTelemetryTouchInteractionEnd @ 0x1C0003FB0 (NtDCompositionTelemetryTouchInteractionEnd.c)
 *     NtDCompositionSetResourceDeletedNotificationTag @ 0x1C000F160 (NtDCompositionSetResourceDeletedNotificationTag.c)
 *     NtDCompositionGetDeletedResources @ 0x1C000F740 (NtDCompositionGetDeletedResources.c)
 *     NtDCompositionSynchronize @ 0x1C0010750 (NtDCompositionSynchronize.c)
 *     NtDCompositionSetResourceCallbackId @ 0x1C00110D0 (NtDCompositionSetResourceCallbackId.c)
 *     NtDCompositionRemoveVisualChild @ 0x1C00111D0 (NtDCompositionRemoveVisualChild.c)
 *     NtDCompositionSetResourceAnimationProperty @ 0x1C0011E10 (NtDCompositionSetResourceAnimationProperty.c)
 *     NtDCompositionTelemetryAnimationScenarioBegin @ 0x1C00120F0 (NtDCompositionTelemetryAnimationScenarioBegin.c)
 *     NtDCompositionTelemetryAnimationScenarioReference @ 0x1C0012480 (NtDCompositionTelemetryAnimationScenarioReference.c)
 *     NtDCompositionTelemetryAnimationScenarioUnreference @ 0x1C00125A0 (NtDCompositionTelemetryAnimationScenarioUnreference.c)
 *     NtDCompositionOpenSharedResource @ 0x1C0013A90 (NtDCompositionOpenSharedResource.c)
 *     NtDCompositionCreateAndBindSharedSection @ 0x1C0013D90 (NtDCompositionCreateAndBindSharedSection.c)
 *     NtDCompositionOpenSharedResourceHandle @ 0x1C00144A0 (NtDCompositionOpenSharedResourceHandle.c)
 *     ?RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z @ 0x1C0014730 (-RemoveCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIII@Z.c)
 *     NtDCompositionReleaseAllResources @ 0x1C0015190 (NtDCompositionReleaseAllResources.c)
 *     NtDCompositionSetChannelCommitCompletionEvent @ 0x1C0016110 (NtDCompositionSetChannelCommitCompletionEvent.c)
 *     NtDCompositionTelemetrySetApplicationId @ 0x1C0016260 (NtDCompositionTelemetrySetApplicationId.c)
 *     NtDCompositionSetVisualInputSink @ 0x1C0016350 (NtDCompositionSetVisualInputSink.c)
 *     NtDCompositionWaitForChannel @ 0x1C0016660 (NtDCompositionWaitForChannel.c)
 *     NtDCompositionSetChannelCallbackId @ 0x1C0017E90 (NtDCompositionSetChannelCallbackId.c)
 *     NtDCompositionSetDebugCounter @ 0x1C0018BA0 (NtDCompositionSetDebugCounter.c)
 *     NtDCompositionSetResourceHandleProperty @ 0x1C0019180 (NtDCompositionSetResourceHandleProperty.c)
 *     ?AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z @ 0x1C0023C08 (-AddCrossDeviceVisualChild@CApplicationChannel@DirectComposition@@SAJIIIIHII@Z.c)
 *     ?ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCrossChannelVisualData@2@@Z @ 0x1C0024A10 (-ReleaseCrossChannelVisuals@CApplicationChannel@DirectComposition@@KAXPEAVCConnection@2@PEAUCros.c)
 *     NtDCompositionAddVisualChild @ 0x1C002B030 (NtDCompositionAddVisualChild.c)
 *     NtDCompositionSetResourceReferenceArrayProperty @ 0x1C002BB50 (NtDCompositionSetResourceReferenceArrayProperty.c)
 *     NtDCompositionReleaseResource @ 0x1C002C930 (NtDCompositionReleaseResource.c)
 *     NtDCompositionSetResourceBufferProperty @ 0x1C002C9E0 (NtDCompositionSetResourceBufferProperty.c)
 *     NtDCompositionSetResourceFloatProperty @ 0x1C002CBA0 (NtDCompositionSetResourceFloatProperty.c)
 *     NtDCompositionCreateResource @ 0x1C002CC10 (NtDCompositionCreateResource.c)
 *     NtDCompositionSetResourceIntegerProperty @ 0x1C002D070 (NtDCompositionSetResourceIntegerProperty.c)
 *     NtDCompositionCapturePointer @ 0x1C00D3CA0 (NtDCompositionCapturePointer.c)
 *     NtDCompositionReplaceVisualChildren @ 0x1C00D4170 (NtDCompositionReplaceVisualChildren.c)
 *     NtVisualCaptureBits @ 0x1C00D4850 (NtVisualCaptureBits.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::ReferenceHandleAndLock(
        __int64 a1,
        struct DirectComposition::CApplicationChannel **a2,
        __int64 a3,
        __int64 a4)
{
  struct DirectComposition::CApplicationChannel *v4; // rdi
  int v6; // ebp
  int v7; // r15d
  __int64 CurrentProcessWin32Process; // rax
  __int64 v9; // rsi
  struct _ERESOURCE *v10; // rbx
  struct _RTL_GENERIC_TABLE *v11; // rcx
  __int64 v12; // rbx
  _QWORD *v13; // rax
  struct _ERESOURCE *v14; // rdi
  __int64 Buffer; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+28h] [rbp-20h]

  v4 = 0LL;
  v6 = 0;
  v7 = a1;
  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3, a4, Buffer, v17);
  if ( CurrentProcessWin32Process && (v9 = *(_QWORD *)(CurrentProcessWin32Process + 256)) != 0 )
  {
    v10 = *(struct _ERESOURCE **)(v9 + 8);
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v10, 1u);
    v11 = *(struct _RTL_GENERIC_TABLE **)v9;
    LODWORD(Buffer) = v7;
    v17 = 0LL;
    v12 = 0LL;
    v13 = RtlLookupElementGenericTable(v11, &Buffer);
    if ( v13 && (v12 = v13[1]) != 0 )
      _InterlockedIncrement((volatile signed __int32 *)(v12 + 8));
    else
      v6 = -1073741790;
    ExReleaseResourceLite(*(PERESOURCE *)(v9 + 8));
    KeLeaveCriticalRegion();
    if ( v12 )
    {
      v14 = *(struct _ERESOURCE **)(v12 + 32);
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v14, 1u);
      v4 = (struct DirectComposition::CApplicationChannel *)v12;
    }
  }
  else
  {
    v6 = -1073741823;
  }
  if ( v6 < 0 )
    return (unsigned int)v6;
  if ( (*(unsigned int (__fastcall **)(struct DirectComposition::CApplicationChannel *))(*(_QWORD *)v4 + 8LL))(v4) == 1 )
  {
    *a2 = v4;
    return (unsigned int)v6;
  }
  (**(void (__fastcall ***)(struct DirectComposition::CApplicationChannel *))v4)(v4);
  return 3221225485LL;
}
