/*
 * XREFs of ?ndisReferenceWithTagCompact@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C000D200
 * Callers:
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 */

void __fastcall ndisReferenceWithTagCompact(struct _NDIS_REFCOUNT_BLOCK *a1, unsigned __int8 a2)
{
  _NDIS_REFCOUNT_TAGGED_ENTRY *v3; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r11
  unsigned __int8 v6; // dl
  unsigned __int8 NumOverflowTaggedEntries; // r10
  unsigned __int8 v8; // r9
  _NDIS_REFCOUNT_TAGGED_ENTRY *v9; // rcx
  unsigned __int8 v10; // cl

  v3 = 0LL;
  if ( _bittestandset((signed __int32 *)a1->TaggedRefCounts.RefMask, a2) )
  {
    Tags = a1->TaggedRefCounts.Tags;
    v6 = -1;
    if ( !Tags )
      goto LABEL_22;
    NumOverflowTaggedEntries = a1->NumOverflowTaggedEntries;
    v8 = 0;
    if ( !NumOverflowTaggedEntries )
      goto LABEL_22;
    do
    {
      v9 = &Tags[v8];
      if ( v9->Tag == a2 )
      {
        if ( v9->RefCount != 0xFF )
        {
          ++v9->RefCount;
          return;
        }
      }
      else if ( !v9->RefCount )
      {
        v3 = &Tags[v8];
      }
      ++v8;
    }
    while ( v8 < NumOverflowTaggedEntries );
    if ( v3 )
    {
      v3->Tag = a2;
      v3->RefCount = 1;
    }
    else
    {
LABEL_22:
      if ( !a1->Type )
      {
        v10 = a1->NumOverflowTaggedEntries;
        if ( v10 == 0xFF )
        {
          ndisFreeRefCountAuxiliaryMemory(a1);
          a1->Type = 2;
        }
        else
        {
          if ( (unsigned int)v10 + 2 <= 0xFF )
            v6 = v10 + 2;
          ndisResizeRefCountBlockTagged(a1, v6);
        }
      }
      NdisReferenceWithTag(a1);
    }
  }
}
