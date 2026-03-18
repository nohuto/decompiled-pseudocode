/*
 * XREFs of xxxSetAutoRotationState @ 0x1C01CA438
 * Callers:
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01C9B00 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01C9B60 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxRestoreSlateAutorotationPreferences @ 0x1C01CA400 (xxxRestoreSlateAutorotationPreferences.c)
 *     NtUserSetAutoRotation @ 0x1C02192B0 (NtUserSetAutoRotation.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     CacheRotationInfo @ 0x1C00EBFA0 (CacheRotationInfo.c)
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C00EC074 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetAutoRotationState(int a1)
{
  int v1; // ebx
  int updated; // edi
  const GUID *v3; // r8
  const GUID *v4; // r9
  int v6; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v8; // [rsp+60h] [rbp-38h]
  int v9; // [rsp+68h] [rbp-30h]
  int v10; // [rsp+6Ch] [rbp-2Ch]
  int *v11; // [rsp+70h] [rbp-28h]
  int v12; // [rsp+78h] [rbp-20h]
  int v13; // [rsp+7Ch] [rbp-1Ch]

  v1 = a1;
  updated = UpdateAutoRotationRegistrySetting(
              a1,
              L"Enable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_1C0329468 = v1;
    if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x400000000001uLL) )
    {
      v10 = 0;
      v6 = 0;
      v13 = 0;
      v8 = &dword_1C0329468;
      v11 = &v6;
      v9 = 4;
      v12 = 4;
      TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE18D, v3, v4, 4u, &pData);
      v1 = dword_1C0329468;
    }
    if ( !v1 )
      CacheRotationInfo();
  }
  return (unsigned int)updated;
}
