/*
 * XREFs of IoCreateObjectTypes @ 0x14079E844
 * Callers:
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 */

bool IoCreateObjectTypes()
{
  char v0; // bl
  UNICODE_STRING DestinationString; // [rsp+38h] [rbp-39h] BYREF
  __int128 v3[8]; // [rsp+48h] [rbp-29h] BYREF

  memset(v3, 0, 0x78uLL);
  BYTE2(v3[0]) |= 4u;
  LOWORD(v3[0]) = 120;
  *(GENERIC_MAPPING *)((char *)v3 + 12) = IopFileMapping;
  DWORD2(v3[0]) = 256;
  DWORD1(v3[2]) = 512;
  HIDWORD(v3[1]) = 2032127;
  RtlInitUnicodeString(&DestinationString, L"Adapter");
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&IoAdapterObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Controller");
  HIDWORD(v3[2]) = 72;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&IoControllerObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Device");
  WORD1(v3[0]) |= 0x101u;
  *(_QWORD *)&v3[6] = 0LL;
  *(_QWORD *)&v3[5] = IopParseDevice;
  *((_QWORD *)&v3[5] + 1) = IopGetSetSecurityObject;
  *((_QWORD *)&v3[4] + 1) = IopDeleteDevice;
  HIDWORD(v3[2]) = 336;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&IoDeviceObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"Driver");
  memset(&v3[5], 0, 24);
  BYTE3(v3[0]) &= ~1u;
  *((_QWORD *)&v3[4] + 1) = IopDeleteDriver;
  HIDWORD(v3[2]) = 336;
  if ( ViVerifierDriverAddedThunkListHead )
    BYTE2(v3[0]) |= 0x20u;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&IoDriverObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"IoCompletion");
  DWORD2(v3[0]) = 272;
  HIDWORD(v3[2]) = 80;
  HIDWORD(v3[1]) = 2031619;
  *(_QWORD *)&v3[4] = IopCloseIoCompletion;
  *((_QWORD *)&v3[4] + 1) = IopDeleteIoCompletion;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0x7B | 0x80;
  *(__int128 *)((char *)v3 + 12) = IopCompletionMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&IoCompletionObjectType) < 0 )
    return 0;
  v0 = BYTE2(v3[0]) & 0x7F;
  RtlInitUnicodeString(&DestinationString, L"WaitCompletionPacket");
  *((_QWORD *)&v3[4] + 1) = 0LL;
  HIDWORD(v3[2]) = 112;
  DWORD2(v3[0]) = 272;
  HIDWORD(v3[1]) = 983041;
  *(_QWORD *)&v3[4] = IopCloseWaitCompletionPacket;
  BYTE2(v3[0]) = v0 | 4;
  *(__int128 *)((char *)v3 + 12) = IopWaitCompletionMapping;
  if ( (int)ObCreateObjectType(&DestinationString, (__int64)v3, 0LL, (__int64)&IopWaitCompletionPacketObjectType) < 0 )
    return 0;
  RtlInitUnicodeString(&DestinationString, L"File");
  BYTE3(v3[0]) |= 1u;
  *(_QWORD *)&v3[4] = IopCloseFile;
  *((_QWORD *)&v3[2] + 1) = 0x11800000400LL;
  BYTE2(v3[0]) = BYTE2(v3[0]) & 0xEB | 0x10;
  *((_QWORD *)&v3[4] + 1) = IopDeleteFile;
  *(_QWORD *)&v3[5] = IopParseFile;
  *(_QWORD *)&v3[6] = IopQueryName;
  *(_QWORD *)((char *)v3 + 4) = 0x13000000001LL;
  *(GENERIC_MAPPING *)((char *)v3 + 12) = IopFileMapping;
  HIDWORD(v3[1]) = 2032127;
  *((_QWORD *)&v3[5] + 1) = IopGetSetSecurityObject;
  *(_QWORD *)&v3[7] = 0x20005010000000LL;
  return (int)ObCreateObjectTypeEx(&DestinationString, v3, 0LL, 155LL, &IoFileObjectType) >= 0;
}
