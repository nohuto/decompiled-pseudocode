/*
 * XREFs of ndisIfDereferenceMiniport @ 0x1C0009E74
 * Callers:
 *     ndisIfDeregisterInterfaceEx @ 0x1C00119B4 (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z @ 0x1C001AB88 (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@E@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0040DE8 (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0041210 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0041490 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006E760 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C009A290 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisIfDereferenceMiniport(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  KIRQL v5; // al
  ULONG_PTR v6; // r8
  KIRQL v7; // si
  __int64 v8; // rax
  unsigned __int8 v9; // r9
  unsigned __int8 v10; // dl
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
      if ( v8 && (v9 = *(_BYTE *)(v6 + 3), v10 = 0, v9) )
      {
        while ( *(_BYTE *)(v8 + 2LL * v10) != a3 || !*(_BYTE *)(v8 + 2LL * v10 + 1) )
        {
          if ( ++v10 >= v9 )
            goto LABEL_9;
        }
        --*(_BYTE *)(v8 + 2LL * v10 + 1);
      }
      else
      {
LABEL_9:
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
