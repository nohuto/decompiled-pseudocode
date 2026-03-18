/*
 * XREFs of IopEnumerateRelations @ 0x140536D78
 * Callers:
 *     PnpQueuePendingSurpriseRemoval @ 0x140535188 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140535314 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpInvalidateRelationsInList @ 0x140535D44 (PnpInvalidateRelationsInList.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140536068 (PnpUnlinkDeviceRemovalRelations.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpDeleteLockedDeviceNodes @ 0x140536AEC (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140536BE4 (PnpCompileDeviceInstancePaths.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14067E6F8 (PnpCancelRemoveOnHungDevices.c)
 *     IopCheckIfMergeRequired @ 0x14069574C (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x14055B1C0 (PipDeviceObjectListElementAt.c)
 */

bool __fastcall IopEnumerateRelations(__int64 a1, int *a2, _QWORD *a3, _DWORD *a4, _DWORD *a5)
{
  bool v5; // r11
  int v7; // eax
  unsigned int *v8; // rdi
  unsigned int v9; // ecx
  int v10; // edx

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
        v10 = *v8 - v9 - 1;
      }
      else
      {
        v10 = a2[1];
      }
      v5 = (int)PipDeviceObjectListElementAt((_DWORD)v8, v10, (_DWORD)a3, (_DWORD)a4, (__int64)a5) >= 0;
      ++a2[1];
    }
  }
  return v5;
}
