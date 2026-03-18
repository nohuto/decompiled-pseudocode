/*
 * XREFs of IopSortRelationListForRemove @ 0x14049F054
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x14049E9CC (PipRemoveDevicesInRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x14049EDD4 (PnpBuildRemovalRelationList.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1404583AC (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x140458F10 (PiGetProviderList.c)
 *     PipSortDeviceObjectList @ 0x14049F1F0 (PipSortDeviceObjectList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x14049F738 (PipIsDeviceInDeviceObjectList.c)
 *     PiEnumerateProviderListEntry @ 0x140600CFC (PiEnumerateProviderListEntry.c)
 */

__int64 __fastcall IopSortRelationListForRemove(_QWORD *a1)
{
  int v2; // ebx
  int v4; // r14d
  __int64 v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  char IsDeviceInDeviceObjectList; // r12
  char v10; // r13
  __int64 v11; // r11
  __int64 *ProviderList; // r15
  __int64 *v13; // rsi
  char v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( *((_BYTE *)a1 + 8) )
  {
    return 0;
  }
  else
  {
    PnpAcquireDependencyRelationsLock(0);
    v4 = 0;
    v5 = 0LL;
    if ( !*(_DWORD *)*a1 )
      goto LABEL_19;
    do
    {
      v6 = *(_QWORD *)(*a1 + 24 * v5 + 16);
      if ( v6 )
        v7 = *(_QWORD *)(*(_QWORD *)(v6 + 312) + 40LL);
      else
        v7 = 0LL;
      v8 = *(_QWORD *)(v7 + 16);
      if ( v8 || (v8 = *(_QWORD *)(v7 + 648) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        IsDeviceInDeviceObjectList = PipIsDeviceInDeviceObjectList(*a1, *(_QWORD *)(v8 + 32), 0LL);
      else
        IsDeviceInDeviceObjectList = 0;
      v10 = 0;
      ProviderList = PiGetProviderList(v6);
      v13 = (__int64 *)*ProviderList;
      if ( (__int64 *)*ProviderList != ProviderList )
      {
        while ( 1 )
        {
          PiEnumerateProviderListEntry(v13, &v15, &v14);
          if ( v15 )
          {
            if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*a1, v15, 0LL) )
              break;
          }
          v13 = (__int64 *)*v13;
          if ( v13 == ProviderList )
            goto LABEL_10;
        }
        v10 = 1;
      }
LABEL_10:
      if ( IsDeviceInDeviceObjectList || v10 )
      {
        *(_DWORD *)(v11 + 24 * v5 + 32) &= ~4u;
      }
      else
      {
        *(_DWORD *)(v11 + 24 * v5 + 32) |= 4u;
        ++v4;
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < *(_DWORD *)*a1 );
    if ( v4 )
    {
      v2 = PipSortDeviceObjectList(a1);
      if ( v2 >= 0 )
        *((_BYTE *)a1 + 8) = 1;
    }
    else
    {
LABEL_19:
      v2 = -1073741823;
    }
    PnpReleaseDependencyRelationsLock();
  }
  return (unsigned int)v2;
}
