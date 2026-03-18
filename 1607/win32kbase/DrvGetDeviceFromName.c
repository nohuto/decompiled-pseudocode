/*
 * XREFs of DrvGetDeviceFromName @ 0x1C0063110
 * Callers:
 *     DrvEnumDisplayDevices @ 0x1C00399E0 (DrvEnumDisplayDevices.c)
 *     DrvChangeDisplaySettings @ 0x1C0062064 (DrvChangeDisplaySettings.c)
 *     DrvEnumDisplaySettings @ 0x1C0062AF0 (DrvEnumDisplaySettings.c)
 *     DrvGetHDEV @ 0x1C0063040 (DrvGetHDEV.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C0066F10 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C00671D4 (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C00851E0 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00C4390 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     DrvSetPruneFlag @ 0x1C00C9A64 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C00C9B90 (DrvSetVideoParameters.c)
 * Callees:
 *     <none>
 */

wchar_t *__fastcall DrvGetDeviceFromName(UNICODE_STRING *a1, int a2)
{
  wchar_t *i; // rbx
  USHORT Length; // ax
  WCHAR *v4; // rdx
  UNICODE_STRING String1; // [rsp+28h] [rbp-30h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+38h] [rbp-20h] BYREF

  String1.Length = 0;
  *(_QWORD *)&String1.MaximumLength = 0LL;
  *(_DWORD *)((char *)&String1.Buffer + 2) = 0;
  HIWORD(String1.Buffer) = 0;
  if ( a2 == 1 )
  {
    Length = 0;
    String1.Length = 0;
    if ( a1 )
    {
      String1 = *a1;
      Length = String1.Length;
    }
    if ( Length )
    {
      v4 = (PWSTR)((char *)String1.Buffer + Length);
      if ( (unsigned __int64)v4 > W32UserProbeAddress || v4 < String1.Buffer )
        *(_BYTE *)W32UserProbeAddress = 0;
    }
  }
  else
  {
    String1 = *a1;
  }
  for ( i = gpGraphicsDeviceList; i; i = (wchar_t *)*((_QWORD *)i + 16) )
  {
    RtlInitUnicodeString(&DestinationString, i + 32);
    if ( RtlEqualUnicodeString(&String1, &DestinationString, 1u) )
      break;
  }
  return i;
}
