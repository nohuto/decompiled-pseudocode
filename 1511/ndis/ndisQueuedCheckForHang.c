/*
 * XREFs of ndisQueuedCheckForHang @ 0x1C000F390
 * Callers:
 *     <none>
 * Callees:
 *     ndisSetBusyAsync @ 0x1C0025818 (ndisSetBusyAsync.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ndisMResetMiniportInternal @ 0x1C005ABD8 (ndisMResetMiniportInternal.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ndisClearBusy @ 0x1C00665D8 (ndisClearBusy.c)
 *     ndisMInvokeCheckForHang @ 0x1C00966E4 (ndisMInvokeCheckForHang.c)
 */

void __fastcall ndisQueuedCheckForHang(char *MiniportAdapterHandle)
{
  char v2; // bp
  char v3; // bl
  KIRQL v4; // r15
  int v5; // ecx
  KIRQL v6; // r15
  int v7; // ecx
  int v8; // r8d
  int v9; // r9d
  char v10; // cl
  ULONG v11; // esi
  _QWORD *v12; // rax
  __int64 v13; // rbx
  KIRQL v14; // al
  ULONG_PTR v15; // r8
  KIRQL v16; // bp
  __int64 v17; // rax
  unsigned __int8 v18; // r9
  unsigned __int8 v19; // dl
  bool v20; // bl
  __int16 v21; // ax
  KIRQL v22; // si
  ULONG_PTR v23; // rbx
  unsigned int v24; // r9d
  struct _KEVENT *v25; // rcx

  v2 = 1;
  if ( !*((_QWORD *)MiniportAdapterHandle + 564)
    || (unsigned __int8)ndisSetBusyAsync(MiniportAdapterHandle, 1LL, 49LL, 0LL, 0) )
  {
    if ( (unsigned __int8)MiniportAdapterHandle[32] < 6u )
    {
      v22 = KfRaiseIrql(2u);
      v3 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)MiniportAdapterHandle + 477) + 120LL))(*((_QWORD *)MiniportAdapterHandle
                                                                                                  + 3));
      if ( v22 != 2 )
        KeLowerIrql(v22);
    }
    else
    {
      v3 = ndisMInvokeCheckForHang(MiniportAdapterHandle);
    }
    if ( *((_QWORD *)MiniportAdapterHandle + 564) )
      ndisClearBusy(MiniportAdapterHandle, 1LL, 49LL);
    v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
    *((_DWORD *)MiniportAdapterHandle + 464) = 657995;
    if ( !v3 && (*((_DWORD *)MiniportAdapterHandle + 30) & 0x1000) == 0 )
    {
      v5 = *((_DWORD *)MiniportAdapterHandle + 1121);
      if ( (v5 & 1) != 0 )
      {
        if ( (v5 & 2) != 0 )
        {
          v3 = 1;
          if ( (unsigned __int8)byte_1C0083718 >= 3u )
            WPP_SF_qq(
              23LL,
              &WPP_34eaeff8600c26a691447e424419d251_Traceguids,
              MiniportAdapterHandle,
              *((_QWORD *)MiniportAdapterHandle + 277));
        }
        else
        {
          v21 = *((_WORD *)MiniportAdapterHandle + 911);
          if ( v21 )
            *((_WORD *)MiniportAdapterHandle + 911) = v21 - 1;
          else
            *((_DWORD *)MiniportAdapterHandle + 1121) = v5 | 2;
        }
      }
    }
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v4);
    if ( v3 )
      ndisMResetMiniportInternal(MiniportAdapterHandle);
  }
  else
  {
    v2 = 0;
  }
  KeSetEvent((PRKEVENT)(MiniportAdapterHandle + 1912), 0, 0);
  _InterlockedExchange((volatile __int32 *)MiniportAdapterHandle + 492, 0);
  if ( v2 )
  {
    v6 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
    v7 = *((_DWORD *)MiniportAdapterHandle + 30);
    *((_DWORD *)MiniportAdapterHandle + 464) = 658059;
    if ( v7 >= 0 )
    {
      v8 = *((_DWORD *)MiniportAdapterHandle + 31);
      if ( (v8 & 0x20080000) == 0 )
      {
        v9 = 1000 * *((_DWORD *)MiniportAdapterHandle + 94);
        v10 = MiniportAdapterHandle[32];
        v11 = v9 / 5;
        v12 = (_QWORD *)*((_QWORD *)MiniportAdapterHandle + 477);
        if ( (unsigned __int8)v10 < 6u )
        {
          if ( v12[24] && v12[15] )
            goto LABEL_17;
        }
        else if ( v12[26] && v12[27] )
        {
LABEL_17:
          if ( (unsigned __int8)v10 > 6u || v10 == 6 && (unsigned __int8)MiniportAdapterHandle[33] >= 0x1Eu )
            v11 = 4000;
          *((_DWORD *)MiniportAdapterHandle + 31) = v8 & 0xDFFFFFFF;
          v13 = -10000LL * v9;
          KeClearEvent((PRKEVENT)(MiniportAdapterHandle + 1912));
          KeSetCoalescableTimer(
            (PKTIMER)(MiniportAdapterHandle + 216),
            (LARGE_INTEGER)v13,
            0,
            v11,
            (PKDPC)(MiniportAdapterHandle + 280));
        }
      }
    }
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v6);
  }
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(25LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, MiniportAdapterHandle);
  v14 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 562);
  v15 = *((_QWORD *)MiniportAdapterHandle + 619);
  v16 = v14;
  if ( v15 )
  {
    if ( *(_BYTE *)(v15 + 1) )
    {
      if ( *(_BYTE *)(v15 + 1) == 1 )
      {
        v23 = v15 + 5192;
        v24 = *(_DWORD *)(v15 + 5248);
        if ( v24 >> 17 < 0x3FFE && (unsigned __int16)v24 >> 1 == (v24 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 5192));
          *(_DWORD *)(v23 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v24 & 0xFFFE) == 0 && (v24 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, v15, 0x51uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 5192), 0);
        }
      }
    }
    else
    {
      v17 = *(_QWORD *)(v15 + 8);
      if ( v17 && (v18 = *(_BYTE *)(v15 + 3), v19 = 0, v18) )
      {
        while ( *(_BYTE *)(v17 + 2LL * v19) != 81 || !*(_BYTE *)(v17 + 2LL * v19 + 1) )
        {
          if ( ++v19 >= v18 )
            goto LABEL_31;
        }
        --*(_BYTE *)(v17 + 2LL * v19 + 1);
      }
      else
      {
LABEL_31:
        if ( !_bittestandreset((signed __int32 *)(v15 + 24), 0x11u) )
          ndisBugCheckEx(0x1EuLL, 0LL, v15, 0x51uLL);
      }
    }
  }
  v20 = --*((_DWORD *)MiniportAdapterHandle + 1126) == 0;
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(
      14LL,
      &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids,
      MiniportAdapterHandle,
      *((unsigned int *)MiniportAdapterHandle + 1126));
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 562, v16);
  if ( v20 )
  {
    v25 = (struct _KEVENT *)*((_QWORD *)MiniportAdapterHandle + 201);
    if ( v25 )
      KeSetEvent(v25, 0, 0);
  }
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_q(26LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, MiniportAdapterHandle);
}
