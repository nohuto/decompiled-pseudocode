/*
 * XREFs of Etw_DeviceUpdate @ 0x1C0034058
 * Callers:
 *     UsbDevice_UcxEvtHubInfo @ 0x1C0032840 (UsbDevice_UcxEvtHubInfo.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C0032EEC (UsbDevice_UpdateUsbDevice.c)
 * Callees:
 *     Template_pppqqQ6qqqqn @ 0x1C00347A0 (Template_pppqqQ6qqqqn.c)
 */

__int64 __fastcall Etw_DeviceUpdate(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = LODWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc);
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    return Template_pppqqQ6qqqqn(
             *(unsigned __int8 *)(a2 + 135),
             (unsigned int)&USBXHCI_ETW_EVENT_DEVICE_UPDATE,
             0,
             *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
             *(_QWORD *)(a2 + 24),
             *(_QWORD *)a2,
             *(_DWORD *)(a2 + 20),
             *(_DWORD *)(a2 + 36),
             a2 + 44,
             *(_BYTE *)(a2 + 135),
             *(_BYTE *)(a2 + 136) != 0,
             *(_DWORD *)(a2 + 140),
             *(_DWORD *)(a2 + 144));
  return result;
}
