/*
 * XREFs of NdisIfFreeNetLuidIndex @ 0x1C009CBB0
 * Callers:
 *     ndisFilterAttachCleanUp @ 0x1C0011700 (ndisFilterAttachCleanUp.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C0040174 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C0040480 (-ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z.c)
 *     ndisCheckIfTypeMismatch @ 0x1C005D498 (ndisCheckIfTypeMismatch.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A24F0 (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00C3974 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C44B8 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisHandlePnPRequest @ 0x1C00EBC18 (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_SF_dl @ 0x1C0042FA4 (WPP_SF_dl_ea_1C0042FA4.c)
 *     WPP_SF_dlL @ 0x1C0042FE8 (WPP_SF_dlL.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C00C3F9C (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
NDIS_STATUS __stdcall NdisIfFreeNetLuidIndex(NET_IFTYPE ifType, UINT32 NetLuidIndex)
{
  NDIS_STATUS v4; // ebx
  struct _NDIS_IF_TYPE *i; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  UINT32 v8; // r8d
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_dl(ifType, *(__int64 *)&NetLuidIndex, ifType, NetLuidIndex);
  KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
  if ( NetLuidIndex > 0x1000 )
  {
LABEL_15:
    v4 = -1073741811;
  }
  else
  {
    for ( i = ndisIfTypesList; i != (struct _NDIS_IF_TYPE *)&ndisIfTypesList; i = *(struct _NDIS_IF_TYPE **)i )
    {
      if ( *((_WORD *)i + 8) == ifType )
      {
        v6 = NetLuidIndex >> 3;
        if ( (int)v6 + 1 < (unsigned int)v6 || *((_DWORD *)i + 10) < (unsigned int)(v6 + 1) )
          goto LABEL_15;
        v7 = (unsigned int)v6;
        v8 = NetLuidIndex & 7;
        *(_BYTE *)(*((_QWORD *)i + 6) + (unsigned int)v6) = *(_BYTE *)(*((_QWORD *)i + 6) + v6) & ~(1 << v8);
        v9 = *((_QWORD *)i + 7);
        v10 = *(unsigned __int8 *)(v9 + (unsigned int)v6);
        if ( _bittest(&v10, v8) )
        {
          *(_BYTE *)(v9 + v7) = v10 & ~(1 << v8);
          v4 = ndisIfWriteRegistry(i);
        }
        break;
      }
    }
  }
  KeReleaseMutex(&ndisUsedIndicesMutex, 0);
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_dlL(v12, v11, ifType, NetLuidIndex);
  return v4;
}
