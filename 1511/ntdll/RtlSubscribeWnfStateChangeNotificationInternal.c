/*
 * XREFs of RtlSubscribeWnfStateChangeNotificationInternal @ 0x1800537FC
 * Callers:
 *     RtlRegisterForWnfMetaNotification @ 0x18004EF60 (RtlRegisterForWnfMetaNotification.c)
 *     RtlSubscribeWnfStateChangeNotification @ 0x1800537B0 (RtlSubscribeWnfStateChangeNotification.c)
 * Callees:
 *     RtlUnsubscribeWnfStateChangeNotification @ 0x180004850 (RtlUnsubscribeWnfStateChangeNotification.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpCreateSerializationGroup @ 0x180051C38 (RtlpCreateSerializationGroup.c)
 *     RtlpAddWnfUserSubToNameSub @ 0x180053924 (RtlpAddWnfUserSubToNameSub.c)
 *     RtlpCreateWnfNameSubscription @ 0x180053A70 (RtlpCreateWnfNameSubscription.c)
 *     RtlpCreateWnfUserSubscription @ 0x180053C2C (RtlpCreateWnfUserSubscription.c)
 *     RtlRunOnceExecuteOnce @ 0x180054420 (RtlRunOnceExecuteOnce.c)
 *     RtlpDecrementWnfSerializationGroup @ 0x1800825A0 (RtlpDecrementWnfSerializationGroup.c)
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
  volatile signed __int32 *SerializationGroup; // rdi
  NTSTATUS WnfUserSubscription; // ebx
  NTSTATUS (__cdecl *v14)(WNF_STATE_NAME, WNF_CHANGE_STAMP, PWNF_TYPE_ID, PVOID, const void *, ULONG); // rdi
  __int64 v15; // rcx
  PWNF_USER_CALLBACK v16; // rdx
  PWNF_USER_CALLBACK Callback; // [rsp+40h] [rbp-28h] BYREF
  __int64 v19; // [rsp+48h] [rbp-20h] BYREF

  SerializationGroup = 0LL;
  v19 = 0LL;
  Callback = 0LL;
  if ( byte_180145248 )
    return 3221225738LL;
  WnfUserSubscription = RtlRunOnceExecuteOnce(&stru_1801461E8, (PRTL_RUN_ONCE_INIT_FN)RtlpInitializeWnf, 0LL, 0LL);
  if ( WnfUserSubscription >= 0 )
  {
    if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup(a7)) != 0LL )
    {
      WnfUserSubscription = RtlpCreateWnfUserSubscription(
                              (unsigned int)&Callback,
                              a3,
                              a4,
                              a5,
                              (__int64)SerializationGroup,
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
