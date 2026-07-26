/*
 * XREFs of ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A430C
 * Callers:
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00A41D4 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A527C (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C00AE400 (-ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 *     ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C00DD600 (-ndisVBusDetachComplete@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     ??0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A462C (--0KLockThisShared@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00CEF1C (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisBindEnumerateProtocolDrivers(
        void (__fastcall *a1)(__int64, volatile signed __int32 **),
        __int64 a2)
{
  __int64 v4; // r8
  unsigned __int64 i; // rdi
  volatile signed __int32 *v6; // rbx
  KLockHolder v7; // [rsp+20h] [rbp-28h] BYREF
  volatile signed __int32 *v8; // [rsp+60h] [rbp+18h] BYREF

  KLockThisShared::KLockThisShared((KLockThisShared *)&v7, (struct KPushLockBase *)(qword_1C0089678 + 8));
  v4 = qword_1C0089678;
  for ( i = 0LL; i < *(unsigned int *)(v4 + 64); ++i )
  {
    if ( i >= *(unsigned int *)(v4 + 64) )
      __fastfail(0xBAD0FFu);
    v6 = *(volatile signed __int32 **)(*(_QWORD *)(v4 + 72) + 8 * i);
    if ( v6 )
      _InterlockedIncrement(v6 + 16);
    ExReleasePushLockEx(v7.m_Lock, 0LL);
    KeLeaveCriticalRegion();
    v8 = v6;
    if ( v6 )
      _InterlockedIncrement(v6 + 16);
    a1(a2, &v8);
    KeEnterCriticalRegion();
    v7.m_Region.m_Entered = 1;
    ExAcquirePushLockSharedEx(v7.m_Lock, 0LL);
    v4 = qword_1C0089678;
    v7.m_State = Shared;
    if ( *(unsigned int *)(qword_1C0089678 + 64) < i )
      goto LABEL_16;
    if ( i >= *(unsigned int *)(qword_1C0089678 + 64) )
      __fastfail(0xBAD0FFu);
    if ( (*(_QWORD *)(*(_QWORD *)(qword_1C0089678 + 72) + 8 * i) != 0LL) != (v6 != 0LL) )
LABEL_16:
      i = 0LL;
    if ( v6 )
    {
      if ( _InterlockedExchangeAdd(v6 + 16, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v6);
      v4 = qword_1C0089678;
    }
  }
  KLockHolder::~KLockHolder(&v7);
}
