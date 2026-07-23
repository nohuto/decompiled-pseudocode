/*
 * XREFs of SepSetTokenAllApplicationPackagesPolicy @ 0x14021A57C
 * Callers:
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall SepSetTokenAllApplicationPackagesPolicy(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  __int64 v4; // rcx
  _DWORD v6[2]; // [rsp+20h] [rbp-40h] BYREF
  UNICODE_STRING *v7; // [rsp+28h] [rbp-38h]
  UNICODE_STRING DestinationString[3]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+70h] [rbp+10h] BYREF
  int v10; // [rsp+78h] [rbp+18h] BYREF

  v2 = a2;
  memset(DestinationString, 0, 0x28uLL);
  v9 = v2;
  LOWORD(v7) = 0;
  RtlInitUnicodeString(DestinationString, L"WIN://NOALLAPPPKG");
  *(_QWORD *)&DestinationString[1].Length = 2LL;
  LODWORD(DestinationString[1].Buffer) = 1;
  *(_QWORD *)&DestinationString[2].Length = &v9;
  v6[0] = 1;
  v6[1] = 1;
  v4 = *(_QWORD *)(a1 + 776);
  v7 = DestinationString;
  v10 = 4;
  return AuthzBasepSetSecurityAttributesToken(v4, &v10, (__int64)v6);
}
