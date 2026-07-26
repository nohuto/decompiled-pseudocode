/*
 * XREFs of ndisIfDeletePersistedInterface @ 0x1C0043658
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C005D498 (ndisCheckIfTypeMismatch.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00C3974 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C44B8 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0014670 (ndisIfFindInterfaceByNetLuid.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C0040480 (-ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z.c)
 *     Template_qqq @ 0x1C0042698 (Template_qqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     NdisIfDeregisterInterface @ 0x1C009CC90 (NdisIfDeregisterInterface.c)
 *     ndisInitializeNsi @ 0x1C00B2F70 (ndisInitializeNsi.c)
 *     ?ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z @ 0x1C00C3DBC (-ndisIfUpdatePersistedInterfaceInfo@@YAHPEAEKK0@Z.c)
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
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(0xB8u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
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
      if ( (unsigned __int8)byte_1C00895DD >= 2u )
        WPP_SF_q(0xB9u, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, v8);
      if ( (Microsoft_Windows_NDISEnableBits & 0x10000) != 0 )
        Template_qqq(v10, &DeregisterInterfaceFailed, &NDIS_PROVIDER_ID, -1073741823, 60, v8);
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
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(186LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, v3);
  return v3;
}
