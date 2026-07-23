/*
 * XREFs of HvlPhase2Initialize @ 0x14014CA18
 * Callers:
 *     IoInitSystemPreDrivers @ 0x14079EDEC (IoInitSystemPreDrivers.c)
 * Callees:
 *     ExNotifyWithProcessing @ 0x1400098E0 (ExNotifyWithProcessing.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     ExRegisterCallback @ 0x1401302A4 (ExRegisterCallback.c)
 *     IoAddTriageDumpDataBlock @ 0x14014B924 (IoAddTriageDumpDataBlock.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmLogMcUpdateStatus @ 0x1401B52DC (CmLogMcUpdateStatus.c)
 *     HvlpGetLogicalProcessorProperty @ 0x1401BB6E4 (HvlpGetLogicalProcessorProperty.c)
 *     HvlpRegisterPowerPolicyCallbacks @ 0x1401BF6D8 (HvlpRegisterPowerPolicyCallbacks.c)
 *     HvlpCheckTscSync @ 0x1401C09AC (HvlpCheckTscSync.c)
 *     HvlpEtwRegister @ 0x1401C0AD4 (HvlpEtwRegister.c)
 *     HvlpLogGuestStateScrubbingStatus @ 0x1401C0B14 (HvlpLogGuestStateScrubbingStatus.c)
 *     HvlpLogHypervisorLaunchError @ 0x1401C0D04 (HvlpLogHypervisorLaunchError.c)
 *     HvlpLogHypervisorSchedulerType @ 0x1401C0D74 (HvlpLogHypervisorSchedulerType.c)
 *     HvlpLogIommuInitStatus @ 0x1401C0EE8 (HvlpLogIommuInitStatus.c)
 *     HvlpLogProcessorStartupFailure @ 0x1401C1084 (HvlpLogProcessorStartupFailure.c)
 *     HvlpWriteEventLog @ 0x1401C1144 (HvlpWriteEventLog.c)
 *     HvlpDetectHypervisorSchedulerType @ 0x1401C1170 (HvlpDetectHypervisorSchedulerType.c)
 *     ExCreateCallback @ 0x1404CCE20 (ExCreateCallback.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 *     HvlpDiscoverTopologyComplete @ 0x1407CDEF4 (HvlpDiscoverTopologyComplete.c)
 */

NTSTATUS __fastcall HvlPhase2Initialize(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // eax
  int *v4; // rcx
  unsigned __int16 v5; // ax
  unsigned int v6; // edi
  ULONG *v7; // rbx
  NTSTATUS result; // eax
  PCALLBACK_OBJECT CallbackObject; // [rsp+28h] [rbp-E0h] BYREF
  OBJECT_ATTRIBUTES CallbackObject_8; // [rsp+30h] [rbp-D8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A8h] BYREF
  _OWORD v12[2]; // [rsp+78h] [rbp-90h] BYREF
  PVOID SecurityDescriptor; // [rsp+98h] [rbp-70h]
  _BYTE v14[3264]; // [rsp+A8h] [rbp-60h] BYREF

  v1 = *(_QWORD *)(a1 + 240);
  v2 = *(_QWORD *)(v1 + 2176);
  *(_OWORD *)&CallbackObject_8.RootDirectory = *(_OWORD *)(v1 + 2184);
  *(_OWORD *)&CallbackObject_8.Attributes = *(_OWORD *)(v1 + 2200);
  *(_QWORD *)&CallbackObject_8.Length = v2;
  if ( v2 )
  {
    HvlpEtwRegister();
    v12[0] = *(_OWORD *)&CallbackObject_8.Length;
    SecurityDescriptor = CallbackObject_8.SecurityDescriptor;
    v12[1] = *(_OWORD *)&CallbackObject_8.ObjectName;
    HvlpLogHypervisorLaunchError(v12);
    EtwUnregister(HvlGlobalSystemEventsHandle);
    HvlGlobalSystemEventsHandle = 0LL;
  }
  if ( !HvlHypervisorConnected )
    return 0;
  if ( (HvlpFlags & 2) != 0 )
  {
    HvlpDiscoverTopologyComplete();
    HvlpDetectHypervisorSchedulerType();
  }
  IoAddTriageDumpDataBlock((int)&HvlpFlags, 4);
  IoAddTriageDumpDataBlock((int)&HvlpRootFlags, 4);
  IoAddTriageDumpDataBlock((int)&HvlpEnlightenments, 4);
  if ( (HvlpRootFlags & 1) == 0 )
  {
LABEL_18:
    if ( ExCbEnlightenmentState )
      ExNotifyWithProcessing(ExCbEnlightenmentState, 0LL, 0LL, 0LL);
    HvlpRegisterPowerPolicyCallbacks();
    return 0;
  }
  HvlpEtwRegister();
  HvlpWriteEventLog(&HV_EVENTLOG_START_SUCCEEDED, 0, 0LL);
  HvlpLogHypervisorSchedulerType();
  HvlpCheckTscSync();
  HvlpLogIommuInitStatus();
  HvlpLogGuestStateScrubbingStatus();
  v3 = HvlpLogicalProcessorCount;
  if ( (unsigned int)HvlpLogicalProcessorCount < 0x200 )
  {
    v4 = &HvlpLogicalProcessorRegions[28 * (unsigned int)HvlpLogicalProcessorCount];
    if ( !*v4 )
    {
      v5 = *((_WORD *)v4 + 24);
      if ( v5 )
        HvlpLogProcessorStartupFailure((unsigned int)v4[2], v5);
    }
    v3 = HvlpLogicalProcessorCount;
  }
  v6 = 0;
  if ( v3 )
  {
    v7 = (ULONG *)&dword_1403AF024;
    do
    {
      HvlpGetLogicalProcessorProperty(*v7, 5LL, v14);
      if ( (int)CmLogMcUpdateStatus(*v7) < 0 )
        break;
      ++v6;
      v7 += 28;
    }
    while ( v6 < (unsigned int)HvlpLogicalProcessorCount );
  }
  RtlInitUnicodeString(&DestinationString, L"\\Callback\\PowerState");
  CallbackObject_8.Length = 48;
  CallbackObject_8.ObjectName = &DestinationString;
  CallbackObject_8.RootDirectory = 0LL;
  CallbackObject_8.Attributes = 80;
  CallbackObject = 0LL;
  *(_OWORD *)&CallbackObject_8.SecurityDescriptor = 0LL;
  result = ExCreateCallback(&CallbackObject, &CallbackObject_8, 0, 1u);
  if ( result >= 0 )
  {
    ExRegisterCallback(CallbackObject, HvlpPowerStateCallback, 0LL);
    goto LABEL_18;
  }
  return result;
}
