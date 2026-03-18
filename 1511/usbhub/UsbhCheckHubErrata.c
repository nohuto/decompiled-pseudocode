/*
 * XREFs of UsbhCheckHubErrata @ 0x1C00075B8
 * Callers:
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 * Callees:
 *     UsbhGetDeviceFlags @ 0x1C0008734 (UsbhGetDeviceFlags.c)
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 *     UsbhApplyHubFix @ 0x1C0052290 (UsbhApplyHubFix.c)
 */

__int64 __fastcall UsbhCheckHubErrata(__int64 a1)
{
  int v1; // esi
  int v4; // [rsp+48h] [rbp-10h]
  __int64 v5; // [rsp+60h] [rbp+8h] BYREF

  v1 = a1 + 2540;
  UsbhGetDeviceFlags(a1 + 2540, &v5, *(_BYTE *)(a1 + 2560) & 1);
  if ( (v5 & 0x80u) != 0LL )
  {
    LOBYTE(v4) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v1, 18, 0, 6, usbfile_dq_c, 2559, v4);
    UsbhApplyHubFix(a1, 6LL);
  }
  if ( (v5 & 0x100) != 0 )
  {
    LOBYTE(v4) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v1, 18, 0, 8, usbfile_dq_c, 2567, v4);
    UsbhApplyHubFix(a1, 8LL);
  }
  if ( (v5 & 0x200) != 0 )
  {
    LOBYTE(v4) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v1, 18, 0, 9, usbfile_dq_c, 2575, v4);
    UsbhApplyHubFix(a1, 9LL);
  }
  if ( (v5 & 0x400000000LL) != 0 )
  {
    LOBYTE(v4) = 0;
    UsbhException(*(_QWORD *)(a1 + 1200), 0, 133, v1, 18, 0, 13, usbfile_dq_c, 2583, v4);
    UsbhApplyHubFix(a1, 13LL);
  }
  return UsbhGetRegUsbHubFlags(a1);
}
