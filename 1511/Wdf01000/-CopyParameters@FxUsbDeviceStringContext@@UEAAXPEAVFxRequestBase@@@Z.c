/*
 * XREFs of ?CopyParameters@FxUsbDeviceStringContext@@UEAAXPEAVFxRequestBase@@@Z @ 0x1C007AF60
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x1C0036900 (memmove.c)
 */

void __fastcall FxUsbDeviceStringContext::CopyParameters(FxUsbDeviceStringContext *this, FxRequestBase *Request)
{
  unsigned __int8 bLength; // r8
  unsigned __int8 v5; // r8
  unsigned __int64 v6; // rdi
  IFxMemory *v7; // rsi
  __int64 v8; // rax
  _USB_STRING_DESCRIPTOR *v9; // rdi
  size_t v10; // rbx
  void *v11; // rax
  size_t v12; // r8
  wchar_t *bString; // rdx
  IFxMemory *m_RequestMemory; // rcx
  _USB_STRING_DESCRIPTOR *m_StringDescriptor; // rbx

  bLength = this->m_StringDescriptor->bLength;
  if ( (bLength & 1) != 0 || bLength < 2u )
  {
    this->m_CompletionParams.IoStatus.Status = -1073741668;
  }
  else if ( Request->m_Irp.m_Irp->IoStatus.Status >= 0 )
  {
    v5 = bLength - 2;
    this->m_UsbParameters.Parameters.DeviceString.RequiredSize = v5;
    v6 = v5;
    if ( v5 <= this->m_RequestMemory->GetBufferSize(this->m_RequestMemory) )
    {
      m_RequestMemory = this->m_RequestMemory;
      m_StringDescriptor = this->m_StringDescriptor;
      this->m_CompletionParams.IoStatus.Information = v6;
      v11 = (void *)m_RequestMemory->GetBuffer(m_RequestMemory);
      v12 = v6;
      bString = m_StringDescriptor->bString;
    }
    else
    {
      v7 = this->m_RequestMemory;
      this->m_CompletionParams.IoStatus.Status = -2147483643;
      v8 = v7->GetBufferSize(v7);
      v9 = this->m_StringDescriptor;
      v10 = v8;
      v11 = (void *)v7->GetBuffer(v7);
      v12 = v10;
      bString = v9->bString;
    }
    memmove(v11, bString, v12);
  }
  FxUsbRequestContext::CopyParameters(this, Request);
}
