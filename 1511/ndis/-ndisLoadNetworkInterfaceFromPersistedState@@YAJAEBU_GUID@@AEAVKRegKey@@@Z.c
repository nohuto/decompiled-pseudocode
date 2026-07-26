/*
 * XREFs of ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00A7BD4
 * Callers:
 *     ndisIfCreateOrUpdateInterface @ 0x1C0013E60 (ndisIfCreateOrUpdateInterface.c)
 *     ?ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ @ 0x1C00A7A68 (-ReadNetworkInterfaceListV2@BindRegistry@Ndis@@YAJXZ.c)
 * Callees:
 *     ?ndisCompareGuid@@YAJPEBU_GUID@@0@Z @ 0x1C001B3C4 (-ndisCompareGuid@@YAJPEBU_GUID@@0@Z.c)
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001ECD4 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C0020CA8 (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C0025204 (--3@YAXPEAX@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00A1440 (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 */

__int64 __fastcall ndisLoadNetworkInterfaceFromPersistedState(const struct _GUID *this, struct KRegKey *a2)
{
  struct _GUID *v4; // rbx
  union _NET_LUID_LH *PoolWithTag; // rax
  struct _GUID *v6; // rsi
  signed int v7; // edi
  struct _GUID v9; // [rsp+20h] [rbp-18h] BYREF
  struct KRegKey v10; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0LL;
  PoolWithTag = (union _NET_LUID_LH *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x484uLL, 0x6669444Eu);
  v6 = (struct _GUID *)PoolWithTag;
  if ( PoolWithTag )
  {
    v4 = (struct _GUID *)PoolWithTag;
    v7 = Ndis::BindRegistry::ReadNetworkInterfaceV2((Ndis::BindRegistry *)this, a2, &v10, PoolWithTag);
    if ( v7 >= 0 )
    {
      if ( !(unsigned int)ndisCompareGuid(v4 + 66, &ndisDefaultNetworkGuid) )
        v4[66] = *ndisIfGetDefaultNetworkGuid(&v9);
      v7 = (unsigned int)ndisIfCreateInterfaceFromPersistentStore(
                           (union _NET_LUID_LH *)&v10,
                           v6,
                           NdisIfBlockSourcePersistedNetSetup) != 0
         ? 0xC0000001
         : 0;
    }
  }
  else
  {
    v7 = -1073741670;
  }
  if ( v4 )
    operator delete(v4);
  return (unsigned int)v7;
}
