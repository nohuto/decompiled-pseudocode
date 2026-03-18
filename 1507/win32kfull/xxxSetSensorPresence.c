/*
 * XREFs of xxxSetSensorPresence @ 0x1C01D0E18
 * Callers:
 *     NtUserSetSensorPresence @ 0x1C0220950 (NtUserSetSensorPresence.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C012DC04 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

char __fastcall xxxSetSensorPresence(int a1)
{
  int updated; // eax
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v7; // [rsp+30h] [rbp-48h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+38h] [rbp-40h] BYREF
  int *v9; // [rsp+58h] [rbp-20h]
  int v10; // [rsp+60h] [rbp-18h]
  int v11; // [rsp+64h] [rbp-14h]

  v7 = a1;
  updated = UpdateAutoRotationRegistrySetting(
              a1,
              L"SensorPresent",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    LOBYTE(updated) = v7;
    dword_1C032303C = v7;
    if ( !dword_1C032305C )
      dword_1C032305C = v7 != 0;
    if ( (unsigned int)dword_1C031D7B0 > 5 )
    {
      LOBYTE(updated) = TlgKeywordOn(v2, 0x400000000000uLL);
      if ( (_BYTE)updated )
      {
        v11 = 0;
        v9 = &v7;
        v10 = 4;
        LOBYTE(updated) = TlgWrite(v3, &unk_1C02EA425, v4, v5, 3u, &pData);
      }
    }
  }
  return updated;
}
