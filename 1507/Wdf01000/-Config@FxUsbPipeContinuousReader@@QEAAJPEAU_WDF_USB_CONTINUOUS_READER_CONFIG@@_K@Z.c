/*
 * XREFs of ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C009301C
 * Callers:
 *     ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0091314 (-InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 * Callees:
 *     ?_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z @ 0x1C000CBC0 (-_Create@FxSystemWorkItem@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAXPEAPEAV1@@Z.c)
 *     WPP_IFR_SF_d @ 0x1C0017D70 (WPP_IFR_SF_d.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00265B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     memset @ 0x1C00333C0 (memset.c)
 *     ?_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTarget@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@PEAPEAV1@@Z @ 0x1C00754EC (-_Create@FxRequest@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_IRP@@PEAVFxIoTar.c)
 *     ??0FxNPagedLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1C0077C4C (--0FxNPagedLookasideList@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     ??0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z @ 0x1C0077C78 (--0FxNPagedLookasideListFromPool@@QEAA@PEAU_FX_DRIVER_GLOBALS@@K@Z.c)
 *     ?FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z @ 0x1C0090948 (-FormatRepeater@FxUsbPipeContinuousReader@@QEAAJPEAUFxUsbPipeRepeatReader@@@Z.c)
 */

__int64 __fastcall FxUsbPipeContinuousReader::Config(
        FxUsbPipeContinuousReader *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  FxNPagedLookasideList *v7; // rax
  FxLookasideList *v8; // rax
  FxNPagedLookasideListFromPool *v9; // rax
  FxLookasideList *v10; // r14
  __int64 result; // rax
  _WDF_OBJECT_ATTRIBUTES *BufferAttributes; // rax
  void *v13; // rax
  int v14; // eax
  unsigned int v15; // ebp
  int v16; // ebp
  FxUsbPipeContinuousReader **i; // r14
  _WDF_OBJECT_ATTRIBUTES attributes; // [rsp+40h] [rbp-58h] BYREF

  m_Globals = this->m_Pipe->m_Globals;
  if ( TotalBufferLength > 0xFFFF )
  {
    v9 = (FxNPagedLookasideListFromPool *)FxObjectHandleAlloc(
                                            m_Globals,
                                            ExDefaultNonPagedPoolType,
                                            0x1C0uLL,
                                            0,
                                            0LL,
                                            0,
                                            FxObjectTypeExternal);
    if ( v9 )
    {
      FxNPagedLookasideListFromPool::FxNPagedLookasideListFromPool(v9, m_Globals, m_Globals->Tag);
      goto LABEL_7;
    }
  }
  else
  {
    v7 = (FxNPagedLookasideList *)FxObjectHandleAlloc(
                                    m_Globals,
                                    ExDefaultNonPagedPoolType,
                                    0x140uLL,
                                    0,
                                    0LL,
                                    0,
                                    FxObjectTypeExternal);
    if ( v7 )
    {
      FxNPagedLookasideList::FxNPagedLookasideList(v7, m_Globals, m_Globals->Tag);
      goto LABEL_7;
    }
  }
  v8 = 0LL;
LABEL_7:
  this->m_Lookaside = v8;
  v10 = v8;
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
  if ( v10->m_ObjectSize )
    v13 = (void *)((unsigned __int64)v10 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v13 = 0LL;
  attributes.ParentObject = v13;
  result = ((__int64 (__fastcall *)(FxLookasideList *, unsigned __int64, _WDF_OBJECT_ATTRIBUTES *))v10->Initialize)(
             v10,
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
