/*
 * XREFs of ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C008F6E4
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C008CEA8 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C008FCEC (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C008FE1C (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 * Callees:
 *     memset @ 0x1C00333C0 (memset.c)
 */

void __fastcall FxUsbInterface::FormatSelectSettingUrb(
        FxUsbInterface *this,
        _URB *Urb,
        unsigned __int16 NumEndpoints,
        unsigned __int8 SettingNumber)
{
  unsigned int v4; // r15d
  __int16 v8; // bp
  unsigned __int16 v9; // bx
  unsigned __int8 v10; // dl
  unsigned __int8 m_InterfaceNumber; // al
  __int64 v12; // rcx

  v4 = NumEndpoints;
  v8 = 24 * NumEndpoints;
  v9 = 24 * NumEndpoints + 56;
  memset(Urb, 0, v9);
  Urb->UrbHeader.Length = v9;
  Urb->UrbSelectInterface.Interface.AlternateSetting = SettingNumber;
  Urb->UrbHeader.Function = 1;
  v10 = 0;
  m_InterfaceNumber = this->m_InterfaceNumber;
  Urb->UrbSelectInterface.Interface.Length = v9 - 32;
  Urb->UrbSelectInterface.Interface.InterfaceNumber = m_InterfaceNumber;
  Urb->UrbSelectInterface.ConfigurationHandle = this->m_UsbDevice->m_ConfigHandle;
  Urb->UrbSelectInterface.Interface.Length = v8 + 24;
  for ( Urb->UrbSelectInterface.Interface.NumberOfPipes = v4;
        v10 < (unsigned __int16)v4;
        Urb->UrbSelectInterface.Interface.Pipes[v12].MaximumTransferSize = -1 )
  {
    v12 = v10++;
    Urb->UrbSelectInterface.Interface.Pipes[v12].PipeFlags = 0;
  }
}
