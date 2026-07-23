/*
 * XREFs of CmpWalkPath @ 0x140560738
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x140609204 (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407B06B0 (CmSelectQualifiedInstallLanguage.c)
 *     CmGetSystemControlValues @ 0x1407B0AC0 (CmGetSystemControlValues.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407CD9B4 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     CmpGetNextName @ 0x140140558 (CmpGetNextName.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404F54C0 (CmpFindSubKeyByNameWithStatus.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  __int64 v5; // rax
  _DWORD v7[2]; // [rsp+20h] [rbp-30h] BYREF
  __m128i v8; // [rsp+28h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-18h] BYREF
  bool v10; // [rsp+78h] [rbp+28h] BYREF
  unsigned int v11; // [rsp+88h] [rbp+38h] BYREF

  v7[0] = -1;
  v7[1] = 0;
  RtlInitUnicodeString(&DestinationString, a3);
  while ( 1 )
  {
    CmpGetNextName((__int16 *)&DestinationString, (__int64)&v8, &v10);
    if ( !v8.m128i_i16[0] )
      break;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, _DWORD *))(a1 + 8))(a1, a2, v7);
    if ( v5 )
    {
      CmpFindSubKeyByNameWithStatus(a1, v5, &v8, &v11);
      a2 = v11;
      (*(void (__fastcall **)(__int64, _DWORD *))(a1 + 16))(a1, v7);
      if ( a2 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return a2;
}
