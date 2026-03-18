/*
 * XREFs of ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001BB14
 * Callers:
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0018128 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 *     imp_WdfWaitLockCreate @ 0x1C001BA70 (imp_WdfWaitLockCreate.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?Construct@FxObject@@AEAAXE@Z @ 0x1C000C608 (-Construct@FxObject@@AEAAXE@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 */

__int64 __fastcall FxWaitLock::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _FX_DRIVER_GLOBALS *Attributes,
        FxObject *ParentObject,
        unsigned __int8 AssignDriverAsDefaultParent,
        WDFWAITLOCK__ **LockHandle)
{
  void **v5; // r14
  _POOL_TYPE v7; // ebx
  unsigned __int64 Blink; // r9
  ULONG Tag; // edi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v13; // rax
  void *Caller; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v17; // rax
  int v18; // ebx
  unsigned __int64 ContextSize; // r8
  void *retaddr; // [rsp+48h] [rbp+0h]

  v5 = (void **)LockHandle;
  v7 = ExDefaultNonPagedPoolType;
  Blink = 0LL;
  *LockHandle = 0LL;
  Tag = FxDriverGlobals->Tag;
  if ( Attributes )
  {
    v13 = *(const _WDF_OBJECT_CONTEXT_TYPE_INFO **)&Attributes->DestroyEvent.m_DbgFlagIsInitialized;
    if ( v13 )
    {
      Blink = (unsigned __int64)Attributes->DestroyEvent.m_Event.Header.WaitListHead.Blink;
      if ( !Blink )
        Blink = v13->ContextSize;
    }
  }
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x90u, 0, Blink, (unsigned __int64 *)&LockHandle) < 0 )
    goto LABEL_18;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v15 = FxPoolAllocator(
          FxDriverGlobals,
          &FxDriverGlobals->FxPoolFrameworks,
          v7,
          (unsigned __int64)LockHandle,
          Tag,
          Caller);
  v16 = v15;
  if ( v15 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v15, 0, 0x30uLL);
      *((_DWORD *)v16 + 8) = 1146058822;
      v16 += 6;
    }
    memset(v16 + 18, 0, 0x30uLL);
    v16[18] = v16;
    if ( Attributes )
    {
      v17 = *(const _WDF_OBJECT_CONTEXT_TYPE_INFO **)&Attributes->DestroyEvent.m_DbgFlagIsInitialized;
      if ( v17 )
      {
        ContextSize = (unsigned __int64)Attributes->DestroyEvent.m_Event.Header.WaitListHead.Blink;
        if ( !ContextSize )
          ContextSize = v17->ContextSize;
        memset(v16 + 24, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v16[22] = *(_QWORD *)&Attributes->DestroyEvent.m_DbgFlagIsInitialized;
    }
  }
  if ( v16 )
  {
    *((_DWORD *)v16 + 2) = 9441315;
    *v16 = &FxObject::`vftable';
    v16[2] = FxDriverGlobals;
    v16[7] = 0LL;
    *((_BYTE *)v16 + 48) = 1;
    FxObject::Construct((FxObject *)v16, 0LL);
    *((_BYTE *)v16 + 128) = 0;
    KeInitializeEvent((PRKEVENT)(v16 + 13), SynchronizationEvent, 1u);
    *((_BYTE *)v16 + 128) = 1;
    v16[17] = 0LL;
    *v16 = &FxObject::`vftable';
  }
  else
  {
LABEL_18:
    v16 = 0LL;
  }
  if ( v16 )
  {
    KeInitializeEvent((PRKEVENT)(v16 + 13), SynchronizationEvent, 1u);
    *((_BYTE *)v16 + 128) = 1;
    v18 = FxObject::Commit((FxObject *)v16, Attributes, v5, ParentObject, AssignDriverAsDefaultParent);
    if ( v18 < 0 )
      FxObject::DeleteFromFailedCreate((FxObject *)v16);
  }
  else
  {
    v18 = -1073741670;
    WPP_IFR_SF_d(FxDriverGlobals, 2u, 0xDu, 0xAu, WPP_FxWaitLock_cpp_Traceguids, -1073741670);
  }
  return (unsigned int)v18;
}
