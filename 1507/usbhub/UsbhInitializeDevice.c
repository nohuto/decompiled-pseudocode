/*
 * XREFs of UsbhInitializeDevice @ 0x1C0026B6C
 * Callers:
 *     UsbhReset2Complete @ 0x1C0016FE0 (UsbhReset2Complete.c)
 * Callees:
 *     UsbhUnlinkPdoDeviceHandle @ 0x1C0003A04 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhWait @ 0x1C000946C (UsbhWait.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     __security_check_cookie @ 0x1C0029D80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0029E70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C002A1C0 (memset.c)
 *     UsbhClearTt @ 0x1C0042A44 (UsbhClearTt.c)
 *     UsbhException @ 0x1C004ECD0 (UsbhException.c)
 *     UsbhEtwLogHubEventWithExtraData @ 0x1C00574A0 (UsbhEtwLogHubEventWithExtraData.c)
 */

__int64 __fastcall UsbhInitializeDevice(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  _DWORD *v17; // rdi
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  _DWORD *v21; // rax
  unsigned int v22; // edi
  int v24; // [rsp+48h] [rbp-A0h]
  int v25[24]; // [rsp+50h] [rbp-98h] BYREF

  v7 = PdoExt(a2, a2, a3, a4);
  FdoExt(a1, v8, v9, v10);
  Log(a1, 4, 1768843588, *((_QWORD *)v7 + 144), *(unsigned __int16 *)(a3 + 4));
  memset(v25, 0, 0x58uLL);
  if ( (FdoExt(a1, v11, v12, v13)[640] & 0x8000000) != 0 )
    UsbhWait(a1, 50);
  v25[0] = 1;
  v17 = PdoExt(a2, v14, v15, v16);
  v21 = FdoExt(a1, v18, v19, v20);
  if ( *((_QWORD *)v21 + 533) )
    v22 = (*((__int64 (__fastcall **)(_QWORD, _QWORD, int *))v21 + 533))(
            *((_QWORD *)v21 + 529),
            *((_QWORD *)v17 + 144),
            v25);
  else
    v22 = -1073741822;
  if ( (v22 & 0xC0000000) == 0xC0000000 )
  {
    if ( v25[1] == 1 )
    {
      v7[697] = 1073807361;
    }
    else if ( v25[1] == 3 )
    {
      v7[697] = v25[2] != 0 ? 1073807365 : 1073807360;
    }
    UsbhUnlinkPdoDeviceHandle(a1, a2, 2017740856, 0);
    LOBYTE(v24) = 0;
    UsbhException(a1, *(unsigned __int16 *)(a3 + 4), 31, (int)v25, 88, v22, v25[5], usbfile_bus_c, 6439, v24);
    UsbhEtwLogHubEventWithExtraData(
      a1,
      &USBHUB_ETW_EVENT_HUB_ENUM_INITIALIZE_DEVICE_FAILURE,
      *(unsigned __int16 *)(a3 + 4),
      v25,
      88);
    UsbhClearTt(a1);
  }
  v7[353] &= ~0x40000000u;
  return v22;
}
