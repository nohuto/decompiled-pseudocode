/*
 * XREFs of ?ndisNsiEnumerateAllIfRcvAddresses@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003D030
 * Callers:
 *     <none>
 * Callees:
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001EE0C (ndisIfFindInterfaceByNetLuid.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003D128 (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 */

__int64 __fastcall ndisNsiEnumerateAllIfRcvAddresses(struct _NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS *a1)
{
  unsigned int v2; // ebx
  KIRQL v3; // al
  _LIST_ENTRY **v4; // rcx
  KIRQL v5; // si
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // rax
  int v7; // r11d
  int v8; // eax

  v2 = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(0x60u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1);
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  v4 = (_LIST_ENTRY **)*((_QWORD *)a1 + 2);
  v5 = v3;
  if ( v4 && ((*((_DWORD *)a1 + 6) - 8) & 0xFFFFFFDF) != 0 || *((_QWORD *)a1 + 7) && *((_DWORD *)a1 + 16) < 6u )
  {
    v2 = -1073741306;
  }
  else if ( v4 )
  {
    InterfaceByNetLuid = (struct _NDIS_IF_BLOCK *)ndisIfFindInterfaceByNetLuid(*v4);
    if ( InterfaceByNetLuid )
    {
      if ( v7 )
      {
        v8 = ndisNsiEnumerateAllIfRcvAddressesInOneInterface(InterfaceByNetLuid, a1);
      }
      else
      {
        *((_DWORD *)a1 + 22) = InterfaceByNetLuid->ifRcvAddressCount;
        v8 = InterfaceByNetLuid->ifRcvAddressCount != 0 ? 0x105 : 0;
      }
      v2 = v8;
    }
    else
    {
      v2 = -1073741772;
    }
  }
  KeReleaseSpinLock(&ndisIfListLock, v5);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(0x61u, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, (__int64)a1, v2);
  return v2;
}
