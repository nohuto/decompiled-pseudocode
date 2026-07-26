/*
 * XREFs of ndisIfDereferenceMiniport @ 0x1C00056B0
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C003C8D8 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003D128 (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003D550 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003D8B0 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C003FCD8 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C0069C60 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C0094AE0 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisIfDereferenceMiniport(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  KIRQL v5; // al
  ULONG_PTR v6; // r8
  KIRQL v7; // si
  __int64 v8; // rax
  unsigned __int8 v10; // r9
  unsigned __int8 v11; // dl
  ULONG_PTR v12; // r9
  ULONG_PTR v13; // rbx
  unsigned int v14; // edx
  __int64 v15; // rax
  struct _KEVENT *v16; // rcx

  v5 = KeAcquireSpinLockRaiseToDpc(&ndisIfBlockMiniportLinkLock);
  v6 = *(_QWORD *)(a1 + 1448);
  v7 = v5;
  if ( v6 )
  {
    if ( a3 == 0xFF )
    {
      *(_BYTE *)v6 &= ~2u;
    }
    else if ( *(_BYTE *)(v6 + 1) )
    {
      if ( *(_BYTE *)(v6 + 1) == 1 )
      {
        v12 = a3;
        v13 = v6 + ((unsigned __int64)a3 << 6);
        v14 = *(_DWORD *)(v13 + 64);
        if ( v14 >> 17 < 0x3FFE && (unsigned __int16)v14 >> 1 == (v14 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v13 + 8));
          *(_DWORD *)(v13 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v14 & 0xFFFE) == 0 && (v14 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v6, v12);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v13 + 8), 0);
        }
      }
    }
    else
    {
      v8 = *(_QWORD *)(v6 + 8);
      if ( v8 && (v10 = *(_BYTE *)(v6 + 3), v11 = 0, v10) )
      {
        while ( *(_BYTE *)(v8 + 2LL * v11) != a3 || !*(_BYTE *)(v8 + 2LL * v11 + 1) )
        {
          if ( ++v11 >= v10 )
            goto LABEL_5;
        }
        --*(_BYTE *)(v8 + 2LL * v11 + 1);
      }
      else
      {
LABEL_5:
        if ( !_bittestandreset((signed __int32 *)(v6 + 16), a3) )
          ndisBugCheckEx(0x1EuLL, 0LL, v6, a3);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 1404))-- == 1 )
  {
    v15 = *(_QWORD *)(a1 + 1416);
    if ( v15 )
    {
      v16 = *(struct _KEVENT **)(v15 + 4104);
      if ( v16 )
        KeSetEvent(v16, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v7);
}
