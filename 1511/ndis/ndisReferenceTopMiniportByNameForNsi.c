/*
 * XREFs of ndisReferenceTopMiniportByNameForNsi @ 0x1C0007B50
 * Callers:
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0004ADC (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0004F10 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0005B90 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C00094B0 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ndisIndicateStatusInternal @ 0x1C001CD04 (ndisIndicateStatusInternal.c)
 *     ndisDeviceControlHandler @ 0x1C0093CE0 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C00057E0 (ndisDereferenceMiniportForNsi.c)
 *     ndisReferenceWithTag @ 0x1C0007F00 (ndisReferenceWithTag.c)
 *     ndisFreeRefCount @ 0x1C0013468 (ndisFreeRefCount.c)
 *     memcmp @ 0x1C0026B00 (memcmp.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004A708 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C0065E54 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C0065EF0 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisReferenceTopMiniportByNameForNsi(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  __int64 v6; // r12
  __int64 v7; // rsi
  unsigned int v8; // r13d
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // r14
  KIRQL v11; // bp
  _REFERENCE_EX *p_Ref; // r15
  char v13; // bl
  KIRQL v14; // di
  unsigned __int16 ReferenceCount; // ax
  struct _NDIS_REFCOUNT_BLOCK *RefCountTracker; // rcx
  KIRQL v17; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  KIRQL v19; // r12
  __int64 v20; // r12
  _NDIS_BIND_PATHS *BindPaths; // rdx
  __int64 v22; // rcx
  unsigned __int16 v23; // ax
  KIRQL v24; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rsi
  KIRQL v26; // al
  ULONG_PTR v27; // r10
  KIRQL v28; // di
  int v29; // ecx
  __int64 v30; // r9
  unsigned __int8 v31; // r8
  _BYTE *v32; // rdx
  bool v33; // zf
  char v34; // bl
  char v36; // si
  KIRQL v37; // bp
  struct _NDIS_REFCOUNT_BLOCK *v38; // rcx
  unsigned int *p_Number; // rax
  ULONG_PTR v40; // rbx
  unsigned int v41; // edx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v43; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  __int64 v48; // [rsp+30h] [rbp-68h]
  __int64 v49; // [rsp+38h] [rbp-60h]
  struct _NDIS_M_DRIVER_BLOCK *v50; // [rsp+40h] [rbp-58h]
  unsigned int v52; // [rsp+A8h] [rbp+10h]
  KIRQL v53; // [rsp+B0h] [rbp+18h]

  v6 = 0LL;
  v49 = 0LL;
  v48 = 0LL;
  v7 = a1;
  v52 = ~a2 & 0x80200020;
  v8 = 1;
  if ( !*(_QWORD *)(a1 + 3824) )
    return 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v11 = v9;
  v50 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_30;
  while ( 2 )
  {
    p_Ref = &v10->Ref;
    v13 = 0;
    v14 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    if ( !v10->Ref.Closing )
    {
      ReferenceCount = v10->Ref.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        RefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)v10->Ref.RefCountTracker;
        v10->Ref.ReferenceCount = ReferenceCount + 1;
        ndisReferenceWithTag(RefCountTracker);
        v13 = 1;
      }
    }
    KeReleaseSpinLock(&v10->Ref.SpinLock, v14);
    if ( !v13 )
    {
      NextDriver = v10->NextDriver;
      goto LABEL_25;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
    v17 = KeAcquireSpinLockRaiseToDpc(&v10->Ref.SpinLock);
    MiniportQueue = v10->MiniportQueue;
    v19 = v17;
    v53 = v17;
    if ( !MiniportQueue )
      goto LABEL_15;
    v20 = v49;
    do
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( !BindPaths )
        goto LABEL_13;
      if ( BindPaths->Number < v8 )
        goto LABEL_13;
      v22 = *(_QWORD *)(v7 + 3824);
      v23 = *(_WORD *)(v22 + 8);
      if ( v23 != BindPaths->Paths[0].Length || memcmp(*(const void **)(v22 + 16), BindPaths->Paths[0].Buffer, v23) )
        goto LABEL_13;
      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
      MiniportQueue->MiniportThread = KeGetCurrentThread();
      MiniportQueue->LockDbg = 71658;
      if ( (v52 & MiniportQueue->Flags) == 0
        && (MiniportQueue->PnPFlags & 0x1084110) == 0
        && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
        && (MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 || a4) )
      {
        v36 = 1;
        v37 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
        if ( !MiniportQueue->Ref.Closing )
        {
          v38 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
          if ( v38 )
            ndisReferenceWithTag(v38);
          v33 = MiniportQueue->Ref.ReferenceCount++ == -1;
          if ( !v33 )
            goto LABEL_39;
          MiniportQueue->Ref.ReferenceCount = -1;
        }
        v36 = 0;
LABEL_39:
        if ( (unsigned __int8)byte_1C008371B >= 4u )
          WPP_SF_qD(
            12LL,
            &WPP_16c28ebb9fa84dacc642b00af20fc2f4_Traceguids,
            MiniportQueue,
            MiniportQueue->Ref.ReferenceCount);
        KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v37);
        if ( v36 )
        {
          v48 = v20;
          ndisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker);
          p_Number = &MiniportQueue->BindPaths->Number;
          v20 = (__int64)MiniportQueue;
          ++MiniportQueue->NsiOpenReferences;
          v8 = *p_Number;
        }
        v7 = a1;
      }
      MiniportQueue->MiniportThread = 0LL;
      MiniportQueue->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      if ( v48 )
      {
        ndisDereferenceMiniportForNsi(v48, a5, a6);
        v48 = 0LL;
      }
LABEL_13:
      MiniportQueue = MiniportQueue->NextMiniport;
    }
    while ( MiniportQueue );
    p_Ref = &v10->Ref;
    v10 = v50;
    v49 = v20;
    v19 = v53;
LABEL_15:
    KeReleaseSpinLock(&p_Ref->SpinLock, v19);
    v24 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v10->NextDriver;
    v11 = v24;
    v26 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    v27 = (ULONG_PTR)p_Ref->RefCountTracker;
    v28 = v26;
    if ( v27 )
    {
      v29 = *(unsigned __int8 *)(v27 + 1);
      if ( *(_BYTE *)(v27 + 1) )
      {
        if ( v29 == 1 )
        {
          v40 = v27 + 520;
          v41 = *(_DWORD *)(v27 + 576);
          if ( v41 >> 17 < 0x3FFE && (unsigned __int16)v41 >> 1 == (v41 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v27 + 520));
            *(_DWORD *)(v40 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v41 & 0xFFFE) == 0 && (v41 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)p_Ref->RefCountTracker, 8uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v27 + 520), 0);
          }
        }
      }
      else
      {
        v30 = *(_QWORD *)(v27 + 8);
        if ( v30 && (v31 = *(_BYTE *)(v27 + 3)) != 0 )
        {
          while ( 1 )
          {
            v32 = (_BYTE *)(v30 + 2LL * (unsigned __int8)v29);
            if ( *v32 == 8 )
            {
              if ( v32[1] )
                break;
            }
            LOBYTE(v29) = v29 + 1;
            if ( (unsigned __int8)v29 >= v31 )
              goto LABEL_21;
          }
          --v32[1];
        }
        else
        {
LABEL_21:
          if ( !_bittestandreset((signed __int32 *)(v27 + 16), 8u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v27, 8uLL);
        }
      }
    }
    v33 = p_Ref->ReferenceCount-- == 1;
    if ( v33 )
    {
      v34 = 1;
      if ( !p_Ref->ZeroBased )
      {
        ndisFreeRefCount(p_Ref->RefCountTracker);
        p_Ref->RefCountTracker = 0LL;
      }
    }
    else
    {
      v34 = 0;
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v28);
    if ( v34 )
    {
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(23LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v10);
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v43 = *p_NextDriver;
          if ( *p_NextDriver == v10 )
            break;
          p_NextDriver = &v43->NextDriver;
          if ( !v43->NextDriver )
            goto LABEL_66;
        }
        *p_NextDriver = v10->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_66:
      Buffer = v10->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v10->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v10->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v10->NdisDriverInfo = 0LL;
      }
      if ( (v10->Flags & 1) != 0 )
      {
        KeWaitForSingleObject(&v10->IMStartRemoveMutex, Executive, 0, 0, 0LL);
        PendingDeviceList = v10->PendingDeviceList;
        v10->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
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
        v10->IMStartRemoveMutexOwnerThread = 0LL;
        KeReleaseMutex(&v10->IMStartRemoveMutex, 0);
      }
      KeSetEvent(&v10->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C008371B >= 4u )
        WPP_SF_q(24LL, &WPP_11d423e8e1961e492b47e90eefd811d6_Traceguids, v10);
    }
LABEL_25:
    v50 = NextDriver;
    v10 = NextDriver;
    if ( NextDriver )
    {
      v7 = a1;
      continue;
    }
    break;
  }
  v6 = v49;
LABEL_30:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v11);
  return v6;
}
