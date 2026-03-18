/*
 * XREFs of UsbhGetUsbDeviceFlags @ 0x1C0007DC0
 * Callers:
 *     UsbhGetDeviceInformation @ 0x1C0007814 (UsbhGetDeviceInformation.c)
 * Callees:
 *     UsbhValidateDeviceDescriptor @ 0x1C0007C14 (UsbhValidateDeviceDescriptor.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0007D50 (UsbhGetRegUsbClassFlags.c)
 *     UsbhCheck4GlobalErrata @ 0x1C0007E6C (UsbhCheck4GlobalErrata.c)
 *     UsbhCheckDeviceErrata @ 0x1C0007EC4 (UsbhCheckDeviceErrata.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C00081D0 (UsbhGetRegUsbDeviceFlags.c)
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 */

__int64 __fastcall UsbhGetUsbDeviceFlags(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // r8
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 RegUsbDeviceFlags; // rax
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0;
  v4 = PdoExt(a2);
  *(_DWORD *)(v4 + 1424) = 768;
  if ( UsbhValidateDeviceDescriptor(a1, v4 + 1392, v5, 0LL, &v10) )
  {
    if ( v10 )
      *(_DWORD *)(v4 + 1412) |= 0x40u;
    UsbhGetRegUsbClassFlags(v6, a2);
    RegUsbDeviceFlags = UsbhGetRegUsbDeviceFlags(v7, a2);
    *(_QWORD *)(v4 + 1136) = RegUsbDeviceFlags;
    if ( RegUsbDeviceFlags )
    {
      UsbhCheckDeviceErrata(a1);
      UsbhCheck4GlobalErrata(a1, a2);
      return 0LL;
    }
    else
    {
      *(_DWORD *)(v4 + 2796) = 1073807366;
      return 3221225626LL;
    }
  }
  else
  {
    *(_DWORD *)(v4 + 2796) = 1073807365;
    return 3221225485LL;
  }
}
