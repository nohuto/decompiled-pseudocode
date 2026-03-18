/*
 * XREFs of imp_WdfCommonBufferCreateWithConfig @ 0x1C00358B0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C0005CF0 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C000D7C0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C0035C68 (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0067B74 (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_dd @ 0x1C0067DA0 (WPP_IFR_SF_dd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C006A220 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C0080C04 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C0080C5C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00D4A70 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

__int64 __fastcall imp_WdfCommonBufferCreateWithConfig(
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
  void **v11; // r15
  _WDF_OBJECT_ATTRIBUTES *v12; // rsi
  __int64 result; // rax
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v15; // ebx
  ULONG Tag; // r14d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *Caller; // rax
  FxCommonBuffer *v19; // rax
  _FX_DRIVER_GLOBALS *v20; // rdx
  FxCommonBuffer *v21; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v22; // rax
  unsigned __int64 ContextSize; // r8
  FxDmaEnabler *v24; // r14
  _FX_DRIVER_GLOBALS *v25; // rax
  int CommonBuffer; // edi
  unsigned __int8 CurrentIrql; // al
  _FX_DRIVER_GLOBALS *v28; // rdx
  void *handle[2]; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxDmaEnabler *pDmaEnabler; // [rsp+88h] [rbp+10h] BYREF

  if ( !DmaEnabler )
    FxVerifierBugCheckWorker((_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName, WDF_INVALID_HANDLE, 0LL, 0x1400uLL);
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
  if ( Config->Size == 8 )
  {
    v11 = (void **)CommonBufferHandle;
    if ( !CommonBufferHandle )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    *CommonBufferHandle = 0LL;
    if ( m_Globals->FxVerifierOn && (CurrentIrql = KeGetCurrentIrql()) != 0 )
    {
      WPP_IFR_SF_dd(m_Globals, 2u, 0x12u, 0xAu, WPP_fxverifier_h_Traceguids, CurrentIrql, 0);
      FxVerifierDbgBreakPoint(m_Globals);
      return 3221225488LL;
    }
    else if ( Length )
    {
      v12 = Attributes;
      result = FxValidateObjectAttributes(m_Globals, Attributes, 1, (unsigned __int16)Config);
      if ( (int)result >= 0 )
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
        if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0xB8u, 0, ContextSizeOverride, (unsigned __int64 *)handle) < 0 )
          goto LABEL_49;
        if ( m_Globals->FxPoolTrackingOn )
          Caller = retaddr;
        else
          Caller = 0LL;
        v19 = (FxCommonBuffer *)FxPoolAllocator(
                                  m_Globals,
                                  &m_Globals->FxPoolFrameworks,
                                  v15,
                                  (unsigned __int64)handle[0],
                                  Tag,
                                  Caller);
        v21 = v19;
        if ( v19 )
        {
          if ( m_Globals->FxVerifierHandle )
          {
            memset(v19, 0, 0x30uLL);
            LODWORD(v21->m_ChildListHead.Flink) = 1146058822;
            v21 = (FxCommonBuffer *)((char *)v21 + 48);
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
        if ( v21 )
        {
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
          v21->__vftable = (FxCommonBuffer_vtbl *)FxNonPagedObject::`vftable';
          v21->m_NPLock.m_Lock = 0LL;
          v21->m_NPLock.m_DbgFlagIsInitialized = 1;
          if ( SLOBYTE(v21->m_ObjectFlags) < 0 )
          {
            v28 = v21->m_Globals;
            if ( v28->FxVerifierLock )
            {
              handle[0] = 0LL;
              FxVerifierLock::CreateAndInitialize((FxVerifierLock **)handle, v28, v21);
              v21[-1].m_BufferRawLA.QuadPart = (__int64)handle[0];
            }
          }
          v21->m_DmaEnabler = v24;
          v21->__vftable = (FxCommonBuffer_vtbl *)FxCommonBuffer::`vftable';
          v21->m_BufferRawVA = 0LL;
          v21->m_ObjectFlags |= 0x800u;
          v21->m_BufferAlignedVA = 0LL;
          v21->m_BufferAlignedLA.QuadPart = 0LL;
          v21->m_BufferRawLA.QuadPart = 0LL;
          v21->m_Length = 0LL;
          v21->m_RawLength = 0LL;
          v21->m_Alignment = v24->m_CommonBufferAlignment;
          CommonBuffer = FxObject::Commit(v21, (_FX_DRIVER_GLOBALS *)v12, handle, pDmaEnabler, 1u);
          if ( CommonBuffer < 0
            || (v21->m_Alignment = Config->AlignmentRequirement,
                CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v21, Length),
                CommonBuffer < 0) )
          {
            FxObject::DeleteFromFailedCreate(v21);
          }
          else
          {
            *v11 = handle[0];
          }
          return (unsigned int)CommonBuffer;
        }
        else
        {
LABEL_49:
          WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0xEu, WPP_FxCommonBufferAPI_cpp_Traceguids, -1073741670);
          return 3221225626LL;
        }
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xFu, 0xDu, WPP_FxCommonBufferAPI_cpp_Traceguids, -1073741811);
      return 3221225485LL;
    }
  }
  else
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
    return 3221225476LL;
  }
  return result;
}
