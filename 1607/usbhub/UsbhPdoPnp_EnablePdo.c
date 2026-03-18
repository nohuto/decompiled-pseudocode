/*
 * XREFs of UsbhPdoPnp_EnablePdo @ 0x1C001B6A8
 * Callers:
 *     UsbhPdoPnp_QueryId @ 0x1C0017FF0 (UsbhPdoPnp_QueryId.c)
 *     UsbhPdoPnp_StartDevice @ 0x1C001A2F0 (UsbhPdoPnp_StartDevice.c)
 * Callees:
 *     UsbhSyncResetDeviceInternal @ 0x1C0003774 (UsbhSyncResetDeviceInternal.c)
 *     UsbhSshSetPortsBusyState @ 0x1C00197A0 (UsbhSshSetPortsBusyState.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     UsbhSetPdo_AllowIo @ 0x1C001A68C (UsbhSetPdo_AllowIo.c)
 *     Usb_Disconnected @ 0x1C0027D7C (Usb_Disconnected.c)
 *     UsbhTrapFatal_Dbg @ 0x1C0029420 (UsbhTrapFatal_Dbg.c)
 *     UsbhException @ 0x1C004F3A0 (UsbhException.c)
 */

__int64 __fastcall UsbhPdoPnp_EnablePdo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  struct _DEVICE_OBJECT *v6; // rbp
  unsigned int v7; // esi
  int v8; // ecx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  _DWORD *v13; // rax
  unsigned int v14; // eax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rcx
  int v18; // [rsp+48h] [rbp-10h]

  if ( !a1 )
    UsbhTrapFatal_Dbg(0LL, 0LL, a3, a4);
  v5 = *(_QWORD *)(a1 + 64);
  if ( !v5 )
    UsbhTrapFatal_Dbg(a1, 0LL, a3, a4);
  if ( *(_DWORD *)v5 != 1329877064 )
    UsbhTrapFatal_Dbg(a1, *(_QWORD *)(a1 + 64), a3, a4);
  v6 = *(struct _DEVICE_OBJECT **)(v5 + 1176);
  v7 = 0;
  v8 = PdoExt(a1, a2, a3, a4)[280];
  if ( (*(_DWORD *)(v5 + 1412) & 0x8000000) == 0 && v8 == 100 || (*(_DWORD *)(v5 + 1132) & 4) != 0 )
    return 0LL;
  if ( ((v8 - 100) & 0xFFFFFFFC) == 0 && v8 != 101 )
  {
    UsbhSshSetPortsBusyState(v6, *(_WORD *)(v5 + 1420), 2LL, 0LL);
    v13 = PdoExt(a1, v10, v11, v12);
    v14 = UsbhSyncResetDeviceInternal(v6, (__int64)(v13 + 236), a1);
    v7 = v14;
    v17 = v14 & 0xC0000000;
    if ( (_DWORD)v17 != -1073741824 || (unsigned __int8)Usb_Disconnected(v14) )
    {
      *(_DWORD *)(v5 + 1412) &= ~0x8000000u;
      UsbhSetPdo_AllowIo(v17, a1, v15, v16);
    }
    else
    {
      LOBYTE(v18) = 0;
      UsbhException((int)v6, *(unsigned __int16 *)(v5 + 1420), 86, 0, 0, v7, -1, usbfile_pdo_c, 2072, v18);
    }
  }
  return v7;
}
