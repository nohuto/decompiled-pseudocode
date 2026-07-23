/*
 * XREFs of CmpCreateObjectTypes @ 0x1407ABF40
 * Callers:
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
 */

__int64 CmpCreateObjectTypes()
{
  __int128 v1; // [rsp+20h] [rbp-39h]
  _QWORD v2[16]; // [rsp+30h] [rbp-29h] BYREF

  *(_QWORD *)&v1 = 0x2000600020019LL;
  *((_QWORD *)&v1 + 1) = 0xF003F00020039LL;
  memset(v2, 0, 0x78uLL);
  v2[6] = 0LL;
  v2[7] = 0LL;
  LOWORD(v2[0]) = 120;
  LODWORD(v2[1]) = 48;
  HIDWORD(v2[3]) = 983103;
  LODWORD(v2[5]) = 88;
  BYTE2(v2[0]) = BYTE2(v2[0]) & 0xE2 | 0xD;
  HIDWORD(v2[4]) = 1;
  v2[8] = CmpCloseKeyObject;
  v2[9] = CmpDeleteKeyObject;
  v2[10] = CmpParseKey;
  v2[11] = CmpSecurityMethod;
  v2[12] = CmpQueryKeyName;
  *(_OWORD *)((char *)&v2[1] + 4) = v1;
  HIDWORD(v2[0]) = 256;
  return ObCreateObjectType((const UNICODE_STRING *)&CmpKeyTypeNameString, (__int64)v2, 0LL, (__int64)&CmKeyObjectType);
}
