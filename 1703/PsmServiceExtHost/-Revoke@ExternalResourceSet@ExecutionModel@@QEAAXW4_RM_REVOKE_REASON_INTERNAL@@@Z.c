/*
 * XREFs of ?Revoke@ExternalResourceSet@ExecutionModel@@QEAAXW4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x18001C37C
 * Callers:
 *     ?RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D064 (-RemoveExternalResources@ResourceManager@ExecutionModel@@QEAAXKPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x18000D64C (-HostApplyExternalResourcePriorities@ResourceManager@ExecutionModel@@QEAAXPEAU_RM_ACTIVITY_HOST@.c)
 *     ?RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@W4Enum@Priority@2@W4_RM_REVOKE_REASON_INTERNAL@@@Z @ 0x180035210 (-RevokeResourceList@BaseResourceSet@ExecutionModel@@AEAAXPEAV-$list@V-$CComPtr@VBaseResourceSet@.c)
 * Callees:
 *     ?CheckSetWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAA_NXZ @ 0x18001C268 (-CheckSetWatchdogTimer@ExternalResourceSet@ExecutionModel@@AEAA_NXZ.c)
 *     ?QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2@W43ResourceType@2@K@Z @ 0x18001C3DC (-QueueMessage@ExternalResourceSet@ExecutionModel@@AEAAXW4Enum@ExternalResourceNotificationType@2.c)
 */

char __fastcall ExecutionModel::ExternalResourceSet::Revoke(ExecutionModel::ExternalResourceSet *a1, unsigned int a2)
{
  int v2; // eax
  __int64 v5; // r8

  v2 = *((_DWORD *)a1 + 339);
  if ( (v2 & 1) == 0 )
  {
    *((_DWORD *)a1 + 339) = v2 | 1;
    if ( a2 == 2 )
      *((_DWORD *)a1 + 356) |= 2u;
    LOBYTE(v2) = ExecutionModel::ExternalResourceSet::CheckSetWatchdogTimer(a1);
    if ( (_BYTE)v2 )
      LOBYTE(v2) = ExecutionModel::ExternalResourceSet::QueueMessage(a1, 1LL, v5, a2);
  }
  return v2;
}
