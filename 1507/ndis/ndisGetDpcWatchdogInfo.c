/*
 * XREFs of ndisGetDpcWatchdogInfo @ 0x1C0105530
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall ndisGetDpcWatchdogInfo(
        struct _KDPC *Dpc,
        struct _KEVENT *DeferredContext,
        PVOID SystemArgument1,
        PVOID SystemArgument2)
{
  *(_QWORD *)&ndisWatchdogInfo.DpcTimeLimit = 0LL;
  *(_QWORD *)&ndisWatchdogInfo.DpcWatchdogLimit = 0LL;
  ndisWatchdogInfo.Reserved = 0;
  if ( KeQueryDpcWatchdogInformation(&ndisWatchdogInfo) >= 0 )
  {
    ndisDpcTimeLimit = 30 * (ndisWatchdogInfo.DpcTimeLimit / 0x64);
    ndisDpcWatchdogLimit = 30 * (ndisWatchdogInfo.DpcWatchdogLimit / 0x64);
  }
  KeSetEvent(DeferredContext, 0, 0);
}
