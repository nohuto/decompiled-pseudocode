/*
 * XREFs of ndisReferenceMiniportByHandleForNsi @ 0x1C0009F30
 * Callers:
 *     ?ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C009AF68 (-ndisIfGetMiniportStatistics@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAXPEAU_NDIS_FILTER_BLOCK@@@Z.c)
 *     ?ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BLOCK@@@Z @ 0x1C00C3C54 (-ndisIfQuerySetMiniport@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_OID_REQUEST@@PEAU_NDIS_FILTER_BL.c)
 * Callees:
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

__int64 __fastcall ndisReferenceMiniportByHandleForNsi(__int64 a1, unsigned __int8 a2, unsigned __int8 a3)
{
  char v4; // r15
  unsigned __int8 v5; // r12
  KIRQL v6; // al
  struct _NDIS_M_DRIVER_BLOCK *v7; // r13
  KIRQL v8; // bp
  char v9; // bl
  KIRQL v10; // si
  unsigned __int16 ReferenceCount; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rbx
  _WORD *v13; // rcx
  KIRQL v14; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned __int8 v16; // r14
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // r15
  KIRQL v18; // al
  ULONG_PTR v19; // r10
  KIRQL v20; // si
  __int64 v21; // r9
  unsigned __int8 v22; // r8
  unsigned __int8 v23; // al
  _BYTE *v24; // rdx
  bool v25; // zf
  char v26; // bl
  KIRQL v28; // r12
  struct _NDIS_REFCOUNT_BLOCK *v29; // rbp
  _NDIS_REFCOUNT_TAGGED_ENTRY *v30; // rcx
  struct _NDIS_REFCOUNT_BLOCK *v31; // rsi
  _NDIS_REFCOUNT_TAGGED_ENTRY *v32; // rcx
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  unsigned __int8 v34; // r9
  unsigned __int8 v35; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v36; // rdx
  unsigned __int8 NumOverflowTaggedEntries; // dl
  unsigned __int8 v38; // dl
  _NDIS_REFCOUNT_TAGGED_ENTRY *v39; // r10
  unsigned __int8 v40; // r9
  unsigned __int8 v41; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v42; // rdx
  unsigned __int8 v43; // dl
  unsigned __int8 v44; // dl
  __int64 v45; // r10
  unsigned __int8 v46; // r9
  unsigned __int8 v47; // r8
  _BYTE *v48; // rdx
  unsigned __int8 v49; // dl
  unsigned __int8 v50; // dl
  ULONG_PTR v51; // rbx
  unsigned int v52; // edx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v54; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  char v59; // [rsp+30h] [rbp-58h]
  KIRQL v60; // [rsp+31h] [rbp-57h]
  struct _NDIS_M_DRIVER_BLOCK *v61; // [rsp+38h] [rbp-50h]
  KSPIN_LOCK *SpinLock; // [rsp+40h] [rbp-48h]
  char v65; // [rsp+A8h] [rbp+20h]

  v4 = 0;
  v5 = 0;
  v65 = 0;
  v59 = 0;
  v6 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v7 = ndisMiniDriverList;
  v8 = v6;
  v61 = ndisMiniDriverList;
  do
  {
    if ( !v7 )
      break;
    v9 = 0;
    SpinLock = &v7->Ref.SpinLock;
    v10 = KeAcquireSpinLockRaiseToDpc(&v7->Ref.SpinLock);
    if ( !v7->Ref.Closing )
    {
      ReferenceCount = v7->Ref.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        RefCountTracker = v7->Ref.RefCountTracker;
        v7->Ref.ReferenceCount = ReferenceCount + 1;
        if ( RefCountTracker )
        {
          if ( *((_BYTE *)RefCountTracker + 1) )
          {
            if ( *((_BYTE *)RefCountTracker + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 114), 1u);
          }
          else
          {
            v13 = 0LL;
            if ( _bittestandset((signed __int32 *)RefCountTracker + 4, 7u) )
            {
              v45 = *((_QWORD *)RefCountTracker + 1);
              if ( !v45 )
                goto LABEL_140;
              v46 = *((_BYTE *)RefCountTracker + 3);
              v47 = 0;
              if ( !v46 )
                goto LABEL_140;
              do
              {
                v48 = (_BYTE *)(v45 + 2LL * v47);
                if ( *v48 == 7 )
                {
                  if ( v48[1] != 0xFF )
                  {
                    ++v48[1];
                    goto LABEL_8;
                  }
                }
                else if ( !v48[1] )
                {
                  v13 = (_WORD *)(v45 + 2LL * v47);
                }
                ++v47;
              }
              while ( v47 < v46 );
              if ( v13 )
              {
                *v13 = 263;
              }
              else
              {
LABEL_140:
                if ( !*((_BYTE *)RefCountTracker + 1) )
                {
                  v49 = *((_BYTE *)RefCountTracker + 3);
                  if ( v49 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                    *((_BYTE *)RefCountTracker + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v49 + 2 <= 0xFF )
                      v50 = v49 + 2;
                    else
                      v50 = -1;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, v50);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
              }
            }
          }
        }
LABEL_8:
        v9 = 1;
      }
    }
    KeReleaseSpinLock(&v7->Ref.SpinLock, v10);
    if ( !v9 )
    {
      NextDriver = v7->NextDriver;
      goto LABEL_24;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
    v14 = KeAcquireSpinLockRaiseToDpc(&v7->Ref.SpinLock);
    MiniportQueue = v7->MiniportQueue;
    v16 = a2;
    v60 = v14;
    while ( MiniportQueue )
    {
      if ( MiniportQueue == (_NDIS_MINIPORT_BLOCK *)a1 )
      {
        v4 = 1;
        v65 = 1;
        KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 96));
        v25 = (*(_DWORD *)(a1 + 120) & 0x80200020) == 0;
        *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
        *(_DWORD *)(a1 + 1856) = 71575;
        if ( v25
          && (*(_DWORD *)(a1 + 124) & 0x1084110) == 0
          && *(_DWORD *)(a1 + 1520) == 1
          && *(_DWORD *)(a1 + 3924) == 1 )
        {
          v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 4496));
          if ( !*(_BYTE *)(a1 + 4508) )
          {
            v29 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4952);
            if ( v29 )
            {
              if ( v29->Type )
              {
                if ( v29->Type == 1 )
                  ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v29->8 + a3, 1u);
              }
              else
              {
                v30 = 0LL;
                if ( _bittestandset((signed __int32 *)v29->TaggedRefCounts.RefMask, a3) )
                {
                  Tags = v29->TaggedRefCounts.Tags;
                  if ( Tags && (v34 = v29->NumOverflowTaggedEntries, v35 = 0, v34) )
                  {
                    do
                    {
                      v36 = &Tags[v35];
                      if ( v36->Tag == a3 )
                      {
                        if ( v36->RefCount != 0xFF )
                        {
                          ++v36->RefCount;
                          goto LABEL_34;
                        }
                      }
                      else if ( !v36->RefCount )
                      {
                        v30 = &Tags[v35];
                      }
                      ++v35;
                    }
                    while ( v35 < v34 );
                    if ( !v30 )
                      goto LABEL_53;
                    v30->Tag = a3;
                    v30->RefCount = 1;
                  }
                  else
                  {
LABEL_53:
                    if ( !v29->Type )
                    {
                      NumOverflowTaggedEntries = v29->NumOverflowTaggedEntries;
                      if ( NumOverflowTaggedEntries == 0xFF )
                      {
                        ndisFreeRefCountAuxiliaryMemory(v29);
                        v29->Type = 2;
                      }
                      else
                      {
                        if ( (unsigned int)NumOverflowTaggedEntries + 2 > 0xFF )
                          v38 = -1;
                        else
                          v38 = NumOverflowTaggedEntries + 2;
                        ndisResizeRefCountBlockTagged(v29, v38);
                      }
                    }
                    NdisReferenceWithTag(v29);
                  }
                }
              }
            }
LABEL_34:
            v25 = (*(_DWORD *)(a1 + 4504))++ == -1;
            if ( !v25 )
            {
LABEL_35:
              if ( (unsigned __int8)byte_1C00895DB >= 4u )
                WPP_SF_qD(12LL, &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids, a1, *(unsigned int *)(a1 + 4504));
              KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 4496), v28);
              if ( v4 )
              {
                v31 = *(struct _NDIS_REFCOUNT_BLOCK **)(a1 + 4960);
                if ( v31 )
                {
                  if ( v31->Type )
                  {
                    if ( v31->Type == 1 )
                      ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v31->8 + v16, 1u);
                  }
                  else
                  {
                    v32 = 0LL;
                    if ( _bittestandset((signed __int32 *)v31->TaggedRefCounts.RefMask, a2) )
                    {
                      v39 = v31->TaggedRefCounts.Tags;
                      if ( !v39 )
                        goto LABEL_141;
                      v40 = v31->NumOverflowTaggedEntries;
                      v41 = 0;
                      if ( !v40 )
                        goto LABEL_141;
                      do
                      {
                        v42 = &v39[v41];
                        if ( v42->Tag == a2 )
                        {
                          if ( v42->RefCount != 0xFF )
                          {
                            ++v42->RefCount;
                            goto LABEL_41;
                          }
                        }
                        else if ( !v42->RefCount )
                        {
                          v32 = &v39[v41];
                        }
                        ++v41;
                      }
                      while ( v41 < v40 );
                      if ( v32 )
                      {
                        v32->Tag = a2;
                        v32->RefCount = 1;
                      }
                      else
                      {
LABEL_141:
                        if ( !v31->Type )
                        {
                          v43 = v31->NumOverflowTaggedEntries;
                          if ( v43 == 0xFF )
                          {
                            ndisFreeRefCountAuxiliaryMemory(v31);
                            v31->Type = 2;
                          }
                          else
                          {
                            if ( (unsigned int)v43 + 2 > 0xFF )
                              v44 = -1;
                            else
                              v44 = v43 + 2;
                            ndisResizeRefCountBlockTagged(v31, v44);
                          }
                        }
                        NdisReferenceWithTag(v31);
                      }
                    }
LABEL_41:
                    v16 = a2;
                  }
                }
                ++*(_DWORD *)(a1 + 3164);
                v5 = 1;
                v59 = 1;
                v4 = 1;
              }
              else
              {
                v5 = v59;
                v4 = 1;
              }
              goto LABEL_43;
            }
            *(_DWORD *)(a1 + 4504) = -1;
          }
          v4 = 0;
          goto LABEL_35;
        }
LABEL_43:
        *(_QWORD *)(a1 + 520) = 0LL;
        *(_DWORD *)(a1 + 1856) = 0;
        KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 96));
      }
      MiniportQueue = MiniportQueue->NextMiniport;
      if ( v4 )
        break;
    }
    KeReleaseSpinLock(SpinLock, v60);
    v8 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v61->NextDriver;
    v18 = KeAcquireSpinLockRaiseToDpc(SpinLock);
    v19 = (ULONG_PTR)v7->Ref.RefCountTracker;
    v20 = v18;
    if ( v19 )
    {
      if ( *(_BYTE *)(v19 + 1) )
      {
        if ( *(_BYTE *)(v19 + 1) == 1 )
        {
          v51 = v19 + 456;
          v52 = *(_DWORD *)(v19 + 512);
          if ( v52 >> 17 < 0x3FFE && (unsigned __int16)v52 >> 1 == (v52 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v19 + 456));
            *(_DWORD *)(v51 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v52 & 0xFFFE) == 0 && (v52 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)v7->Ref.RefCountTracker, 7uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v19 + 456), 0);
          }
        }
      }
      else
      {
        v21 = *(_QWORD *)(v19 + 8);
        if ( v21 && (v22 = *(_BYTE *)(v19 + 3), v23 = 0, v22) )
        {
          while ( 1 )
          {
            v24 = (_BYTE *)(v21 + 2LL * v23);
            if ( *v24 == 7 )
            {
              if ( v24[1] )
                break;
            }
            if ( ++v23 >= v22 )
              goto LABEL_20;
          }
          --v24[1];
        }
        else
        {
LABEL_20:
          if ( !_bittestandreset((signed __int32 *)(v19 + 16), 7u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v19, 7uLL);
        }
      }
    }
    v25 = v7->Ref.ReferenceCount-- == 1;
    if ( v25 )
    {
      v26 = 1;
      if ( !v7->Ref.ZeroBased )
      {
        NdisFreeRefCount(v7->Ref.RefCountTracker);
        v7->Ref.RefCountTracker = 0LL;
      }
    }
    else
    {
      v26 = 0;
    }
    KeReleaseSpinLock(SpinLock, v20);
    if ( v26 )
    {
      if ( (unsigned __int8)byte_1C00895DB >= 4u )
        WPP_SF_q(23LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v61);
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v54 = *p_NextDriver;
          if ( *p_NextDriver == v61 )
            break;
          p_NextDriver = &v54->NextDriver;
          if ( !v54->NextDriver )
            goto LABEL_125;
        }
        *p_NextDriver = v61->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_125:
      Buffer = v61->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v61->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v61->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v61->NdisDriverInfo = 0LL;
      }
      if ( (v61->Flags & 1) != 0 )
      {
        KeWaitForSingleObject(&v61->IMStartRemoveMutex, Executive, 0, 0, 0LL);
        PendingDeviceList = v61->PendingDeviceList;
        v61->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
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
        v61->IMStartRemoveMutexOwnerThread = 0LL;
        KeReleaseMutex(&v61->IMStartRemoveMutex, 0);
      }
      KeSetEvent(&v61->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C00895DB >= 4u )
        WPP_SF_q(24LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v61);
    }
LABEL_24:
    v7 = NextDriver;
    v61 = NextDriver;
    v4 = v65;
  }
  while ( !v65 );
  KeReleaseSpinLock(&ndisMiniDriverListLock, v8);
  return v5;
}
