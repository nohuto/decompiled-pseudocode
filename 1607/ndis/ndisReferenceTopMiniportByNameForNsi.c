/*
 * XREFs of ndisReferenceTopMiniportByNameForNsi @ 0x1C0009A10
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1C0007260 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@Z @ 0x1C0007D40 (-ndisNsiEnumerateAllInterfaceInformation@@YAJPEAU_NM_REQUEST_ENUMERATE_OBJECTS_ALL_PARAMETERS@@@.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x1C0008B30 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 *     ?ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0015C58 (-ndisNsiGetTopIfBlockFromMiniport@@YAPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ndisIndicateStatusInternal @ 0x1C0016D10 (ndisIndicateStatusInternal.c)
 *     ndisDeviceControlHandler @ 0x1C009B358 (ndisDeviceControlHandler.c)
 * Callees:
 *     ndisDereferenceMiniportForNsi @ 0x1C000A3BC (ndisDereferenceMiniportForNsi.c)
 *     NdisReferenceWithTag @ 0x1C00175E0 (NdisReferenceWithTag.c)
 *     NdisFreeRefCount @ 0x1C001BCE0 (NdisFreeRefCount.c)
 *     ?ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z @ 0x1C001BD04 (-ndisResizeRefCountBlockTagged@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@E@Z.c)
 *     ?ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z @ 0x1C001BD90 (-ndisFreeRefCountAuxiliaryMemory@@YAXPEAU_NDIS_REFCOUNT_BLOCK@@@Z.c)
 *     memcmp @ 0x1C00270A0 (memcmp.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisBugCheckEx @ 0x1C004F098 (ndisBugCheckEx.c)
 *     ?ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z @ 0x1C006A3F4 (-ndisFreeRefCountStackChain@@YAXPEAU_NDIS_REFCOUNT_STACK_BLOCK@@@Z.c)
 *     ?ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z @ 0x1C006A490 (-ndisReferenceWithTagStackTrace@@YAXPEAU_NDIS_REFCOUNT_WITH_STACK@@E@Z.c)
 */

_NDIS_MINIPORT_BLOCK *__fastcall ndisReferenceTopMiniportByNameForNsi(
        __int64 a1,
        int a2,
        __int64 a3,
        char a4,
        unsigned __int8 a5,
        unsigned __int8 a6)
{
  _NDIS_MINIPORT_BLOCK *v6; // rbx
  unsigned int v7; // r12d
  unsigned int v8; // ebp
  __int64 v9; // r15
  KIRQL v10; // al
  struct _NDIS_M_DRIVER_BLOCK *v11; // r14
  KIRQL v12; // si
  _REFERENCE_EX *p_Ref; // r13
  char v14; // bl
  KIRQL v15; // di
  unsigned __int16 ReferenceCount; // ax
  NDIS_REFCOUNT_HANDLE__ *RefCountTracker; // rbx
  _WORD *v18; // rcx
  KIRQL v19; // al
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  _NDIS_MINIPORT_BLOCK *v21; // r13
  _NDIS_BIND_PATHS *BindPaths; // rdx
  __int64 v23; // rcx
  unsigned __int16 v24; // ax
  KIRQL v25; // al
  struct _NDIS_M_DRIVER_BLOCK *NextDriver; // rbp
  KIRQL v27; // al
  ULONG_PTR v28; // r10
  KIRQL v29; // di
  int v30; // ecx
  __int64 v31; // r9
  unsigned __int8 v32; // r8
  _BYTE *v33; // rdx
  bool v34; // zf
  char v35; // bl
  char v37; // bp
  KIRQL v38; // r14
  struct _NDIS_REFCOUNT_BLOCK *v39; // rsi
  unsigned __int8 *p_Tag; // rcx
  struct _NDIS_REFCOUNT_BLOCK *NsiRefCountTracker; // rdi
  unsigned __int8 *v42; // rcx
  unsigned int *p_Number; // rax
  __int64 v44; // r10
  unsigned __int8 v45; // r9
  unsigned __int8 v46; // r8
  _BYTE *v47; // rdx
  unsigned __int8 v48; // dl
  unsigned __int8 v49; // dl
  _NDIS_REFCOUNT_TAGGED_ENTRY *Tags; // r10
  unsigned __int8 NumOverflowTaggedEntries; // r9
  unsigned __int8 v52; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v53; // rdx
  unsigned __int8 v54; // dl
  unsigned __int8 v55; // dl
  _NDIS_REFCOUNT_TAGGED_ENTRY *v56; // r10
  unsigned __int8 v57; // r9
  unsigned __int8 v58; // r8
  _NDIS_REFCOUNT_TAGGED_ENTRY *v59; // rdx
  unsigned __int8 v60; // dl
  unsigned __int8 v61; // dl
  ULONG_PTR v62; // rbx
  unsigned int v63; // edx
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v65; // rax
  wchar_t *Buffer; // rcx
  _NDIS_WRAPPER_HANDLE *NdisDriverInfo; // rcx
  _NDIS_PENDING_IM_INSTANCE *PendingDeviceList; // rcx
  _NDIS_PENDING_IM_INSTANCE *Next; // rbx
  _NDIS_MINIPORT_BLOCK *v70; // [rsp+30h] [rbp-68h]
  _NDIS_MINIPORT_BLOCK *v71; // [rsp+38h] [rbp-60h]
  struct _NDIS_M_DRIVER_BLOCK *v72; // [rsp+40h] [rbp-58h]
  _REFERENCE_EX *v73; // [rsp+48h] [rbp-50h]
  int v75; // [rsp+A8h] [rbp+10h]
  KIRQL v76; // [rsp+B0h] [rbp+18h]

  v6 = 0LL;
  v71 = 0LL;
  v7 = ~a2 & 0x80200020;
  v70 = 0LL;
  v8 = 1;
  v9 = a1;
  v75 = 1;
  if ( !*(_QWORD *)(a1 + 3824) )
    return 0LL;
  v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v11 = ndisMiniDriverList;
  v12 = v10;
  v72 = ndisMiniDriverList;
  if ( !ndisMiniDriverList )
    goto LABEL_32;
  while ( 2 )
  {
    p_Ref = &v11->Ref;
    v14 = 0;
    v73 = &v11->Ref;
    v15 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
    if ( !v11->Ref.Closing )
    {
      ReferenceCount = v11->Ref.ReferenceCount;
      if ( ReferenceCount < 0xFFEBu )
      {
        RefCountTracker = v11->Ref.RefCountTracker;
        v11->Ref.ReferenceCount = ReferenceCount + 1;
        if ( RefCountTracker )
        {
          if ( *((_BYTE *)RefCountTracker + 1) )
          {
            if ( *((_BYTE *)RefCountTracker + 1) == 1 )
              ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(RefCountTracker + 130), 1u);
          }
          else
          {
            v18 = 0LL;
            if ( _bittestandset((signed __int32 *)RefCountTracker + 4, 8u) )
            {
              v44 = *((_QWORD *)RefCountTracker + 1);
              if ( !v44 )
                goto LABEL_150;
              v45 = *((_BYTE *)RefCountTracker + 3);
              v46 = 0;
              if ( !v45 )
                goto LABEL_150;
              do
              {
                v47 = (_BYTE *)(v44 + 2LL * v46);
                if ( *v47 == 8 )
                {
                  if ( v47[1] != 0xFF )
                  {
                    ++v47[1];
                    goto LABEL_8;
                  }
                }
                else if ( !v47[1] )
                {
                  v18 = (_WORD *)(v44 + 2LL * v46);
                }
                ++v46;
              }
              while ( v46 < v45 );
              if ( v18 )
              {
                *v18 = 264;
              }
              else
              {
LABEL_150:
                if ( !*((_BYTE *)RefCountTracker + 1) )
                {
                  v48 = *((_BYTE *)RefCountTracker + 3);
                  if ( v48 == 0xFF )
                  {
                    ndisFreeRefCountAuxiliaryMemory((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
                    *((_BYTE *)RefCountTracker + 1) = 2;
                  }
                  else
                  {
                    if ( (unsigned int)v48 + 2 > 0xFF )
                      v49 = -1;
                    else
                      v49 = v48 + 2;
                    ndisResizeRefCountBlockTagged((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker, v49);
                  }
                }
                NdisReferenceWithTag((struct _NDIS_REFCOUNT_BLOCK *)RefCountTracker);
              }
            }
          }
        }
LABEL_8:
        v14 = 1;
      }
    }
    KeReleaseSpinLock(&v11->Ref.SpinLock, v15);
    if ( !v14 )
    {
      NextDriver = v11->NextDriver;
      goto LABEL_29;
    }
    KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
    v19 = KeAcquireSpinLockRaiseToDpc(&v11->Ref.SpinLock);
    MiniportQueue = v11->MiniportQueue;
    v76 = v19;
    if ( !MiniportQueue )
      goto LABEL_18;
    v21 = v71;
    do
    {
      BindPaths = MiniportQueue->BindPaths;
      if ( !BindPaths )
        goto LABEL_16;
      if ( BindPaths->Number < v8 )
        goto LABEL_16;
      v23 = *(_QWORD *)(v9 + 3824);
      v24 = *(_WORD *)(v23 + 8);
      if ( v24 != BindPaths->Paths[0].Length || memcmp(*(const void **)(v23 + 16), BindPaths->Paths[0].Buffer, v24) )
        goto LABEL_16;
      KeAcquireSpinLockAtDpcLevel(&MiniportQueue->Lock);
      MiniportQueue->MiniportThread = KeGetCurrentThread();
      MiniportQueue->LockDbg = 71717;
      if ( (v7 & MiniportQueue->Flags) == 0
        && (MiniportQueue->PnPFlags & 0x1084110) == 0
        && MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
        && (MiniportQueue->CurrentDevicePowerState == PowerDeviceD0 || a4) )
      {
        v37 = 1;
        v38 = KeAcquireSpinLockRaiseToDpc(&MiniportQueue->Ref.SpinLock);
        if ( !MiniportQueue->Ref.Closing )
        {
          v39 = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->RefCountTracker;
          if ( v39 )
          {
            if ( v39->Type )
            {
              if ( v39->Type == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&v39->8 + a6, 1u);
            }
            else
            {
              p_Tag = 0LL;
              if ( _bittestandset((signed __int32 *)v39->TaggedRefCounts.RefMask, a6) )
              {
                Tags = v39->TaggedRefCounts.Tags;
                if ( !Tags )
                  goto LABEL_151;
                NumOverflowTaggedEntries = v39->NumOverflowTaggedEntries;
                v52 = 0;
                if ( !NumOverflowTaggedEntries )
                  goto LABEL_151;
                do
                {
                  v53 = &Tags[v52];
                  if ( v53->Tag == a6 )
                  {
                    if ( v53->RefCount != 0xFF )
                    {
                      ++v53->RefCount;
                      goto LABEL_41;
                    }
                  }
                  else if ( !v53->RefCount )
                  {
                    p_Tag = &Tags[v52].Tag;
                  }
                  ++v52;
                }
                while ( v52 < NumOverflowTaggedEntries );
                if ( p_Tag )
                {
                  *p_Tag = a6;
                  p_Tag[1] = 1;
                }
                else
                {
LABEL_151:
                  if ( !v39->Type )
                  {
                    v54 = v39->NumOverflowTaggedEntries;
                    if ( v54 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory(v39);
                      v39->Type = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v54 + 2 <= 0xFF )
                        v55 = v54 + 2;
                      else
                        v55 = -1;
                      ndisResizeRefCountBlockTagged(v39, v55);
                    }
                  }
                  NdisReferenceWithTag(v39);
                }
              }
            }
          }
LABEL_41:
          v34 = MiniportQueue->Ref.ReferenceCount++ == -1;
          if ( !v34 )
            goto LABEL_42;
          MiniportQueue->Ref.ReferenceCount = -1;
        }
        v37 = 0;
LABEL_42:
        if ( (unsigned __int8)byte_1C00895DB >= 4u )
          WPP_SF_qD(
            12LL,
            &WPP_8ce524521b613c0e10407cfbf52a0b71_Traceguids,
            MiniportQueue,
            MiniportQueue->Ref.ReferenceCount);
        KeReleaseSpinLock(&MiniportQueue->Ref.SpinLock, v38);
        if ( v37 )
        {
          NsiRefCountTracker = (struct _NDIS_REFCOUNT_BLOCK *)MiniportQueue->NsiRefCountTracker;
          v70 = v21;
          if ( NsiRefCountTracker )
          {
            if ( NsiRefCountTracker->Type )
            {
              if ( NsiRefCountTracker->Type == 1 )
                ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)&NsiRefCountTracker->8 + a5, 1u);
            }
            else
            {
              v42 = 0LL;
              if ( _bittestandset((signed __int32 *)NsiRefCountTracker->TaggedRefCounts.RefMask, a5) )
              {
                v56 = NsiRefCountTracker->TaggedRefCounts.Tags;
                if ( !v56 )
                  goto LABEL_152;
                v57 = NsiRefCountTracker->NumOverflowTaggedEntries;
                v58 = 0;
                if ( !v57 )
                  goto LABEL_152;
                do
                {
                  v59 = &v56[v58];
                  if ( v59->Tag == a5 )
                  {
                    if ( v59->RefCount != 0xFF )
                    {
                      ++v59->RefCount;
                      goto LABEL_48;
                    }
                  }
                  else if ( !v59->RefCount )
                  {
                    v42 = &v56[v58].Tag;
                  }
                  ++v58;
                }
                while ( v58 < v57 );
                if ( v42 )
                {
                  *v42 = a5;
                  v42[1] = 1;
                }
                else
                {
LABEL_152:
                  if ( !NsiRefCountTracker->Type )
                  {
                    v60 = NsiRefCountTracker->NumOverflowTaggedEntries;
                    if ( v60 == 0xFF )
                    {
                      ndisFreeRefCountAuxiliaryMemory(NsiRefCountTracker);
                      NsiRefCountTracker->Type = 2;
                    }
                    else
                    {
                      if ( (unsigned int)v60 + 2 <= 0xFF )
                        v61 = v60 + 2;
                      else
                        v61 = -1;
                      ndisResizeRefCountBlockTagged(NsiRefCountTracker, v61);
                    }
                  }
                  NdisReferenceWithTag(NsiRefCountTracker);
                }
              }
            }
          }
LABEL_48:
          p_Number = &MiniportQueue->BindPaths->Number;
          v21 = MiniportQueue;
          ++MiniportQueue->NsiOpenReferences;
          v8 = *p_Number;
          v75 = *p_Number;
        }
        else
        {
          v8 = v75;
        }
      }
      MiniportQueue->MiniportThread = 0LL;
      MiniportQueue->LockDbg = 0;
      KeReleaseSpinLockFromDpcLevel(&MiniportQueue->Lock);
      if ( v70 )
      {
        ndisDereferenceMiniportForNsi(v70, a5, a6);
        v70 = 0LL;
      }
      v9 = a1;
LABEL_16:
      MiniportQueue = MiniportQueue->NextMiniport;
    }
    while ( MiniportQueue );
    v19 = v76;
    v11 = v72;
    v71 = v21;
    p_Ref = v73;
LABEL_18:
    KeReleaseSpinLock(&p_Ref->SpinLock, v19);
    v25 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    NextDriver = v11->NextDriver;
    v12 = v25;
    v27 = KeAcquireSpinLockRaiseToDpc(&p_Ref->SpinLock);
    v28 = (ULONG_PTR)p_Ref->RefCountTracker;
    v29 = v27;
    if ( v28 )
    {
      v30 = *(unsigned __int8 *)(v28 + 1);
      if ( *(_BYTE *)(v28 + 1) )
      {
        if ( v30 == 1 )
        {
          v62 = v28 + 520;
          v63 = *(_DWORD *)(v28 + 576);
          if ( v63 >> 17 < 0x3FFE && (unsigned __int16)v63 >> 1 == (v63 >> 17) + 1 )
          {
            ndisFreeRefCountStackChain((struct _NDIS_REFCOUNT_STACK_BLOCK *)(v28 + 520));
            *(_DWORD *)(v62 + 56) &= 0x10001u;
          }
          else
          {
            if ( (v63 & 0xFFFE) == 0 && (v63 & 1) == 0 )
              ndisBugCheckEx(0x1EuLL, 0LL, (ULONG_PTR)p_Ref->RefCountTracker, 8uLL);
            ndisReferenceWithTagStackTrace((struct _NDIS_REFCOUNT_WITH_STACK *)(v28 + 520), 0);
          }
        }
      }
      else
      {
        v31 = *(_QWORD *)(v28 + 8);
        if ( v31 && (v32 = *(_BYTE *)(v28 + 3)) != 0 )
        {
          while ( 1 )
          {
            v33 = (_BYTE *)(v31 + 2LL * (unsigned __int8)v30);
            if ( *v33 == 8 )
            {
              if ( v33[1] )
                break;
            }
            LOBYTE(v30) = v30 + 1;
            if ( (unsigned __int8)v30 >= v32 )
              goto LABEL_25;
          }
          --v33[1];
        }
        else
        {
LABEL_25:
          if ( !_bittestandreset((signed __int32 *)(v28 + 16), 8u) )
            ndisBugCheckEx(0x1EuLL, 0LL, v28, 8uLL);
        }
      }
    }
    v34 = p_Ref->ReferenceCount-- == 1;
    if ( v34 )
    {
      v35 = 1;
      if ( !p_Ref->ZeroBased )
      {
        NdisFreeRefCount(p_Ref->RefCountTracker);
        p_Ref->RefCountTracker = 0LL;
      }
    }
    else
    {
      v35 = 0;
    }
    KeReleaseSpinLock(&p_Ref->SpinLock, v29);
    if ( v35 )
    {
      if ( (unsigned __int8)byte_1C00895DB >= 4u )
        WPP_SF_q(23LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v11);
      p_NextDriver = &ndisMiniDriverList;
      if ( ndisMiniDriverList )
      {
        while ( 1 )
        {
          v65 = *p_NextDriver;
          if ( *p_NextDriver == v11 )
            break;
          p_NextDriver = &v65->NextDriver;
          if ( !v65->NextDriver )
            goto LABEL_135;
        }
        *p_NextDriver = v11->NextDriver;
        ObfDereferenceObject(ndisDriverObject);
      }
LABEL_135:
      Buffer = v11->ImageName.Buffer;
      if ( Buffer )
      {
        ExFreePoolWithTag(Buffer, 0);
        v11->ImageName.Buffer = 0LL;
      }
      NdisDriverInfo = v11->NdisDriverInfo;
      if ( NdisDriverInfo )
      {
        ExFreePoolWithTag(NdisDriverInfo, 0);
        v11->NdisDriverInfo = 0LL;
      }
      if ( (v11->Flags & 1) != 0 )
      {
        KeWaitForSingleObject(&v11->IMStartRemoveMutex, Executive, 0, 0, 0LL);
        PendingDeviceList = v11->PendingDeviceList;
        v11->IMStartRemoveMutexOwnerThread = KeGetCurrentThread();
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
        v11->IMStartRemoveMutexOwnerThread = 0LL;
        KeReleaseMutex(&v11->IMStartRemoveMutex, 0);
      }
      KeSetEvent(&v11->MiniportsRemovedEvent, 0, 0);
      if ( (unsigned __int8)byte_1C00895DB >= 4u )
        WPP_SF_q(24LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, v11);
    }
LABEL_29:
    v72 = NextDriver;
    v11 = NextDriver;
    if ( NextDriver )
    {
      v8 = v75;
      continue;
    }
    break;
  }
  v6 = v71;
LABEL_32:
  KeReleaseSpinLock(&ndisMiniDriverListLock, v12);
  return v6;
}
