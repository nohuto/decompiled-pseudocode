/*
 * XREFs of ndisReferenceMiniportNoCheck @ 0x1C001BBF8
 * Callers:
 *     ndisInterruptDpc @ 0x1C0004D50 (ndisInterruptDpc.c)
 *     ndisSetDevicePowerOnComplete @ 0x1C0012780 (ndisSetDevicePowerOnComplete.c)
 *     ndisQueueRequestWorkItem @ 0x1C0016378 (ndisQueueRequestWorkItem.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisMOidRequestCompleteInternal @ 0x1C0025D70 (ndisMOidRequestCompleteInternal.c)
 *     ndisUpdateAndIndicatePMCapabilities @ 0x1C004AE24 (ndisUpdateAndIndicatePMCapabilities.c)
 *     NdisClOpenAddressFamilyEx @ 0x1C0050F10 (NdisClOpenAddressFamilyEx.c)
 *     NdisMPromoteMiniport @ 0x1C005CB70 (NdisMPromoteMiniport.c)
 *     NdisMFreeSharedMemory @ 0x1C005F400 (NdisMFreeSharedMemory.c)
 *     ndis5InterruptDpc @ 0x1C0060140 (ndis5InterruptDpc.c)
 *     ndisQueuePowerIrp @ 0x1C00636F4 (ndisQueuePowerIrp.c)
 *     ?ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x1C0065CDC (-ndisQueuePeriodicReceivesWorkItem@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 *     ndisSriovInterfaceReference @ 0x1C006A100 (ndisSriovInterfaceReference.c)
 *     ndisPnPIrpSurpriseRemoval @ 0x1C009E0B4 (ndisPnPIrpSurpriseRemoval.c)
 *     ?ndisMQueuedFinishClose@@YAXPEAX@Z @ 0x1C00AC7E0 (-ndisMQueuedFinishClose@@YAXPEAX@Z.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 *     ndisMFinishClose @ 0x1C00EB318 (ndisMFinishClose.c)
 *     NdisClOpenAddressFamily @ 0x1C00F3440 (NdisClOpenAddressFamily.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisReferenceMiniportNoCheck(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rsi
  KIRQL v5; // al
  struct _NDIS_REFCOUNT_BLOCK *v6; // rbx
  KIRQL v7; // r14
  unsigned __int8 *p_Tag; // rdx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r11
  unsigned __int8 v10; // r8
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 v12; // r9
  _NDIS_REFCOUNT_TAGGED_ENTRY *v13; // rcx
  unsigned __int8 v14; // cl

  v2 = a1 + 4496;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  v6 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4952);
  v7 = v5;
  if ( v6 )
  {
    if ( v6->Type )
    {
      if ( v6->Type == 1 )
        ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v6->8 + a2, 1u);
    }
    else
    {
      p_Tag = 0LL;
      if ( _bittestandset((signed __int32 *)v6->TaggedRefCounts.RefMask, a2) )
      {
        Tags = v6->TaggedRefCounts.Tags;
        v10 = -1;
        if ( !Tags )
          goto LABEL_29;
        NumOverflowTaggedEntries = v6->NumOverflowTaggedEntries;
        v12 = 0;
        if ( !NumOverflowTaggedEntries )
          goto LABEL_29;
        do
        {
          v13 = &Tags[v12];
          if ( v13->Tag == a2 )
          {
            if ( v13->RefCount != 0xFF )
            {
              ++v13->RefCount;
              goto LABEL_13;
            }
          }
          else if ( !v13->RefCount )
          {
            p_Tag = &Tags[v12].Tag;
          }
          ++v12;
        }
        while ( v12 < NumOverflowTaggedEntries );
        if ( p_Tag )
        {
          *p_Tag = a2;
          p_Tag[1] = 1;
        }
        else
        {
LABEL_29:
          if ( !v6->Type )
          {
            v14 = v6->NumOverflowTaggedEntries;
            if ( v14 == 0xFF )
            {
              ndisFreeRefCountAuxiliaryMemory(v6);
              v6->Type = 2;
            }
            else
            {
              if ( (unsigned int)v14 + 2 <= 0xFF )
                v10 = v14 + 2;
              ndisResizeRefCountBlockTagged(v6, v10);
            }
          }
          NdisReferenceWithTag(v6, a2);
        }
      }
    }
  }
LABEL_13:
  ++*(_DWORD *)(v2 + 8);
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(13LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)v2, v7);
}
