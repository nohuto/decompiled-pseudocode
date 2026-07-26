/*
 * XREFs of ndisReferenceWithTag @ 0x1C0007F00
 * Callers:
 *     ndisReferenceRef @ 0x1C0004A64 (ndisReferenceRef.c)
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfReferenceMiniport @ 0x1C0005764 (ndisIfReferenceMiniport.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0005B90 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C00066F0 (ndisFOidRequestCompleteInternal.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C00069E0 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisInterruptDpc @ 0x1C0006D00 (ndisInterruptDpc.c)
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00094B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C000A040 (ndisMTimerDpcX.c)
 *     ndisMOidRequest @ 0x1C000A1C0 (ndisMOidRequest.c)
 *     ndisQueueRequestWorkItem @ 0x1C000A40C (ndisQueueRequestWorkItem.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000A800 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisReferenceRefNoCheck @ 0x1C000B3FC (ndisReferenceRefNoCheck.c)
 *     ndisMWakeUpDpcX @ 0x1C000F8C0 (ndisMWakeUpDpcX.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C0013E60 (ndisIfCreateOrUpdateInterface.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0014380 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisMTimerObjectDpc @ 0x1C0015390 (ndisMTimerObjectDpc.c)
 *     ?ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z @ 0x1C00155EC (-ndisQueueDpcWorkItem@@YAXPEAU_KDPC@@PEAX11E@Z.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AD14 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C001AD78 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisMReferenceIfBlock @ 0x1C001DD3C (ndisMReferenceIfBlock.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001F998 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C001FF1C (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C0024BB8 (ndisReferenceMiniportNoCheck.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003D550 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003D8B0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfAliasChange @ 0x1C003F5D0 (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C003FF20 (ndisIfSetIfDescr.c)
 * Callees:
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C0010B84 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C0010C10 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C006E1E0 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 */

void __fastcall ndisReferenceWithTag(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *v4; // rcx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  unsigned __int8 NumOverflowTaggedEntries; // r9
  unsigned __int8 v7; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v8; // rdx
  unsigned __int8 v9; // dl
  unsigned __int8 v10; // dl

  while ( a1 )
  {
    if ( a1->Type )
    {
      if ( a1->Type == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&a1->8 + a2, 1u);
      return;
    }
    v4 = 0LL;
    if ( !_bittestandset((signed __int32 *)a1->TaggedRefCounts.RefMask, a2) )
      return;
    Tags = a1->TaggedRefCounts.Tags;
    if ( Tags )
    {
      NumOverflowTaggedEntries = a1->NumOverflowTaggedEntries;
      v7 = 0;
      if ( NumOverflowTaggedEntries )
      {
        do
        {
          v8 = &Tags[v7];
          if ( v8->Tag == a2 )
          {
            if ( v8->RefCount != 0xFF )
            {
              ++v8->RefCount;
              return;
            }
          }
          else if ( !v8->RefCount )
          {
            v4 = &Tags[v7];
          }
          ++v7;
        }
        while ( v7 < NumOverflowTaggedEntries );
        if ( !v4 )
          goto LABEL_15;
        v4->Tag = a2;
        v4->RefCount = 1;
        return;
      }
    }
LABEL_15:
    if ( !a1->Type )
    {
      v9 = a1->NumOverflowTaggedEntries;
      if ( v9 == 0xFF )
      {
        ndisFreeRefCountAuxiliaryMemory(a1);
        a1->Type = 2;
        NdisTraceLoggingRareFeaturePath(2LL);
      }
      else
      {
        if ( (unsigned int)v9 + 2 > 0xFF )
          v10 = -1;
        else
          v10 = v9 + 2;
        ndisResizeRefCountBlockTagged(a1, v10);
      }
    }
  }
}
