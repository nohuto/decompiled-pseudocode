/*
 * XREFs of ndisDereferenceMiniportForNsi @ 0x1C00034D8
 * Callers:
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0006530 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisDeviceControlHandler @ 0x1C009652C (ndisDeviceControlHandler.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009756C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C5DDC (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  KIRQL v6; // al
  ULONG_PTR v7; // r8
  KIRQL v8; // bp
  __int64 v9; // rax
  unsigned __int8 v10; // r9
  unsigned __int8 v11; // dl
  struct _KEVENT *v13; // rcx
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // bp
  __int64 v17; // rax
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // dl
  bool v20; // di
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
  *(_DWORD *)(a1 + 1856) = 71733;
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
      if ( v9 && (v10 = *(_BYTE *)(v7 + 3), v11 = 0, v10) )
      {
        while ( *(_BYTE *)(v9 + 2LL * v11) != a2 || !*(_BYTE *)(v9 + 2LL * v11 + 1) )
        {
          if ( ++v11 >= v10 )
            goto LABEL_9;
        }
        --*(_BYTE *)(v9 + 2LL * v11 + 1);
      }
      else
      {
LABEL_9:
        if ( !_bittestandreset((signed __int32 *)(v7 + 16), a2) )
          ndisBugCheckEx(0x1EuLL, 0LL, v7, a2);
      }
    }
  }
  if ( (*(_DWORD *)(a1 + 3164))-- == 1 )
  {
    v13 = *(struct _KEVENT **)(a1 + 3176);
    if ( v13 )
      KeSetEvent(v13, 0, 0);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
  v15 = *(_QWORD *)(a1 + 4952);
  v16 = v14;
  if ( v15 )
  {
    if ( a3 == 0xFF )
    {
      *(_BYTE *)v15 &= ~2u;
    }
    else if ( *(_BYTE *)(v15 + 1) )
    {
      if ( *(_BYTE *)(v15 + 1) == 1 )
      {
        v24 = v15 + ((unsigned __int64)a3 << 6);
        v25 = *(_DWORD *)(v24 + 64);
        if ( v25 >> 17 < 0x3FFE && (unsigned __int16)v25 >> 1 == (v25 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v24 + 8));
          *(_DWORD *)(v24 + 64) &= 0x10001u;
        }
        else
        {
          if ( (v25 & 0xFFFE) == 0 && (v25 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v15, a3);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v24 + 8), 0);
        }
      }
    }
    else
    {
      v17 = *(_QWORD *)(v15 + 8);
      if ( v17 && (v18 = *(_BYTE *)(v15 + 3), v19 = 0, v18) )
      {
        while ( *(_BYTE *)(v17 + 2LL * v19) != a3 || !*(_BYTE *)(v17 + 2LL * v19 + 1) )
        {
          if ( ++v19 >= v18 )
            goto LABEL_22;
        }
        --*(_BYTE *)(v17 + 2LL * v19 + 1);
      }
      else
      {
LABEL_22:
        if ( !_bittestandreset((signed __int32 *)(v15 + 16), a3) )
          ndisBugCheckEx(0x1EuLL, 0LL, v15, a3);
      }
    }
  }
  v20 = --*(_DWORD *)(a1 + 4504) == 0;
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_qD(14LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4496), v16);
  if ( v20 )
  {
    v26 = *(struct _KEVENT **)(a1 + 1608);
    if ( v26 )
      KeSetEvent(v26, 0, 0);
  }
  if ( (unsigned __int8)byte_1C008531B >= 4u )
    WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1);
}
