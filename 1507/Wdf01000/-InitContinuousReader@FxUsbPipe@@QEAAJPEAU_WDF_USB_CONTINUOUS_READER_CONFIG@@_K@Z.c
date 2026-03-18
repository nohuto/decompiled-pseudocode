/*
 * XREFs of ?InitContinuousReader@FxUsbPipe@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C0091314
 * Callers:
 *     imp_WdfUsbTargetPipeConfigContinuousReader @ 0x1C0089D20 (imp_WdfUsbTargetPipeConfigContinuousReader.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C00017C0 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ??0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z @ 0x1C0090178 (--0FxUsbPipeContinuousReader@@QEAA@PEAVFxUsbPipe@@E@Z.c)
 *     ??_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z @ 0x1C009050C (--_GFxUsbPipeContinuousReader@@QEAAPEAXI@Z.c)
 *     ?Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z @ 0x1C009301C (-Config@FxUsbPipeContinuousReader@@QEAAJPEAU_WDF_USB_CONTINUOUS_READER_CONFIG@@_K@Z.c)
 */

__int64 __fastcall FxUsbPipe::InitContinuousReader(
        FxUsbPipe *this,
        _WDF_USB_CONTINUOUS_READER_CONFIG *Config,
        unsigned __int64 TotalBufferLength)
{
  const void *_a1; // rbx
  unsigned __int8 NumPendingReads; // al
  unsigned __int8 v9; // di
  FxUsbPipeContinuousReader *v10; // rax
  FxUsbPipeContinuousReader *v11; // rax
  FxUsbPipeContinuousReader *v12; // rdi
  int v13; // r14d
  _LIST_ENTRY *retaddr; // [rsp+48h] [rbp+0h]

  _a1 = 0LL;
  if ( this->m_Reader )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xEu, 0x1Cu, WPP_FxUsbPipe_cpp_Traceguids, _a1, -1073741436);
    return 3221225860LL;
  }
  else
  {
    NumPendingReads = Config->NumPendingReads;
    if ( NumPendingReads )
    {
      v9 = Config->NumPendingReads;
      if ( NumPendingReads > 0xAu )
        v9 = 10;
    }
    else
    {
      v9 = 2;
    }
    v10 = (FxUsbPipeContinuousReader *)FxPoolAllocator(
                                         this->m_Globals,
                                         (_LIST_ENTRY *)&this->m_Globals->FxPoolFrameworks,
                                         ExDefaultNonPagedPoolType,
                                         120LL * ((unsigned int)v9 - 1) + 216,
                                         this->m_Globals->Tag,
                                         retaddr);
    if ( v10 )
    {
      FxUsbPipeContinuousReader::FxUsbPipeContinuousReader(v10, this, v9);
      v12 = v11;
    }
    else
    {
      v12 = 0LL;
    }
    if ( v12 )
    {
      v13 = FxUsbPipeContinuousReader::Config(v12, Config, TotalBufferLength);
      if ( v13 >= 0 )
      {
        v12->m_ReadCompleteCallback = Config->EvtUsbTargetPipeReadComplete;
        v12->m_ReadCompleteContext = Config->EvtUsbTargetPipeReadCompleteContext;
        v12->m_ReadersFailedCallback = Config->EvtUsbTargetPipeReadersFailed;
        if ( _InterlockedCompareExchange64((volatile signed __int64 *)&this->m_Reader, (signed __int64)v12, 0LL) )
          FxUsbPipeContinuousReader::`scalar deleting destructor'(v12);
        return 0LL;
      }
      else
      {
        FxUsbPipeContinuousReader::`scalar deleting destructor'(v12);
        return (unsigned int)v13;
      }
    }
    else
    {
      return 3221225626LL;
    }
  }
}
