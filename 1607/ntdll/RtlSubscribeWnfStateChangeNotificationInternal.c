/*
 * XREFs of RtlSubscribeWnfStateChangeNotificationInternal @ 0x18002942C
 * Callers:
 *     RtlSubscribeWnfStateChangeNotification @ 0x1800293E0 (RtlSubscribeWnfStateChangeNotification.c)
 *     RtlRegisterForWnfMetaNotification @ 0x180066E60 (RtlRegisterForWnfMetaNotification.c)
 * Callees:
 *     RtlpAddWnfUserSubToNameSub @ 0x180029554 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x1800296A0 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x18002985C (RtlpCreateWnfUserSubscription.c)
 *     RtlRunOnceExecuteOnce @ 0x18002A750 (RtlRunOnceExecuteOnce.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180065AB0 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x180066D78 (RtlpDecrementWnfSerializationGroup.c)
 *     RtlpCreateSerializationGroup @ 0x180074C80 (RtlpCreateSerializationGroup.c)
 */

__int64 __fastcall RtlSubscribeWnfStateChangeNotificationInternal(
        PWNF_USER_CALLBACK *a1,
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
  NTSTATUS WnfUserSubscription; // ebx
  NTSTATUS (__cdecl *v14)(WNF_STATE_NAME, WNF_CHANGE_STAMP, PWNF_TYPE_ID, PVOID, const void *, ULONG); // rdi
  __int64 v15; // rcx
  PWNF_USER_CALLBACK v16; // rdx
  PWNF_USER_CALLBACK Callback; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  SerializationGroup = 0LL;
  v19 = 0LL;
  Callback = 0LL;
  if ( byte_180152408 )
    return 3221225738LL;
  WnfUserSubscription = RtlRunOnceExecuteOnce(&RunOnce, RtlpInitializeWnf, 0LL, 0LL);
  if ( WnfUserSubscription >= 0 )
  {
    if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup()) != 0 )
    {
      WnfUserSubscription = RtlpCreateWnfUserSubscription(
                              (unsigned int)&Callback,
                              a3,
                              a4,
                              a5,
                              SerializationGroup,
                              a8,
                              a9);
      if ( WnfUserSubscription < 0
        || (WnfUserSubscription = RtlpCreateWnfNameSubscription(&v19, a2, a6), WnfUserSubscription < 0) )
      {
        if ( Callback )
          RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Callback);
        if ( SerializationGroup )
          RtlpDecrementWnfSerializationGroup(SerializationGroup);
      }
      else
      {
        v14 = Callback;
        v15 = v19;
        v16 = Callback;
        *a1 = Callback;
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
