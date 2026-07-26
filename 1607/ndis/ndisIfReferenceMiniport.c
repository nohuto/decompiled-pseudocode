/*
 * XREFs of ndisIfReferenceMiniport @ 0x1C00098EC
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00119B4 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001AB88 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0040DE8 (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0041210 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0041490 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006E760 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C009A290 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisIfReferenceMiniport(__int64 a1, unsigned __int8 a2)
{
  __int64 v4; // rbp
  KIRQL v5; // r14
  struct _NDIS_REFCOUNT_BLOCK *v7; // rbx
  _NDIS_REFCOUNT_TAGGED_ENTRY *v8; // rdx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r11
  unsigned __int8 v10; // r8
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 v12; // r9
  _NDIS_REFCOUNT_TAGGED_ENTRY *v13; // rcx
  unsigned __int8 v14; // cl

  v4 = 0LL;
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  if ( *(_BYTE *)(a1 + 1403) )
  {
    v7 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 1448);
    v4 = *(_QWORD *)(a1 + 1416);
    if ( v7 )
    {
      if ( v7->Type )
      {
        if ( v7->Type == 1 )
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v7->8 + a2, 1u);
      }
      else
      {
        v8 = 0LL;
        if ( _bittestandset((signed __int32 *)v7->TaggedRefCounts.RefMask, a2) )
        {
          Tags = v7->TaggedRefCounts.Tags;
          v10 = -1;
          if ( !Tags )
            goto LABEL_29;
          NumOverflowTaggedEntries = v7->NumOverflowTaggedEntries;
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
                goto LABEL_6;
              }
            }
            else if ( !v13->RefCount )
            {
              v8 = &Tags[v12];
            }
            ++v12;
          }
          while ( v12 < NumOverflowTaggedEntries );
          if ( v8 )
          {
            v8->Tag = a2;
            v8->RefCount = 1;
          }
          else
          {
LABEL_29:
            if ( !v7->Type )
            {
              v14 = v7->NumOverflowTaggedEntries;
              if ( v14 == 0xFF )
              {
                ndisFreeRefCountAuxiliaryMemory(v7);
                v7->Type = 2;
              }
              else
              {
                if ( (unsigned int)v14 + 2 <= 0xFF )
                  v10 = v14 + 2;
                ndisResizeRefCountBlockTagged(v7, v10);
              }
            }
            NdisReferenceWithTag(v7);
          }
        }
      }
    }
LABEL_6:
    ++*(_DWORD *)(a1 + 1404);
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v5);
  return v4;
}
