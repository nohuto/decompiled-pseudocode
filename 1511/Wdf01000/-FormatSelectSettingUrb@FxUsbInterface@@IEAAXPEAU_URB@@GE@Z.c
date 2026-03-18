/*
 * XREFs of ?FormatSelectSettingUrb@FxUsbInterface@@IEAAXPEAU_URB@@GE@Z @ 0x1C007E85C
 * Callers:
 *     ?SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z @ 0x1C007C218 (-SelectConfig@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_URB@@W4_FX_URB_TYPE@@PEAE@Z.c)
 *     ?SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_DESCRIPTOR@@@Z @ 0x1C007EE28 (-SelectSettingByDescriptor@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_USB_INTERFACE_D.c)
 *     ?SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z @ 0x1C007EF5C (-SelectSettingByIndex@FxUsbInterface@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@E@Z.c)
 * Callees:
 *     memset @ 0x1C0036C40 (memset.c)
 */

void __fastcall FxUsbInterface::FormatSelectSettingUrb(
        FxUsbInterface *this,
        _URB *Urb,
        unsigned __int16 NumEndpoints,
        unsigned __int8 SettingNumber)
{
  unsigned int v4; // ebp
  unsigned __int16 v8; // di
  unsigned __int8 v9; // dl
  __int64 v10; // rcx

  v4 = NumEndpoints;
  v8 = 24 * (NumEndpoints - 1) + 80;
  memset(Urb, 0, v8);
  Urb->UrbHeader.Length = v8;
  Urb->UrbHeader.Function = 1;
  Urb->UrbSelectInterface.Interface.AlternateSetting = SettingNumber;
  v9 = 0;
  Urb->UrbSelectInterface.Interface.InterfaceNumber = this->m_InterfaceNumber;
  Urb->UrbSelectInterface.Interface.Length = v8 - 32;
  Urb->UrbSelectInterface.ConfigurationHandle = this->m_UsbDevice->m_ConfigHandle;
  Urb->UrbSelectInterface.Interface.NumberOfPipes = v4;
  for ( Urb->UrbSelectInterface.Interface.Length = 24 * (v4 + 1);
        v9 < (unsigned __int16)v4;
        Urb->UrbSelectInterface.Interface.Pipes[v10].MaximumTransferSize = -1 )
  {
    v10 = v9++;
    Urb->UrbSelectInterface.Interface.Pipes[v10].PipeFlags = 0;
  }
}
