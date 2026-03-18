/*
 * XREFs of SepSetProcessUniqueAttribute @ 0x14046A840
 * Callers:
 *     SeSubProcessToken @ 0x14046A560 (SeSubProcessToken.c)
 * Callees:
 *     AuthzBasepSetSecurityAttributesToken @ 0x14002BA68 (AuthzBasepSetSecurityAttributesToken.c)
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     memset @ 0x140195A80 (memset.c)
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 */

__int64 __fastcall SepSetProcessUniqueAttribute(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+20h] [rbp-50h] BYREF
  UNICODE_STRING *v5; // [rsp+28h] [rbp-48h]
  _BYTE v6[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString[3]; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+80h] [rbp+10h] BYREF

  memset(DestinationString, 0, 40);
  v4 = 0LL;
  v5 = 0LL;
  v7 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = SepAddLuidToIndexEntry(&v7, v6);
  if ( (int)result >= 0 )
  {
    RtlInitUnicodeString(DestinationString, L"TSA://ProcUnique");
    v3 = *(_QWORD *)(a1 + 776);
    LODWORD(DestinationString[1].Buffer) = 2;
    *(_QWORD *)&DestinationString[1].Length = 0x4100000002LL;
    *(_QWORD *)&DestinationString[2].Length = v6;
    v4 = 0x100000001LL;
    v5 = DestinationString;
    v9 = 4;
    return AuthzBasepSetSecurityAttributesToken(v3, &v9, (__int64)&v4);
  }
  return result;
}
