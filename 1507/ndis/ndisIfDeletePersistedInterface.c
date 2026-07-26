/*
 * XREFs of ndisIfDeletePersistedInterface @ 0x1C003E528
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C0021F14 (ndisCheckIfTypeMismatch.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00B3714 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C64F8 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001ACC0 (ndisIfFindInterfaceByNetLuid.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C003B744 (-ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z.c)
 *     Template_qqq @ 0x1C003D994 (Template_qqq.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00B2294 (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
 *     ndisInitializeNsi @ 0x1C00B3934 (ndisInitializeNsi.c)
 *     NdisIfDeregisterInterface @ 0x1C00C63E0 (NdisIfDeregisterInterface.c)
 */

__int64 __fastcall ndisIfDeletePersistedInterface(__int64 a1)
{
  NET_IFINDEX Flink_high; // ebx
  unsigned int v3; // edi
  _LIST_ENTRY *InterfaceByNetLuid; // rax
  KIRQL v5; // r8
  _LIST_ENTRY *v6; // rax
  bool v7; // bl
  __int64 v8; // r14
  KIRQL v9; // r8
  __int64 v10; // rcx
  __int64 v11; // rdx
  int v12; // ebx
  _QWORD v14[10]; // [rsp+30h] [rbp-50h] BYREF
  int v15; // [rsp+B0h] [rbp+30h] BYREF
  union _NET_LUID_LH v16; // [rsp+B8h] [rbp+38h] BYREF

  Flink_high = 0;
  v15 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_q(0xB8u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1);
  if ( !ndisNsiInitialized )
    ndisInitializeNsi();
  if ( a1 )
  {
    v16.Value = (*(_DWORD *)a1 & 0xFFFFFF | ((unsigned __int64)*(unsigned __int16 *)(a1 + 4) << 24)) << 24;
    KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)v16.Value);
    if ( InterfaceByNetLuid )
      Flink_high = HIDWORD(InterfaceByNetLuid->Flink);
    KeReleaseSpinLock(&ndisIfListLock, v5);
    if ( Flink_high
      && (NdisIfDeregisterInterface(Flink_high),
          KeAcquireSpinLockRaiseToDpc(&ndisIfListLock),
          v6 = ndisIfFindInterfaceByNetLuid((_LIST_ENTRY *)v16.Value),
          v7 = v6 != 0LL,
          v8 = (__int64)v6,
          KeReleaseSpinLock(&ndisIfListLock, v9),
          v7) )
    {
      v15 |= 1u;
      ndisIfUpdatePersistedInterfaceInfo((unsigned __int8 *)(v8 + 1312), 4u, 0x43Cu, (unsigned __int8 *)&v15);
      v3 = -1073741823;
      if ( (unsigned __int8)byte_1C008531D >= 2u )
        WPP_SF_q(0xB9u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, v8);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000) != 0 )
        Template_qqq(v10, &DeregisterInterfaceFailed, &NDIS_PROVIDER_ID, -1073741823, 149, v8);
    }
    else
    {
      memset(v14, 0, 0x48uLL);
      v14[0] = 0LL;
      v14[2] = &NPI_MS_NDIS_MODULEID;
      LODWORD(v14[1]) = 0;
      v14[5] = &v16;
      LODWORD(v14[3]) = 10;
      v14[4] = 0x300000000LL;
      LODWORD(v14[6]) = 8;
      v14[7] = 0LL;
      LODWORD(v14[8]) = 0;
      v12 = 0;
      if ( (int)NsiSetAllParametersEx(v14) < 0 )
        v12 = -1073741823;
      if ( (int)ndisIfDeletePersistedInterfaceIsolationInfo(v16, v11) < 0 )
        v12 = -1073741823;
      v3 = v12;
    }
  }
  else
  {
    v3 = -1073741811;
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_qD(186LL, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, a1, v3);
  return v3;
}
