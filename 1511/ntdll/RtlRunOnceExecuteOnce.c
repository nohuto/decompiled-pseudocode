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

__int64 __fastcall RtlRunOnceExecuteOnce(
        volatile signed __int64 *a1,
        unsigned int (__fastcall *a2)(volatile signed __int64 *, __int64, unsigned __int64 *),
        __int64 a3,
        unsigned __int64 *a4)
{
  signed __int64 v4; // rax
  unsigned int v9; // edi
  signed __int64 v11; // rcx
  unsigned __int64 v12; // r8
  int v13; // ebx
  char v14[24]; // [rsp+20h] [rbp-18h] BYREF

  v4 = *a1;
  if ( (*a1 & 3) == 2 )
  {
LABEL_2:
    if ( a4 )
      *a4 = v4 & 0xFFFFFFFFFFFFFFFCuLL;
    return 0;
  }
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
  if ( !a2(a1, a3, a4) )
  {
    v9 = -1073741823;
    v13 = RtlRunOnceComplete(a1, 4LL, 0LL);
    if ( v13 >= 0 )
      return v9;
    v14[0] = 2;
    goto LABEL_20;
  }
  if ( a4 )
    v12 = *a4;
  else
    v12 = 0LL;
  v13 = RtlRunOnceComplete(a1, 0LL, v12);
  if ( v13 < 0 )
  {
    v14[0] = 1;
LABEL_20:
    RtlReportCriticalFailure((unsigned int)v13, v14);
    return (unsigned int)v13;
  }
  return 0;
}
