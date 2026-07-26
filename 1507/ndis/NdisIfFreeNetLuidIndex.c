/*
 * XREFs of NdisIfFreeNetLuidIndex @ 0x1C00C63F0
 * Callers:
 *     ndisCheckIfTypeMismatch @ 0x1C0021F14 (ndisCheckIfTypeMismatch.c)
 *     ?ndisIfDeleteCompartment@@YAJI@Z @ 0x1C003B450 (-ndisIfDeleteCompartment@@YAJI@Z.c)
 *     ?ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z @ 0x1C003B744 (-ndisIfDeletePersistedInterfaceIsolationInfo@@YAJT_NET_LUID_LH@@@Z.c)
 *     ndisFilterAttachCleanUp @ 0x1C0054074 (ndisFilterAttachCleanUp.c)
 *     ?ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_LUID_LH@@PEAU_NDIS_NSI_INTERFACE_PERSIST_RW@@PEAU_NDIS_FILTER_BLOCK@@W4NdisIfBlockSource@@@Z @ 0x1C00A761C (-ndisIfCreateInterface@@YAJPEAU_NDIS_IF_NETWORK_BLOCK@@EPEAU_NDIS_NSI_COMPARTMENT_RW@@PEAT_NET_L.c)
 *     ?ndisIfInitGetInterfaceList@@YAJXZ @ 0x1C00B3714 (-ndisIfInitGetInterfaceList@@YAJXZ.c)
 *     ndisIfCreateInterfaceForiScsi @ 0x1C00C64F8 (ndisIfCreateInterfaceForiScsi.c)
 *     ndisHandlePnPRequest @ 0x1C00E5000 (ndisHandlePnPRequest.c)
 * Callees:
 *     WPP_SF_dl @ 0x1C003E224 (WPP_SF_dl_ea_1C003E224.c)
 *     WPP_SF_dlL @ 0x1C003E268 (WPP_SF_dlL.c)
 *     ?ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z @ 0x1C00B3230 (-ndisIfWriteRegistry@@YAHPEAU_NDIS_IF_TYPE@@@Z.c)
 */

// local variable allocation has failed, the output may be wrong!
NDIS_STATUS __stdcall NdisIfFreeNetLuidIndex(NET_IFTYPE ifType, UINT32 NetLuidIndex)
{
  NDIS_STATUS v4; // ebx
  _LIST_ENTRY *i; // rcx
  __int64 v6; // rax
  __int64 v7; // r9
  UINT32 v8; // r8d
  _LIST_ENTRY *Blink; // rdx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx

  v4 = 0;
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_dl(ifType, *(__int64 *)&NetLuidIndex, ifType, NetLuidIndex);
  KeWaitForSingleObject(&ndisUsedIndicesMutex, Executive, 0, 0, 0LL);
  ndisUsedIndicesMutexOwner = 2231400;
  if ( NetLuidIndex > 0x1000 )
  {
LABEL_13:
    v4 = -1073741811;
  }
  else
  {
    for ( i = ndisIfTypesList.Flink; i != &ndisIfTypesList; i = i->Flink )
    {
      if ( LOWORD(i[1].Flink) == ifType )
      {
        v6 = NetLuidIndex >> 3;
        if ( (int)v6 + 1 < (unsigned int)v6 || LODWORD(i[2].Blink) < (unsigned int)(v6 + 1) )
          goto LABEL_13;
        v7 = (unsigned int)v6;
        v8 = NetLuidIndex & 7;
        *((_BYTE *)&i[3].Flink->Flink + (unsigned int)v6) = *((_BYTE *)&i[3].Flink->Flink + v6) & ~(1 << v8);
        Blink = i[3].Blink;
        v10 = *((unsigned __int8 *)&Blink->Flink + (unsigned int)v6);
        if ( _bittest(&v10, v8) )
        {
          *((_BYTE *)&Blink->Flink + v7) = v10 & ~(1 << v8);
          v4 = ndisIfWriteRegistry((struct _NDIS_IF_TYPE *)i);
        }
        break;
      }
    }
  }
  ndisUsedIndicesMutexOwner = 0;
  KeReleaseMutex(&ndisUsedIndicesMutex, 0);
  if ( (unsigned __int8)byte_1C008531D >= 4u )
    WPP_SF_dlL(v12, v11, ifType, NetLuidIndex);
  return v4;
}
