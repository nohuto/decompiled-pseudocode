/*
 * XREFs of CmpWalkPath @ 0x140523E0C
 * Callers:
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 *     CmSelectQualifiedInstallLanguage @ 0x14075424C (CmSelectQualifiedInstallLanguage.c)
 *     CmGetSystemControlValues @ 0x140754FCC (CmGetSystemControlValues.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x1403FE290 (CmpFindSubKeyByNameWithStatus.c)
 *     CmpGetNextName @ 0x1403FEEC0 (CmpGetNextName.c)
 */

__int64 __fastcall CmpWalkPath(__int64 a1, unsigned int a2, const WCHAR *a3)
{
  __int64 v5; // rax
  unsigned int v7; // [rsp+20h] [rbp-38h] BYREF
  UNICODE_STRING v8; // [rsp+28h] [rbp-30h] BYREF
  UNICODE_STRING v9[2]; // [rsp+38h] [rbp-20h] BYREF
  bool v10; // [rsp+68h] [rbp+10h] BYREF
  int v11; // [rsp+78h] [rbp+20h] BYREF

  v11 = -1;
  RtlInitUnicodeString(v9, a3);
  while ( 1 )
  {
    CmpGetNextName((__int16 *)v9, (__int64)&v8, &v10);
    if ( !v8.Length )
      break;
    v5 = (*(__int64 (__fastcall **)(__int64, _QWORD, int *))(a1 + 8))(a1, a2, &v11);
    if ( v5 )
    {
      CmpFindSubKeyByNameWithStatus(a1, v5, &v8, &v7);
      a2 = v7;
      (*(void (__fastcall **)(__int64, int *))(a1 + 16))(a1, &v11);
      if ( a2 != -1 )
        continue;
    }
    return 0xFFFFFFFFLL;
  }
  return a2;
}
