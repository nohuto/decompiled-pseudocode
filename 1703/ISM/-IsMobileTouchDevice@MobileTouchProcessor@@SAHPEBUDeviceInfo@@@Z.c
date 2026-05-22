/*
 * XREFs of ?IsMobileTouchDevice@MobileTouchProcessor@@SAHPEBUDeviceInfo@@@Z @ 0x1800579A0
 * Callers:
 *     ?ShouldAttachDevice@MobileTouchProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180057A20 (-ShouldAttachDevice@MobileTouchProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MobileTouchProcessor::IsMobileTouchDevice(const struct DeviceInfo *a1)
{
  LSTATUS v2; // eax
  signed int v3; // ecx
  HKEY hKey; // [rsp+40h] [rbp+8h] BYREF

  hKey = 0LL;
  if ( (*((_BYTE *)a1 + 4) & 0x88) == 0 || *((char *)a1 + 4) < 0 && !*((_BYTE *)a1 + 24) )
    return 0LL;
  v2 = RegOpenKeyExW(HKEY_LOCAL_MACHINE, L"System\\Touch\\Buttons", 0, 0x20019u, &hKey);
  v3 = (unsigned __int16)v2 | 0x80070000;
  if ( v2 <= 0 )
    v3 = v2;
  if ( v3 < 0 )
    return 0LL;
  RegCloseKey(hKey);
  return 1LL;
}
