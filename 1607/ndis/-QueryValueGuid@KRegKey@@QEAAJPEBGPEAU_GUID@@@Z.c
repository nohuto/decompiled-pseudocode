/*
 * XREFs of ?QueryValueGuid@KRegKey@@QEAAJPEBGPEAU_GUID@@@Z @ 0x1C00A7E2C
 * Callers:
 *     ndisIfReadNetworkGuidFromKey @ 0x1C0017E8C (ndisIfReadNetworkGuidFromKey.c)
 * Callees:
 *     ??$QueryValueBlob@V_lambda_5658d1e45bdcd14f12a9cd7c7449a826_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING@@V_lambda_5658d1e45bdcd14f12a9cd7c7449a826_@@@Z @ 0x1C00A7B54 (--$QueryValueBlob@V_lambda_5658d1e45bdcd14f12a9cd7c7449a826_@@@KRegKey@@QEAAJPEBU_UNICODE_STRING.c)
 */

__int64 __fastcall KRegKey::QueryValueGuid(KRegKey *this, wchar_t *a2, struct _GUID *a3)
{
  __int64 v4; // rax
  wchar_t *v5; // r8
  _UNICODE_STRING v7; // [rsp+20h] [rbp-18h] BYREF
  struct _GUID *v8; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)&v7.Length = 0;
  v7.Buffer = 0LL;
  if ( !a2 )
    goto LABEL_7;
  v4 = 0x7FFFLL;
  v5 = a2;
  do
  {
    if ( !*v5 )
      break;
    ++v5;
    --v4;
  }
  while ( v4 );
  if ( v4 )
  {
    v7.Buffer = a2;
    v7.Length = 2 * (0x7FFF - v4);
    v7.MaximumLength = v7.Length + 2;
LABEL_7:
    v8 = a3;
    return KRegKey::QueryValueBlob<_lambda_5658d1e45bdcd14f12a9cd7c7449a826_>((HANDLE *)&this->_p, &v7, (_OWORD **)&v8);
  }
  return 3221225485LL;
}
