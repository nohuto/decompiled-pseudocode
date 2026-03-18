/*
 * XREFs of AuthzBasepInitializeSystemSecurityAttributes @ 0x140592908
 * Callers:
 *     SeRmInitPhase1 @ 0x1407BC118 (SeRmInitPhase1.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepAllocateSecurityAttributesList @ 0x14015EB3C (AuthzBasepAllocateSecurityAttributesList.c)
 */

__int64 __fastcall AuthzBasepInitializeSystemSecurityAttributes(__int64 a1, __int64 a2)
{
  _QWORD *SecurityAttributesList; // rbx
  char v3; // si
  int v4; // eax
  unsigned int v5; // edi
  _WORD v7[2]; // [rsp+20h] [rbp-40h] BYREF
  int v8; // [rsp+24h] [rbp-3Ch]
  int *v9; // [rsp+28h] [rbp-38h]
  int v10; // [rsp+30h] [rbp-30h] BYREF
  const wchar_t *v11; // [rsp+38h] [rbp-28h]
  __int64 v12; // [rsp+40h] [rbp-20h]
  __int64 v13; // [rsp+48h] [rbp-18h]
  __int64 *v14; // [rsp+50h] [rbp-10h]
  int v15; // [rsp+80h] [rbp+20h] BYREF
  int v16; // [rsp+84h] [rbp+24h]
  __int64 v17; // [rsp+88h] [rbp+28h] BYREF

  v16 = HIDWORD(a1);
  v10 = 3145774;
  v11 = L"WIN://ISMULTISESSIONSKU";
  v7[1] = 0;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 2;
  v9 = &v10;
  v8 = 1;
  v7[0] = 1;
  SecurityAttributesList = AuthzBasepAllocateSecurityAttributesList(a1, a2);
  if ( !SecurityAttributesList )
    return (unsigned int)-1073741670;
  if ( (MEMORY[0xFFFFF780000002F0] & 0x100) != 0 )
  {
    v3 = 1;
    v4 = 1;
  }
  else
  {
    v3 = 0;
    v4 = 0;
  }
  v17 = v4;
  LODWORD(v13) = 1;
  LOWORD(v12) = 6;
  v14 = &v17;
  v5 = AuthzBasepSetSecurityAttributesToken((__int64)SecurityAttributesList, &v15, (__int64)v7);
  if ( _InterlockedCompareExchange64(&WindowsSystemAttributes, (signed __int64)SecurityAttributesList, 0LL) )
  {
    v5 = -1073741823;
  }
  else
  {
    SecurityAttributesList = 0LL;
    if ( !&SepAllowAccessUponLogoff )
      return v5;
    SepAllowAccessUponLogoff = v3;
  }
  if ( SecurityAttributesList )
    AuthzBasepFreeSecurityAttributesList(SecurityAttributesList);
  return v5;
}
