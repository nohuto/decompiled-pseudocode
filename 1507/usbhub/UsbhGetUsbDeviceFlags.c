/*
 * XREFs of UsbhGetUsbDeviceFlags @ 0x1C0005674
 * Callers:
 *     UsbhGetDeviceInformation @ 0x1C000544C (UsbhGetDeviceInformation.c)
 * Callees:
 *     UsbhCheck4GlobalErrata @ 0x1C0005720 (UsbhCheck4GlobalErrata.c)
 *     UsbhCheckDeviceErrata @ 0x1C0005778 (UsbhCheckDeviceErrata.c)
 *     UsbhGetRegUsbDeviceFlags @ 0x1C00059C0 (UsbhGetRegUsbDeviceFlags.c)
 *     UsbhGetRegUsbClassFlags @ 0x1C0006C78 (UsbhGetRegUsbClassFlags.c)
 *     UsbhValidateDeviceDescriptor @ 0x1C0006F6C (UsbhValidateDeviceDescriptor.c)
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 */

__int64 __fastcall UsbhGetUsbDeviceFlags(__int64 a1, __int64 a2)
{
  __int64 v4; // rbx
  int v5; // r8d
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 RegUsbDeviceFlags; // rax
  char v10; // [rsp+50h] [rbp+18h] BYREF

  v10 = 0;
  v4 = PdoExt(a2);
  *(_DWORD *)(v4 + 1424) = 768;
  if ( (unsigned __int8)UsbhValidateDeviceDescriptor(a1, (int)v4 + 1392, v5, 0, (__int64)&v10) )
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
      *(_DWORD *)(v4 + 2788) = 1073807366;
      return 3221225626LL;
    }
  }
  else
  {
    *(_DWORD *)(v4 + 2788) = 1073807365;
    return 3221225485LL;
  }
}
