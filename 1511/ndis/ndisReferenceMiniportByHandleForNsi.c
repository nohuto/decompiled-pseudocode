/*
 * XREFs of ndisReferenceMiniportByHandleForNsi @ 0x1C00069E0
 * Callers:
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C0094F08 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00BEF0C (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(__int64 a1)
{
  __int64 v1; // rbp
  char v2; // r15
  KIRQL v3; // al
  struct _NDIS_M_DRIVER_BLOCK *v4; // r13
  KIRQL v5; // r14
  char v6; // bl
  KIRQL v7; // si
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v10; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v12; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v14; // al
  ULONG_PTR v15; // r10
  KIRQL v16; // bp
  __int64 v17; // r9
  unsigned __int8 v18; // r8
  unsigned __int8 v19; // al
  _BYTE *v20; // rdx
  bool v21; // zf
  char v22; // bl
  KSPIN_LOCK *v24; // r15
  char v25; // bp
  KIRQL v26; // r14
  __int64 v27; // rax
  struct _NDIS_REFCOUNT_BLOCK *v28; // rcx
  ULONG_PTR v29; // rbx
  unsigned int v30; // edx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v32; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  KIRQL v37; // [rsp+31h] [rbp-57h]
  unsigned __int8 v39; // [rsp+A8h] [rbp+20h]

  v1 = a1;
  v2 = 0;
  v39 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v4 = ndisMiniDriverList;
  v5 = v3;
  do
  {
    if ( !v4 )
      break;
    v6 = 0;
    v7 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    if ( !v4->Ref.Closing )
    {
      ReferenceCount = v4->Ref.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v4->Ref.RefCountTracker;
        v4->Ref.ReferenceCount = ReferenceCount + 1;
        ndisReferenceWithTag(RefCountTracker);
        v6 = 1;
      }
    }
    KeReleaseSpinLock(&v4->Ref.SpinLock, v7);
    if ( !v6 )
    {
      NextDriver = v4->NextDriver;
      goto LABEL_22;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
    v10 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    MiniportQueue = v4->MiniportQueue;
    v37 = v10;
    while ( MiniportQueue )
    {
      if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)v1 )
      {
        v24 = (KSPIN_LOCK *)(v1 + 96);
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(v1 + 96));
        v21 = (*(_DWORD *)(v1 + 120) & 0x80200020) == 0;
        *(_QWORD *)(v1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(v1 + 1856) = 71516;
        if ( v21
          && (*(_DWORD *)(v1 + 124) & 0x1084110) == 0
          && *(_DWORD *)(v1 + 1520) == 1
          && *(_DWORD *)(v1 + 3924) == 1 )
        {
          v25 = 1;
          v26 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
          v27 = a1;
          if ( !*(_BYTE *)(a1 + 4508) )
          {
            v28 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4952);
            if ( v28 )
            {
              ndisReferenceWithTag(v28);
              v27 = a1;
            }
            v21 = (*(_DWORD *)(a1 + 4504))++ == -1;
            if ( !v21 )
            {
LABEL_32:
              if ( (unsigned __int8)byte_1C008371B >= 4u )
                WPP_SF_qD(12LL, &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids, v27, *(unsigned int *)(v27 + 4504));
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4496), v26);
              v21 = v25 == 0;
              v1 = a1;
              if ( !v21 )
              {
                ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4960));
                ++*(_DWORD *)(a1 + 3164);
                v39 = 1;
              }
              goto LABEL_36;
            }
            *(_DWORD *)(a1 + 4504) = -1;
          }
          v25 = 0;
          goto LABEL_32;
        }
LABEL_36:
        *(_QWORD *)(v1 + 520) = 0LL;
        *(_DWORD *)(v1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel(v24);
        v2 = 1;
      }
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v2 )
        break;
    }
    KeReleaseSpinLock(&v4->Ref.SpinLock, v37);
    v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v4->NextDriver;
    v5 = v12;
    v14 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    v15 = (ULONG_PTR)v4->Ref.RefCountTracker;
    v16 = v14;
    if ( v15 )
    {
      if ( *(_BYTE *)(v15 + 1) )
      {
        if ( *(_BYTE *)(v15 + 1) == 1 )
        {
          v29 = v15 + 456;
          v30 = *(_DWORD *)(v15 + 512);
          if ( v30 >> 17 < 0x3FFE && (unsigned __int16)v30 >> 1 == (v30 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 456));
            *(_DWORD *)(v29 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v30 & 0xFFFE) == 0 && (v30 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v4->Ref.RefCountTracker, 7uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 456), 0);
          }
        }
      }
      else
      {
        v17 = *(_QWORD *)(v15 + 8);
        if ( v17 && (v18 = *(_BYTE *)(v15 + 3), v19 = 0, v18) )
        {
          while ( 1 )
          {
            v20 = (_BYTE *)(v17 + 2LL * v19);
            if ( *v20 == 7 )
            {
              if ( v20[1] )
                break;
            }
            if ( ++v19 >= v18 )
              goto LABEL_17;
          }
          --v20[1];
        }
        else
        {
LABEL_17:
          if ( !_bittestandreset((signed __int32 *)(v15 + 16), 7u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v15, 7uLL);
        }
      }
    }
    v21 = v4->Ref.ReferenceCount-- == 1;
    if ( v21 )
    {
      v22 = 1;
      if ( !v4->Ref.ZeroBased )
      {
        ndisFreeRefCount(v4->Ref.RefCountTracker);
        v4->Ref.RefCountTracker = 0LL;
      }
    }
    else
    {
      v22 = 0;
    }
    KeReleaseSpinLock(&v4->Ref.SpinLock, v16);
    if ( v22 )
    {
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(23LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v4);
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v32 = *p_NextDriver;
          if ( *p_NextDriver == v4 )
            break;
          p_NextDriver = &v32->NextDriver;
          if ( !v32->NextDriver )
            goto LABEL_56;
        }
        *p_NextDriver = v4->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_56:
      Buffer = v4->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v4->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v4->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v4->NdisDriverInfo = 0LL;
      }
      if ( (v4->Flags & 1) != 0 )
      {
        KeWaitForSingleObject(&v4->IMStartRemoveMutex, Executive, 0, 0, 0LL);
        PendingDeviceList = v4->PendingDeviceList;
        v4->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
        if ( PendingDeviceList )
        {
          do
          {
            Next = PendingDeviceList->Next;
            ExFreePoolWithTag(PendingDeviceList, 0);
            PendingDeviceList = Next;
          }
          while ( Next );
        }
        v4->IMStartRemoveMutexOwnerThread = 0LL;
        KeReleaseMutex(&v4->IMStartRemoveMutex, 0);
      }
      KeSetEvent(&v4->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(24LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v4);
    }
    v1 = a1;
LABEL_22:
    v4 = NextDriver;
  }
  while ( !v2 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
  return v39;
}
