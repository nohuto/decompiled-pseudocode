/*
 * XREFs of imp_WdfObjectDereferenceActual @ 0x1C0032AE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007C724 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

void __fastcall imp_WdfObjectDereferenceActual(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Object,
        void *Tag,
        unsigned int Line,
        char *File)
{
  unsigned __int64 v5; // rbx
  __int64 (__fastcall *v6)(FxObject *, void *, __int64, char *); // rax
  __int16 v7; // cx
  FxTagTracker *v8; // rbp
  unsigned __int16 v9; // cx
  _QWORD *i; // rdi
  void (__fastcall *v11)(unsigned __int64); // rax
  void (__fastcall *v12)(unsigned __int64); // rax
  unsigned __int16 v13; // ax
  _QWORD *v14; // rcx
  _QWORD *v15; // rdi
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
  FxVerifierLock *v27; // rcx
  void (__fastcall ***v28)(_QWORD, __int64); // rcx
  FxVerifierLock *v29; // rcx
  void *retaddr; // [rsp+38h] [rbp+0h]

  if ( !Object )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16], retaddr);
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
  v6 = *(__int64 (__fastcall **)(FxObject *, void *, __int64, char *))(*(_QWORD *)v5 + 16LL);
  if ( v6 != FxObject::Release )
  {
    v6((FxObject *)v5, Tag, Line, File);
    return;
  }
  if ( *(char *)(v5 + 24) < 0 )
  {
    v26 = *(FxTagTracker **)(v5 - 32);
    if ( v26 )
      FxTagTracker::UpdateTagHistory(v26, Tag, Line, File, TagRelease, *(_DWORD *)(v5 + 12) - 1);
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
        v8 = *(FxTagTracker **)(v5 - 32);
        if ( v8 )
          FxTagTracker::CheckForAbandondedTags(*(FxTagTracker **)(v5 - 32));
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
      if ( v8 )
      {
        *(_QWORD *)(v5 - 32) = 0LL;
        FxTagTracker::`scalar deleting destructor'(v8, Object);
      }
      v16 = **(void (__fastcall ***)(FxObject *, unsigned int))v5;
      if ( v16 == FxObject::SelfDestruct )
      {
        v17 = *(FxRegKey *(__fastcall **)(FxRegKey *, char))(*(_QWORD *)v5 + 8LL);
        if ( v17 == FxRegKey::`scalar deleting destructor' )
        {
          *(_QWORD *)v5 = &FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
          v18 = *(void **)(v5 + 112);
          if ( v18 )
          {
            ZwClose(v18);
            *(_QWORD *)(v5 + 112) = 0LL;
          }
          v19 = *(_QWORD **)(v5 + 104);
          *(_QWORD *)v5 = &FxObject::`vftable'.WdfVerifierAllocateFailCount;
          if ( v19 )
          {
            FxPoolFree(v19);
            *(_QWORD *)(v5 + 104) = 0LL;
          }
          FxObject::~FxObject((FxObject *)v5, (unsigned int)v16, (unsigned int)Tag);
          if ( *(char *)(v5 + 24) < 0 )
            v5 -= 32LL;
          if ( !v5 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
          if ( (v5 & 0xFFF) != 0 )
          {
LABEL_36:
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
            goto LABEL_38;
          }
LABEL_73:
          v21 = (void *)v5;
LABEL_38:
          ExFreePoolWithTag(v21, 0);
          return;
        }
        if ( (char *)v17 == (char *)FxFileObject::`vector deleting destructor' )
        {
          *(_QWORD *)(v5 + 120) = &FxFileObject::`vftable'{for `IFxHasCallbacks'};
          *(_QWORD *)v5 = &FxNonPagedObject::`vftable';
          if ( *(char *)(v5 + 24) < 0 )
          {
            v27 = *(FxVerifierLock **)(v5 - 24);
            if ( v27 )
            {
              FxVerifierLock::`scalar deleting destructor'(v27, (unsigned int)v16);
              *(_QWORD *)(v5 - 24) = 0LL;
            }
          }
          *(_BYTE *)(v5 + 104) = 0;
          FxObject::~FxObject((FxObject *)v5, (unsigned int)v16, (unsigned int)Tag);
          if ( *(char *)(v5 + 24) < 0 )
            v5 -= 32LL;
          if ( !v5 )
            KeBugCheckEx(0x10Du, 4uLL, 0LL, (ULONG_PTR)retaddr, 0LL);
          if ( (v5 & 0xFFF) != 0 )
            goto LABEL_36;
          goto LABEL_73;
        }
        if ( (char *)v17 == (char *)FxRequest::`scalar deleting destructor' )
        {
          *(_QWORD *)v5 = &FxRequestBase::`vftable';
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
            v28 = *(void (__fastcall ****)(_QWORD, __int64))(v5 + 168);
            if ( v28 )
              (**v28)(v28, 1LL);
          }
          if ( v24 && *(_BYTE *)(v5 + 213) == 1 )
            IoFreeIrp(*(PIRP *)(v5 + 152));
          v25 = *(FxRequestTimer **)(v5 + 176);
          if ( v25 )
            FxRequestTimer::`scalar deleting destructor'(v25, (unsigned int)v16);
          *(_QWORD *)v5 = &FxNonPagedObject::`vftable';
          if ( *(char *)(v5 + 24) < 0 )
          {
            v29 = *(FxVerifierLock **)(v5 - 24);
            if ( v29 )
            {
              FxVerifierLock::`scalar deleting destructor'(v29, (unsigned int)v16);
              *(_QWORD *)(v5 - 24) = 0LL;
            }
          }
          *(_BYTE *)(v5 + 104) = 0;
          FxObject::~FxObject((FxObject *)v5, (unsigned int)v16, (unsigned int)Tag);
          if ( *(char *)(v5 + 24) < 0 )
            v5 -= 32LL;
          FxPoolFree((_QWORD *)v5);
        }
        else
        {
          v17((FxRegKey *)v5, 1);
        }
      }
      else
      {
        (**(void (__fastcall ***)(unsigned __int64))v5)(v5);
      }
    }
  }
}
