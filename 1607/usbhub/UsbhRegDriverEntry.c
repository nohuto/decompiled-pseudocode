/*
 * XREFs of UsbhRegDriverEntry @ 0x1C0004DE0
 * Callers:
 *     <none>
 * Callees:
 *     UsbhRegCreateUsbflagsKey @ 0x1C00054F4 (UsbhRegCreateUsbflagsKey.c)
 *     UsbhRegQueryGlobalKey @ 0x1C000B3E0 (UsbhRegQueryGlobalKey.c)
 *     memset @ 0x1C0029900 (memset.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhRegDriverEntry(__int64 a1, __int64 a2, int a3)
{
  int v4; // r8d
  unsigned __int16 v5; // di
  WCHAR *PoolWithTag; // rax
  const WCHAR *v7; // rsi
  int v8; // r8d
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-28h] BYREF
  __int64 v11; // [rsp+68h] [rbp+10h] BYREF

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      a3,
      86,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      *(_QWORD *)(a2 + 8));
  v11 = 0LL;
  KseQueryDeviceFlags(L"USBHUB:GLOBAL_FLAGS", L"USBHUB", &v11);
  if ( (v11 & 1) != 0 )
    dword_1C006768C = 1;
  UsbhRegQueryGlobalKey(1, (unsigned int)L"usb", v4, (unsigned int)&GlobalUsbhubLegacyValues, 112);
  v5 = *(_WORD *)a2 + 12;
  PoolWithTag = (WCHAR *)ExAllocatePoolWithTag(PagedPool, v5, 0x42554855u);
  v7 = PoolWithTag;
  if ( PoolWithTag )
  {
    memset(PoolWithTag, 0, v5);
    RtlInitUnicodeString(&DestinationString, v7);
    DestinationString.MaximumLength = v5;
    RtlCopyUnicodeString(&DestinationString, (PCUNICODE_STRING)a2);
    if ( RtlAppendUnicodeToString(&DestinationString, L"\\hubg") >= 0 )
      UsbhRegQueryGlobalKey(0, DestinationString.Buffer, v8, (unsigned int)&GlobalUsbhubValues, 1120);
    RtlFreeUnicodeString(&DestinationString);
  }
  if ( (UsbhRegCreateUsbflagsKey() & 0xC0000000) == 0xC0000000 )
    *(_DWORD *)&WPP_MAIN_CB.DeviceQueue.Busy = 2;
  return 0LL;
}
