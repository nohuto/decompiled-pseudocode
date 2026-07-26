/*
 * XREFs of ndisIfCreateOrUpdateInterface @ 0x1C0013E60
 * Callers:
 *     ?ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z @ 0x1C00992D4 (-ndisPnpRefresh@@YAXPEBU_NDIS_PNP_REFRESH_IN@@@Z.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ?ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z @ 0x1C0013F54 (-ndisIfUpdateIfBlockFromPersistedState@@YAXPEAU_NDIS_IF_BLOCK@@AEAVKRegKey@@@Z.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B2B0 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterfaceByInterfaceGuid @ 0x1C001B354 (ndisIfFindInterfaceByInterfaceGuid.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C003FCD8 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z @ 0x1C00A7BD4 (-ndisLoadNetworkInterfaceFromPersistedState@@YAJAEBU_GUID@@AEAVKRegKey@@@Z.c)
 *     ?ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z @ 0x1C00A7C90 (-ndisIfOpenInterfacePersistedStorage@@YAJAEBU_GUID@@AEAVKRegKey@@K@Z.c)
 */

void __fastcall ndisIfCreateOrUpdateInterface(struct _GUID *this)
{
  int v2; // eax
  KIRQL v3; // si
  __int64 InterfaceByInterfaceGuid; // rax
  __int64 v5; // rdi
  KIRQL v6; // bl
  unsigned int v7; // ebx
  KIRQL v8; // si
  HANDLE Handle; // [rsp+38h] [rbp+10h] BYREF

  Handle = 0LL;
  v2 = ndisIfOpenInterfacePersistedStorage(this, (struct KRegKey *)&Handle, 1u);
  if ( (int)(v2 + 0x80000000) >= 0 && v2 != -1073741772 )
    goto LABEL_7;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  InterfaceByInterfaceGuid = ndisIfFindInterfaceByInterfaceGuid(this);
  v5 = InterfaceByInterfaceGuid;
  if ( InterfaceByInterfaceGuid )
  {
    ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(InterfaceByInterfaceGuid + 1440), 0xEu);
    ++*(_DWORD *)(v5 + 1304);
  }
  KeReleaseSpinLock(&ndisIfListLock, v3);
  if ( Handle )
  {
    if ( v5 )
    {
      ndisIfUpdateIfBlockFromPersistedState((struct _NDIS_IF_BLOCK *)v5, (struct KRegKey *)&Handle);
      v6 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
      IFBLOCK_DECREMENT_REF((PVOID)v5);
      KeReleaseSpinLock(&ndisIfListLock, v6);
    }
    else
    {
      ndisLoadNetworkInterfaceFromPersistedState(this, (struct KRegKey *)&Handle);
    }
    goto LABEL_7;
  }
  if ( v5 )
  {
    v7 = 0;
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    if ( *(_DWORD *)(v5 + 1408) == 2 )
      v7 = *(_DWORD *)(v5 + 4);
    IFBLOCK_DECREMENT_REF((PVOID)v5);
    KeReleaseSpinLock(&ndisIfListLock, v8);
    if ( v7 )
    {
      ndisIfDeregisterInterfaceEx(v7, 1LL);
LABEL_7:
      if ( Handle )
        ZwClose(Handle);
    }
  }
}
