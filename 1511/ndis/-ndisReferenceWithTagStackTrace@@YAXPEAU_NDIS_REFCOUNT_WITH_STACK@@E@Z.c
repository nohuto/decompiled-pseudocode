/*
 * XREFs of ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfDereferenceMiniport @ 0x1C00056B0 (ndisIfDereferenceMiniport.c)
 *     ndisDereferenceMiniportForNsi @ 0x1C00057E0 (ndisDereferenceMiniportForNsi.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0005B90 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C00066F0 (ndisFOidRequestCompleteInternal.c)
 *     ndisReferenceMiniportByHandleForNsi @ 0x1C00069E0 (ndisReferenceMiniportByHandleForNsi.c)
 *     ndisInterruptDpc @ 0x1C0006D00 (ndisInterruptDpc.c)
 *     ndisQueueOidRequest @ 0x1C0007420 (ndisQueueOidRequest.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisOidRequestComplete @ 0x1C0008250 (ndisOidRequestComplete.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00094B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisMTimerDpcX @ 0x1C000A040 (ndisMTimerDpcX.c)
 *     ndisQueuedMiniportDpcWorkItem @ 0x1C000A800 (ndisQueuedMiniportDpcWorkItem.c)
 *     ndisDoOidRequests @ 0x1C000AF60 (ndisDoOidRequests.c)
 *     ndisDereferenceWithTag @ 0x1C000B124 (ndisDereferenceWithTag.c)
 *     ndisQueuedCheckForHang @ 0x1C000F390 (ndisQueuedCheckForHang.c)
 *     ndisMTimerObjectDpc @ 0x1C0015390 (ndisMTimerObjectDpc.c)
 * Callees:
 *     ndisReleaseStackTrace @ 0x1C0011C38 (ndisReleaseStackTrace.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisCaptureStackTrace @ 0x1C0065C68 (ndisCaptureStackTrace.c)
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
