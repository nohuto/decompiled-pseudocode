/*
 * XREFs of IopEnumerateRelations @ 0x1404A0438
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x14049FD44 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14049FEC0 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1404A0028 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x1404A00B8 (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404A01A8 (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x1404A029C (PnpCompileDeviceInstancePaths.c)
 *     PnpCancelRemoveOnHungDevices @ 0x140603984 (PnpCancelRemoveOnHungDevices.c)
 *     IopCheckIfMergeRequired @ 0x140616EAC (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x1404C5C90 (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(__int64 a1, int *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  bool v5; // r11
  int v7; // eax
  unsigned int *v8; // rdi
  unsigned int v9; // ecx
  int v11; // edx

  v5 = 0;
  *a3 = 0LL;
  if ( a4 )
    *a4 = 0;
  if ( a5 )
    *a5 = 0;
  v7 = *a2;
  if ( !*a2 || *(_BYTE *)(a1 + 8) )
  {
    v8 = *(unsigned int **)a1;
    v9 = a2[1];
    if ( v9 < *v8 && v7 >= 0 )
    {
      if ( v7 > 1 )
      {
        if ( v7 != 2 )
          return v5;
        v11 = *v8 - v9 - 1;
      }
      else
      {
        v11 = a2[1];
      }
      v5 = (int)PipDeviceObjectListElementAt((_DWORD)v8, v11, (_DWORD)a3, (_DWORD)a4, (__int64)a5) >= 0;
      ++a2[1];
    }
  }
  return v5;
}
