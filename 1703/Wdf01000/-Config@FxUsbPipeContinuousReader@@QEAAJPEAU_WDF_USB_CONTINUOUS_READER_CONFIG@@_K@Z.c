/*
 * XREFs of ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008C444
 * Callers:
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C008D830 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C000332C (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     WPP_IFR_SF_d @ 0x1C0035590 (WPP_IFR_SF_d.c)
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C00367F0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C007C5B8 (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ??0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z @ 0x1C007FA54 (--0FxLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GK@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::Config(
        FxUsbPipeContinuousReader *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxLookasideList *v7; // rax
  FxLookasideList *v8; // r14
  void (__fastcall *const *v9)(); // rax
  FxLookasideList *v10; // rax
  __int64 result; // rax
  _WDF_OBJECT_ATTRIBUTES *BufferAttributes; // rax
  void *v13; // rdx
  int v14; // eax
  unsigned int v15; // ebp
  int v16; // ebp
  FxUsbPipeContinuousReader **i; // r14
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-58h] BYREF

  m_Globals = this->m_Pipe->m_Globals;
  if ( TotalBufferLength > 0xFFFF )
  {
    v10 = (FxLookasideList *)FxObjectHandleAlloc(
                               m_Globals,
                               ExDefaultNonPagedPoolType,
                               0x1C0uLL,
                               0,
                               0LL,
                               0,
                               FxObjectTypeExternal);
    v8 = v10;
    if ( v10 )
    {
      FxLookasideList::FxLookasideList(v10, m_Globals, 0x1C0u, m_Globals->Tag);
      v9 = FxNPagedLookasideListFromPool::`vftable';
      goto LABEL_6;
    }
  }
  else
  {
    v7 = (FxLookasideList *)FxObjectHandleAlloc(
                              m_Globals,
                              ExDefaultNonPagedPoolType,
                              0x140uLL,
                              0,
                              0LL,
                              0,
                              FxObjectTypeExternal);
    v8 = v7;
    if ( v7 )
    {
      FxLookasideList::FxLookasideList(v7, m_Globals, 0x140u, m_Globals->Tag);
      v9 = FxNPagedLookasideList::`vftable';
LABEL_6:
      v8->__vftable = (FxLookasideList_vtbl *)v9;
      goto LABEL_8;
    }
  }
  v8 = 0LL;
LABEL_8:
  this->m_Lookaside = v8;
  if ( !v8 )
    return 3221225626LL;
  BufferAttributes = Config->BufferAttributes;
  if ( BufferAttributes )
  {
    attributes = *BufferAttributes;
  }
  else
  {
    memset(&attributes, 0, sizeof(attributes));
    attributes.Size = 56;
    attributes.ExecutionLevel = WdfExecutionLevelInheritFromParent;
    attributes.SynchronizationScope = WdfSynchronizationScopeInheritFromParent;
  }
  v13 = (void *)((unsigned __int64)v8 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !v8->m_ObjectSize )
    v13 = 0LL;
  attributes.ParentObject = v13;
  result = ((__int64 (__fastcall *)(FxLookasideList *, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))v8->Initialize)(
             v8,
             TotalBufferLength,
             &attributes);
  if ( (int)result >= 0 )
  {
    v14 = FxSystemWorkItem::_Create(
            m_Globals,
            this->m_Pipe->m_DeviceBase->m_DeviceObject.m_DeviceObject,
            &this->m_WorkItem);
    v15 = v14;
    if ( v14 >= 0 )
    {
      v16 = 0;
      this->m_Offsets.BufferLength = Config->TransferLength;
      this->m_Offsets.BufferOffset = Config->HeaderLength;
      if ( this->m_NumReaders )
      {
        for ( i = &this->m_Readers[0].Parent; ; i += 15 )
        {
          *i = this;
          KeInitializeDpc((PRKDPC)(i + 1), FxUsbPipeContinuousReader::_FxUsbPipeContinuousReadDpc, 0LL);
          result = FxRequest::_Create(
                     m_Globals,
                     0LL,
                     0LL,
                     this->m_Pipe,
                     FxRequestOwnsIrp,
                     FxRequestConstructorCallerIsFx,
                     (FxRequest **)i - 2);
          if ( (int)result < 0 )
            break;
          *(i - 1) = (FxUsbPipeContinuousReader *)(*(i - 2))->m_Readers[0].Dpc.DeferredContext;
          KeInitializeEvent((PRKEVENT)i + 3, NotificationEvent, 1u);
          *((_BYTE *)i + 96) = 1;
          result = FxUsbPipeContinuousReader::FormatRepeater(this, (FxUsbPipeRepeatReader *)(i - 2));
          if ( (int)result < 0 )
            break;
          if ( ++v16 >= this->m_NumReaders )
            return 0LL;
        }
      }
      else
      {
        return 0LL;
      }
    }
    else
    {
      WPP_IFR_SF_d(m_Globals, 2u, 0xDu, 0xAu, WPP_FxUsbPipeKm_cpp_Traceguids, v14);
      return v15;
    }
  }
  return result;
}
