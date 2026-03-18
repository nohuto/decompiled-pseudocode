/*
 * XREFs of ?FxUsbCreateConfigRequest@@YAPEAU_URB@@PEAU_FX_DRIVER_GLOBALS@@PEAU_USB_CONFIGURATION_DESCRIPTOR@@PEAU_USBD_INTERFACE_LIST_ENTRY@@K@Z @ 0x1C008E108
 * Callers:
 *     ?SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0090958 (-SelectConfigDescriptor@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT.c)
 *     ?SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0092CBC (-SelectConfigMulti@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONF.c)
 *     ?SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CONFIG_PARAMS@@@Z @ 0x1C0092F9C (-SelectConfigSingle@FxUsbDevice@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_USB_DEVICE_SELECT_CON.c)
 * Callees:
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z @ 0x1C000D700 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@W4_POOL_TYPE@@_KKPEAX@Z.c)
 *     memset @ 0x1C0040480 (memset.c)
 *     WPP_IFR_SF_qDd @ 0x1C0075C18 (WPP_IFR_SF_qDd.c)
 */

_URB *__fastcall FxUsbCreateConfigRequest(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        _USB_CONFIGURATION_DESCRIPTOR *ConfigDesc,
        _USBD_INTERFACE_LIST_ENTRY *InterfaceList,
        unsigned int DefaultMaxPacketSize)
{
  _USB_INTERFACE_DESCRIPTOR *InterfaceDescriptor; // rax
  _USBD_INTERFACE_LIST_ENTRY *_a2; // rdi
  unsigned __int16 v8; // si
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  unsigned __int16 *v12; // rdx
  _USB_INTERFACE_DESCRIPTOR *v13; // r9
  int v14; // r8d
  _DWORD *v15; // rcx
  void *retaddr; // [rsp+68h] [rbp+0h]

  InterfaceDescriptor = InterfaceList->InterfaceDescriptor;
  _a2 = InterfaceList;
  if ( InterfaceList->InterfaceDescriptor )
  {
    v8 = 40;
    while ( (unsigned __int16)(v8 + 24 * (InterfaceDescriptor->bNumEndpoints + 1)) >= v8 )
    {
      ++InterfaceList;
      v8 += 24 * (InterfaceDescriptor->bNumEndpoints + 1);
      InterfaceDescriptor = InterfaceList->InterfaceDescriptor;
      if ( !InterfaceList->InterfaceDescriptor )
        goto LABEL_8;
    }
    WPP_IFR_SF_qDd(
      FxDriverGlobals,
      (unsigned __int8)ConfigDesc,
      0xEu,
      0x10u,
      WPP_usbutil_cpp_Traceguids,
      _a2,
      InterfaceList->InterfaceDescriptor->bNumEndpoints,
      0xC0000095);
    return 0LL;
  }
  else
  {
    v8 = 88;
LABEL_8:
    v10 = FxPoolAllocator(
            FxDriverGlobals,
            &FxDriverGlobals->FxPoolFrameworks,
            ExDefaultNonPagedPoolType,
            v8,
            FxDriverGlobals->Tag,
            retaddr);
    v11 = v10;
    if ( v10 )
    {
      memset(v10, 0, v8);
      v12 = (unsigned __int16 *)(v11 + 5);
      while ( _a2->InterfaceDescriptor )
      {
        v13 = _a2->InterfaceDescriptor;
        v14 = 0;
        *((_BYTE *)v12 + 2) = _a2->InterfaceDescriptor->bInterfaceNumber;
        *((_BYTE *)v12 + 3) = v13->bAlternateSetting;
        *((_DWORD *)v12 + 4) = v13->bNumEndpoints;
        *v12 = 24 * (v13->bNumEndpoints + 1);
        if ( v13->bNumEndpoints )
        {
          v15 = v12 + 20;
          do
          {
            v15[1] = 0;
            ++v14;
            *v15 = DefaultMaxPacketSize;
            v15 += 6;
          }
          while ( v14 < v13->bNumEndpoints );
        }
        _a2->Interface = (_USBD_INTERFACE_INFORMATION *)v12;
        ++_a2;
        v12 = (unsigned __int16 *)((char *)v12 + *v12);
      }
      *(_WORD *)v11 = v8;
      *((_WORD *)v11 + 1) = 0;
      v11[3] = ConfigDesc;
    }
    return (_URB *)v11;
  }
}
