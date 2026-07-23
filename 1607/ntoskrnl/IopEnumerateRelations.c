/*
 * XREFs of IopEnumerateRelations @ 0x140485C7C
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14048545C (PnpQueuePendingSurpriseRemoval.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1404855C4 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpUnlinkDeviceRemovalRelations @ 0x140485654 (PnpUnlinkDeviceRemovalRelations.c)
 *     PiEventBuildPdoList @ 0x1404857D0 (PiEventBuildPdoList.c)
 *     PnpInvalidateRelationsInList @ 0x140485900 (PnpInvalidateRelationsInList.c)
 *     PnpDeleteLockedDeviceNodes @ 0x1404859EC (PnpDeleteLockedDeviceNodes.c)
 *     PnpCompileDeviceInstancePaths @ 0x140485AE0 (PnpCompileDeviceInstancePaths.c)
 *     PiEventRestartRemovalRelations @ 0x140580AB0 (PiEventRestartRemovalRelations.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DE34 (PnpCancelRemoveOnHungDevices.c)
 *     IopCheckIfMergeRequired @ 0x14064B9B4 (IopCheckIfMergeRequired.c)
 * Callees:
 *     PipDeviceObjectListElementAt @ 0x1404CFEE0 (PipDeviceObjectListElementAt.c)
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
