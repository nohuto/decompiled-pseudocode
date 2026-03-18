/*
 * XREFs of ACPIInternalNotifyAvailableDeviceObject @ 0x1C008FCB0
 * Callers:
 *     ACPIDispatchIrp @ 0x1C0004140 (ACPIDispatchIrp.c)
 * Callees:
 *     AMLIGetNSObjectNotifyFlag @ 0x1C0028358 (AMLIGetNSObjectNotifyFlag.c)
 *     WPP_RECORDER_SF_sqL @ 0x1C004B774 (WPP_RECORDER_SF_sqL.c)
 *     WPP_RECORDER_SF_sqSD @ 0x1C004C638 (WPP_RECORDER_SF_sqSD.c)
 *     ACPIQueryDeviceBiosName @ 0x1C0087DB4 (ACPIQueryDeviceBiosName.c)
 *     AcpiExternalAddBiosNameDeviceAssociation @ 0x1C009B488 (AcpiExternalAddBiosNameDeviceAssociation.c)
 */

__int64 __fastcall ACPIInternalNotifyAvailableDeviceObject(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // ebx
  int v5; // eax
  int v6; // edx
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  struct _UNICODE_STRING v10; // [rsp+50h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 712);
  *(_QWORD *)&v10.Length = 0LL;
  v10.Buffer = 0LL;
  if ( v2 && (unsigned __int8)AMLIGetNSObjectNotifyFlag(v2) )
  {
    v5 = ACPIQueryDeviceBiosName(*(_QWORD *)(a1 + 720), &v10);
    v3 = v5;
    if ( v5 >= 0 )
    {
      v3 = AcpiExternalAddBiosNameDeviceAssociation(&v10, *(_QWORD *)(a1 + 720));
      if ( v3 < 0 )
        WPP_RECORDER_SF_sqSD(WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9);
    }
    else
    {
      LOBYTE(v6) = 2;
      WPP_RECORDER_SF_sqL(
        WPP_GLOBAL_Control->DeviceExtension,
        v6,
        6,
        20,
        (__int64)&WPP_f0fe160f89a6365bbdf73264e71c5878_Traceguids,
        (__int64)"ACPIInternalNotifyAvailableDeviceObject",
        *(_QWORD *)(a1 + 720),
        v5);
    }
  }
  else
  {
    v3 = 0;
  }
  if ( v10.Buffer )
    ExFreePoolWithTag(v10.Buffer, 0x53706341u);
  return (unsigned int)v3;
}
