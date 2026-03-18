/*
 * XREFs of ?GetSettingDescriptor@FxUsbInterface@@QEAAPEAU_USB_INTERFACE_DESCRIPTOR@@E@Z @ 0x1C008F94C
 * Callers:
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EA70 (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C008EDA0 (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 *     ?GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z @ 0x1C008F8CC (-GetEndpointInformation@FxUsbInterface@@QEAAXEEPEAU_WDF_USB_PIPE_INFORMATION@@@Z.c)
 * Callees:
 *     <none>
 */

_USB_INTERFACE_DESCRIPTOR *__fastcall FxUsbInterface::GetSettingDescriptor(
        FxUsbInterface *this,
        unsigned __int8 Setting)
{
  unsigned __int8 m_NumSettings; // r10
  unsigned __int8 v3; // r8
  FxUsbInterfaceSetting *m_Settings; // r9

  m_NumSettings = this->m_NumSettings;
  v3 = 0;
  if ( !m_NumSettings )
    return 0LL;
  m_Settings = this->m_Settings;
  while ( m_Settings[v3].InterfaceDescriptor->bAlternateSetting != Setting )
  {
    if ( ++v3 >= m_NumSettings )
      return 0LL;
  }
  return m_Settings[v3].InterfaceDescriptor;
}
