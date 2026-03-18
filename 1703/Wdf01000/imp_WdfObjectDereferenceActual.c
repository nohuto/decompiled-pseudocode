/*
 * XREFs of imp_WdfObjectDereferenceActual @ 0x1C0015F10
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C000C140 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0016B3C (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001CF80 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003E200 (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003EFF4 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F19C (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003F260 (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003F2C8 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003F338 (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003F9DC (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1C003FAE4 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C003FD34 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

void __fastcall imp_WdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        volatile signed __int32 *Tag,
        unsigned int Line,
        char *File)
{
  unsigned __int64 v5; // rbx
  __int64 (__fastcall *v6)(FxObject *, volatile signed __int32 *, __int64, const char *); // rax
  __int16 v7; // cx
  FxTagTracker *v8; // r14
  unsigned __int16 v9; // cx
  _QWORD *i; // rsi
  void (__fastcall *v11)(unsigned __int64); // rax
  void (__fastcall *v12)(unsigned __int64); // rax
  unsigned __int16 v13; // ax
  _QWORD *v14; // rcx
  _QWORD *v15; // rsi
  void (__fastcall *v16)(FxObject *, unsigned int); // rdx
  FxRegKey *(__fastcall *v17)(FxRegKey *, char); // rax
  void *v18; // rcx
  _QWORD *v19; // rcx
  FX_POOL_TRACKER *v20; // rdi
  void *v21; // rcx
  _MDL *v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rdi
  FxRequestTimer *v25; // rcx
  FxTagTracker *v26; // rcx
  void (__fastcall ***v27)(_QWORD, __int64); // rcx
  FxVerifierLock *v28; // rcx
  void *retaddr; // [rsp+48h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, retaddr);
  v5 = ~Object & 0xFFFFFFFFFFFFFFF8uLL;
  if ( (Object & 1) != 0 )
  {
    Object = *(unsigned __int16 *)v5;
    v5 -= Object;
    if ( (_WORD)Object )
    {
      (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)v5 + 32LL))(v5);
      return;
    }
  }
  v6 = *(__int64 (__fastcall **)(FxObject *, volatile signed __int32 *, __int64, const char *))(*(_QWORD *)v5 + 16LL);
  if ( v6 != FxObject::Release )
  {
    v6((FxObject *)v5, Tag, Line, File);
    return;
  }
  if ( *(char *)(v5 + 24) < 0 )
  {
    v26 = *(FxTagTracker **)(v5 - 48);
    if ( v26 )
      FxTagTracker::UpdateTagHistory(v26, (void *)Tag, Line, File, TagRelease, *(_DWORD *)(v5 + 12) - 1);
  }
  if ( !_InterlockedDecrement((volatile signed __int32 *)(v5 + 12)) )
  {
    v7 = *(_WORD *)(v5 + 24);
    if ( (v7 & 0x20) != 0 || (v7 & 0x10) != 0 && KeGetCurrentIrql() )
    {
      FxObject::SetObjectStateLocked((FxObject *)v5, FxObjectStateDeferedDestroy);
      FxDisposeList::Add(*(FxDisposeList **)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 72LL) + 344LL), (FxObject *)v5);
    }
    else
    {
      if ( (v7 & 0x80u) != 0 )
      {
        v8 = *(FxTagTracker **)(v5 - 48);
        if ( v8 )
          FxTagTracker::CheckForAbandondedTags(*(FxTagTracker **)(v5 - 48));
      }
      else
      {
        v8 = 0LL;
      }
      v9 = *(_WORD *)(v5 + 10);
      if ( v9 && (*(_BYTE *)(v5 + 24) & 8) != 0 )
      {
        for ( i = (_QWORD *)(v5 + v9); i; i = (_QWORD *)i[1] )
        {
          v11 = (void (__fastcall *)(unsigned __int64))i[2];
          if ( v11 )
          {
            v11(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[2] = 0LL;
          }
          v12 = (void (__fastcall *)(unsigned __int64))i[3];
          if ( v12 )
          {
            v12(v5 ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[3] = 0LL;
          }
        }
        v13 = *(_WORD *)(v5 + 10);
        LOBYTE(Object) = 1;
        if ( v13 )
        {
          v14 = (_QWORD *)(v5 + v13);
          if ( v14 )
          {
            do
            {
              v15 = (_QWORD *)v14[1];
              if ( !(_BYTE)Object )
                FxPoolFree(v14);
              LOBYTE(Object) = 0;
              v14 = v15;
            }
            while ( v15 );
          }
        }
      }
      if ( *(char *)(v5 + 24) < 0 )
      {
        if ( *(_BYTE *)(v5 - 20) )
        {
          _InterlockedDecrement((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 328LL) + 12LL));
          if ( *(_WORD *)(v5 + 8) == 4098
            && _InterlockedExchangeAdd(
                 (volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(v5 + 16) + 328LL) + 16LL),
                 0xFFFFFFFF) != 1 )
          {
            Object = *(_QWORD *)(*(_QWORD *)(v5 + 16) + 328LL);
            _InterlockedExchangeAdd((volatile signed __int32 *)(Object + 8), -*(_DWORD *)(Object + 4));
          }
        }
      }
      if ( v8 )
      {
        *(_QWORD *)(v5 - 48) = 0LL;
        FxTagTracker::`scalar deleting destructor'(v8, Object);
      }
      v16 = **(void (__fastcall ***)(FxObject *, unsigned int))v5;
      if ( v16 == FxObject::SelfDestruct )
      {
        v17 = *(FxRegKey *(__fastcall **)(FxRegKey *, char))(*(_QWORD *)v5 + 8LL);
        if ( v17 == FxRegKey::`scalar deleting destructor' )
        {
          *(_QWORD *)v5 = FxRegKey::`vftable';
          v18 = *(void **)(v5 + 112);
          if ( v18 )
          {
            ZwClose(v18);
            *(_QWORD *)(v5 + 112) = 0LL;
          }
          v19 = *(_QWORD **)(v5 + 104);
          *(_QWORD *)v5 = FxPagedObject::`vftable';
          if ( v19 )
          {
            FxPoolFree(v19);
            *(_QWORD *)(v5 + 104) = 0LL;
          }
          FxObject::~FxObject((FxObject *)v5, (unsigned int)v16, (unsigned int)Tag);
          if ( *(char *)(v5 + 24) < 0 )
            v5 -= 48LL;
          if ( !v5 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
          if ( (v5 & 0xFFF) != 0 )
          {
LABEL_37:
            v20 = *(FX_POOL_TRACKER **)(v5 - 16);
            if ( *(_BYTE *)(*(_QWORD *)(v5 - 8) + 264LL) )
            {
              if ( FxIsPagedPoolType(v20->PoolType) )
                FxPoolRemovePagedAllocateTracker(v20);
              else
                FxPoolRemoveNonPagedAllocateTracker(v20);
              memset(v20, 0, v20->Size + 64);
            }
            v21 = v20;
            goto LABEL_39;
          }
LABEL_84:
          v21 = (void *)v5;
LABEL_39:
          ExFreePoolWithTag(v21, 0);
          return;
        }
        if ( (char *)v17 != (char *)FxRequest::`scalar deleting destructor' )
        {
          if ( (char *)v17 != (char *)FxMemoryBuffer::`scalar deleting destructor' )
          {
            v17((FxRegKey *)v5, 1);
            return;
          }
          *(_QWORD *)v5 = FxMemoryBuffer::`vftable'{for `FxObject'};
          *(_QWORD *)(v5 + 104) = FxMemoryBufferFromLookaside::`vftable'{for `IFxMemory'};
          FxObject::~FxObject((FxObject *)v5, (unsigned int)v16, (unsigned int)Tag);
          if ( *(char *)(v5 + 24) < 0 )
            v5 -= 48LL;
          if ( !v5 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
          if ( (v5 & 0xFFF) != 0 )
            goto LABEL_37;
          goto LABEL_84;
        }
        *(_QWORD *)v5 = FxRequestBase::`vftable';
        v22 = *(_MDL **)(v5 + 240);
        if ( v22 )
        {
          if ( *(_BYTE *)(*(_QWORD *)(v5 + 16) + 316LL) )
            FxMdlFreeDebug(*(_FX_DRIVER_GLOBALS **)(v5 + 16), *(_MDL **)(v5 + 240));
          else
            IoFreeMdl(v22);
        }
        v23 = *(_QWORD *)(v5 + 168);
        v24 = *(_QWORD *)(v5 + 152);
        if ( v23 )
        {
          if ( v24 )
            (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v23 + 24LL))(v23, v5);
          v27 = *(void (__fastcall ****)(_QWORD, __int64))(v5 + 168);
          if ( v27 )
            (**v27)(v27, 1LL);
        }
        if ( v24 && *(_BYTE *)(v5 + 213) == 1 )
          IoFreeIrp(*(PIRP *)(v5 + 152));
        v25 = *(FxRequestTimer **)(v5 + 176);
        if ( v25 )
          FxRequestTimer::`scalar deleting destructor'(v25, (unsigned int)v16);
        *(_QWORD *)v5 = FxNonPagedObject::`vftable';
        if ( *(char *)(v5 + 24) < 0 )
        {
          v28 = *(FxVerifierLock **)(v5 - 40);
          if ( v28 )
          {
            FxVerifierLock::`scalar deleting destructor'(v28, (unsigned int)v16);
            *(_QWORD *)(v5 - 40) = 0LL;
          }
        }
        *(_BYTE *)(v5 + 104) = 0;
        FxObject::~FxObject((FxObject *)v5, (unsigned int)v16, (unsigned int)Tag);
        if ( *(char *)(v5 + 24) < 0 )
          v5 -= 48LL;
        FxPoolFree((_QWORD *)v5);
      }
      else
      {
        (**(void (__fastcall ***)(unsigned __int64))v5)(v5);
      }
    }
  }
}
