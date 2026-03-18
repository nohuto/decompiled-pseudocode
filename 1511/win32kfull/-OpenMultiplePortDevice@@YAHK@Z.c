/*
 * XREFs of ?OpenMultiplePortDevice@@YAHK@Z @ 0x1C010AC90
 * Callers:
 *     xxxRegisterForDeviceClassNotifications @ 0x1C010AA30 (xxxRegisterForDeviceClassNotifications.c)
 * Callees:
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     CreateDeviceInfo @ 0x1C01DEF4C (CreateDeviceInfo.c)
 */

_BOOL8 __fastcall OpenMultiplePortDevice(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v3; // r8
  PWSTR Buffer; // rdi
  unsigned __int64 v5; // rbx
  __int64 v6; // r8
  int v7; // [rsp+48h] [rbp-C0h] BYREF
  struct _UNICODE_STRING Destination; // [rsp+50h] [rbp-B8h] BYREF
  WCHAR SourceString[264]; // [rsp+68h] [rbp-A0h] BYREF

  v1 = a1;
  memset(SourceString, 0, 520);
  v7 = 0;
  if ( LODWORD(aDeviceTemplate[71 * a1 + 12]) || a1 > 2 || gProtocolType || (aDeviceTemplate[71 * a1 + 11] & 1) != 0 )
    return 0LL;
  FastGetProfileDwordW(0LL, LODWORD(aDeviceTemplate[71 * a1 + 2]), L"ConnectMultiplePorts", 0LL, &v7, 0);
  if ( !v7 && gpWin32kDriverObject )
  {
    *(_DWORD *)&Destination.Length = 34078720;
    Destination.Buffer = SourceString;
    RtlAppendUnicodeToString(&Destination, (PCWSTR)aDeviceTemplate[71 * v1 + 5]);
    if ( (unsigned __int16)(Destination.Length - 1) <= 0x207u )
    {
      Buffer = Destination.Buffer;
      v5 = (unsigned __int64)Destination.Length >> 1;
      Destination.Buffer[v5 - 1] = 48;
      do
      {
        LOBYTE(v3) = 1;
        CreateDeviceInfo((unsigned int)v1, &Destination, v3);
        ++Buffer[v5 - 1];
      }
      while ( Buffer[v5 - 1] <= 0x39u );
    }
    return 0LL;
  }
  FastGetProfileStringW(0LL, 9LL, aDeviceTemplate[71 * v1 + 3], aDeviceTemplate[71 * v1 + 4], SourceString, 260, 0);
  RtlInitUnicodeString(&Destination, SourceString);
  LOBYTE(v6) = 1;
  return CreateDeviceInfo((unsigned int)v1, &Destination, v6) != 0;
}
