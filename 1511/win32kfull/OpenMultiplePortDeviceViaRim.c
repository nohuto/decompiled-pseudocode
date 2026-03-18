/*
 * XREFs of OpenMultiplePortDeviceViaRim @ 0x1C010AD2C
 * Callers:
 *     xxxDesktopThread @ 0x1C00CFAE0 (xxxDesktopThread.c)
 *     xxxRegisterForDeviceClassNotifications @ 0x1C010AA30 (xxxRegisterForDeviceClassNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

_BOOL8 __fastcall OpenMultiplePortDeviceViaRim(__int64 a1, unsigned int a2)
{
  __int64 v2; // rsi
  PWSTR Buffer; // rdi
  unsigned __int64 v5; // rbx
  int v7; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+48h] [rbp-B8h] BYREF
  _BYTE v9[8]; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR SourceString[264]; // [rsp+60h] [rbp-A0h] BYREF

  v2 = a2;
  memset(SourceString, 0, 520);
  v7 = 0;
  if ( !LODWORD(aDeviceTemplate[71 * a2 + 12]) || a2 > 2 || gProtocolType || (aDeviceTemplate[71 * a2 + 11] & 1) != 0 )
    return 0LL;
  FastGetProfileDwordW(0LL, LODWORD(aDeviceTemplate[71 * a2 + 2]), L"ConnectMultiplePorts", 0LL, &v7, 0);
  if ( !v7 && gpWin32kDriverObject )
  {
    *(_DWORD *)&Destination.Length = 34078720;
    Destination.Buffer = SourceString;
    RtlAppendUnicodeToString(&Destination, (PCWSTR)aDeviceTemplate[71 * v2 + 5]);
    Buffer = Destination.Buffer;
    v5 = (unsigned __int64)Destination.Length >> 1;
    Destination.Buffer[v5 - 1] = 48;
    do
    {
      RIMAddNonPnpDeviceOfType(a1, &Destination, (unsigned int)v2, 0LL, v9);
      ++Buffer[v5 - 1];
    }
    while ( Buffer[v5 - 1] <= 0x39u );
    return 0LL;
  }
  FastGetProfileStringW(0LL, 9LL, aDeviceTemplate[71 * v2 + 3], aDeviceTemplate[71 * v2 + 4], SourceString, 260, 0);
  RtlInitUnicodeString(&Destination, SourceString);
  return (int)RIMAddNonPnpDeviceOfType(a1, &Destination, (unsigned int)v2, 0LL, v9) >= 0;
}
