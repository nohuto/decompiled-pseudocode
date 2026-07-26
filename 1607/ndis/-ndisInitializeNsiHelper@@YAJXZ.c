/*
 * XREFs of ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C001CC6C
 * Callers:
 *     ?ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1C00AE2E0 (-ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C000D73C (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C0014FE8 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C001CE2C (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C001D070 (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     ndisStartNsiClient @ 0x1C001D5F8 (ndisStartNsiClient.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C00429F8 (WPP_SF_d.c)
 *     ndisStopNsiProvider @ 0x1C0043DA4 (ndisStopNsiProvider.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A15A8 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C00A17D0 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A24F0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A8C10 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00AE2F8 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ndisStartNsiProvider @ 0x1C00AE3BC (ndisStartNsiProvider.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00C3764 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00C3974 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 */

__int64 __fastcall ndisInitializeNsiHelper(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  struct _LIST_ENTRY *Flink; // r14
  int Network; // ebp
  __int64 v6; // rsi
  unsigned __int8 v7; // r12
  KIRQL v8; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // r15
  unsigned __int16 v10; // cx
  KIRQL v11; // bl
  Ndis::BindRegistry *v12; // rcx
  KIRQL v14; // bl
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_(23LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a3);
  if ( ndisNsiInitialized == 1 )
  {
LABEL_19:
    started = 0;
  }
  else
  {
    started = ndisStartNsiProvider();
    if ( started >= 0 )
    {
      started = ndisStartNsiClient();
      if ( started >= 0 )
      {
        ndisNsiInitialized = 1;
        ndisIfInitGetCompartmentList();
        ndisIfInitGetNetworkList();
        Flink = ndisIfCompartmentList.Flink;
        Network = 0;
        while ( 1 )
        {
          if ( Flink == &ndisIfCompartmentList )
          {
            if ( ndisIsInNetSetupMode() )
              Ndis::BindRegistry::ReadNetworkInterfaceListV2(v12);
            if ( !ndisIsInNetSetupMode() )
              ndisIfInitGetInterfaceList();
            goto LABEL_19;
          }
          v6 = (__int64)Flink;
          Flink = Flink->Flink;
          v7 = 0;
          v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v6 + 80));
          KeReleaseSpinLock(&ndisIfListLock, v8);
          if ( NetworkBlock )
            goto LABEL_9;
          Network = ndisIfCreateNetwork((struct _GUID *)(v6 + 80), *(_DWORD *)(v6 + 16));
          if ( Network >= 0 )
          {
            v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)(v6 + 80));
            KeReleaseSpinLock(&ndisIfListLock, v14);
            if ( !NetworkBlock )
              goto LABEL_13;
LABEL_9:
            *(_QWORD *)(v6 + 56) = NetworkBlock;
            if ( !*(_QWORD *)(v6 + 1704) )
            {
              v10 = *(_WORD *)(v6 + 78);
              if ( v10 )
              {
                v15 = (*(_QWORD *)(v6 + 72) >> 24) & 0xFFFFFF;
                if ( !(unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(v10, &v15, 0, 0) )
                {
LABEL_12:
                  Network = ndisIfCreateInterface(
                              NetworkBlock,
                              v7,
                              (struct _NDIS_NSI_COMPARTMENT_RW *)(v6 + 64),
                              0LL,
                              0LL,
                              0LL,
                              NdisIfBlockSourceAutomaticLoopback);
                  goto LABEL_13;
                }
                *(_QWORD *)(v6 + 72) = 0LL;
              }
              v7 = 1;
              goto LABEL_12;
            }
LABEL_13:
            if ( Network >= 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v6 + 44));
              ndisNsiNotifyClientCompartmentChange(v6, 1LL);
              v11 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
              COMPARTMENTBLOCK_DECREMENT_REF(v6);
              KeReleaseSpinLock(&ndisIfListLock, v11);
            }
          }
        }
      }
      ndisStopNsiProvider();
    }
  }
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_d(24LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, (unsigned int)started);
  return (unsigned int)started;
}
