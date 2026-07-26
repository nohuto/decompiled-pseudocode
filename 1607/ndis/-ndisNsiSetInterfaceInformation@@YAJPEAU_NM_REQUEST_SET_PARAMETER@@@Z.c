/*
 * XREFs of ?ndisNsiSetInterfaceInformation@@YAJPEAU_NM_REQUEST_SET_PARAMETER@@@Z @ 0x1C0012590
 * Callers:
 *     <none>
 * Callees:
 *     ndisIsCompartmentAccessibleByClient @ 0x1C000D2AC (ndisIsCompartmentAccessibleByClient.c)
 *     ndisGetNsiClientInfo @ 0x1C000D2C0 (ndisGetNsiClientInfo.c)
 *     ndisIfFindInterfaceByNetLuid @ 0x1C0014670 (ndisIfFindInterfaceByNetLuid.c)
 *     IFBLOCK_DECREMENT_REF @ 0x1C0014E64 (IFBLOCK_DECREMENT_REF.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     ?ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPEAK@Z @ 0x1C001AA78 (-ndisNsiChangeInterfaceInfo@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_NSI_INTERFACE_INFORMATION_RW@@KKPE.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ?ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE_PARAM_DESC@@W4_NDIS_NSI_OBJECT_INDEX@@@Z @ 0x1C00A2B60 (-ndisNsiNotifyClientInterfaceChange@@YAXPEAU_NDIS_IF_BLOCK@@W4_NSI_NOTIFICATION@@PEAU_NSI_SINGLE.c)
 */

__int64 __fastcall ndisNsiSetInterfaceInformation(struct _NM_REQUEST_SET_PARAMETER *a1)
{
  struct _NDIS_IF_BLOCK *v1; // rsi
  unsigned int v3; // r14d
  KIRQL v4; // r15
  __int64 v5; // r14
  unsigned int v6; // ebx
  __int64 InterfaceByNetLuid; // rax
  unsigned int v8; // eax
  unsigned int v9; // ebx
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  unsigned int v12[2]; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v14; // [rsp+50h] [rbp-B8h]
  _BYTE v15[1088]; // [rsp+58h] [rbp-B0h] BYREF

  v1 = 0LL;
  v3 = 0;
  v12[0] = 0;
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_q(82LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1);
  ndisGetNsiClientInfo((__int64)v13);
  KeEnterCriticalRegion();
  v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
  memset(v15, 0, sizeof(v15));
  if ( *((_DWORD *)a1 + 6) != 8 )
    goto LABEL_16;
  if ( !*((_DWORD *)a1 + 8) && !*((_DWORD *)a1 + 14) )
  {
    v5 = *((unsigned int *)a1 + 13);
    v6 = *((_DWORD *)a1 + 12);
    if ( v6 + (unsigned int)v5 <= 0x440 && v6 + (unsigned int)v5 >= v6 )
    {
      memmove(&v15[v5], *((const void **)a1 + 5), v6);
      InterfaceByNetLuid = ndisIfFindInterfaceByNetLuid(**((_QWORD **)a1 + 2));
      v1 = (struct _NDIS_IF_BLOCK *)InterfaceByNetLuid;
      if ( InterfaceByNetLuid )
      {
        if ( ndisIsCompartmentAccessibleByClient(*(_QWORD *)(InterfaceByNetLuid + 1384), (__int64)v13, 1) )
        {
          v8 = ndisNsiChangeInterfaceInfo(v1, (struct _NDIS_NSI_INTERFACE_INFORMATION_RW *)v15, v6, v5, v12);
          v3 = v12[0];
          v9 = v8;
          goto LABEL_11;
        }
      }
    }
LABEL_16:
    v9 = -1073741811;
    goto LABEL_13;
  }
  v9 = -1073741811;
LABEL_11:
  if ( v3 )
  {
    RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v1->RefCountTracker;
    v14 = 0LL;
    v13[0] = 0LL;
    v13[1] = *((_QWORD *)a1 + 5);
    HIDWORD(v14) = *((_DWORD *)a1 + 13);
    LODWORD(v14) = v3;
    NdisReferenceWithTag(RefCountTracker);
    ++v1->Ref;
    KeReleaseSpinLock(&ndisIfListLock, v4);
    ndisNsiNotifyClientInterfaceChange(v1, 0LL, v13);
    v4 = KeAcquireSpinLockRaiseToDpc(&ndisIfListLock);
    IFBLOCK_DECREMENT_REF(v1);
  }
LABEL_13:
  KeReleaseSpinLock(&ndisIfListLock, v4);
  KeLeaveCriticalRegion();
  if ( (unsigned __int8)byte_1C00895DD >= 4u )
    WPP_SF_qD(83LL, &WPP_85e9149e4b3435a752b049efc8d5abea_Traceguids, a1, v9);
  return v9;
}
