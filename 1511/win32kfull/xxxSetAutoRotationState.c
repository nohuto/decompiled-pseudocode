/*
 * XREFs of xxxSetAutoRotationState @ 0x1C01D295C
 * Callers:
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D2260 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D22C0 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxRestoreSlateAutorotationPreferences @ 0x1C01D2924 (xxxRestoreSlateAutorotationPreferences.c)
 *     NtUserSetAutoRotation @ 0x1C021F660 (NtUserSetAutoRotation.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     AutoRotationUpdateRegistry @ 0x1C009DFB0 (AutoRotationUpdateRegistry.c)
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C009DFF4 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 *     CacheRotationInfo @ 0x1C010CBD0 (CacheRotationInfo.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxSetAutoRotationState(int a1)
{
  int v1; // ebx
  const struct _TlgProvider_t *v2; // rcx
  int updated; // edi
  const GUID *v4; // r8
  const GUID *v5; // r9
  int v7; // [rsp+30h] [rbp-68h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-58h] BYREF
  int *v9; // [rsp+60h] [rbp-38h]
  int v10; // [rsp+68h] [rbp-30h]
  int v11; // [rsp+6Ch] [rbp-2Ch]
  int *v12; // [rsp+70h] [rbp-28h]
  int v13; // [rsp+78h] [rbp-20h]
  int v14; // [rsp+7Ch] [rbp-1Ch]

  v1 = a1;
  updated = UpdateAutoRotationRegistrySetting(
              a1,
              L"Enable",
              0,
              L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\AutoRotation");
  if ( updated >= 0 )
  {
    dword_1C0323D68 = v1;
    if ( (unsigned int)dword_1C031B280 > 5 && TlgKeywordOn(v2, 0x400000000000uLL) )
    {
      v11 = 0;
      v7 = 0;
      v14 = 0;
      v9 = &dword_1C0323D68;
      v12 = &v7;
      v10 = 4;
      v13 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C02E9371, v4, v5, 4u, &pData);
      v1 = dword_1C0323D68;
    }
    if ( !v1 )
    {
      CacheRotationInfo();
      AutoRotationUpdateRegistry();
    }
  }
  return (unsigned int)updated;
}
