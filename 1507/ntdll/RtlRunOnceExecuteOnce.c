/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x180034E70
 * Callers:
 *     RtlpQueryDiskSpeedPolicy @ 0x180003670 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlQueryResourcePolicy @ 0x180004FE0 (RtlQueryResourcePolicy.c)
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18000A8BC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     EtwpRegisterProvider @ 0x180038A60 (EtwpRegisterProvider.c)
 *     RtlpHpMetadataAlloc @ 0x180058944 (RtlpHpMetadataAlloc.c)
 *     RtlRandomEx @ 0x18006E540 (RtlRandomEx.c)
 *     RtlSetHeapInformation @ 0x18006F7D0 (RtlSetHeapInformation.c)
 *     RtlpHpVirtRunOnceInit @ 0x1800EBB60 (RtlpHpVirtRunOnceInit.c)
 * Callees:
 *     RtlRunOnceBeginInitialize @ 0x180034D90 (RtlRunOnceBeginInitialize.c)
 *     RtlRunOnceComplete @ 0x18006CC70 (RtlRunOnceComplete.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180075B10 (RtlEndStrongEnumerationHashTable.c)
 *     RtlReportCriticalFailure @ 0x1800EA560 (RtlReportCriticalFailure.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  NTSTATUS v8; // eax
  int v9; // ebx
  PVOID v11; // r8
  NTSTATUS v12; // eax
  char v13[24]; // [rsp+20h] [rbp-18h] BYREF

  v8 = RtlRunOnceBeginInitialize(RunOnce, 0, Context);
  v9 = v8;
  if ( v8 < 0 )
  {
    v13[0] = 0;
    goto LABEL_14;
  }
  if ( v8 == 259 )
  {
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      if ( Context )
        v11 = *Context;
      else
        v11 = 0LL;
      v9 = RtlRunOnceComplete(RunOnce, 0, v11);
      if ( v9 >= 0 )
        return 0;
      v13[0] = 1;
    }
    else
    {
      v9 = -1073741823;
      v12 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v12 >= 0 )
        return v9;
      v9 = v12;
      v13[0] = 2;
    }
LABEL_14:
    RtlReportCriticalFailure((unsigned int)v9, v13);
  }
  return v9;
}
