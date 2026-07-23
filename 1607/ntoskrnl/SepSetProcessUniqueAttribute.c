/*
 * XREFs of SepSetProcessUniqueAttribute @ 0x14046D098
 * Callers:
 *     SeSubProcessToken @ 0x14046D918 (SeSubProcessToken.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     AuthzBasepSetSecurityAttributesToken @ 0x14007C2E4 (AuthzBasepSetSecurityAttributesToken.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x14046D184 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 *     SepAddLuidToIndexEntry @ 0x14046D1AC (SepAddLuidToIndexEntry.c)
 */

__int64 __fastcall SepSetProcessUniqueAttribute(__int64 a1)
{
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int128 v5; // [rsp+20h] [rbp-50h] BYREF
  _BYTE v6[8]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v7; // [rsp+38h] [rbp-38h] BYREF
  UNICODE_STRING DestinationString[3]; // [rsp+40h] [rbp-30h] BYREF
  int v9; // [rsp+90h] [rbp+20h] BYREF
  __int64 v10; // [rsp+98h] [rbp+28h] BYREF

  memset(DestinationString, 0, 0x28uLL);
  v5 = 0uLL;
  v10 = 0LL;
  v7 = ExpLuidIncrement + _InterlockedExchangeAdd64(&ExpLuid, ExpLuidIncrement);
  result = SepAddLuidToIndexEntry(&v7, v6, &v10);
  if ( (int)result >= 0 )
  {
    LOBYTE(v3) = 1;
    SepRefDerefLuidToIndexEntryIfNecessary(a1, v3);
    *(_QWORD *)(a1 + 1136) = v10;
    RtlInitUnicodeString(DestinationString, L"TSA://ProcUnique");
    v4 = *(_QWORD *)(a1 + 776);
    LODWORD(DestinationString[1].Buffer) = 2;
    *(_DWORD *)&DestinationString[1].Length = 2;
    *(_QWORD *)&DestinationString[2].Length = v6;
    *(_DWORD *)(&DestinationString[1].MaximumLength + 1) = 65;
    *((_QWORD *)&v5 + 1) = DestinationString;
    v9 = 4;
    *(_QWORD *)&v5 = 0x100000001LL;
    return AuthzBasepSetSecurityAttributesToken(v4, &v9, (__int64)&v5);
  }
  return result;
}
