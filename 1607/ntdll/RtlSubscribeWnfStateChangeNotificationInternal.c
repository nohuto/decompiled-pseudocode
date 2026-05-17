/*
 * XREFs of RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002943C
 * Callers:
 *     RtlSubscribeWnfStateChangeNotification @ 0x1800293F0 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlRegisterForWnfMetaNotification @ 0x180066E70 (RtlRegisterForWnfMetaNotification.c)
 * Callees:
 *     RtlpAddWnfUserSubToNameSub @ 0x180029564 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296B0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x18002986C (RtlpCreateWnfUserSubscription.c)
 *     RtlRunOnceExecuteOnce @ 0x18002A760 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180065AC0 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180066D88 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCreateSerializationGroup @ 0x180074C90 (RtlpCreateSerializationGroup.c)
 */

__int64 __fastcall RtlSubscribeWnfStateChangeNotificationInternal(
        _QWORD *a1,
        __int64 a2,
        int a3,
        int a4,
        __int64 a5,
        __int64 a6,
        int a7,
        int a8,
        int a9)
{
  __int64 SerializationGroup; // rdi
  int WnfUserSubscription; // ebx
  __int64 v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rdx
  __int64 v18; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  SerializationGroup = 0LL;
  v19 = 0LL;
  v18 = 0LL;
  if ( byte_180152408 )
    return 3221225738LL;
  WnfUserSubscription = RtlRunOnceExecuteOnce(&unk_180153338, RtlpInitializeWnf, 0LL, 0LL);
  if ( WnfUserSubscription >= 0 )
  {
    if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup()) != 0 )
    {
      WnfUserSubscription = RtlpCreateWnfUserSubscription((unsigned int)&v18, a3, a4, a5, SerializationGroup, a8, a9);
      if ( WnfUserSubscription < 0
        || (WnfUserSubscription = RtlpCreateWnfNameSubscription(&v19, a2, a6), WnfUserSubscription < 0) )
      {
        if ( v18 )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0LL, v18);
        if ( SerializationGroup )
          RtlpDecrementWnfSerializationGroup(SerializationGroup);
      }
      else
      {
        v14 = v18;
        v15 = v19;
        v16 = v18;
        *a1 = v18;
        WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v15, v16);
        if ( WnfUserSubscription < 0 )
        {
          *a1 = 0LL;
          RtlUnsubscribeWnfStateChangeNotification(v14);
        }
      }
    }
    else
    {
      return (unsigned int)-1073741801;
    }
  }
  return (unsigned int)WnfUserSubscription;
}
