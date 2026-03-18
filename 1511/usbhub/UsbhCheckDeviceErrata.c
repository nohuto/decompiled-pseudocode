/*
 * XREFs of UsbhCheckDeviceErrata @ 0x1C00068BC
 * Callers:
 *     UsbhGetUsbDeviceFlags @ 0x1C0008908 (UsbhGetUsbDeviceFlags.c)
 * Callees:
 *     UsbhGetDeviceFlags @ 0x1C0008734 (UsbhGetDeviceFlags.c)
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 *     UsbhApplyDeviceFix @ 0x1C00521E0 (UsbhApplyDeviceFix.c)
 */

char *__fastcall UsbhCheckDeviceErrata(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  int v5; // ebx
  char *result; // rax
  __int64 v7; // r8
  int v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+90h] [rbp+18h] BYREF

  v4 = PdoExt(a2);
  if ( ((*(_WORD *)(v4 + 1394) - 256) & 0xFFEF) == 0 )
    *(_DWORD *)(v4 + 1424) &= ~0x200u;
  UsbhGetDeviceFlags(v4 + 1392, &v9, 0LL);
  v5 = v9;
  result = usbfile_dq_c;
  if ( (v9 & 1) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *(unsigned __int16 *)(v4 + 1420), 120, v4 + 1392, 18, 0, 1, usbfile_dq_c, 2449, v8);
    v7 = 1LL;
  }
  else
  {
    if ( (v9 & 2) == 0 )
      goto LABEL_5;
    LOBYTE(v8) = 0;
    UsbhException(a1, *(unsigned __int16 *)(v4 + 1420), 120, v4 + 1392, 18, 0, 2, usbfile_dq_c, 2456, v8);
    v7 = 2LL;
  }
  UsbhApplyDeviceFix(a1, a2, v7);
  result = usbfile_dq_c;
LABEL_5:
  if ( (v5 & 0x40) != 0 )
    *(_DWORD *)(v4 + 1424) |= 0x800u;
  if ( (v5 & 4) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *(unsigned __int16 *)(v4 + 1420), 120, v4 + 1392, 18, 0, 3, usbfile_dq_c, 2474, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 3LL);
  }
  if ( (v5 & 8) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *(unsigned __int16 *)(v4 + 1420), 120, v4 + 1392, 18, 0, 10, usbfile_dq_c, 2485, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 10LL);
  }
  if ( (v5 & 0x10) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *(unsigned __int16 *)(v4 + 1420), 120, v4 + 1392, 18, 0, 5, usbfile_dq_c, 2496, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 5LL);
  }
  if ( (v5 & 0x20) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *(unsigned __int16 *)(v4 + 1420), 120, v4 + 1392, 18, 0, 7, usbfile_dq_c, 2507, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 7LL);
  }
  if ( (*(_QWORD *)&v5 & 0x200000LL) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *(unsigned __int16 *)(v4 + 1420), 120, v4 + 1392, 18, 0, 11, usbfile_dq_c, 2517, v8);
    result = (char *)UsbhApplyDeviceFix(a1, a2, 11LL);
  }
  if ( (v5 & 0x8000000) != 0 )
  {
    LOBYTE(v8) = 0;
    UsbhException(a1, *(unsigned __int16 *)(v4 + 1420), 120, v4 + 1392, 18, 0, 12, usbfile_dq_c, 2527, v8);
    return (char *)UsbhApplyDeviceFix(a1, a2, 12LL);
  }
  return result;
}
