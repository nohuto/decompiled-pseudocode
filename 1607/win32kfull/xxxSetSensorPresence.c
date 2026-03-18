/*
 * XREFs of xxxSetSensorPresence @ 0x1C01CA528
 * Callers:
 *     NtUserSetSensorPresence @ 0x1C021A620 (NtUserSetSensorPresence.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C00EC074 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

char __fastcall xxxSetSensorPresence(int a1)
{
  int updated; // eax
  const GUID *v2; // r8
  const GUID *v3; // r9
  int v5; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v5 = a1;
  updated = UpdateAutoRotationRegistrySetting(
              a1,
              L"SensorPresent",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    LOBYTE(updated) = v5;
    dword_1C032946C = v5;
    if ( !dword_1C032948C )
      dword_1C032948C = v5 != 0;
    if ( dword_1C0320840 > 5u )
    {
      LOBYTE(updated) = TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000001uLL);
      if ( (_BYTE)updated )
      {
        v9 = 0;
        v7 = &v5;
        v8 = 4;
        LOBYTE(updated) = TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE316, v2, v3, 3u, &pData);
      }
    }
  }
  return updated;
}
