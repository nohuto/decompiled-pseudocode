/*
 * XREFs of ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00B3714
 * Callers:
 *     ?ndisInitializeNsiHelper@@YAJXZ @ 0x1C00120CC (-ndisInitializeNsiHelper@@YAJXZ.c)
 * Callees:
 *     ?ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@W4NdisIfBlockSource@@@Z @ 0x1C001AB24 (-ndisIfCreateInterfaceFromPersistentStore@@YAHPEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     WPP_SF_d @ 0x1C003DCF4 (WPP_SF_d.c)
 *     ndisIfDeletePersistedInterface @ 0x1C003E528 (ndisIfDeletePersistedInterface.c)
 *     WPP_SF_dd @ 0x1C003F208 (WPP_SF_dd_ea_1C003F208.c)
 *     NdisIfFreeNetLuidIndex @ 0x1C00C63F0 (NdisIfFreeNetLuidIndex.c)
 */

__int64 ndisIfInitGetInterfaceList(void)
{
  char *PoolWithTag; // rdi
  int InterfaceFromPersistentStore; // ebx
  unsigned int v2; // ecx
  unsigned int v3; // edx
  __int64 v4; // rbx
  unsigned int v5; // esi
  __int64 v6; // r14
  __int64 i; // r15
  __int64 v8; // rdx
  NET_IFTYPE v10; // dx
  __int64 v11; // rax
  _QWORD v12[14]; // [rsp+20h] [rbp-39h] BYREF
  UINT32 NetLuidIndex; // [rsp+C0h] [rbp+67h] BYREF
  NET_IFTYPE v14; // [rsp+C4h] [rbp+6Bh]

  PoolWithTag = 0LL;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_(0xA7u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids);
  memset(v12, 0, sizeof(v12));
  LODWORD(v12[1]) = 0;
  v12[2] = &NPI_MS_NDIS_MODULEID;
  LODWORD(v12[3]) = 10;
  v12[4] = 0x100000000LL;
  v12[5] = 0LL;
  LODWORD(v12[6]) = 8;
  v12[7] = 0LL;
  LODWORD(v12[8]) = 1156;
  LODWORD(v12[13]) = 0;
  InterfaceFromPersistentStore = NsiEnumerateObjectsAllParametersEx(v12);
  if ( InterfaceFromPersistentStore >= 0 )
  {
    v2 = v12[13];
    if ( LODWORD(v12[13]) )
    {
      while ( 1 )
      {
        if ( PoolWithTag )
        {
          ExFreePoolWithTag(PoolWithTag, 0);
          v2 = v12[13];
          PoolWithTag = 0LL;
        }
        v3 = (8 * v2 + 7) & 0xFFFFFFF8;
        if ( 8 * (unsigned __int64)v2 > 0xFFFFFFFF || v3 + 1156 * v2 < v3 )
        {
          InterfaceFromPersistentStore = -1073741670;
          goto LABEL_19;
        }
        v4 = v3;
        PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, v3 + 1156LL * v2, 0x6669444Eu);
        if ( !PoolWithTag )
          break;
        memset(PoolWithTag, 0, v4 + 1156LL * LODWORD(v12[13]));
        v12[5] = PoolWithTag;
        v12[7] = &PoolWithTag[v4];
        LODWORD(v12[6]) = 8;
        LODWORD(v12[8]) = 1156;
        InterfaceFromPersistentStore = NsiEnumerateObjectsAllParametersEx(v12);
        if ( InterfaceFromPersistentStore != 261 )
          goto LABEL_11;
        v2 = v12[13];
      }
      InterfaceFromPersistentStore = -1073741670;
LABEL_11:
      if ( InterfaceFromPersistentStore >= 0 )
      {
        v5 = 0;
        v6 = v12[5];
        for ( i = v12[7]; v5 < LODWORD(v12[13]); ++v5 )
        {
          v8 = i + 1156LL * v5;
          if ( *(_BYTE *)v8 == 0xAE && *(_BYTE *)(v8 + 1) && *(_WORD *)(v8 + 2) >= 0x484u )
          {
            if ( (*(_DWORD *)(v8 + 1084) & 1) != 0 )
            {
              v10 = *(_WORD *)(v6 + 8LL * v5 + 6);
              v14 = v10;
              v11 = (*(_QWORD *)(v6 + 8LL * v5) >> 24) & 0xFFFFFFLL;
              NetLuidIndex = (*(_QWORD *)(v6 + 8LL * v5) >> 24) & 0xFFFFFF;
              if ( (unsigned __int8)byte_1C008531D >= 4u )
                WPP_SF_dd(0xA8u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, v10, v11);
              ndisIfDeletePersistedInterface((__int64)&NetLuidIndex);
              NdisIfFreeNetLuidIndex(v14, NetLuidIndex);
            }
            else
            {
              InterfaceFromPersistentStore = ndisIfCreateInterfaceFromPersistentStore(
                                               (union _NET_LUID_LH *)(v6 + 8LL * v5),
                                               (struct _GUID *)v8,
                                               NdisIfBlockSourcePersistedNsi);
            }
          }
        }
      }
LABEL_19:
      if ( PoolWithTag )
        ExFreePoolWithTag(PoolWithTag, 0);
    }
  }
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_d(0xA9u, &WPP_56ef47bcd2b9f0689e12eeceae5d2bd7_Traceguids, InterfaceFromPersistentStore);
  return (unsigned int)InterfaceFromPersistentStore;
}
