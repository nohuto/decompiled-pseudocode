/*
 * XREFs of SepTokenInitialization @ 0x1407BD844
 * Callers:
 *     SepInitializationPhase0 @ 0x1407BC43C (SepInitializationPhase0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x14015F474 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObCreateObjectType @ 0x140595F4C (ObCreateObjectType.c)
 */

char SepTokenInitialization()
{
  char v0; // bl
  __int64 v1; // r8
  __int64 v2; // r9
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  RtlInitUnicodeString(&DestinationString, L"Token");
  memset(v5, 0, 0x78uLL);
  BYTE2(v5[0]) |= 0xEu;
  LOWORD(v5[0]) = 120;
  v0 = 1;
  HIDWORD(v5[0]) = 512;
  LODWORD(v5[1]) = 256;
  HIDWORD(v5[4]) = 1;
  HIDWORD(v5[3]) = 983551;
  *(_OWORD *)((char *)&v5[1] + 4) = SepTokenMapping;
  v5[9] = SepTokenDeleteMethod;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v5, 0LL, (__int64)&SeTokenObjectType) < 0
    || (int)SeRegisterObjectTypeMandatoryPolicy((__int64)SeTokenObjectType, 1, v1, v2) < 0 )
  {
    return 0;
  }
  return v0;
}
