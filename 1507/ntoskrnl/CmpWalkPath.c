/*
 * XREFs of CmpWalkPath @ 0x140591164
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x1407BB6E8 (CmSelectQualifiedInstallLanguage.c)
 *     CmGetSystemControlValues @ 0x1407BBAF0 (CmGetSystemControlValues.c)
 *     CmpInitializeSystemPoliciesFeatureOverrides @ 0x1407F8760 (CmpInitializeSystemPoliciesFeatureOverrides.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1404CA940 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpGetNextName @ 0x14051FE50 (CmpGetNextName.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  __int64 v5; // rax
  unsigned int v7; // [rsp+20h] [rbp-38h] BYREF
  unsigned __int16 v8[8]; // [rsp+28h] [rbp-30h] BYREF
  UNICODE_STRING v9[2]; // [rsp+38h] [rbp-20h] BYREF
  bool v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = -1;
  RtlInitUnicodeString(v9, a3);
  while ( 1 )
  {
    CmpGetNextName((__int16 *)v9, (__int64)v8, &v10);
    if ( !v8[0] )
      break;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a2, &v11);
    if ( v5 )
    {
      CmpFindSubKeyByNameWithStatus(a1, v5, v8, &v7);
      a2 = v7;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
      if ( a2 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return a2;
}
