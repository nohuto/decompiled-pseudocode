/*
 * XREFs of SepAddTokenOriginClaim @ 0x140692CFC
 * Callers:
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 */

__int64 __fastcall SepAddTokenOriginClaim(__int64 a1, int a2, __int64 a3)
{
  __int64 v4; // rcx
  _DWORD v6[2]; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING *p_DestinationString; // [rsp+28h] [rbp-48h]
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-38h]
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-30h] BYREF
  int v11; // [rsp+50h] [rbp-20h]
  int v12; // [rsp+54h] [rbp-1Ch]
  int v13; // [rsp+58h] [rbp-18h]
  __int64 *v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+88h] [rbp+18h] BYREF

  v8 = a1;
  v9 = a2;
  p_DestinationString = &DestinationString;
  v6[0] = 1;
  v6[1] = 1;
  RtlInitUnicodeString(&DestinationString, L"SMARTLOCKER://SMARTSCREENORIGINCLAIM");
  v4 = *(_QWORD *)(a3 + 776);
  v14 = &v8;
  v11 = 16;
  v13 = 1;
  v12 = 65;
  v15 = 4;
  return AuthzBasepSetSecurityAttributesToken(v4, &v15, (__int64)v6);
}
