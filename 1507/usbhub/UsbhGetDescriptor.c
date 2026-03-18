/*
 * XREFs of UsbhGetDescriptor @ 0x1C00206F4
 * Callers:
 *     UsbhGetHubConfigurationDescriptor @ 0x1C00204E0 (UsbhGetHubConfigurationDescriptor.c)
 *     UsbhGetHubClassDescriptor @ 0x1C00205F8 (UsbhGetHubClassDescriptor.c)
 * Callees:
 *     UsbhSyncSendCommand @ 0x1C0014BD0 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhGetDescriptor(__int64 a1, unsigned __int16 *a2, __int64 a3, __int64 a4, int a5, char a6)
{
  int v6; // ebp
  int v8; // ebx
  _DWORD *v9; // rdx
  bool v10; // cf
  __int16 v11; // ax
  unsigned int v12; // edi
  int v14; // [rsp+20h] [rbp-48h]
  int v15; // [rsp+48h] [rbp-20h]
  char v16; // [rsp+70h] [rbp+8h] BYREF
  __int16 v17; // [rsp+71h] [rbp+9h]
  char v18; // [rsp+73h] [rbp+Bh]
  __int16 v19; // [rsp+74h] [rbp+Ch]
  __int16 v20; // [rsp+76h] [rbp+Eh]

  v6 = a3;
  a5 = 0;
  v8 = a1;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v9 = *(_DWORD **)(a1 + 64);
  if ( !v9 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v9 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v9, a3, a4);
  v10 = a6 != 0;
  a6 = -a6;
  v17 = 6;
  v16 = v10 ? -96 : 0x80;
  v11 = *a2;
  v18 = a4;
  v19 = 0;
  v20 = v11;
  v12 = UsbhSyncSendCommand(a1, (__int64)&v16, a3, a2, v14, &a5);
  if ( (v12 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected(v12) )
  {
    LOBYTE(v15) = 0;
    UsbhException(v8, 0, 16, v6, *a2, v12, a5, usbfile_hub_c, 3802, v15);
  }
  return v12;
}
