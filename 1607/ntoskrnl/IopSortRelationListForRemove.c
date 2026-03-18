/*
 * XREFs of IopSortRelationListForRemove @ 0x1404C49D0
 * Callers:
 *     PipRemoveDevicesInRelationList @ 0x1404C3254 (PipRemoveDevicesInRelationList.c)
 *     PnpBuildRemovalRelationList @ 0x1404C473C (PnpBuildRemovalRelationList.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x1403F4194 (PnpAcquireDependencyRelationsLock.c)
 *     PnpReleaseDependencyRelationsLock @ 0x1403F41C4 (PnpReleaseDependencyRelationsLock.c)
 *     PiGetProviderList @ 0x1403F4CC4 (PiGetProviderList.c)
 *     PipSortDeviceObjectList @ 0x1404C4B6C (PipSortDeviceObjectList.c)
 *     PipIsDeviceInDeviceObjectList @ 0x1404C4E98 (PipIsDeviceInDeviceObjectList.c)
 *     PiEnumerateProviderListEntry @ 0x14062AD48 (PiEnumerateProviderListEntry.c)
 */

__int64 __fastcall IopSortRelationListForRemove(_QWORD *a1)
{
  int v2; // r14d
  __int64 v3; // rbp
  __int64 v4; // rsi
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  char IsDeviceInDeviceObjectList; // r12
  char v8; // r13
  __int64 v9; // r11
  __int64 *ProviderList; // r15
  __int64 *v11; // rsi
  int v12; // ebx
  char v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  if ( *((_BYTE *)a1 + 8) )
  {
    return 0;
  }
  else
  {
    PnpAcquireDependencyRelationsLock(0);
    v2 = 0;
    v3 = 0LL;
    if ( !*(_DWORD *)*a1 )
      goto LABEL_19;
    do
    {
      v4 = *(_QWORD *)(*a1 + 24 * v3 + 16);
      if ( v4 )
        v5 = *(_QWORD *)(*(_QWORD *)(v4 + 312) + 40LL);
      else
        v5 = 0LL;
      v6 = *(_QWORD *)(v5 + 16);
      if ( v6 || (v6 = *(_QWORD *)(v5 + 648) & 0xFFFFFFFFFFFFFFFEuLL) != 0 )
        IsDeviceInDeviceObjectList = PipIsDeviceInDeviceObjectList(*a1, *(_QWORD *)(v6 + 32), 0LL);
      else
        IsDeviceInDeviceObjectList = 0;
      v8 = 0;
      ProviderList = PiGetProviderList(v4);
      v11 = (__int64 *)*ProviderList;
      if ( (__int64 *)*ProviderList != ProviderList )
      {
        while ( 1 )
        {
          PiEnumerateProviderListEntry(v11, &v15, &v14);
          if ( v15 )
          {
            if ( (unsigned __int8)PipIsDeviceInDeviceObjectList(*a1, v15, 0LL) )
              break;
          }
          v11 = (__int64 *)*v11;
          if ( v11 == ProviderList )
            goto LABEL_8;
        }
        v8 = 1;
      }
LABEL_8:
      if ( IsDeviceInDeviceObjectList || v8 )
      {
        *(_DWORD *)(v9 + 24 * v3 + 32) &= ~4u;
      }
      else
      {
        *(_DWORD *)(v9 + 24 * v3 + 32) |= 4u;
        ++v2;
      }
      v3 = (unsigned int)(v3 + 1);
    }
    while ( (unsigned int)v3 < *(_DWORD *)*a1 );
    if ( v2 )
    {
      v12 = PipSortDeviceObjectList(a1);
      if ( v12 >= 0 )
        *((_BYTE *)a1 + 8) = 1;
    }
    else
    {
LABEL_19:
      v12 = -1073741823;
    }
    PnpReleaseDependencyRelationsLock();
  }
  return (unsigned int)v12;
}
