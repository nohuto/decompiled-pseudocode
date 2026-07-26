/*
 * XREFs of ndisReferenceWithTag @ 0x1C00068E0
 * Callers:
 *     ndisIfReferenceMiniport @ 0x1C00033A0 (ndisIfReferenceMiniport.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003870 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004170 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C0004BD0 (ndisFOidRequestCompleteInternal.c)
 *     ndisMTimerDpcX @ 0x1C0004ED0 (ndisMTimerDpcX.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0005060 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0005A90 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisMOidRequest @ 0x1C0007ED0 (ndisMOidRequest.c)
 *     ndisMWakeUpDpcX @ 0x1C0008120 (ndisMWakeUpDpcX.c)
 *     ndisInterruptDpc @ 0x1C0008260 (ndisInterruptDpc.c)
 *     ndisCreateHandler @ 0x1C00086B0 (ndisCreateHandler.c)
 *     ndisQueueRequestWorkItem @ 0x1C000895C (ndisQueueRequestWorkItem.c)
 *     ndisIfCreateOrUpdateInterface @ 0x1C000FF3C (ndisIfCreateOrUpdateInterface.c)
 *     ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0010AE0 (-ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z.c)
 *     ndisNsiScheduleIfBlockRodChangeNotification @ 0x1C00144A0 (ndisNsiScheduleIfBlockRodChangeNotification.c)
 *     ndisFIndicateStatusInternal @ 0x1C0014710 (ndisFIndicateStatusInternal.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisIfSetInterfaceState @ 0x1C00161F4 (ndisIfSetInterfaceState.c)
 *     ndisGetHigherFilterWithPnpRef @ 0x1C0017170 (ndisGetHigherFilterWithPnpRef.c)
 *     ndisMReferenceIfBlock @ 0x1C0017410 (ndisMReferenceIfBlock.c)
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0018F9C (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     ndisReferenceRef @ 0x1C001900C (ndisReferenceRef.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ndisReferenceProtocol @ 0x1C0019A3C (ndisReferenceProtocol.c)
 *     ?ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@@PEAK@Z @ 0x1C0019BD8 (-ndisIfRegisterInterfaceEx@@YAHPEAXT_NET_LUID_LH@@0PEAU_NET_IF_INFORMATION@@W4NdisIfBlockSource@.c)
 *     ndisIfUpdateInterfaceOnAddDevice @ 0x1C001ACF0 (ndisIfUpdateInterfaceOnAddDevice.c)
 *     ndisReferenceMiniportNoCheck @ 0x1C001BCC4 (ndisReferenceMiniportNoCheck.c)
 *     ndisReferenceOpenByHandle @ 0x1C001EC00 (ndisReferenceOpenByHandle.c)
 *     ndisIfAliasChange @ 0x1C00207CC (ndisIfAliasChange.c)
 *     ndisIfSetIfDescr @ 0x1C0020978 (ndisIfSetIfDescr.c)
 *     ndisMTimerObjectDpc @ 0x1C0021640 (ndisMTimerObjectDpc.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003C4D0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003C830 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisReferenceRefNoCheck @ 0x1C0066F58 (ndisReferenceRefNoCheck.c)
 * Callees:
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C000EDB0 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memmove @ 0x1C0023700 (memmove.c)
 *     memset @ 0x1C0023A40 (memset.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z @ 0x1C006ED60 (-NdisTraceLoggingRareFeaturePath@@YAXW4NdisTLRareFeature@@@Z.c)
 */

void __fastcall ndisReferenceWithTag(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *v4; // rcx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r8
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 v7; // r9
  _NDIS_REFCOUNT_TAGGED_ENTRY *v8; // rdx
  unsigned __int8 v9; // si
  unsigned __int8 v10; // si
  _NDIS_REFCOUNT_TAGGED_ENTRY *PoolWithTag; // rax
  _NDIS_REFCOUNT_TAGGED_ENTRY *v12; // rbp
  _NDIS_REFCOUNT_TAGGED_ENTRY *v13; // rdx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v14; // rcx
  unsigned __int16 i; // r14

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
        if ( v4 )
        {
          v4->Tag = a2;
          v4->RefCount = 1;
          return;
        }
      }
    }
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
        PoolWithTag = (_NDIS_REFCOUNT_TAGGED_ENTRY *)ExAllocatePoolWithTag(
                                                       NonPagedPoolNx,
                                                       2 * (unsigned int)v10,
                                                       0x7872444Eu);
        v12 = PoolWithTag;
        if ( PoolWithTag )
        {
          memset(PoolWithTag, 0, 2 * (unsigned int)v10);
          v13 = a1->TaggedRefCounts.Tags;
          if ( v13 )
            memmove(v12, v13, 2LL * a1->NumOverflowTaggedEntries);
          if ( a1->Type )
          {
            if ( a1->Type == 1 )
            {
              for ( i = 0;
                    i < a1->NumRefTags;
                    ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(&a1->8 + i++)) )
              {
                ;
              }
            }
          }
          else
          {
            v14 = a1->TaggedRefCounts.Tags;
            if ( v14 )
            {
              ExFreePoolWithTag(v14, 0);
              a1->TaggedRefCounts.Tags = 0LL;
              a1->NumOverflowTaggedEntries = 0;
            }
          }
          a1->TaggedRefCounts.Tags = v12;
          a1->NumOverflowTaggedEntries = v10;
        }
        else
        {
          ndisFreeRefCountAuxiliaryMemory(a1);
          a1->Type = 2;
        }
      }
    }
  }
}
