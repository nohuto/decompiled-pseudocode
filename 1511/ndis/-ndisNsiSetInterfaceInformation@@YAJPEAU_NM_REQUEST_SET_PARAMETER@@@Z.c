/*
 * XREFs of ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0014380
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C0018A58 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C001B2B0 (IFBLOCK_DECREMENT_REF.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C001EE0C (ndisIfFindInterfaceByNetLuid.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     memmove @ 0x1C0026C00 (memmove.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C009FF84 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSetInterfaceInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *InterfaceByNetLuid; // r14
  unsigned int v3; // esi
  KIRQL v4; // r15
  __int64 v5; // rsi
  unsigned int v6; // ebx
  unsigned int v7; // eax
  unsigned int v8; // ebx
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int *v11; // [rsp+28h] [rbp-E0h]
  unsigned int v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h]
  _BYTE v15[1088]; // [rsp+58h] [rbp-B0h] BYREF

  InterfaceByNetLuid = 0LL;
  v3 = 0;
  v12[0] = 0;
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_q(82LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(v15, 0, sizeof(v15));
  if ( *((_DWORD *)a1 + 6) != 8 )
    goto LABEL_15;
  if ( !*((_DWORD *)a1 + 8) && !*((_DWORD *)a1 + 14) )
  {
    v5 = *((unsigned int *)a1 + 13);
    v6 = *((_DWORD *)a1 + 12);
    if ( v6 + (unsigned int)v5 <= 0x440 && v6 + (unsigned int)v5 >= v6 )
    {
      memmove(&v15[v5], *((const void **)a1 + 5), v6);
      InterfaceByNetLuid = (struct _NDIS_IF_BLOCK *)ndisIfFindInterfaceByNetLuid(**((_QWORD **)a1 + 2));
      if ( InterfaceByNetLuid )
      {
        v7 = ndisNsiChangeInterfaceInfo(
               InterfaceByNetLuid,
               (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v15,
               v6,
               v5,
               v12);
        v3 = v12[0];
        v8 = v7;
        goto LABEL_10;
      }
    }
LABEL_15:
    v8 = -1073741811;
    goto LABEL_12;
  }
  v8 = -1073741811;
LABEL_10:
  if ( v3 )
  {
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)InterfaceByNetLuid->RefCountTracker;
    v14 = 0LL;
    v13[0] = 0LL;
    v13[1] = *((_QWORD *)a1 + 5);
    HIDWORD(v14) = *((_DWORD *)a1 + 13);
    LODWORD(v14) = v3;
    ndisReferenceWithTag(RefCountTracker, 5u);
    ++InterfaceByNetLuid->Ref;
    KeReleaseSpinLock(&ndisIfListLock, v4);
    ndisNsiNotifyClientInterfaceChange(InterfaceByNetLuid, 0LL, v13, 0LL, v11);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF(InterfaceByNetLuid);
  }
LABEL_12:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C008371D >= 4u )
    WPP_SF_qD(83LL, &WPP_9ad27b6b93e84bf4e83fa1333fca0937_Traceguids, a1, v8);
  return v8;
}
