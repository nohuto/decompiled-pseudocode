/*
 * XREFs of ?GetConfigDescriptor@FxUsbDevice@@QEAAJPEAXPEAG@Z @ 0x1C007BB20
 * Callers:
 *     imp_WdfUsbTargetDeviceRetrieveConfigDescriptor @ 0x1C0078B80 (imp_WdfUsbTargetDeviceRetrieveConfigDescriptor.c)
 * Callees:
 *     memmove @ 0x1C0036900 (memmove.c)
 */

__int64 __fastcall FxUsbDevice::GetConfigDescriptor(
        FxUsbDevice *this,
        void *ConfigDescriptor,
        unsigned __int16 *ConfigDescriptorLength)
{
  unsigned int v3; // ebx
  __int64 result; // rax
  _USB_CONFIGURATION_DESCRIPTOR *m_ConfigDescriptor; // rdx
  unsigned __int16 wTotalLength; // ax

  v3 = 0;
  if ( ConfigDescriptor )
  {
    m_ConfigDescriptor = this->m_ConfigDescriptor;
    wTotalLength = *ConfigDescriptorLength;
    if ( *ConfigDescriptorLength >= m_ConfigDescriptor->wTotalLength )
      wTotalLength = m_ConfigDescriptor->wTotalLength;
    else
      v3 = -1073741789;
    memmove(ConfigDescriptor, m_ConfigDescriptor, wTotalLength);
    result = v3;
    *ConfigDescriptorLength = this->m_ConfigDescriptor->wTotalLength;
  }
  else
  {
    result = 3221225507LL;
    *ConfigDescriptorLength = this->m_ConfigDescriptor->wTotalLength;
  }
  return result;
}
