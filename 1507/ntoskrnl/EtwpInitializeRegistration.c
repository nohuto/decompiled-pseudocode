/*
 * XREFs of EtwpInitializeRegistration @ 0x1407DF408
 * Callers:
 *     EtwpInitialize @ 0x1407C0848 (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KiInitializeMutant @ 0x1400756B8 (KiInitializeMutant.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ObCreateObjectType @ 0x140595F4C (ObCreateObjectType.c)
 */

__int64 EtwpInitializeRegistration()
{
  _QWORD *v0; // rcx
  __int64 v1; // rdx
  _QWORD *v2; // rax
  __int64 v3; // r8
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v6[16]; // [rsp+30h] [rbp-29h] BYREF

  KiInitializeMutant((__int64)&EtwpNotificationMutex, 0, 1);
  v0 = &EtwpGuidHashTable;
  v1 = 64LL;
  do
  {
    v0[6] = 0LL;
    v2 = v0;
    v3 = 3LL;
    do
    {
      v2[1] = v2;
      *v2 = v2;
      v2 += 2;
      --v3;
    }
    while ( v3 );
    v0 += 7;
    --v1;
  }
  while ( v1 );
  qword_140328888 = (__int64)&EtwpReplyListHead;
  EtwpReplyListHead = (__int64)&EtwpReplyListHead;
  memset(v6, 0, 0x78uLL);
  BYTE2(v6[0]) |= 0x18u;
  v6[7] = EtwpOpenRealTimeConnectionObject;
  LOWORD(v6[0]) = 120;
  v6[8] = EtwpCloseRegistrationObject;
  LODWORD(v6[1]) = 256;
  v6[9] = EtwpDeleteRegistrationObject;
  *(GENERIC_MAPPING *)((char *)&v6[1] + 4) = EtwpGenericMapping;
  HIDWORD(v6[3]) = 2052;
  HIDWORD(v6[4]) = 512;
  HIDWORD(v6[5]) = 112;
  RtlInitUnicodeString(&DestinationString, L"EtwRegistration");
  return ObCreateObjectType(&DestinationString, (__int64)v6, 0LL, (__int64)&EtwpRegistrationObjectType);
}
