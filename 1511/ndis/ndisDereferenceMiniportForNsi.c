/*
 * XREFs of ndisDereferenceMiniportForNsi @ 0x1C00057E0
 * Callers:
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0004ADC (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50 (ndisReferenceTopMiniportByNameForNsi.c)
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0094F08 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00BEF0C (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

void __fastcall ndisDereferenceMiniportForNsi(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  KIRQL v6; // al
  ULONG_PTR v7; // r8
  KIRQL v8; // bp
  __int64 v9; // rax
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
  *(_DWORD *)(a1 + 1856) = 71717;
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
  if ( (*(_DWORD *)(a1 + 3164))-- == 1 )
  {
    v11 = *(struct _KEVENT **)(a1 + 3176);
    if ( v11 )
      KeSetEvent(v11, 0, 0);
  }
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v8);
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1);
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
  v18 = --*(_DWORD *)(a1 + 4504) == 0;
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(14LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, a1, *(unsigned int *)(a1 + 4504));
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4496), v14);
  if ( v18 )
  {
    v26 = *(struct _KEVENT **)(a1 + 1608);
    if ( v26 )
      KeSetEvent(v26, 0, 0);
  }
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, a1);
}
