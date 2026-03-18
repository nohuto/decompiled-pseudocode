/*
 * XREFs of ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000FF80
 * Callers:
 *     imp_WdfTimerStart @ 0x1C000FE40 (imp_WdfTimerStart.c)
 * Callees:
 *     ??1FxObject@@UEAA@XZ @ 0x1C0008A90 (--1FxObject@@UEAA@XZ.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z @ 0x1C0014CA0 (-FxIsPagedPoolType@@YAEW4_POOL_TYPE@@@Z.c)
 *     ?SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z @ 0x1C001C2D0 (-SetObjectStateLocked@FxObject@@AEAAXW4FxObjectState@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     ??_GFxRequestTimer@@QEAAPEAXI@Z @ 0x1C003A82C (--_GFxRequestTimer@@QEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1C003A860 (__security_check_cookie.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ??_GFxVerifierLock@@QEAAPEAXI@Z @ 0x1C003B548 (--_GFxVerifierLock@@QEAAPEAXI@Z.c)
 *     ?FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B6F8 (-FxPoolRemoveNonPagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z @ 0x1C003B7AC (-FxPoolRemovePagedAllocateTracker@@YAXPEAUFX_POOL_TRACKER@@@Z.c)
 *     ?Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z @ 0x1C003B810 (-Add@FxDisposeList@@QEAAXPEAVFxObject@@@Z.c)
 *     ??_GFxTagTracker@@QEAAPEAXI@Z @ 0x1C003B87C (--_GFxTagTracker@@QEAAPEAXI@Z.c)
 *     ?Lock@FxVerifierLock@@QEAAXPEAEE@Z @ 0x1C003B900 (-Lock@FxVerifierLock@@QEAAXPEAEE@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?CheckForAbandondedTags@FxTagTracker@@QEAAXXZ @ 0x1C003BE7C (-CheckForAbandondedTags@FxTagTracker@@QEAAXXZ.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003BF80 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z @ 0x1C007E690 (-FxMdlFreeDebug@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAU_MDL@@@Z.c)
 */

__int64 __fastcall FxTimer::Start(FxTimer *this, _LARGE_INTEGER DueTime, unsigned __int8 a3)
{
  BOOLEAN v3; // r14
  char v4; // si
  FxRegKey *v6; // rdi
  unsigned __int8 v7; // bp
  unsigned __int8 v8; // r8
  unsigned int v9; // edx
  __int64 v10; // r9
  BOOLEAN v11; // al
  unsigned __int8 v12; // r8
  unsigned __int8 v13; // al
  unsigned __int8 v14; // r8
  unsigned int v15; // edx
  unsigned int v16; // r8d
  __int64 (__fastcall *Release)(FxObject *, void *, __int64, char *); // rax
  unsigned __int16 m_ObjectFlags; // cx
  FxTagTracker *v19; // rbp
  unsigned __int16 m_ObjectSize; // cx
  _QWORD *i; // rbx
  void (__fastcall *v22)(unsigned __int64); // rax
  void (__fastcall *v23)(unsigned __int64); // rax
  unsigned __int16 v24; // ax
  _QWORD *v25; // rcx
  _QWORD *v26; // rbx
  void (__fastcall *SelfDestruct)(FxObject *, unsigned int); // rdx
  FxRegKey *(__fastcall *v28)(FxRegKey *, char); // rax
  void *m_Key; // rcx
  MxPagedLock *v30; // rcx
  FX_POOL_TRACKER *v31; // rbx
  _MDL *v33; // rcx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v35; // rbx
  FxRequestTimer *v36; // rcx
  FxVerifierLock *m_CallbackThread; // rcx
  const void *_a1; // rax
  const void *v39; // rcx
  FxVerifierLock *m_Lock; // rcx
  FxTagTracker *m_DeviceBase; // rcx
  FxVerifierLock *v42; // rcx
  FxVerifierLock *v43; // rcx
  FxTagTracker *v44; // rcx
  FxVerifierLock *v45; // rcx
  _LIST_ENTRY *v46; // rcx
  FxVerifierLock *v47; // rcx
  unsigned __int8 irql[8]; // [rsp+40h] [rbp-38h] BYREF
  __int64 v49; // [rsp+48h] [rbp-30h] BYREF
  __int64 v50; // [rsp+50h] [rbp-28h]
  ULONG_PTR retaddr; // [rsp+78h] [rbp+0h]

  v3 = 0;
  v4 = 0;
  v6 = (FxRegKey *)this;
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (m_CallbackThread = (FxVerifierLock *)this[-1].m_CallbackThread) != 0LL )
  {
    FxVerifierLock::Lock(m_CallbackThread, irql, a3);
    v7 = irql[0];
  }
  else
  {
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v6->m_Key);
    irql[0] = v7;
  }
  if ( BYTE2(v6[2].m_DisposeSingleEntry.Next) )
  {
    if ( v6->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_q(v6->FxPagedObject::FxObject::m_Globals, 2u, 0x12u, 0xFu, WPP_FxTimer_cpp_Traceguids, _a1);
    FxVerifierDbgBreakPoint(v6->FxPagedObject::FxObject::m_Globals);
  }
  else if ( v6[2].m_ChildEntry.Blink )
  {
    if ( v6->m_ObjectSize )
      v39 = (const void *)((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v39 = 0LL;
    WPP_IFR_SF_qq(
      v6->FxPagedObject::FxObject::m_Globals,
      2u,
      0x12u,
      0x10u,
      WPP_FxTimer_cpp_Traceguids,
      v39,
      v6[2].m_ChildEntry.Blink);
    BYTE1(v6[2].m_DisposeSingleEntry.Next) = 1;
  }
  else
  {
    v4 = 1;
  }
  if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (m_Lock = (FxVerifierLock *)v6[-1].m_Lock) != 0LL )
    FxVerifierLock::Unlock(m_Lock, v7, v8);
  else
    KeReleaseSpinLock((PKSPIN_LOCK)&v6->m_Key, v7);
  if ( v4 )
  {
    v9 = _InterlockedIncrement(&v6->m_Refcnt);
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
    {
      m_DeviceBase = (FxTagTracker *)v6[-1].m_DeviceBase;
      if ( m_DeviceBase )
        FxTagTracker::UpdateTagHistory(
          m_DeviceBase,
          v6,
          607,
          "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
          TagAddRef,
          v9);
    }
    v10 = *(unsigned int *)(&v6[2].m_ObjectState + 1);
    if ( BYTE4(v6->m_Globals) )
    {
      v49 = 0LL;
      v50 = 0LL;
      if ( (_DWORD)v10 == -1 )
        v50 = -1LL;
      else
        v50 = 10000 * v10;
      v11 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))ExSetTimer)(
              *(_QWORD *)&v6[1].m_Type,
              (_LARGE_INTEGER)DueTime.QuadPart,
              10000LL * SLODWORD(v6->m_Globals),
              &v49);
    }
    else
    {
      v11 = KeSetCoalescableTimer(
              (PKTIMER)&v6[1].m_Type,
              DueTime,
              (ULONG)v6->m_Globals,
              v10,
              (PKDPC)&v6[1].m_ChildEntry);
    }
    v3 = v11;
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v42 = (FxVerifierLock *)v6[-1].m_Lock) != 0LL )
    {
      FxVerifierLock::Lock(v42, irql, v12);
      v13 = irql[0];
    }
    else
    {
      v13 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v6->m_Key);
      irql[0] = v13;
    }
    if ( v6[2].m_ChildEntry.Blink )
      LOBYTE(v6[2].m_DisposeSingleEntry.Next) = 1;
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 && (v43 = (FxVerifierLock *)v6[-1].m_Lock) != 0LL )
      FxVerifierLock::Unlock(v43, v13, v14);
    else
      KeReleaseSpinLock((PKSPIN_LOCK)&v6->m_Key, v13);
    Release = (__int64 (__fastcall *)(FxObject *, void *, __int64, char *))v6->Release;
    if ( Release != FxObject::Release )
    {
      Release(v6, v6, 624LL, "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp");
      return v3;
    }
    if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
    {
      v44 = (FxTagTracker *)v6[-1].m_DeviceBase;
      if ( v44 )
        FxTagTracker::UpdateTagHistory(
          v44,
          v6,
          624,
          "minkernel\\wdf\\framework\\shared\\core\\fxtimer.cpp",
          TagRelease,
          v6->m_Refcnt - 1);
    }
    if ( _InterlockedExchangeAdd(&v6->m_Refcnt, 0xFFFFFFFF) == 1 )
    {
      m_ObjectFlags = v6->m_ObjectFlags;
      if ( (m_ObjectFlags & 0x20) != 0 || (m_ObjectFlags & 0x10) != 0 && KeGetCurrentIrql() )
      {
        FxObject::SetObjectStateLocked(v6, FxObjectStateDeferedDestroy);
        FxDisposeList::Add(v6->FxPagedObject::FxObject::m_Globals->Driver->m_DisposeList, v6);
        return v3;
      }
      if ( (m_ObjectFlags & 0x80u) != 0 )
      {
        v19 = (FxTagTracker *)v6[-1].m_DeviceBase;
        if ( v19 )
          FxTagTracker::CheckForAbandondedTags((FxTagTracker *)v6[-1].m_DeviceBase);
      }
      else
      {
        v19 = 0LL;
      }
      m_ObjectSize = v6->m_ObjectSize;
      if ( m_ObjectSize && (v6->m_ObjectFlags & 8) != 0 )
      {
        for ( i = (FxRegKey_vtbl **)((char *)&v6->__vftable + m_ObjectSize); i; i = (_QWORD *)i[1] )
        {
          v22 = (void (__fastcall *)(unsigned __int64))i[2];
          if ( v22 )
          {
            v22((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[2] = 0LL;
          }
          v23 = (void (__fastcall *)(unsigned __int64))i[3];
          if ( v23 )
          {
            v23((unsigned __int64)v6 ^ 0xFFFFFFFFFFFFFFF8uLL);
            i[3] = 0LL;
          }
        }
        v24 = v6->m_ObjectSize;
        LOBYTE(v15) = 1;
        if ( v24 )
        {
          v25 = (FxRegKey_vtbl **)((char *)&v6->__vftable + v24);
          if ( v25 )
          {
            do
            {
              v26 = (_QWORD *)v25[1];
              if ( !(_BYTE)v15 )
                FxPoolFree(v25);
              LOBYTE(v15) = 0;
              v25 = v26;
            }
            while ( v26 );
          }
        }
      }
      if ( v19 )
      {
        v6[-1].m_DeviceBase = 0LL;
        FxTagTracker::`scalar deleting destructor'(v19, v15);
      }
      SelfDestruct = (void (__fastcall *)(FxObject *, unsigned int))v6->SelfDestruct;
      if ( SelfDestruct != FxObject::SelfDestruct )
      {
        v6->SelfDestruct(v6);
        return v3;
      }
      v28 = (FxRegKey *(__fastcall *)(FxRegKey *, char))v6->~FxObject;
      if ( v28 == FxRegKey::`scalar deleting destructor' )
      {
        v6->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink;
        m_Key = v6->m_Key;
        if ( m_Key )
        {
          ZwClose(m_Key);
          v6->m_Key = 0LL;
        }
        v30 = v6->m_Lock;
        v6->__vftable = (FxRegKey_vtbl *)&FxObject::`vftable'.WdfVerifierAllocateFailCount;
        if ( v30 )
        {
          FxPoolFree(v30);
          v6->m_Lock = 0LL;
        }
        FxObject::~FxObject(v6, (unsigned int)SelfDestruct, v16);
        if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
          v6 = (FxRegKey *)((char *)v6 - 32);
        if ( !v6 )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        if ( ((unsigned __int16)v6 & 0xFFF) != 0 )
        {
LABEL_51:
          v31 = (FX_POOL_TRACKER *)v6[-1].m_Key;
          if ( v6[-1].m_Globals->FxPoolTrackingOn )
          {
            if ( FxIsPagedPoolType(v31->PoolType) )
              FxPoolRemovePagedAllocateTracker(v31);
            else
              FxPoolRemoveNonPagedAllocateTracker(v31);
            memset(v31, 0, v31->Size + 64);
          }
          ExFreePoolWithTag(v31, 0);
          return v3;
        }
LABEL_101:
        ExFreePoolWithTag(v6, 0);
        return v3;
      }
      if ( (char *)v28 == (char *)FxFileObject::`vector deleting destructor' )
      {
        v6->m_Globals = (_FX_DRIVER_GLOBALS *)&FxFileObject::`vftable'{for `IFxHasCallbacks'};
        v6->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
        if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
        {
          v45 = (FxVerifierLock *)v6[-1].m_Lock;
          if ( v45 )
          {
            FxVerifierLock::`scalar deleting destructor'(v45, (unsigned int)SelfDestruct);
            v6[-1].m_Lock = 0LL;
          }
        }
        LOBYTE(v6->m_Lock) = 0;
        FxObject::~FxObject(v6, (unsigned int)SelfDestruct, v16);
        if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
          v6 = (FxRegKey *)((char *)v6 - 32);
        if ( !v6 )
          KeBugCheckEx(0x10Du, 4uLL, 0LL, retaddr, 0LL);
        if ( ((unsigned __int16)v6 & 0xFFF) != 0 )
          goto LABEL_51;
        goto LABEL_101;
      }
      if ( (char *)v28 == (char *)FxRequest::`scalar deleting destructor' )
      {
        v6->__vftable = (FxRegKey_vtbl *)&FxRequestBase::`vftable';
        v33 = (_MDL *)v6[1].m_Key;
        if ( v33 )
        {
          if ( v6->FxPagedObject::FxObject::m_Globals->FxVerifierOn )
            FxMdlFreeDebug(v6->FxPagedObject::FxObject::m_Globals, (_MDL *)v6[1].m_Key);
          else
            IoFreeMdl(v33);
        }
        Blink = v6[1].m_ChildListHead.Blink;
        v35 = *(_LIST_ENTRY **)&v6[1].m_ObjectFlags;
        if ( Blink )
        {
          if ( v35 )
            ((void (__fastcall *)(_LIST_ENTRY *, FxRegKey *))Blink->Flink[1].Blink)(Blink, v6);
          v46 = v6[1].m_ChildListHead.Blink;
          if ( v46 )
            ((void (__fastcall *)(_LIST_ENTRY *, __int64))v46->Flink->Flink)(v46, 1LL);
        }
        if ( v35 && BYTE5(v6[1].m_ChildEntry.Blink) == 1 )
          IoFreeIrp(*(PIRP *)&v6[1].m_ObjectFlags);
        v36 = *(FxRequestTimer **)&v6[1].m_SpinLock.m_DbgFlagIsInitialized;
        if ( v36 )
          FxRequestTimer::`scalar deleting destructor'(v36, (unsigned int)SelfDestruct);
        v6->__vftable = (FxRegKey_vtbl *)&FxNonPagedObject::`vftable';
        if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
        {
          v47 = (FxVerifierLock *)v6[-1].m_Lock;
          if ( v47 )
          {
            FxVerifierLock::`scalar deleting destructor'(v47, (unsigned int)SelfDestruct);
            v6[-1].m_Lock = 0LL;
          }
        }
        LOBYTE(v6->m_Lock) = 0;
        FxObject::~FxObject(v6, (unsigned int)SelfDestruct, v16);
        if ( SLOBYTE(v6->m_ObjectFlags) < 0 )
          v6 = (FxRegKey *)((char *)v6 - 32);
        FxPoolFree(v6);
      }
      else
      {
        v28(v6, 1);
      }
    }
  }
  return v3;
}
