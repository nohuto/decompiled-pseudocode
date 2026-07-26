/*
 * XREFs of ndisQueuedCheckForHang @ 0x1C000F020
 * Callers:
 *     <none>
 * Callees:
 *     ndisMResetMiniportInternal @ 0x1C0023880 (ndisMResetMiniportInternal.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 *     ?ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006AB08 (-ndisWdfSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ?ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z @ 0x1C006ADF0 (-ndisWdmSetBusyAsync@@YAEPEAU_NDIS_MINIPORT_BLOCK@@KW4_NDIS_SS_BUSY_REASON@@PEAXK@Z.c)
 *     ndisClearBusy @ 0x1C006B5C8 (ndisClearBusy.c)
 *     ndisMInvokeCheckForHang @ 0x1C009C080 (ndisMInvokeCheckForHang.c)
 */

void __fastcall ndisQueuedCheckForHang(
        struct _NDIS_MINIPORT_BLOCK *MiniportAdapterHandle,
        __int64 a2,
        __int64 a3,
        void *a4)
{
  char v5; // r14
  char v6; // bl
  KIRQL v7; // r15
  unsigned int WSyncFlags; // ecx
  KIRQL v9; // r14
  int Flags; // ecx
  unsigned int PnPFlags; // r8d
  int v12; // r9d
  unsigned __int8 MajorNdisVersion; // cl
  ULONG v14; // esi
  _NDIS_M_DRIVER_BLOCK *DriverHandle; // rax
  __int64 v16; // rbx
  KIRQL v17; // al
  ULONG_PTR RefCountTracker; // r8
  KIRQL v19; // bp
  __int64 v20; // rax
  unsigned __int8 v21; // r9
  unsigned __int8 v22; // dl
  bool v23; // zf
  bool v24; // bl
  unsigned __int16 CFHangXTicks; // ax
  unsigned __int8 busy; // al
  KIRQL v27; // si
  ULONG_PTR v28; // rbx
  unsigned int v29; // r9d
  struct _KEVENT *RemoveReadyEvent; // rcx
  unsigned int Dpc; // [rsp+20h] [rbp-38h]

  v5 = 1;
  if ( !MiniportAdapterHandle->SelectiveSuspend
    || ((MiniportAdapterHandle->Flags & 0x80u) == 0
      ? (busy = ndisWdmSetBusyAsync(MiniportAdapterHandle, 1u, NdisBusyCheckForHang, 0LL, 0))
      : (busy = ndisWdfSetBusyAsync(MiniportAdapterHandle, 1u, NdisBusyCheckForHang, a4, Dpc)),
        busy) )
  {
    if ( MiniportAdapterHandle->MajorNdisVersion < 6u )
    {
      v27 = KfRaiseIrql(2u);
      v6 = MiniportAdapterHandle->DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler(MiniportAdapterHandle->MiniportAdapterContext);
      if ( v27 != 2 )
        KeLowerIrql(v27);
    }
    else
    {
      v6 = ndisMInvokeCheckForHang(MiniportAdapterHandle);
    }
    if ( MiniportAdapterHandle->SelectiveSuspend )
      ndisClearBusy(MiniportAdapterHandle, 1LL, 49LL);
    v7 = KeAcquireSpinLockRaiseToDpc(&MiniportAdapterHandle->Lock);
    MiniportAdapterHandle->MiniportThread = KeGetCurrentThread();
    MiniportAdapterHandle->LockDbg = 657995;
    if ( !v6 && (MiniportAdapterHandle->Flags & 0x1000) == 0 )
    {
      WSyncFlags = MiniportAdapterHandle->WSyncFlags;
      if ( (WSyncFlags & 1) != 0 )
      {
        if ( (WSyncFlags & 2) != 0 )
        {
          v6 = 1;
          if ( (unsigned __int8)byte_1C00895D8 >= 3u )
            WPP_SF_qq(
              23LL,
              &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids,
              MiniportAdapterHandle,
              MiniportAdapterHandle->PendingOidRequest);
        }
        else
        {
          CFHangXTicks = MiniportAdapterHandle->CFHangXTicks;
          if ( CFHangXTicks )
            MiniportAdapterHandle->CFHangXTicks = CFHangXTicks - 1;
          else
            MiniportAdapterHandle->WSyncFlags = WSyncFlags | 2;
        }
      }
    }
    MiniportAdapterHandle->MiniportThread = 0LL;
    MiniportAdapterHandle->LockDbg = 0;
    KeReleaseSpinLock(&MiniportAdapterHandle->Lock, v7);
    if ( v6 )
      ndisMResetMiniportInternal(MiniportAdapterHandle);
  }
  else
  {
    v5 = 0;
  }
  KeSetEvent(&MiniportAdapterHandle->CFHCompletedEvent, 0, 0);
  _InterlockedExchange(&MiniportAdapterHandle->CFHWorkItemQueued, 0);
  if ( v5 )
  {
    v9 = KeAcquireSpinLockRaiseToDpc(&MiniportAdapterHandle->Lock);
    MiniportAdapterHandle->MiniportThread = KeGetCurrentThread();
    Flags = MiniportAdapterHandle->Flags;
    MiniportAdapterHandle->LockDbg = 658059;
    if ( Flags >= 0 )
    {
      PnPFlags = MiniportAdapterHandle->PnPFlags;
      if ( (PnPFlags & 0x20080000) == 0 )
      {
        v12 = 1000 * MiniportAdapterHandle->CheckForHangSeconds;
        MajorNdisVersion = MiniportAdapterHandle->MajorNdisVersion;
        v14 = v12 / 5;
        DriverHandle = MiniportAdapterHandle->DriverHandle;
        if ( MajorNdisVersion < 6u )
        {
          if ( DriverHandle->MiniportDriverCharacteristics.ReturnNetBufferListsHandler
            && DriverHandle->MiniportCharacteristics.Ndis50Chars.CheckForHangHandler )
          {
            goto LABEL_17;
          }
        }
        else if ( DriverHandle->MiniportDriverCharacteristics.CheckForHangHandlerEx
               && DriverHandle->MiniportDriverCharacteristics.ResetHandlerEx )
        {
LABEL_17:
          if ( MajorNdisVersion > 6u || MajorNdisVersion == 6 && MiniportAdapterHandle->MinorNdisVersion >= 0x1Eu )
            v14 = 4000;
          MiniportAdapterHandle->PnPFlags = PnPFlags & 0xDFFFFFFF;
          v16 = -10000LL * v12;
          KeClearEvent(&MiniportAdapterHandle->CFHCompletedEvent);
          KeSetCoalescableTimer(
            &MiniportAdapterHandle->WakeUpDpcTimer.Timer,
            (LARGE_INTEGER)v16,
            0,
            v14,
            &MiniportAdapterHandle->WakeUpDpcTimer.Dpc);
        }
      }
    }
    MiniportAdapterHandle->MiniportThread = 0LL;
    MiniportAdapterHandle->LockDbg = 0;
    KeReleaseSpinLock(&MiniportAdapterHandle->Lock, v9);
  }
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(25LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, MiniportAdapterHandle);
  v17 = KeAcquireSpinLockRaiseToDpc(&MiniportAdapterHandle->Ref.SpinLock);
  RefCountTracker = (ULONG_PTR)MiniportAdapterHandle->RefCountTracker;
  v19 = v17;
  if ( RefCountTracker )
  {
    if ( *(_BYTE *)(RefCountTracker + 1) )
    {
      if ( *(_BYTE *)(RefCountTracker + 1) == 1 )
      {
        v28 = RefCountTracker + 5320;
        v29 = *(_DWORD *)(RefCountTracker + 5376);
        if ( v29 >> 17 < 0x3FFE && (unsigned __int16)v29 >> 1 == (v29 >> 17) + 1 )
        {
          ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(RefCountTracker + 5320));
          *(_DWORD *)(v28 + 56) &= 0x10001u;
        }
        else
        {
          if ( (v29 & 0xFFFE) == 0 && (v29 & 1) == 0 )
            ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 0x53uLL);
          ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 5320), 0);
        }
      }
    }
    else
    {
      v20 = *(_QWORD *)(RefCountTracker + 8);
      if ( v20 && (v21 = *(_BYTE *)(RefCountTracker + 3), v22 = 0, v21) )
      {
        while ( *(_BYTE *)(v20 + 2LL * v22) != 83 || !*(_BYTE *)(v20 + 2LL * v22 + 1) )
        {
          if ( ++v22 >= v21 )
            goto LABEL_31;
        }
        --*(_BYTE *)(v20 + 2LL * v22 + 1);
      }
      else
      {
LABEL_31:
        if ( !_bittestandreset((signed __int32 *)(RefCountTracker + 24), 0x13u) )
          ndisBugCheckEx(0x1EuLL, 0LL, RefCountTracker, 0x53uLL);
      }
    }
  }
  v23 = MiniportAdapterHandle->Ref.ReferenceCount-- == 1;
  v24 = v23;
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(
      14LL,
      &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids,
      MiniportAdapterHandle,
      MiniportAdapterHandle->Ref.ReferenceCount);
  KeReleaseSpinLock(&MiniportAdapterHandle->Ref.SpinLock, v19);
  if ( v24 )
  {
    RemoveReadyEvent = MiniportAdapterHandle->RemoveReadyEvent;
    if ( RemoveReadyEvent )
      KeSetEvent(RemoveReadyEvent, 0, 0);
  }
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_q(26LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, MiniportAdapterHandle);
}
