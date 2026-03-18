/*
 * XREFs of UsbhSetHubRemoteWake @ 0x1C00182A4
 * Callers:
 *     UsbhSshSuspendHub @ 0x1C0018F70 (UsbhSshSuspendHub.c)
 *     UsbhDisarmHubWakeOnConnect @ 0x1C0022768 (UsbhDisarmHubWakeOnConnect.c)
 *     UsbhArmHubWakeOnConnect @ 0x1C0045E78 (UsbhArmHubWakeOnConnect.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     UsbhSyncSendCommand @ 0x1C0015A50 (UsbhSyncSendCommand.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhSetHubRemoteWake(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rcx
  int v6; // r10d
  __int64 v7; // rdi
  int v9; // r10d
  int v10; // [rsp+20h] [rbp-48h]
  int v11; // [rsp+48h] [rbp-20h]
  __int16 v12; // [rsp+70h] [rbp+8h] BYREF
  int v13; // [rsp+80h] [rbp+18h] BYREF
  char v14; // [rsp+88h] [rbp+20h] BYREF
  char v15; // [rsp+89h] [rbp+21h]
  int v16; // [rsp+8Ah] [rbp+22h]
  __int16 v17; // [rsp+8Eh] [rbp+26h]

  v13 = 0;
  v12 = 0;
  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v5 = *(_DWORD **)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *v5 != 541218120 )
    UsbhTrapFatal_Dbg(a1, v5, a3, a4);
  v14 = 0;
  v15 = a2 != 0 ? 3 : 1;
  Log(a1, 8, 1400332651, (unsigned int)v5[344], 0LL);
  v16 = v6;
  v17 = 0;
  v7 = (int)UsbhSyncSendCommand(a1, (__int64)&v14, 0LL, &v12, v10, &v13);
  Log(a1, 8, 1937206065, v7, v13);
  if ( (v7 & 0xC0000000) == 0xC0000000 && !(unsigned __int8)Usb_Disconnected((unsigned int)v7) )
  {
    LOBYTE(v11) = 0;
    UsbhException(a1, 0, 123, 0, 0, v7, v9, usbfile_hub_c, 3734, v11);
  }
  Log(a1, 8, 1937206066, v7, 0LL);
  return (unsigned int)v7;
}
