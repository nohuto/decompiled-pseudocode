/*
 * XREFs of ndisDereferenceMiniportForNsi @ 0x1C000A3BC
 * Callers:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015C58 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009AF68 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ndisDeviceControlHandler @ 0x1C009B358 (ndisDeviceControlHandler.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C3C54 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  KIRQL v6; // al
  ULONG_PTR v7; // r8
  KIRQL v8; // bp
  __int64 v9; // rax
  bool v10; // zf
  struct _KEVENT *v11; // rcx
  KIRQL v12; // al
  ULONG_PTR v13; // r8
  KIRQL v14; // bp
  __int64 v15; // rax
  unsigned __int8 v16; // r9
  unsigned __int8 v17; // dl
  bool v18; // di
  unsigned __int8 v19; // r9
  unsigned __int8 v20; // dl
  ULONG_PTR v21; // r9
  ULONG_PTR v22; // rdi
  unsigned int v23; // edx
  ULONG_PTR v24; // rdi
  unsigned int v25; // edx
  struct _KEVENT *v26; // rcx

  v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v7 = *(_QWORD *)(a1 + 4960);
  v8 = v6;
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 71776;
  if ( v7 )
  {
    if ( a2 == 0xFF )
    {
      *(_BYTE *)v7 &= ~2u;
    }
    else if ( *(_BYTE *)(v7 + 1) )
    {
      if ( *(_BYTE *)(v7 + 1) == 1 )
      {
        v21 = a2;
        v22 = v7 + ((unsigned __int64)a2 << 6);
        v23 = *(_DWORD *)(v22 + 64);
        if ( v23 >> 17 < 0x3FFE && (unsigned __int16)v23 >> 1 == (v23 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v22 + 8));
          *(_DWORD *)(v22 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v23 & 0xFFFE) == 0 && (v23 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v7, v21);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v22 + 8), 0);
        }
      }
    }
    else
    {
      v9 = *(_QWORD *)(v7 + 8);
      if ( v9 && (v19 = *(_BYTE *)(v7 + 3), v20 = 0, v19) )
      {
        while ( *(_BYTE *)(v9 + 2LL * v20) != a2 || !*(_BYTE *)(v9 + 2LL * v20 + 1) )
        {
          if ( ++v20 >= v19 )
            goto LABEL_5;
        }
        --*(_BYTE *)(v9 + 2LL * v20 + 1);
      }
      else
      {
LABEL_5:
        if ( !_bittestandreset((signed __int32 *)(v7 + 16), a2) )
          ndisBugCheckEx(0x1EuLL, 0LL, v7, a2);
      }
    }
  }
  v10 = (*(_DWORD *)(a1 + 3164))-- == 1;
  if ( v10 )
  {
    v11 = *(struct _KEVENT **)(a1 + 3176);
    if ( v11 )
      KeSetEvent(v11, 0, 0);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1);
  v12 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  v13 = *(_QWORD *)(a1 + 4952);
  v14 = v12;
  if ( v13 )
  {
    if ( a3 == 0xFF )
    {
      *(_BYTE *)v13 &= ~2u;
    }
    else if ( *(_BYTE *)(v13 + 1) )
    {
      if ( *(_BYTE *)(v13 + 1) == 1 )
      {
        v24 = v13 + ((unsigned __int64)a3 << 6);
        v25 = *(_DWORD *)(v24 + 64);
        if ( v25 >> 17 < 0x3FFE && (unsigned __int16)v25 >> 1 == (v25 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v24 + 8));
          *(_DWORD *)(v24 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v25 & 0xFFFE) == 0 && (v25 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v13, a3);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v24 + 8), 0);
        }
      }
    }
    else
    {
      v15 = *(_QWORD *)(v13 + 8);
      if ( v15 && (v16 = *(_BYTE *)(v13 + 3), v17 = 0, v16) )
      {
        while ( *(_BYTE *)(v15 + 2LL * v17) != a3 || !*(_BYTE *)(v15 + 2LL * v17 + 1) )
        {
          if ( ++v17 >= v16 )
            goto LABEL_18;
        }
        --*(_BYTE *)(v15 + 2LL * v17 + 1);
      }
      else
      {
LABEL_18:
        if ( !_bittestandreset((signed __int32 *)(v13 + 16), a3) )
          ndisBugCheckEx(0x1EuLL, 0LL, v13, a3);
      }
    }
  }
  v10 = (*(_DWORD *)(a1 + 4504))-- == 1;
  v18 = v10;
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(14LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4496), v14);
  if ( v18 )
  {
    v26 = *(struct _KEVENT **)(a1 + 1608);
    if ( v26 )
      KeSetEvent(v26, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1);
}
