/*
 * XREFs of ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C0020060
 * Callers:
 *     ?ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z @ 0x1C00A99B0 (-ndisInitializeNsiInitFn@@YAKPEAT_RTL_RUN_ONCE@@PEAXPEAPEAX@Z.c)
 * Callees:
 *     ?ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z @ 0x1C001B2F4 (-ndisIfFindNetworkBlock@@YAPEAU_NDIS_IF_NETWORK_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfInitGetNetworkList@@YAJXZ @ 0x1C0020220 (-ndisIfInitGetNetworkList@@YAJXZ.c)
 *     ?ndisIfInitGetCompartmentList@@YAJXZ @ 0x1C0020464 (-ndisIfInitGetCompartmentList@@YAJXZ.c)
 *     COMPARTMENTBLOCK_DECREMENT_REF @ 0x1C0020C94 (COMPARTMENTBLOCK_DECREMENT_REF.c)
 *     ndisStartNsiClient @ 0x1C0020D34 (ndisStartNsiClient.c)
 *     WPP_SF_ @ 0x1C003EBD4 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     ndisStopNsiProvider @ 0x1C0040250 (ndisStopNsiProvider.c)
 *     ?ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z @ 0x1C009E688 (-ndisIfAllocateAndVerifyNetLuidIndex@@YAHGPEAIEE@Z.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C009F918 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIsInNetSetupMode@@YA_NXZ @ 0x1C00A7A34 (-ndisIsInNetSetupMode@@YA_NXZ.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A7A68 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 *     ?ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@Z @ 0x1C00A98A4 (-ndisNsiNotifyClientCompartmentChange@@YAXPEAU_NDIS_IF_COMPARTMENT_BLOCK@@W4_NSI_NOTIFICATION@@@.c)
 *     ndisStartNsiProvider @ 0x1C00A9968 (ndisStartNsiProvider.c)
 *     ?ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z @ 0x1C00BEA04 (-ndisIfCreateNetwork@@YAJPEAU_GUID@@I@Z.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00BEC2C (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 */

__int64 __fastcall ndisInitializeNsiHelper(__int64 a1, __int64 a2, __int64 a3)
{
  int started; // ebx
  struct _LIST_ENTRY *Flink; // r14
  int Network; // ebp
  struct _LIST_ENTRY *v6; // rsi
  unsigned __int8 v7; // r12
  KIRQL v8; // bl
  struct _NDIS_IF_NETWORK_BLOCK *NetworkBlock; // r15
  unsigned __int16 Blink_high; // cx
  KIRQL v11; // bl
  Ndis::BindRegistry *v12; // rcx
  KIRQL v14; // bl
  unsigned int v15; // [rsp+70h] [rbp+8h] BYREF

  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_(23LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a3);
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
          v6 = Flink;
          Flink = Flink->Flink;
          v7 = 0;
          v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
          NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)&v6[5]);
          KeReleaseSpinLock(&ndisIfListLock, v8);
          if ( NetworkBlock )
            goto LABEL_9;
          Network = ndisIfCreateNetwork((struct _GUID *)&v6[5], (unsigned int)v6[1].Flink);
          if ( Network >= 0 )
          {
            v14 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
            NetworkBlock = ndisIfFindNetworkBlock((const struct _GUID *)&v6[5]);
            KeReleaseSpinLock(&ndisIfListLock, v14);
            if ( !NetworkBlock )
              goto LABEL_13;
LABEL_9:
            v6[3].Blink = &NetworkBlock->Link;
            if ( !v6[105].Blink )
            {
              Blink_high = HIWORD(v6[4].Blink);
              if ( Blink_high )
              {
                v15 = ((unsigned __int64)v6[4].Blink >> 24) & 0xFFFFFF;
                if ( !(unsigned int)ndisIfAllocateAndVerifyNetLuidIndex(Blink_high, &v15, 0, 0) )
                {
LABEL_12:
                  Network = ndisIfCreateInterface(
                              NetworkBlock,
                              v7,
                              (struct _NDIS_NSI_COMPARTMENT_RW *)&v6[4],
                              0LL,
                              0LL,
                              0LL,
                              NdisIfBlockSourceAutomaticLoopback);
                  goto LABEL_13;
                }
                v6[4].Blink = 0LL;
              }
              v7 = 1;
              goto LABEL_12;
            }
LABEL_13:
            if ( Network >= 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)&v6[2].Blink + 1);
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
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_d(24LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (unsigned int)started);
  return (unsigned int)started;
}
