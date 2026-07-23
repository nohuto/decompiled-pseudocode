/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x18002A750
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002942C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryResourcePolicy @ 0x180029F50 (RtlQueryResourcePolicy.c)
 *     RtlRandomEx @ 0x18002A010 (RtlRandomEx.c)
 *     EtwpRegisterProvider @ 0x18002A4F4 (EtwpRegisterProvider.c)
 *     RtlpHpMetadataAlloc @ 0x180050754 (RtlpHpMetadataAlloc.c)
 *     RtlpHpTagRunOnceInit @ 0x180051080 (RtlpHpTagRunOnceInit.c)
 *     RtlSetHeapInformation @ 0x18007E6F0 (RtlSetHeapInformation.c)
 *     LdrpResReportResourceAccessInternal @ 0x180082730 (LdrpResReportResourceAccessInternal.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180089FC8 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x1800F7FA0 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x1800F885C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18002AAD0 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180088248 (RtlpRunOnceWaitForInit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 */

NTSTATUS __cdecl RtlRunOnceExecuteOnce(
        PRTL_RUN_ONCE RunOnce,
        PRTL_RUN_ONCE_INIT_FN InitFn,
        PVOID Parameter,
        PVOID *Context)
{
  unsigned __int64 Value; // rax
  NTSTATUS v9; // ebx
  unsigned __int64 v11; // rcx
  PVOID v12; // r8
  int v13; // edi
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  Value = RunOnce->Value;
  if ( (RunOnce->Value & 3) != 2 )
  {
    do
    {
      while ( (Value & 3) != 0 )
      {
        if ( (Value & 3) != 1 )
        {
          if ( (Value & 3) != 3 )
            goto LABEL_2;
          v13 = -1073741584;
          v14[0] = 0;
          goto LABEL_20;
        }
        Value = RtlpRunOnceWaitForInit(Value, RunOnce);
      }
      v11 = Value;
      Value = _InterlockedCompareExchange64((volatile signed __int64 *)RunOnce, 1LL, Value);
    }
    while ( Value != v11 );
    if ( ((unsigned int (__fastcall *)(PRTL_RUN_ONCE, PVOID, PVOID *))InitFn)(RunOnce, Parameter, Context) )
    {
      v9 = 0;
      if ( Context )
        v12 = *Context;
      else
        v12 = 0LL;
      v13 = RtlRunOnceComplete(RunOnce, 0, v12);
      if ( v13 >= 0 )
        return v9;
      v14[0] = 1;
    }
    else
    {
      v9 = -1073741823;
      v13 = RtlRunOnceComplete(RunOnce, 4u, 0LL);
      if ( v13 >= 0 )
        return v9;
      v14[0] = 2;
    }
LABEL_20:
    RtlReportCriticalFailure((unsigned int)v13, v14, 1LL);
    return v13;
  }
LABEL_2:
  if ( Context )
    *Context = (PVOID)(Value & 0xFFFFFFFFFFFFFFFCuLL);
  return 0;
}
