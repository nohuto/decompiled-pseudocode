/*
 * XREFs of ndisReferenceMiniportByHandleForNsi @ 0x1C0005060
 * Callers:
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009756C (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C5DDC (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     ndisReferenceWithTag @ 0x1C00068E0 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C000ED8C (ndisFreeRefCount.c)
 *     WPP_SF_q @ 0x1C0037744 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C0049E68 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0066D40 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0066DDC (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(__int64 a1)
{
  char v2; // r12
  KIRQL v3; // al
  struct _NDIS_M_DRIVER_BLOCK *v4; // r15
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
  ULONG_PTR v15; // r8
  KIRQL v16; // bp
  int v17; // ecx
  __int64 v18; // r10
  unsigned __int8 v19; // r9
  _BYTE *v20; // rdx
  bool v21; // zf
  char v22; // bl
  char v24; // bp
  KIRQL v25; // r14
  struct _NDIS_REFCOUNT_BLOCK *v26; // rcx
  ULONG_PTR v27; // rbx
  unsigned int v28; // edx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v30; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  KIRQL v35; // [rsp+30h] [rbp-58h]
  struct _NDIS_M_DRIVER_BLOCK *v36; // [rsp+38h] [rbp-50h]
  KSPIN_LOCK *p_SpinLock; // [rsp+40h] [rbp-48h]
  unsigned __int8 v38; // [rsp+A8h] [rbp+20h]

  v2 = 0;
  v38 = 0;
  v3 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v4 = ndisMiniDriverList;
  v5 = v3;
  v36 = ndisMiniDriverList;
  do
  {
    if ( !v4 )
      break;
    v6 = 0;
    p_SpinLock = &v4->Ref.SpinLock;
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
      goto LABEL_21;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
    v10 = KeAcquireSpinLockRaiseToDpc(&v4->Ref.SpinLock);
    MiniportQueue = v4->MiniportQueue;
    v35 = v10;
    while ( MiniportQueue )
    {
      if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)a1 )
      {
        v2 = 1;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v21 = (*(_DWORD *)(a1 + 120) & 0x80200020) == 0;
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 71532;
        if ( v21
          && (*(_DWORD *)(a1 + 124) & 0x1084110) == 0
          && *(_DWORD *)(a1 + 1520) == 1
          && *(_DWORD *)(a1 + 3924) == 1 )
        {
          v24 = 1;
          v25 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
          if ( !*(_BYTE *)(a1 + 4508) )
          {
            v26 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4952);
            if ( v26 )
              ndisReferenceWithTag(v26);
            v21 = (*(_DWORD *)(a1 + 4504))++ == -1;
            if ( !v21 )
            {
LABEL_31:
              if ( (unsigned __int8)byte_1C008531B >= 4u )
                WPP_SF_qD(12LL, &WPP_99d55c594fb658073ac0709936c97fa5_Traceguids, a1, *(unsigned int *)(a1 + 4504));
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4496), v25);
              if ( v24 )
              {
                ndisReferenceWithTag(*(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4960));
                ++*(_DWORD *)(a1 + 3164);
                v38 = 1;
              }
              goto LABEL_35;
            }
            *(_DWORD *)(a1 + 4504) = -1;
          }
          v24 = 0;
          goto LABEL_31;
        }
LABEL_35:
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      }
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v2 )
        break;
    }
    KeReleaseSpinLock(p_SpinLock, v35);
    v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v36->NextDriver;
    v5 = v12;
    v14 = KeAcquireSpinLockRaiseToDpc(p_SpinLock);
    v15 = (ULONG_PTR)v4->Ref.RefCountTracker;
    v16 = v14;
    if ( v15 )
    {
      v17 = *(unsigned __int8 *)(v15 + 1);
      if ( *(_BYTE *)(v15 + 1) )
      {
        if ( v17 == 1 )
        {
          v27 = v15 + 456;
          v28 = *(_DWORD *)(v15 + 512);
          if ( v28 >> 17 < 0x3FFE && (unsigned __int16)v28 >> 1 == (v28 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v15 + 456));
            *(_DWORD *)(v27 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v28 & 0xFFFE) == 0 && (v28 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, v15, 7uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v15 + 456), 0);
          }
        }
      }
      else
      {
        v18 = *(_QWORD *)(v15 + 8);
        if ( v18 && (v19 = *(_BYTE *)(v15 + 3)) != 0 )
        {
          while ( 1 )
          {
            v20 = (_BYTE *)(v18 + 2LL * (unsigned __int8)v17);
            if ( *v20 == 7 )
            {
              if ( v20[1] )
                break;
            }
            LOBYTE(v17) = v17 + 1;
            if ( (unsigned __int8)v17 >= v19 )
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
    KeReleaseSpinLock(p_SpinLock, v16);
    if ( v22 )
    {
      if ( (unsigned __int8)byte_1C008531B >= 4u )
        WPP_SF_q(23LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v36);
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v30 = *p_NextDriver;
          if ( *p_NextDriver == v36 )
            break;
          p_NextDriver = &v30->NextDriver;
          if ( !v30->NextDriver )
            goto LABEL_55;
        }
        *p_NextDriver = v36->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_55:
      Buffer = v36->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v36->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v36->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v36->NdisDriverInfo = 0LL;
      }
      if ( (v36->Flags & 1) != 0 )
      {
        KeWaitForSingleObject(&v36->IMStartRemoveMutex, Executive, 0, 0, 0LL);
        PendingDeviceList = v36->PendingDeviceList;
        v36->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
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
        v36->IMStartRemoveMutexOwnerThread = 0LL;
        KeReleaseMutex(&v36->IMStartRemoveMutex, 0);
      }
      KeSetEvent(&v36->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C008531B >= 4u )
        WPP_SF_q(24LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v36);
    }
LABEL_21:
    v36 = NextDriver;
    v4 = NextDriver;
  }
  while ( !v2 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v5);
  return v38;
}
