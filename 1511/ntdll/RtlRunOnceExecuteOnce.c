/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x180054420
 * Callers:
 *     LdrpResReportResourceAccessInternal @ 0x18005246C (LdrpResReportResourceAccessInternal.c)
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x1800537FC (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryResourcePolicy @ 0x180053D20 (RtlQueryResourcePolicy.c)
 *     RtlRandomEx @ 0x180053DE0 (RtlRandomEx.c)
 *     EtwpRegisterProvider @ 0x1800542E4 (EtwpRegisterProvider.c)
 *     RtlpHpLfhSubsegmentInitialize @ 0x18005829C (RtlpHpLfhSubsegmentInitialize.c)
 *     RtlpHpMetadataAlloc @ 0x18005A854 (RtlpHpMetadataAlloc.c)
 *     RtlpHpTagRunOnceInit @ 0x18005AF60 (RtlpHpTagRunOnceInit.c)
 *     RtlSetHeapInformation @ 0x18007AD60 (RtlSetHeapInformation.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180085BEC (RtlpQueryDiskSpeedPolicy.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x180054B10 (RtlRunOnceComplete.c)
 *     RtlEndStrongEnumerationHashTable @ 0x180081AE0 (RtlEndStrongEnumerationHashTable.c)
 *     RtlpRunOnceWaitForInit @ 0x180083EB0 (RtlpRunOnceWaitForInit.c)
 *     RtlReportCriticalFailure @ 0x1800EE670 (RtlReportCriticalFailure.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  signed __int64 Ptr; // rax
  NTSTATUS v9; // edi
  signed __int64 v11; // rcx
  PVOID v12; // r8
  int v13; // ebx
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  Ptr = (signed __int64)RunOnce->Ptr;
  if ( ((__int64)RunOnce->Ptr & 3) == 2 )
  {
LABEL_2:
    if ( Context )
      *Context = (PVOID)(Ptr & 0xFFFFFFFFFFFFFFFCuLL);
    return 0;
  }
  do
  {
    while ( (Ptr & 3) != 0 )
    {
      if ( (Ptr & 3) != 1 )
      {
        if ( (Ptr & 3) != 3 )
          goto LABEL_2;
        v13 = -1073741584;
        v14[0] = 0;
        goto LABEL_20;
      }
      Ptr = RtlpRunOnceWaitForInit(Ptr, RunOnce);
    }
    v11 = Ptr;
    Ptr = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Ptr);
  }
  while ( Ptr != v11 );
  if ( !((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
  {
    v9 = -1073741823;
    v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
    if ( v13 >= 0 )
      return v9;
    v14[0] = 2;
    goto LABEL_20;
  }
  if ( Context )
    v12 = *Context;
  else
    v12 = 0LL;
  v13 = RtlRunOnceComplete(RunOnce, 0, v12);
  if ( v13 < 0 )
  {
    v14[0] = 1;
LABEL_20:
    RtlReportCriticalFailure((unsigned int)v13, v14);
    return v13;
  }
  return 0;
}
