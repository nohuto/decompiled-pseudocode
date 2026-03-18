/*
 * XREFs of MiInitializePartitions @ 0x14075A5B8
 * Callers:
 *     MiCreatePfnDatabase @ 0x14074882C (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ObCreateObjectType @ 0x140525B3C (ObCreateObjectType.c)
 *     MiSystemPartitionObjectCreate @ 0x14075A6E8 (MiSystemPartitionObjectCreate.c)
 */

_BOOL8 __fastcall MiInitializePartitions(int a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  UNICODE_STRING v4; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  *(_DWORD *)&v4.Length = 1310738;
  v4.Buffer = L"Partition";
  if ( !a1 )
  {
    qword_1402FEBE0 = 0LL;
    qword_1402FEBE8 = 0LL;
    qword_1402FEC08 = (PRTL_BITMAP)&dword_1402FEC10;
    dword_1402FEC10 = 1;
    qword_1402FEC18 = (__int64)dword_1402FEBF0;
    dword_1402FEBF0[0] |= 1u;
    qword_1402FEC00 = (__int64)&qword_1402FEBF8;
    qword_1402FEBF8 = (__int64)&qword_1402FEBF8;
    qword_1402FEC20 = (__int64)MiSystemPartition;
    qword_1402FEC28 = (__int64)&qword_1402FEC20;
    return 1LL;
  }
  memset(v5, 0, 0x78uLL);
  LODWORD(v5[1]) = 0;
  v5[9] = MmPartitionObjectDelete;
  LOWORD(v5[0]) = 120;
  BYTE2(v5[0]) |= 0xCu;
  HIDWORD(v5[4]) = 512;
  HIDWORD(v5[5]) = 8;
  *(_OWORD *)((char *)&v5[1] + 4) = MiPartitionMapping;
  HIDWORD(v5[3]) = 2031619;
  return (int)ObCreateObjectType(&v4, (__int64)v5, 0LL, (__int64)&MmPartitionObjectType) >= 0
      && (int)MiSystemPartitionObjectCreate(v3, v2) >= 0;
}
