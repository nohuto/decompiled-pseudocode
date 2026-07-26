/*
 * XREFs of ndisIfDereferenceMiniport @ 0x1C0003420
 * Callers:
 *     ?ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z @ 0x1C001A38C (-ndisIfUpdateInterfaceIsolationNetworkIdLocked@@YAJPEAU_NDIS_IF_BLOCK@@AEBU_GUID@@@Z.c)
 *     ?ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C003C0A8 (-ndisNsiEnumerateAllIfRcvAddressesInOneInterface@@YAJPEAU_NDIS_IF_BLOCK@@PEAU_NM_REQUEST_ENUMERA.c)
 *     ?ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C003C4D0 (-ndisNsiGetAllIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C003C830 (-ndisNsiGetIfRcvAddress@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ndisIfDeregisterInterfaceEx @ 0x1C003E7CC (ndisIfDeregisterInterfaceEx.c)
 *     ?ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@Z @ 0x1C006AB64 (-ndisReferenceMiniportByNetLuid@@YAPEAU_NDIS_MINIPORT_BLOCK@@T_NET_LUID_LH@@W4_NDIS_MP_REFTAG@@@.c)
 *     ?ndisIfQueryObject@@YAHPEAXIPEAK0@Z @ 0x1C0096B90 (-ndisIfQueryObject@@YAHPEAXIPEAK0@Z.c)
 * Callees:
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisIfDereferenceMiniport(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  KIRQL v5; // al
  ULONG_PTR v6; // r10
  KIRQL v7; // si
  __int64 v8; // r9
  unsigned __int8 v9; // r8
  unsigned __int8 v10; // al
  _BYTE *v11; // rdx
  ULONG_PTR v13; // r9
  ULONG_PTR v14; // rbx
  unsigned int v15; // edx
  __int64 v16; // rax
  struct _KEVENT *v17; // rcx

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
        v13 = a3;
        v14 = v6 + ((unsigned __int64)a3 << 6);
        v15 = *(_DWORD *)(v14 + 64);
        if ( v15 >> 17 < 0x3FFE && (unsigned __int16)v15 >> 1 == (v15 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v14 + 8));
          *(_DWORD *)(v14 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v15 & 0xFFFE) == 0 && (v15 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, *(_QWORD *)(a1 + 1448), v13);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v14 + 8), 0);
        }
      }
    }
    else
    {
      v8 = *(_QWORD *)(v6 + 8);
      if ( v8 && (v9 = *(_BYTE *)(v6 + 3), v10 = 0, v9) )
      {
        while ( 1 )
        {
          v11 = (_BYTE *)(v8 + 2LL * v10);
          if ( *v11 == a3 )
          {
            if ( v11[1] )
              break;
          }
          if ( ++v10 >= v9 )
            goto LABEL_9;
        }
        --v11[1];
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
    v16 = *(_QWORD *)(a1 + 1416);
    if ( v16 )
    {
      v17 = *(struct _KEVENT **)(v16 + 4104);
      if ( v17 )
        KeSetEvent(v17, 0, 0);
    }
  }
  KeReleaseSpinLock(&ndisIfBlockMiniportLinkLock, v7);
}
