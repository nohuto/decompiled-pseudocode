/*
 * XREFs of ?_Create@FxWaitLock@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@EPEAPEAUWDFWAITLOCK__@@@Z @ 0x1C001EFCC
 * Callers:
 *     imp_WdfWaitLockCreate @ 0x1C001EEF0 (imp_WdfWaitLockCreate.c)
 *     ?InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029B28 (-InitializeWorker@FxInterrupt@@QEAAJPEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F194 (-FxContextHeaderInit@@YAXPEAUFxContextHeader@@PEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F204 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxWaitLock::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxObject *ParentObject,
        unsigned __int8 AssignDriverAsDefaultParent,
        WDFWAITLOCK__ **LockHandle)
{
  void **v5; // r14
  _POOL_TYPE v6; // ebx
  ULONG Tag; // edi
  unsigned __int64 ContextSize; // rax
  _LIST_ENTRY *Caller; // rax
  _QWORD *v14; // rax
  _FX_DRIVER_GLOBALS *v15; // rdx
  _QWORD *v16; // rdi
  __int64 v17; // rax
  int v18; // ebx
  _LIST_ENTRY *retaddr; // [rsp+58h] [rbp+0h]

  v5 = (void **)LockHandle;
  v6 = ExDefaultNonPagedPoolType;
  *LockHandle = 0LL;
  Tag = FxDriverGlobals->Tag;
  ContextSize = FxGetContextSize(Attributes);
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x90u, 0, ContextSize, (unsigned __int64 *)&LockHandle) < 0 )
    goto LABEL_16;
  Caller = retaddr;
  if ( !FxDriverGlobals->FxPoolTrackingOn )
    Caller = 0LL;
  v14 = FxPoolAllocator(
          FxDriverGlobals,
          (_LIST_ENTRY *)&FxDriverGlobals->FxPoolFrameworks,
          v6,
          (SIZE_T)LockHandle,
          Tag,
          Caller);
  v16 = v14;
  if ( v14 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v14, 0, 0x20uLL);
      *((_DWORD *)v16 + 7) = 1146058822;
      v16 += 4;
    }
    FxContextHeaderInit((FxContextHeader *)(v16 + 18), (FxObject *)v16, Attributes);
  }
  if ( v16 )
  {
    v16[2] = FxDriverGlobals;
    *v16 = &FxObject::`vftable';
    *((_DWORD *)v16 + 2) = 9441315;
    v16[7] = 0LL;
    *((_BYTE *)v16 + 48) = 1;
    *((_DWORD *)v16 + 3) = 1;
    *((_DWORD *)v16 + 6) = 0x10000;
    v16[8] = 0LL;
    v16[5] = v16 + 4;
    v16[4] = v16 + 4;
    v16[10] = v16 + 9;
    v16[9] = v16 + 9;
    v17 = v16[2];
    v16[11] = 0LL;
    v16[12] = 0LL;
    if ( *(_BYTE *)(v17 + 316) )
      FxObject::Vf_VerifyConstruct((FxObject *)v16, v15, 0);
    *((_BYTE *)v16 + 128) = 0;
    KeInitializeEvent((PRKEVENT)(v16 + 13), SynchronizationEvent, 1u);
    *((_BYTE *)v16 + 128) = 1;
    v16[17] = 0LL;
    *v16 = &FxObject::`vftable';
  }
  else
  {
LABEL_16:
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
