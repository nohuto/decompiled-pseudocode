/*
 * XREFs of imp_WdfCommonBufferCreateWithConfig @ 0x1C00295A0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C0001E40 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C0004D30 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C0009460 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x1C00097B0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_d @ 0x1C00098A0 (WPP_IFR_SF_d.c)
 *     ?AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z @ 0x1C002994C (-AllocateCommonBuffer@FxCommonBuffer@@QEAAJ_K@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_DDd @ 0x1C0058FD8 (WPP_IFR_SF_DDd.c)
 *     ?CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z @ 0x1C0059F40 (-CreateAndInitialize@FxVerifierLock@@SAJPEAPEAV1@PEAU_FX_DRIVER_GLOBALS@@PEAVFxObject@@@Z.c)
 *     ?FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z @ 0x1C006D4B8 (-FxObjectHandleGetPtrQI@@YAXPEAVFxObject@@PEAPEAXPEAXGG@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x1C006DFFC (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1C006E01C (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1C00BA470 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
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
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  void **v11; // r15
  __int64 result; // rax
  unsigned __int16 v13; // r9
  _WDF_OBJECT_ATTRIBUTES *v14; // rdi
  unsigned __int64 ContextSizeOverride; // r9
  _POOL_TYPE v16; // ebx
  ULONG Tag; // r14d
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  void *Caller; // rax
  FxCommonBuffer *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rdx
  FxCommonBuffer *v22; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v23; // rax
  unsigned __int64 ContextSize; // r8
  FxDmaEnabler *v25; // r14
  _FX_DRIVER_GLOBALS *v26; // rax
  int CommonBuffer; // edi
  _FX_DRIVER_GLOBALS *v28; // rdx
  void *handle[2]; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]
  FxDmaEnabler *pDmaEnabler; // [rsp+88h] [rbp+10h] BYREF

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
  if ( Config->Size == 8 )
  {
    v11 = (void **)CommonBufferHandle;
    if ( !CommonBufferHandle )
      FxVerifierNullBugCheck(m_Globals, retaddr);
    *CommonBufferHandle = 0LL;
    result = FxVerifierCheckIrqlLevel(m_Globals, 0);
    if ( (int)result >= 0 )
    {
      if ( Length )
      {
        v14 = Attributes;
        result = FxValidateObjectAttributes(m_Globals, Attributes, 1, v13);
        if ( (int)result >= 0 )
        {
          ContextSizeOverride = 0LL;
          v16 = ExDefaultNonPagedPoolType;
          Tag = m_Globals->Tag;
          if ( v14 )
          {
            ContextTypeInfo = v14->ContextTypeInfo;
            if ( ContextTypeInfo )
            {
              ContextSizeOverride = v14->ContextSizeOverride;
              if ( !ContextSizeOverride )
                ContextSizeOverride = ContextTypeInfo->ContextSize;
            }
          }
          if ( (int)FxCalculateObjectTotalSize2(m_Globals, 0xB8u, 0, ContextSizeOverride, (unsigned __int64 *)handle) < 0 )
            goto LABEL_47;
          if ( m_Globals->FxPoolTrackingOn )
            Caller = retaddr;
          else
            Caller = 0LL;
          v20 = (FxCommonBuffer *)FxPoolAllocator(
                                    m_Globals,
                                    &m_Globals->FxPoolFrameworks,
                                    v16,
                                    (SIZE_T)handle[0],
                                    Tag,
                                    Caller);
          v22 = v20;
          if ( v20 )
          {
            if ( m_Globals->FxVerifierHandle )
            {
              memset(v20, 0, 0x20uLL);
              *(_DWORD *)(&v22->m_ObjectState + 1) = 1146058822;
              v22 = (FxCommonBuffer *)((char *)v22 + 32);
            }
            memset(&v22[1].m_Type, 0, 0x30uLL);
            *(_QWORD *)&v22[1].m_Type = v22;
            if ( v14 )
            {
              v23 = v14->ContextTypeInfo;
              if ( v23 )
              {
                ContextSize = v14->ContextSizeOverride;
                if ( !ContextSize )
                  ContextSize = v23->ContextSize;
                memset(&v22[1].m_SpinLock.m_Lock, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
              }
              v22[1].m_ChildListHead.Blink = (_LIST_ENTRY *)v14->ContextTypeInfo;
            }
          }
          if ( v22 )
          {
            v25 = pDmaEnabler;
            v22->__vftable = (FxCommonBuffer_vtbl *)&FxObject::`vftable';
            v22->m_Globals = m_Globals;
            *(_DWORD *)&v22->m_Type = 12588034;
            v22->m_SpinLock.m_Lock = 0LL;
            v22->m_SpinLock.m_DbgFlagIsInitialized = 1;
            v22->m_Refcnt = 1;
            *(_DWORD *)&v22->m_ObjectFlags = 0x10000;
            v22->m_ParentObject = 0LL;
            v22->m_ChildListHead.Blink = &v22->m_ChildListHead;
            v22->m_ChildListHead.Flink = &v22->m_ChildListHead;
            v22->m_ChildEntry.Blink = &v22->m_ChildEntry;
            v22->m_ChildEntry.Flink = &v22->m_ChildEntry;
            v26 = v22->m_Globals;
            v22->m_DisposeSingleEntry.Next = 0LL;
            v22->m_DeviceBase = 0LL;
            if ( v26->FxVerifierOn )
              FxObject::Vf_VerifyConstruct(v22, v21, 0);
            v22->__vftable = (FxCommonBuffer_vtbl *)&FxNonPagedObject::`vftable';
            v22->m_NPLock.m_Lock = 0LL;
            v22->m_NPLock.m_DbgFlagIsInitialized = 1;
            if ( SLOBYTE(v22->m_ObjectFlags) < 0 )
            {
              v28 = v22->m_Globals;
              if ( v28->FxVerifierLock )
              {
                handle[0] = 0LL;
                FxVerifierLock::CreateAndInitialize((FxVerifierLock **)handle, v28, v22);
                v22[-1].m_Length = (unsigned __int64)handle[0];
              }
            }
            v22->m_DmaEnabler = v25;
            v22->__vftable = (FxCommonBuffer_vtbl *)&FxCommonBuffer::`vftable';
            v22->m_BufferRawVA = 0LL;
            v22->m_ObjectFlags |= 0x800u;
            v22->m_BufferAlignedVA = 0LL;
            v22->m_BufferAlignedLA.QuadPart = 0LL;
            v22->m_BufferRawLA.QuadPart = 0LL;
            v22->m_Length = 0LL;
            v22->m_RawLength = 0LL;
            v22->m_Alignment = v25->m_CommonBufferAlignment;
            CommonBuffer = FxObject::Commit(v22, v14, handle, pDmaEnabler, 1u);
            if ( CommonBuffer < 0
              || (v22->m_Alignment = Config->AlignmentRequirement,
                  CommonBuffer = FxCommonBuffer::AllocateCommonBuffer(v22, Length),
                  CommonBuffer < 0) )
            {
              FxObject::DeleteFromFailedCreate(v22);
            }
            else
            {
              *v11 = handle[0];
            }
            return (unsigned int)CommonBuffer;
          }
          else
          {
LABEL_47:
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
