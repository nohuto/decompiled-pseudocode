/*
 * XREFs of OpenOrCreateKeyWithFlags @ 0x180102D44
 * Callers:
 *     OpenGlobalizationUserSettingsKey_ForSingleUserModel @ 0x180102BB0 (OpenGlobalizationUserSettingsKey_ForSingleUserModel.c)
 * Callees:
 *     NtOpenKey @ 0x1800A6660 (NtOpenKey.c)
 *     ZwCreateKey @ 0x1800A67C0 (ZwCreateKey.c)
 */

__int64 __fastcall OpenOrCreateKeyWithFlags(__int64 a1, char a2, __int64 a3, __int64 a4, _DWORD *a5)
{
  __int64 result; // rax

  if ( !a3 || !a5 )
    return 3221225485LL;
  *a5 = 2;
  result = ZwOpenKey();
  if ( (int)result < 0 && (a2 & 2) != 0 )
    return ZwCreateKey();
  return result;
}
