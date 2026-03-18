/*
 * XREFs of imp_WdfCommonBufferCreateWithConfig @ 0x1C0008D00
 * Callers:
 *     <none>
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C00090AC (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0015AA0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0016050 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C0017C70 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C001F354 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ??0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0031BDC (--0FxVerifierLock@@AEAA@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0031DE8 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_dd @ 0x1C005FA30 (WPP_IFR_SF_dd.c)
 *     WPP_IFR_SF_DDd @ 0x1C006506C (WPP_IFR_SF_DDd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C007A1C4 (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D1734 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall imp_WdfCommonBufferCreateWithConfig(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 DmaEnabler,
        unsigned __int64 Length,
        _WDF_COMMON_BUFFER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFCOMMONBUFFER__ **CommonBufferHandle)
{
  FxDmaEnabler *v8; // rcx
  __int64 v9; // r8
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  WDFCOMMONBUFFER__ **v11; // r15
  _WDF_OBJECT_ATTRIBUTES *v12; // rsi
  int result; // eax
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v15; // ebx
  ULONG Tag; // r14d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  _LIST_ENTRY *Caller; // rax
  FxCommonBuffer *v19; // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  FxCommonBuffer *v21; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v22; // rax
  unsigned __int64 ContextSize; // r8
  FxDmaEnabler *v24; // r14
  _FX_DRIVER_GLOBALS *v25; // rax
  int CommonBuffer; // edi
  unsigned __int8 CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v28; // r13
  _BYTE *v29; // rdi
  FxVerifierLock *v30; // rax
  __int64 v31; // rax
  ULONG Total; // [rsp+20h] [rbp-58h]
  FxDmaEnabler *pDmaEnabler; // [rsp+40h] [rbp-38h] BYREF
  _LIST_ENTRY *retaddr; // [rsp+78h] [rbp+0h]
  void *handle; // [rsp+88h] [rbp+10h] BYREF

  if ( !DmaEnabler )
    FxVerifierBugCheckWorker(
      (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
      WDF_INVALID_HANDLE,
      0LL,
      0x1400uLL);
  v8 = (FxDmaEnabler *)(~DmaEnabler & 0xFFFFFFFFFFFFFFF8uLL);
  LOWORD(v9) = 0;
  if ( (DmaEnabler & 1) != 0 )
  {
    v9 = LOWORD(v8->__vftable);
    v8 = (FxDmaEnabler *)((char *)v8 - v9);
  }
  if ( v8->m_Type == 5120 )
  {
    pDmaEnabler = v8;
  }
  else
  {
    FxObjectHandleGetPtrQI(v8, (void **)&pDmaEnabler, (void *)DmaEnabler, 0x1400u, v9);
    v8 = pDmaEnabler;
  }
  m_Globals = v8->m_Globals;
  if ( !Config )
    FxVerifierNullBugCheck(v8->m_Globals, retaddr);
  if ( Config->Size != 8 )
  {
    WPP_IFR_SF_DDd(
      m_Globals,
      DmaEnabler,
      0xFu,
      0xCu,
      WPP_FxCommonBufferAPI_cpp_Traceguids,
      Config->Size,
      8,
      -1073741820);
    return -1073741820;
  }
  v11 = CommonBufferHandle;
  if ( !CommonBufferHandle )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *CommonBufferHandle = 0LL;
  if ( m_Globals->FxVerifierOn )
  {
    CurrentIrql = KeGetCurrentIrql();
    if ( CurrentIrql )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      LODWORD(handle) = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&handle,
        m_Globals->Public.DriverName,
        (const char *)&handle);
      if ( m_Globals->FxVerifierDbgBreakOnError )
        DbgBreakPoint();
      return -1073741808;
    }
  }
  if ( !Length )
  {
    WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0xDu, WPP_FxCommonBufferAPI_cpp_Traceguids, -1073741811);
    return -1073741811;
  }
  v12 = Attributes;
  result = FxValidateObjectAttributes(m_Globals, Attributes, 1u);
  if ( result >= 0 )
  {
    ContextSizeOverride = 0LL;
    v15 = ExDefaultNonPagedPoolType;
    Tag = m_Globals->Tag;
    if ( v12 )
    {
      ContextTypeInfo = v12->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = v12->ContextSizeOverride;
        if ( !ContextSizeOverride )
          ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    if ( FxCalculateObjectTotalSize2(m_Globals, 0xB8u, 0, ContextSizeOverride, (unsigned __int64 *)&handle) < 0 )
      goto LABEL_58;
    if ( m_Globals->FxPoolTrackingOn )
      Caller = retaddr;
    else
      Caller = 0LL;
    v19 = (FxCommonBuffer *)FxPoolAllocator(
                              m_Globals,
                              (_LIST_ENTRY *)&m_Globals->FxPoolFrameworks,
                              v15,
                              (SIZE_T)handle,
                              Tag,
                              Caller);
    v21 = v19;
    if ( v19 )
    {
      if ( m_Globals->FxVerifierHandle )
      {
        memset(v19, 0, 0x20uLL);
        *(_DWORD *)(&v21->m_ObjectState + 1) = 1146058822;
        v21 = (FxCommonBuffer *)((char *)v21 + 32);
      }
      memset(&v21[1].m_Type, 0, 0x30uLL);
      *(_QWORD *)&v21[1].m_Type = v21;
      if ( v12 )
      {
        v22 = v12->ContextTypeInfo;
        if ( v22 )
        {
          ContextSize = v12->ContextSizeOverride;
          if ( !ContextSize )
            ContextSize = v22->ContextSize;
          memset(&v21[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
        }
        v21[1].m_ChildListHead.Blink = (_LIST_ENTRY *)v12->ContextTypeInfo;
      }
    }
    if ( !v21 )
    {
LABEL_58:
      WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0xEu, WPP_FxCommonBufferAPI_cpp_Traceguids, -1073741670);
      return -1073741670;
    }
    v24 = pDmaEnabler;
    v21->__vftable = (FxCommonBuffer_vtbl *)&FxObject::`vftable';
    v21->m_Globals = m_Globals;
    *(_DWORD *)&v21->m_Type = 12588034;
    v21->m_SpinLock.m_Lock = 0LL;
    v21->m_SpinLock.m_DbgFlagIsInitialized = 1;
    v21->m_Refcnt = 1;
    *(_DWORD *)&v21->m_ObjectFlags = 0x10000;
    v21->m_ParentObject = 0LL;
    v21->m_ChildListHead.Blink = &v21->m_ChildListHead;
    v21->m_ChildListHead.Flink = &v21->m_ChildListHead;
    v21->m_ChildEntry.Blink = &v21->m_ChildEntry;
    v21->m_ChildEntry.Flink = &v21->m_ChildEntry;
    v25 = v21->m_Globals;
    v21->m_DisposeSingleEntry.Next = 0LL;
    v21->m_DeviceBase = 0LL;
    if ( v25->FxVerifierOn )
      FxObject::Vf_VerifyConstruct(v21, v20, 0);
    v21->__vftable = (FxCommonBuffer_vtbl *)&FxNonPagedObject::`vftable';
    v21->m_NPLock.m_Lock = 0LL;
    v21->m_NPLock.m_DbgFlagIsInitialized = 1;
    if ( SLOBYTE(v21->m_ObjectFlags) >= 0 )
      goto LABEL_32;
    v28 = v21->m_Globals;
    if ( !v28->FxVerifierLock )
      goto LABEL_32;
    v29 = 0LL;
    Total = v28->Tag;
    handle = 0LL;
    v30 = (FxVerifierLock *)FxPoolAllocator(
                              v28,
                              (_LIST_ENTRY *)&v28->FxPoolFrameworks,
                              ExDefaultNonPagedPoolType,
                              0xB0uLL,
                              Total,
                              retaddr);
    if ( v30 )
    {
      FxVerifierLock::FxVerifierLock(v30, v28, v21);
      v29 = (_BYTE *)v31;
      if ( v31 )
      {
        if ( *(_BYTE *)(v31 + 122) )
        {
          *(_DWORD *)(v31 + 48) = 1;
          *(_QWORD *)(v31 + 56) = 0LL;
          *(_DWORD *)(v31 + 64) = 0;
          KeInitializeEvent((PRKEVENT)(v31 + 72), SynchronizationEvent, 0);
          v29[40] = 1;
        }
        goto LABEL_56;
      }
      v29 = handle;
    }
    WPP_IFR_SF_d(v28, 2u, 0x12u, 0xCu, WPP_FxVerifierLock_hpp_Traceguids, -1073741670);
LABEL_56:
    v21[-1].m_Length = (unsigned __int64)v29;
LABEL_32:
    v21->m_DmaEnabler = v24;
    v21->__vftable = (FxCommonBuffer_vtbl *)&FxCommonBuffer::`vftable';
    v21->m_BufferRawVA = 0LL;
    v21->m_ObjectFlags |= 0x800u;
    v21->m_BufferAlignedVA = 0LL;
    v21->m_BufferAlignedLA.QuadPart = 0LL;
    v21->m_BufferRawLA.QuadPart = 0LL;
    v21->m_Length = 0LL;
    v21->m_RawLength = 0LL;
    v21->m_Alignment = v24->m_CommonBufferAlignment;
    CommonBuffer = FxObject::Commit(v21, v12, &handle, pDmaEnabler, 1u);
    if ( CommonBuffer < 0
      || (v21->m_Alignment = Config->AlignmentRequirement,
          CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v21, Length),
          CommonBuffer < 0) )
    {
      FxObject::DeleteFromFailedCreate(v21);
    }
    else
    {
      *v11 = (WDFCOMMONBUFFER__ *)handle;
    }
    return CommonBuffer;
  }
  return result;
}
