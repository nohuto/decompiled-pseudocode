/*
 * XREFs of RtlRunOnceExecuteOnce @ 0x18002A760
 * Callers:
 *     RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002943C (RtlSubscribeWnfStateChangeNotificationInternal.c)
 *     RtlQueryResourcePolicy @ 0x180029F60 (RtlQueryResourcePolicy.c)
 *     RtlRandomEx @ 0x18002A020 (RtlRandomEx.c)
 *     EtwpRegisterProvider @ 0x18002A504 (EtwpRegisterProvider.c)
 *     RtlpHpMetadataAlloc @ 0x180050764 (RtlpHpMetadataAlloc.c)
 *     RtlpHpTagRunOnceInit @ 0x180051090 (RtlpHpTagRunOnceInit.c)
 *     RtlSetHeapInformation @ 0x18007E700 (RtlSetHeapInformation.c)
 *     LdrpResReportResourceAccessInternal @ 0x180082740 (LdrpResReportResourceAccessInternal.c)
 *     RtlpQueryDiskSpeedPolicy @ 0x180089FD8 (RtlpQueryDiskSpeedPolicy.c)
 *     RtlpHpPerHeapStackTraceInitialize @ 0x1800F7FA0 (RtlpHpPerHeapStackTraceInitialize.c)
 *     RtlpHpStackTraceAddStack @ 0x1800F80E4 (RtlpHpStackTraceAddStack.c)
 *     RtlpHpStackTraceRemoveStack @ 0x1800F87F4 (RtlpHpStackTraceRemoveStack.c)
 *     RtlpHpStackTraceSerialize @ 0x1800F885C (RtlpHpStackTraceSerialize.c)
 * Callees:
 *     RtlRunOnceComplete @ 0x18002AAE0 (RtlRunOnceComplete.c)
 *     RtlpRunOnceWaitForInit @ 0x180088258 (RtlpRunOnceWaitForInit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A9C80 (_guard_dispatch_icall_nop.c)
 *     RtlReportCriticalFailure @ 0x1800F735C (RtlReportCriticalFailure.c)
 */

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, unsigned __int64 *),
        __int64 a3,
        unsigned __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // ebx
  signed __int64 v11; // rcx
  unsigned __int64 v12; // r8
  int v13; // edi
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) != 2 )
  {
    do
    {
      while ( (v4 & 3) != 0 )
      {
        if ( (v4 & 3) != 1 )
        {
          if ( (v4 & 3) != 3 )
            goto LABEL_2;
          v13 = -1073741584;
          v14[0] = 0;
          goto LABEL_20;
        }
        v4 = RtlpRunOnceWaitForInit(v4, a1);
      }
      v11 = v4;
      v4 = _InterlockedCompareExchange64(a1, 1LL, v4);
    }
    while ( v4 != v11 );
    if ( a2(a1, a3, a4) )
    {
      v9 = 0;
      if ( a4 )
        v12 = *a4;
      else
        v12 = 0LL;
      v13 = RtlRunOnceComplete(a1, 0LL, v12);
      if ( v13 >= 0 )
        return v9;
      v14[0] = 1;
    }
    else
    {
      v9 = -1073741823;
      v13 = RtlRunOnceComplete(a1, 4LL, 0LL);
      if ( v13 >= 0 )
        return v9;
      v14[0] = 2;
    }
LABEL_20:
    RtlReportCriticalFailure((unsigned int)v13, v14, 1LL);
    return (unsigned int)v13;
  }
LABEL_2:
  if ( a4 )
    *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
  return 0;
}
