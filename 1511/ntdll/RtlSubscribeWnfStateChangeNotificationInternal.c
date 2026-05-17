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
  volatile signed __int32 *SerializationGroup; // rdi
  char *v13; // rdx
  int WnfUserSubscription; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdi
  __int64 v18; // rcx
  unsigned __int64 v19; // rdx
  unsigned __int64 v21; // [rsp+40h] [rbp-28h] BYREF
  __int64 v22; // [rsp+48h] [rbp-20h] BYREF

  SerializationGroup = 0LL;
  v22 = 0LL;
  v21 = 0LL;
  if ( byte_180145248 )
    return 3221225738LL;
  WnfUserSubscription = RtlRunOnceExecuteOnce(&unk_1801461E8, RtlpInitializeWnf, 0LL, 0LL);
  if ( WnfUserSubscription >= 0 )
  {
    if ( !a7 || (SerializationGroup = RtlpCreateSerializationGroup(a7, v13, v15, v16)) != 0LL )
    {
      WnfUserSubscription = RtlpCreateWnfUserSubscription(
                              (unsigned int)&v21,
                              a3,
                              a4,
                              a5,
                              (__int64)SerializationGroup,
                              a8,
                              a9);
      if ( WnfUserSubscription < 0
        || (WnfUserSubscription = RtlpCreateWnfNameSubscription(&v22, a2, a6), WnfUserSubscription < 0) )
      {
        if ( v21 )
          RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v21);
        if ( SerializationGroup )
          RtlpDecrementWnfSerializationGroup(SerializationGroup);
      }
      else
      {
        v17 = v21;
        v18 = v22;
        v19 = v21;
        *a1 = v21;
        WnfUserSubscription = RtlpAddWnfUserSubToNameSub(v18, v19);
        if ( WnfUserSubscription < 0 )
        {
          *a1 = 0LL;
          RtlUnsubscribeWnfStateChangeNotification(v17);
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
