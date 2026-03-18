/*
 * XREFs of DrvGetDeviceFromName @ 0x1C0053CD0
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     DrvEnumDisplaySettings @ 0x1C0022200 (DrvEnumDisplaySettings.c)
 *     DrvEnumDisplayDevices @ 0x1C0031990 (DrvEnumDisplayDevices.c)
 *     DrvGetHDEV @ 0x1C0053C00 (DrvGetHDEV.c)
 *     ?CheckAndNotifyDualView@@YA?AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z @ 0x1C00627D8 (-CheckAndNotifyDualView@@YA-AW4_DUALVIEW_STATE@@PEAU_UNICODE_STRING@@PEAU_MDEV@@@Z.c)
 *     ?DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0062A9C (-DrvCreateMDEV@@YAPEAU_MDEV@@PEAU_UNICODE_STRING@@PEAU_devicemodeW@@PEAXKPEAU1@KHH1PEAU_D3DKMT_G.c)
 *     ?DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVICE@@@Z @ 0x1C0068B64 (-DrvGetDeviceFromNameAndValidateDevice@@YAJPEAU_UNICODE_STRING@@W4_MODE@@PEAPEAUtagGRAPHICS_DEVI.c)
 *     NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName @ 0x1C00B6890 (NtGdiDdDDIQueryRemoteVidPnSourceFromGdiDisplayName.c)
 *     DrvSetPruneFlag @ 0x1C00BC528 (DrvSetPruneFlag.c)
 *     DrvSetVideoParameters @ 0x1C00BC654 (DrvSetVideoParameters.c)
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
      if ( v4 > W32UserProbeAddress || v4 < String1.Buffer )
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
