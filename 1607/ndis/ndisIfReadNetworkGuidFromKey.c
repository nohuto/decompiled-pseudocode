/*
 * XREFs of ndisIfReadNetworkGuidFromKey @ 0x1C0017E8C
 * Callers:
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0011D68 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     ?ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@@Z @ 0x1C00A728C (-ReadNetworkInterfaceV2@BindRegistry@Ndis@@YAJAEBU_GUID@@AEAVKRegKey@@PEAT_NET_LUID_LH@@PEAU_NDI.c)
 * Callees:
 *     ?ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z @ 0x1C000FD90 (-ndisIfFindCompartmentBlockByGuid@@YAPEAU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_GUID@@@Z.c)
 *     ?ndisIfGetDefaultNetworkGuid@@YA?AU_GUID@@XZ @ 0x1C001A00C (-ndisIfGetDefaultNetworkGuid@@YA-AU_GUID@@XZ.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF__guid_ @ 0x1C0042D58 (WPP_SF__guid_.c)
 *     ?QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z @ 0x1C00A7E2C (-QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z.c)
 */

__int64 __fastcall ndisIfReadNetworkGuidFromKey(KRegKey *this, struct _GUID *a2)
{
  int v4; // edi
  int ValueGuid; // eax
  __int64 v6; // r8
  unsigned int v7; // ebx
  KIRQL v9; // di
  struct _NDIS_IF_COMPARTMENT_BLOCK *CompartmentBlockByGuid; // rax
  struct _GUID v11; // [rsp+20h] [rbp-38h] BYREF
  struct _GUID v12; // [rsp+30h] [rbp-28h] BYREF

  v4 = KRegKey::QueryValueGuid(this, L"IsolationCompartment", &v12);
  ValueGuid = KRegKey::QueryValueGuid(this, L"IsolationNetwork", a2);
  v7 = 0;
  if ( v4 < 0 )
  {
    if ( ValueGuid >= 0 )
      return v7;
    if ( v4 == -1073741772 && ValueGuid == -1073741772 )
    {
      *a2 = *ndisIfGetDefaultNetworkGuid(&v11);
      return v7;
    }
    return (unsigned int)-1073741823;
  }
  if ( ValueGuid >= 0 )
  {
    if ( (unsigned __int8)byte_1C00895DD >= 3u )
      WPP_SF_(188LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v6);
    return (unsigned int)-1073741823;
  }
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  CompartmentBlockByGuid = ndisIfFindCompartmentBlockByGuid(&v12);
  if ( CompartmentBlockByGuid )
  {
    *a2 = CompartmentBlockByGuid->LoopbackNetwork->NetworkGuid;
    KeReleaseSpinLock(&ndisIfListLock, v9);
    return v7;
  }
  KeReleaseSpinLock(&ndisIfListLock, v9);
  if ( (unsigned __int8)byte_1C00895DD >= 3u )
    WPP_SF__guid_(189LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, &v12);
  return 3221225473LL;
}
