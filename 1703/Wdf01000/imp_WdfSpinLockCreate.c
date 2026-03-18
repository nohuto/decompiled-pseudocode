/*
 * XREFs of imp_WdfSpinLockCreate @ 0x1C001B830
 * Callers:
 *     <none>
 * Callees:
 *     ?FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C0001D80 (-FxGetContextSize@@YA_KPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4FxObjectType@@@Z @ 0x1C0001DA8 (-FxObjectAndHandleHeaderInit@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAU_WDF_OBJECT_ATTRIBUTES@@W4F.c)
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ??0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z @ 0x1C001B9C8 (--0FxSpinLock@@QEAA@PEAU_FX_DRIVER_GLOBALS@@G@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C001C98C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

__int64 __fastcall imp_WdfSpinLockCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *SpinLockAttributes,
        FxObject **SpinLock)
{
  _FX_DRIVER_GLOBALS *DriverName; // rbx
  unsigned __int16 v6; // r9
  __int64 result; // rax
  _POOL_TYPE v8; // r14d
  __int16 v9; // bp
  ULONG Tag; // r15d
  unsigned __int16 v11; // bp
  unsigned __int64 ContextSize; // rax
  void *Caller; // rax
  _QWORD *v14; // rax
  FxSpinLock *v15; // rax
  FxObject *v16; // rax
  FxObject *v17; // rbx
  int v18; // edi
  void *retaddr; // [rsp+58h] [rbp+0h]
  FxObject *pParent; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int64 Size; // [rsp+70h] [rbp+18h] BYREF

  DriverName = (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName;
  if ( FxValidateObjectAttributesForParentHandle(
         (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
         SpinLockAttributes,
         0) >= 0 )
  {
    FxObjectHandleGetPtr(DriverName, (unsigned __int64)SpinLockAttributes->ParentObject, 0x1000u, (void **)&pParent);
    DriverName = pParent->m_Globals;
  }
  if ( !SpinLock )
    FxVerifierNullBugCheck(DriverName, retaddr);
  result = FxValidateObjectAttributes(DriverName, SpinLockAttributes, 0, v6);
  if ( (int)result >= 0 )
  {
    v8 = ExDefaultNonPagedPoolType;
    v9 = -(DriverName->FxVerifierLock != 0);
    *SpinLock = 0LL;
    Tag = DriverName->Tag;
    v11 = v9 & 0x100;
    ContextSize = FxGetContextSize(SpinLockAttributes);
    if ( (int)FxCalculateObjectTotalSize2(DriverName, 0x80u, v11, ContextSize, &Size) >= 0
      && (DriverName->FxPoolTrackingOn ? (Caller = retaddr) : (Caller = 0LL),
          (v14 = FxPoolAllocator(DriverName, &DriverName->FxPoolFrameworks, v8, Size, Tag, Caller)) != 0LL
       && (v15 = (FxSpinLock *)FxObjectAndHandleHeaderInit(
                                 DriverName,
                                 v14,
                                 ((v11 + 15) & 0xFFF0u) + 128,
                                 SpinLockAttributes,
                                 FxObjectTypeExternal)) != 0LL) )
    {
      FxSpinLock::FxSpinLock(v15, DriverName, v11);
      v17 = v16;
    }
    else
    {
      v17 = 0LL;
    }
    if ( v17 )
    {
      v18 = FxObject::Commit(v17, (_FX_DRIVER_GLOBALS *)SpinLockAttributes, (void **)&pParent, 0LL, 1u);
      if ( v18 < 0 )
        FxObject::DeleteFromFailedCreate(v17);
      else
        *SpinLock = pParent;
      return (unsigned int)v18;
    }
    else
    {
      return 3221225626LL;
    }
  }
  return result;
}
