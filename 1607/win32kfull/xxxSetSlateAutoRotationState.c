/*
 * XREFs of xxxSetSlateAutoRotationState @ 0x1C01CA5F0
 * Callers:
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01C9B00 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     NtUserSetAutoRotation @ 0x1C02192B0 (NtUserSetAutoRotation.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C00EC074 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetSlateAutoRotationState(int a1)
{
  int updated; // edi
  const GUID *v3; // r8
  const GUID *v4; // r9
  EVENT_DATA_DESCRIPTOR pData; // [rsp+30h] [rbp-48h] BYREF
  int *v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  int v9; // [rsp+5Ch] [rbp-1Ch]

  updated = UpdateAutoRotationRegistrySetting(
              a1,
              L"SlateEnable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_1C0329498 = a1;
    if ( dword_1C0320840 > 5u )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000001uLL) )
      {
        v9 = 0;
        v7 = &dword_1C0329498;
        v8 = 4;
        TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE1D9, v3, v4, 3u, &pData);
      }
    }
  }
  return (unsigned int)updated;
}
