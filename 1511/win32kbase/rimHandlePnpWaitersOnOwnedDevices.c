/*
 * XREFs of rimHandlePnpWaitersOnOwnedDevices @ 0x1C00CABFC
 * Callers:
 *     rimApcIoUnregisterPlugPlayNotificationExWorker @ 0x1C007F27C (rimApcIoUnregisterPlugPlayNotificationExWorker.c)
 * Callees:
 *     RIMLockExclusive @ 0x1C0046AF0 (RIMLockExclusive.c)
 *     WPP_RECORDER_SF_qqq @ 0x1C00CAA60 (WPP_RECORDER_SF_qqq.c)
 */

void __fastcall rimHandlePnpWaitersOnOwnedDevices(struct _LIST_ENTRY *a1, int a2)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _LIST_ENTRY *i; // rdi
  struct _LIST_ENTRY *v8; // rbx
  int v9; // [rsp+20h] [rbp-28h]

  RIMLockExclusive((__int64)&gObListLock);
  for ( i = gObRimDevList.Flink; i != &gObRimDevList; i = i->Flink )
  {
    if ( i == (struct _LIST_ENTRY *)16 )
      v8 = 0LL;
    else
      v8 = i + 3;
    if ( LOBYTE(v8[3].Flink) == a2 && v8[21].Flink == a1 && ((__int64)v8[11].Flink & 0x10) != 0 )
    {
      WPP_RECORDER_SF_qqq((__int64)WPP_GLOBAL_Control->DeviceExtension, v4, v5, v6, v9);
      LODWORD(v8[11].Flink) &= ~0x10u;
      KeSetEvent((PRKEVENT)v8[22].Flink, 1, 0);
    }
  }
  RIMUnlockExclusive((__int64)&gObListLock);
}
