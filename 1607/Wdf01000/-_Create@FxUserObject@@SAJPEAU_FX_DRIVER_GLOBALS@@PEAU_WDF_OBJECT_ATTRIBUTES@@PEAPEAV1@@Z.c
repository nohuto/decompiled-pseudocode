/*
 * XREFs of ?_Create@FxUserObject@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C001A4F0
 * Callers:
 *     imp_WdfObjectCreate @ 0x1C001A3B0 (imp_WdfObjectCreate.c)
 * Callees:
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0002960 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0008B90 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009FC0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_d @ 0x1C000A170 (WPP_IFR_SF_d.c)
 *     WPP_IFR_SF_ @ 0x1C00186F0 (WPP_IFR_SF_.c)
 *     memset @ 0x1C003C780 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0063E54 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0066A4C (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00C9490 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall FxUserObject::_Create(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        FxUserObject **pUserObject)
{
  _POOL_TYPE v3; // ebx
  ULONG Tag; // ebp
  unsigned __int64 ContextSizeOverride; // r9
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *Caller; // rax
  FxUserObject *v11; // rax
  _FX_DRIVER_GLOBALS *v12; // rdx
  FxUserObject *v13; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v14; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  int v17; // eax
  unsigned int v18; // edi
  _FX_DRIVER_GLOBALS *v20; // rdx
  void *retaddr; // [rsp+58h] [rbp+0h]
  void *handle; // [rsp+68h] [rbp+10h] BYREF

  v3 = ExDefaultNonPagedPoolType;
  Tag = FxDriverGlobals->Tag;
  ContextSizeOverride = 0LL;
  if ( Attributes )
  {
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      ContextSizeOverride = Attributes->ContextSizeOverride;
      if ( !ContextSizeOverride )
        ContextSizeOverride = ContextTypeInfo->ContextSize;
    }
  }
  if ( (int)FxCalculateObjectTotalSize2(FxDriverGlobals, 0x78u, 0, ContextSizeOverride, (unsigned __int64 *)&handle) < 0 )
    goto LABEL_28;
  if ( FxDriverGlobals->FxPoolTrackingOn )
    Caller = retaddr;
  else
    Caller = 0LL;
  v11 = (FxUserObject *)FxPoolAllocator(
                          FxDriverGlobals,
                          &FxDriverGlobals->FxPoolFrameworks,
                          v3,
                          (SIZE_T)handle,
                          Tag,
                          Caller);
  v13 = v11;
  if ( v11 )
  {
    if ( FxDriverGlobals->FxVerifierHandle )
    {
      memset(v11, 0, 0x20uLL);
      *(_DWORD *)(&v13->m_ObjectState + 1) = 1146058822;
      v13 = (FxUserObject *)((char *)v13 + 32);
    }
    memset(&v13[1].m_Type, 0, 0x30uLL);
    *(_QWORD *)&v13[1].m_Type = v13;
    if ( Attributes )
    {
      v14 = Attributes->ContextTypeInfo;
      if ( v14 )
      {
        ContextSize = Attributes->ContextSizeOverride;
        if ( !ContextSize )
          ContextSize = v14->ContextSize;
        memset(&v13[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
      }
      v13[1].m_ChildListHead.Blink = (_LIST_ENTRY *)Attributes->ContextTypeInfo;
    }
  }
  if ( v13 )
  {
    v13->m_Globals = FxDriverGlobals;
    v13->__vftable = (FxUserObject_vtbl *)&FxObject::`vftable';
    *(_DWORD *)&v13->m_Type = 8392716;
    v13->m_SpinLock.m_Lock = 0LL;
    v13->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v13->m_Refcnt = 1;
    *(_DWORD *)&v13->m_ObjectFlags = 0x10000;
    v13->m_ParentObject = 0LL;
    v13->m_ChildListHead.Blink = &v13->m_ChildListHead;
    v13->m_ChildListHead.Flink = &v13->m_ChildListHead;
    v13->m_ChildEntry.Blink = &v13->m_ChildEntry;
    v13->m_ChildEntry.Flink = &v13->m_ChildEntry;
    m_Globals = v13->m_Globals;
    v13->m_DisposeSingleEntry.Next = 0LL;
    v13->m_DeviceBase = 0LL;
    if ( m_Globals->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v13, v12, 0);
    v13->__vftable = (FxUserObject_vtbl *)&FxNonPagedObject::`vftable';
    v13->m_NPLock.m_Lock = 0LL;
    v13->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v13->m_ObjectFlags) < 0 )
    {
      v20 = v13->m_Globals;
      if ( v20->FxVerifierLock )
      {
        handle = 0LL;
        FxVerifierLock::CreateAndInitialize((FxVerifierLock **)&handle, v20, v13);
        v13[-1].m_DeviceBase = (FxDeviceBase *)handle;
      }
    }
    v13->__vftable = (FxUserObject_vtbl *)&FxUserObject::`vftable';
    v17 = FxObject::Commit(v13, Attributes, &handle, 0LL, 1u);
    v18 = v17;
    if ( v17 < 0 )
    {
      WPP_IFR_SF_d(FxDriverGlobals, 2u, 0x14u, 0xBu, WPP_FxUserObject_cpp_Traceguids, v17);
      FxObject::DeleteFromFailedCreate(v13);
    }
    else
    {
      *pUserObject = v13;
    }
    return v18;
  }
  else
  {
LABEL_28:
    WPP_IFR_SF_(FxDriverGlobals, 2u, 0x14u, 0xAu, WPP_FxUserObject_cpp_Traceguids);
    return 3221225626LL;
  }
}
