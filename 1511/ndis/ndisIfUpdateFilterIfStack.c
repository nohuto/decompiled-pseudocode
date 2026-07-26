/*
 * XREFs of ndisIfUpdateFilterIfStack @ 0x1C0018930
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003C8D8 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ndisFilterAttachCleanUp @ 0x1C0054464 (ndisFilterAttachCleanUp.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0018A58 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     ndisIfFindInterface @ 0x1C0018CD0 (ndisIfFindInterface.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 */

void __fastcall ndisIfUpdateFilterIfStack(__int64 a1)
{
  unsigned int v1; // esi
  __int64 Interface; // rbx
  PVOID *v4; // rcx
  unsigned int v5; // edx
  unsigned int v6; // r8d
  PVOID *v7; // rbx
  unsigned int v8[4]; // [rsp+30h] [rbp-468h] BYREF
  _OWORD v9[68]; // [rsp+40h] [rbp-458h] BYREF

  v1 = *(_DWORD *)(a1 + 4112);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(199LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
  KeAcquireSpinLockAtDpcLevel(&ndisIfStackEntryLock);
  Interface = ndisIfFindInterface(v1);
  v9[0] = *(_OWORD *)(Interface + 580);
  if ( *(_DWORD *)(Interface + 1300) )
  {
LABEL_4:
    v4 = (PVOID *)ndisIfStackEntryList;
    v5 = 0;
    if ( ndisIfStackEntryList != &ndisIfStackEntryList )
    {
      v6 = *(_DWORD *)(Interface + 1300);
      while ( v5 < v6 )
      {
        v7 = v4;
        v4 = (PVOID *)*v4;
        if ( *((_DWORD *)v7 + 5) == v1 )
        {
          Interface = (__int64)v7[3];
          ++v5;
          if ( Interface )
          {
            if ( (*(_DWORD *)(Interface + 1336) & 2) != 0 )
            {
              v8[0] = 0;
              ndisNsiChangeInterfaceInfo(
                (struct _NDIS_IF_BLOCK *)Interface,
                (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v9,
                0x10u,
                0,
                v8);
              v1 = *(_DWORD *)(Interface + 4);
              if ( *(_DWORD *)(Interface + 1300) )
                goto LABEL_4;
              break;
            }
          }
        }
        if ( v4 == &ndisIfStackEntryList )
          break;
      }
    }
  }
  KeReleaseSpinLockFromDpcLevel(&ndisIfStackEntryLock);
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(200LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
}
