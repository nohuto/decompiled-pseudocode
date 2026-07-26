/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC
 * Callers:
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C0001000 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisDoOidRequests @ 0x1C0002EF0 (ndisDoOidRequests.c)
 *     ndisDereferenceWithTag @ 0x1C00030DC (ndisDereferenceWithTag.c)
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisIfDereferenceMiniport @ 0x1C0003420 (ndisIfDereferenceMiniport.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C00034D8 (ndisDereferenceMiniportForNsi.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0003870 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0004170 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C0004BD0 (ndisFOidRequestCompleteInternal.c)
 *     ndisMTimerDpcX @ 0x1C0004ED0 (ndisMTimerDpcX.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C0005060 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisQueueOidRequest @ 0x1C0005360 (ndisQueueOidRequest.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0005A90 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisOidRequestComplete @ 0x1C0006CB0 (ndisOidRequestComplete.c)
 *     ndisQueuedCheckForHang @ 0x1C000D360 (ndisQueuedCheckForHang.c)
 *     ndisIndicateStatusInternal @ 0x1C00152FC (ndisIndicateStatusInternal.c)
 *     ndisMTimerObjectDpc @ 0x1C0021640 (ndisMTimerObjectDpc.c)
 * Callees:
 *     memset @ 0x1C0023A40 (memset.c)
 *     ndisCaptureStackTrace @ 0x1C0066A98 (ndisCaptureStackTrace.c)
 *     ndisReleaseStackTrace @ 0x1C0066C84 (ndisReleaseStackTrace.c)
 */

void __fastcall ndisReferenceWithTagStackTrace(struct _NDIS_REFCOUNT_WITH_STACK *a1, char a2)
{
  int *Dereferences; // r14
  int v4; // ecx
  int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // esi
  struct _NDIS_REFCOUNT_WITH_STACK *Next; // rcx
  _NDIS_REFCOUNT_STACK_ENTRY *References; // r9
  __int64 v11; // r8
  _NDIS_REFCOUNT_STACK_ENTRY *v12; // r11
  _NDIS_REFCOUNT_STACK_ENTRY v13; // edx
  int v14; // r10d
  _NDIS_REFCOUNT_STACK_BLOCK *PoolWithTag; // rax
  _NDIS_REFCOUNT_STACK_BLOCK *v16; // rdi

  Dereferences = 0LL;
  v4 = *((_DWORD *)a1 + 14);
  if ( a2 )
  {
    if ( (v4 & 0xFFFE) == 0x7FFE )
    {
      v6 = v4 | 1;
LABEL_4:
      *((_DWORD *)a1 + 14) = v6;
      return;
    }
    v7 = (v4 ^ ((v4 & 0xFFFFFFFE) + 2)) & 0xFFFE;
  }
  else
  {
    if ( (v4 & 0xFFFE0000) == 0x7FFE0000 )
    {
      v6 = v4 | 0x10000;
      goto LABEL_4;
    }
    v7 = (v4 & 0xFFFE0000) + 0x20000;
    v4 &= 0x1FFFFu;
  }
  *((_DWORD *)a1 + 14) = v4 ^ v7;
  v8 = ndisCaptureStackTrace();
  Next = a1;
  while ( 2 )
  {
    References = Next->Block.References;
    if ( !a2 )
      References = Next->Block.Dereferences;
    v11 = 0LL;
    v12 = References;
    do
    {
      v13 = *v12;
      v14 = *(_DWORD *)v12 & 0x3FFFFFF;
      if ( v14 == v8 && (*(_DWORD *)&v13 & 0xFC000000) < 0xFC000000 )
      {
        References[v11] = (_NDIS_REFCOUNT_STACK_ENTRY)(*(_DWORD *)&v13 & 0x3FFFFFF ^ ((*(_DWORD *)&v13 & 0xFC000000)
                                                                                    + 0x4000000));
LABEL_25:
        ndisReleaseStackTrace(v8);
        return;
      }
      if ( !Dereferences && !v14 )
        Dereferences = (int *)&References[v11];
      v11 = (unsigned int)(v11 + 1);
      ++v12;
    }
    while ( (unsigned int)v11 < 6 );
    Next = (struct _NDIS_REFCOUNT_WITH_STACK *)Next->Block.Next;
    if ( Next )
      continue;
    break;
  }
  if ( !Dereferences )
  {
    PoolWithTag = (_NDIS_REFCOUNT_STACK_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x7872444Eu);
    v16 = PoolWithTag;
    if ( !PoolWithTag )
    {
      if ( a2 )
        *((_DWORD *)a1 + 14) |= 1u;
      else
        *((_DWORD *)a1 + 14) |= 0x10000u;
      goto LABEL_25;
    }
    memset(PoolWithTag, 0, sizeof(_NDIS_REFCOUNT_STACK_BLOCK));
    Dereferences = (int *)v16->References;
    if ( !a2 )
      Dereferences = (int *)v16->Dereferences;
    v16->Next = a1->Block.Next;
    a1->Block.Next = v16;
  }
  *Dereferences = v8 & 0x3FFFFFF | 0x4000000;
}
