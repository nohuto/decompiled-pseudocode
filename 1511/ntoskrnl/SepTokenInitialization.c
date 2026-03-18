/*
 * XREFs of SepTokenInitialization @ 0x14075B748
 * Callers:
 *     SepInitializationPhase0 @ 0x14075B9D8 (SepInitializationPhase0.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     SeRegisterObjectTypeMandatoryPolicy @ 0x1401341C4 (SeRegisterObjectTypeMandatoryPolicy.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCreateObjectType @ 0x140525B3C (ObCreateObjectType.c)
 */

char SepTokenInitialization()
{
  char v0; // bl
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v3[16]; // [rsp+30h] [rbp-29h] BYREF

  RtlInitUnicodeString(&DestinationString, L"Token");
  memset(v3, 0, 0x78uLL);
  BYTE2(v3[0]) |= 0xEu;
  LOWORD(v3[0]) = 120;
  v0 = 1;
  HIDWORD(v3[0]) = 512;
  LODWORD(v3[1]) = 256;
  HIDWORD(v3[4]) = 1;
  HIDWORD(v3[3]) = 983551;
  *(_OWORD *)((char *)&v3[1] + 4) = SepTokenMapping;
  v3[9] = SepTokenDeleteMethod;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&SeTokenObjectType) < 0
    || (int)SeRegisterObjectTypeMandatoryPolicy((__int64)SeTokenObjectType, 1) < 0 )
  {
    return 0;
  }
  return v0;
}
