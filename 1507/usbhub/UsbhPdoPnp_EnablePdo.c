/*
 * XREFs of UsbhPdoPnp_EnablePdo @ 0x1C000BDAC
 * Callers:
 *     UsbhPdoPnp_QueryId @ 0x1C000B9B0 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001B890 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003574 (UsbhSyncResetDeviceInternal.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     UsbhSshSetPortsBusyState @ 0x1C0018360 (UsbhSshSetPortsBusyState.c)
 *     UsbhSetPdo_AllowIo @ 0x1C00271A0 (UsbhSetPdo_AllowIo.c)
 *     Usb_Disconnected @ 0x1C00286EC (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C003CB70 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoPnp_EnablePdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  struct _DEVICE_OBJECT *v6; // rbp
  unsigned int v7; // esi
  int v8; // ecx
  __int64 v10; // rax
  unsigned int v11; // eax
  __int64 v12; // rcx
  int v13; // [rsp+48h] [rbp-10h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 1176);
  v7 = 0;
  v8 = *(_DWORD *)(PdoExt(a1) + 1120);
  if ( (*(_DWORD *)(v5 + 1412) & 0x8000000) == 0 && v8 == 100 || (*(_DWORD *)(v5 + 1132) & 4) != 0 )
    return 0LL;
  if ( ((v8 - 100) & 0xFFFFFFFC) == 0 && v8 != 101 )
  {
    UsbhSshSetPortsBusyState(v6, *(unsigned __int16 *)(v5 + 1420), 2LL);
    v10 = PdoExt(a1);
    v11 = UsbhSyncResetDeviceInternal(v6, v10 + 944, a1);
    v7 = v11;
    v12 = v11 & 0xC0000000;
    if ( (_DWORD)v12 != -1073741824 || (unsigned __int8)Usb_Disconnected(v11) )
    {
      *(_DWORD *)(v5 + 1412) &= ~0x8000000u;
      UsbhSetPdo_AllowIo(v12, a1);
    }
    else
    {
      LOBYTE(v13) = 0;
      UsbhException((int)v6, *(unsigned __int16 *)(v5 + 1420), 86, 0, 0, v7, -1, usbfile_pdo_c, 2073, v13);
    }
  }
  return v7;
}
