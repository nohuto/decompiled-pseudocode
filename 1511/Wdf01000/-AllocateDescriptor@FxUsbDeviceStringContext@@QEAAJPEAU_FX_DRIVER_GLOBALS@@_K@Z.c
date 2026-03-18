/*
 * XREFs of ?AllocateDescriptor@FxUsbDeviceStringContext@@QEAAJPEAU_FX_DRIVER_GLOBALS@@_K@Z @ 0x1C007AC90
 * Callers:
 *     ?FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z @ 0x1C007D068 (-FormatStringRequest@FxUsbDevice@@QEAAJPEAVFxRequestBase@@PEAUFxRequestBuffer@@EG@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C0009700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C0036C40 (memset.c)
 */

__int64 __fastcall FxUsbDeviceStringContext::AllocateDescriptor(
        FxUsbDeviceStringContext *this,
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int64 BufferSize)
{
  size_t v5; // rsi
  unsigned int v6; // edi
  _USB_STRING_DESCRIPTOR *v7; // rbp
  _USB_STRING_DESCRIPTOR *m_StringDescriptor; // rcx
  void *Caller; // [rsp+38h] [rbp+0h]

  if ( BufferSize <= this->m_StringDescriptorLength )
    return 0LL;
  v5 = BufferSize + 2;
  v6 = 0;
  v7 = (_USB_STRING_DESCRIPTOR *)FxPoolAllocator(
                                   FxDriverGlobals,
                                   &FxDriverGlobals->FxPoolFrameworks,
                                   ExDefaultNonPagedPoolType,
                                   BufferSize + 2,
                                   FxDriverGlobals->Tag,
                                   Caller);
  if ( !v7 )
    return 3221225626LL;
  m_StringDescriptor = this->m_StringDescriptor;
  if ( m_StringDescriptor )
    FxPoolFree(m_StringDescriptor);
  memset(v7, 0, v5);
  this->m_StringDescriptor = v7;
  if ( v5 > 0xFFFFFFFF )
  {
    this->m_StringDescriptorLength = -1;
    return (unsigned int)-1073741675;
  }
  else
  {
    this->m_StringDescriptorLength = v5;
  }
  return v6;
}
