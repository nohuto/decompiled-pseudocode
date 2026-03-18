/*
 * XREFs of xxxSetAutoRotationState @ 0x1C01D0D30
 * Callers:
 *     ?RotationLockCallback@@YAX_K_J@Z @ 0x1C01D06B0 (-RotationLockCallback@@YAX_K_J@Z.c)
 *     NtUserSetAutoRotation @ 0x1C021F840 (NtUserSetAutoRotation.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     CacheRotationInfo @ 0x1C00FFEA0 (CacheRotationInfo.c)
 *     AutoRotationUpdateRegistry @ 0x1C012DBC0 (AutoRotationUpdateRegistry.c)
 *     ?UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z @ 0x1C012DC04 (-UpdateAutoRotationRegistrySetting@@YAJKPEBGK0@Z.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
    dword_1C0323038 = v1;
    if ( (unsigned int)dword_1C031D7B0 > 5 && TlgKeywordOn(v2, 0x400000000000uLL) )
    {
      v11 = 0;
      v7 = 0;
      v14 = 0;
      v9 = &dword_1C0323038;
      v12 = &v7;
      v10 = 4;
      v13 = 4;
      TlgWrite((TraceLoggingHProvider)4, &unk_1C02EA3D9, v4, v5, 4u, &pData);
      v1 = dword_1C0323038;
    }
    if ( !v1 )
    {
      CacheRotationInfo();
      AutoRotationUpdateRegistry();
    }
  }
  return (unsigned int)updated;
}
