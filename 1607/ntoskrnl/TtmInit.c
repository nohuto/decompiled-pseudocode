/*
 * XREFs of TtmInit @ 0x1405801D4
 * Callers:
 *     PoInitSystem @ 0x140795530 (PoInitSystem.c)
 * Callees:
 *     ExInitializeResourceLite @ 0x14000E840 (ExInitializeResourceLite.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 *     TraceLoggingRegisterEx @ 0x140546ED4 (TraceLoggingRegisterEx.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 */

int TtmInit()
{
  int result; // eax
  __int64 v1; // rcx
  const wchar_t *v2; // rax
  int v3; // eax
  const wchar_t *v4; // rcx
  __int64 v5; // rax
  UNICODE_STRING UnicodeString; // [rsp+38h] [rbp-39h] BYREF
  __int128 v7[8]; // [rsp+48h] [rbp-29h] BYREF

  TraceLoggingRegisterEx(&stru_1407478B0, 0LL, 0LL);
  if ( TtmpEnabled == 1 )
  {
    memset(v7, 0, 0x78uLL);
    LOWORD(v7[0]) = 120;
    DWORD2(v7[0]) = 400;
    BYTE2(v7[0]) = BYTE2(v7[0]) & 0xF1 | 2;
    HIDWORD(v7[1]) = 2031619;
    *((_QWORD *)&v7[3] + 1) = TtmpOpenQueueHandle;
    v1 = 0x7FFFLL;
    DWORD1(v7[2]) = 512;
    *(_QWORD *)&v7[4] = TtmpCloseQueueHandle;
    *((_QWORD *)&v7[4] + 1) = TtmpDeleteQueue;
    v2 = L"TerminalEventQueue";
    *(__int128 *)((char *)v7 + 12) = TtmpQueueMapping;
    HIDWORD(v7[2]) = 176;
    *(_DWORD *)&UnicodeString.Length = 0;
    UnicodeString.Buffer = 0LL;
    do
    {
      if ( !*v2 )
        break;
      ++v2;
      --v1;
    }
    while ( v1 );
    if ( v1 )
    {
      UnicodeString.Buffer = L"TerminalEventQueue";
      UnicodeString.Length = 2 * (0x7FFF - v1);
      UnicodeString.MaximumLength = UnicodeString.Length + 2;
    }
    v3 = ObCreateObjectTypeEx(&UnicodeString, v7, 0LL, 128LL, &TtmpQueueObjectType);
    if ( v3 < 0 )
      KeBugCheckEx(0x19Bu, 2uLL, v3, 0LL, 0LL);
  }
  else
  {
    TtmpQueueObjectType = 0LL;
  }
  ExInitializeResourceLite(&TtmpSessionLock);
  PoRegisterPowerSettingCallback(
    0LL,
    &GUID_ACDC_POWER_SOURCE,
    TtmpDisplayBurstPowerSettingCallback,
    (PVOID)5,
    &TtmpAcDcPowerSettingRegistration);
  result = PoRegisterPowerSettingCallback(
             0LL,
             &GUID_BATTERY_COUNT,
             TtmpDisplayBurstPowerSettingCallback,
             (PVOID)0x10,
             &TtmpBatteryCountPowerSettingRegistration);
  TtmpSession = 0LL;
  if ( TtmpEnabled == 1 )
  {
    if ( !TtmpProximityEscapeMsec )
      TtmpProximityEscapeMsec = 3000;
    memset(v7, 0, 0x78uLL);
    LOWORD(v7[0]) = 120;
    DWORD2(v7[0]) = 400;
    *(_DWORD *)&UnicodeString.Length = 0;
    v4 = L"Terminal";
    BYTE2(v7[0]) = BYTE2(v7[0]) & 0xF1 | 6;
    *((_QWORD *)&v7[3] + 1) = TtmpOpenTerminalHandle;
    *(_QWORD *)&v7[4] = TtmpCloseTerminalHandle;
    *((_QWORD *)&v7[4] + 1) = TtmpDeleteTerminal;
    v5 = 0x7FFFLL;
    *(__int128 *)((char *)v7 + 12) = TtmpTerminalMapping;
    HIDWORD(v7[1]) = 2031619;
    DWORD1(v7[2]) = 512;
    HIDWORD(v7[2]) = 280;
    UnicodeString.Buffer = 0LL;
    do
    {
      if ( !*v4 )
        break;
      ++v4;
      --v5;
    }
    while ( v5 );
    if ( v5 )
    {
      UnicodeString.Buffer = L"Terminal";
      UnicodeString.Length = 2 * (0x7FFF - v5);
      UnicodeString.MaximumLength = UnicodeString.Length + 2;
    }
    result = ObCreateObjectTypeEx(&UnicodeString, v7, 0LL, 0LL, &TtmpTerminalObjectType);
    if ( result < 0 )
      KeBugCheckEx(0x19Bu, 1uLL, result, 0LL, 0LL);
  }
  else
  {
    TtmpTerminalObjectType = 0LL;
  }
  return result;
}
