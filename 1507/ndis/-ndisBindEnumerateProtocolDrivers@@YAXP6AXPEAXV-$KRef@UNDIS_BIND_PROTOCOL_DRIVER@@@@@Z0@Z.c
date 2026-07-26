/*
 * XREFs of ?ndisBindEnumerateProtocolDrivers@@YAXP6AXPEAXV?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@@Z0@Z @ 0x1C00A1638
 * Callers:
 *     ?ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z @ 0x1C009F280 (-ndisVBusNmrClientAttachProvider@@YAJPEAX0PEBU_NPI_REGISTRATION_INSTANCE@@@Z.c)
 *     ?EndBindOperation@BindEngine@Ndis@@SAXXZ @ 0x1C00A0DB4 (-EndBindOperation@BindEngine@Ndis@@SAXXZ.c)
 *     ?Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00A1C64 (-Apply@BindRules@Ndis@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ @ 0x1C00A2040 (-EndPolicyUpdates@BindEngine@Ndis@@QEAAXXZ.c)
 *     ?UpdateBindings@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2190 (-UpdateBindings@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?Iterate@BindEngine@Ndis@@AEAA_NXZ @ 0x1C00A222C (-Iterate@BindEngine@Ndis@@AEAA_NXZ.c)
 *     ?ApplyRules@BindEngine@Ndis@@AEAAXXZ @ 0x1C00A2FD4 (-ApplyRules@BindEngine@Ndis@@AEAAXXZ.c)
 *     ?ndisVBusDetachComplete@@YAXPEAX@Z @ 0x1C00DDE20 (-ndisVBusDetachComplete@@YAXPEAX@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ??_GKRefHolder@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z @ 0x1C00D00EC (--_GKRefHolder@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@QEAAPEAXI@Z.c)
 */

void __fastcall ndisBindEnumerateProtocolDrivers(
        void (__fastcall *a1)(__int64, volatile signed __int32 **),
        __int64 a2)
{
  __int64 v3; // rdi
  __int64 v5; // r8
  unsigned __int64 i; // rsi
  volatile signed __int32 *v7; // rbx
  __int64 v8; // [rsp+28h] [rbp-30h]
  volatile signed __int32 *v9; // [rsp+70h] [rbp+18h] BYREF

  v3 = qword_1C0085818 + 8;
  v8 = qword_1C0085818 + 8;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  v5 = qword_1C0085818;
  for ( i = 0LL; i < *(unsigned int *)(v5 + 64); ++i )
  {
    if ( i >= *(unsigned int *)(v5 + 64) )
      __fastfail(0xBAD0FFu);
    v7 = *(volatile signed __int32 **)(*(_QWORD *)(v5 + 72) + 8 * i);
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 16);
      v3 = v8;
    }
    ExReleasePushLockEx(v3, 0LL);
    KeLeaveCriticalRegion();
    v9 = v7;
    if ( v7 )
    {
      _InterlockedIncrement(v7 + 16);
      v3 = v8;
    }
    a1(a2, &v9);
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(v3, 0LL);
    v5 = qword_1C0085818;
    if ( *(unsigned int *)(qword_1C0085818 + 64) < i )
      goto LABEL_16;
    if ( i >= *(unsigned int *)(qword_1C0085818 + 64) )
      __fastfail(0xBAD0FFu);
    if ( (*(_QWORD *)(*(_QWORD *)(qword_1C0085818 + 72) + 8 * i) != 0LL) != (v7 != 0LL) )
LABEL_16:
      i = 0LL;
    if ( v7 )
    {
      if ( _InterlockedExchangeAdd(v7 + 16, 0xFFFFFFFF) == 1 )
        KRef<NDIS_BIND_PROTOCOL_DRIVER>::KRefHolder::`scalar deleting destructor'((PVOID)v7);
      v5 = qword_1C0085818;
      v3 = v8;
    }
  }
  ExReleasePushLockEx(v3, 0LL);
  KeLeaveCriticalRegion();
}
