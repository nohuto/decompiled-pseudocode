/*
 * XREFs of MiInitializePartitions @ 0x1407A1300
 * Callers:
 *     MiCreatePfnDatabase @ 0x14078F270 (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ObCreateObjectType @ 0x14055203C (ObCreateObjectType.c)
 *     MiSystemPartitionObjectCreate @ 0x1407A13BC (MiSystemPartitionObjectCreate.c)
 */

_BOOL8 __fastcall MiInitializePartitions(int a1)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  UNICODE_STRING v4; // [rsp+20h] [rbp-39h] BYREF
  _QWORD v5[16]; // [rsp+30h] [rbp-29h] BYREF

  *(_DWORD *)&v4.Length = 1310738;
  v4.Buffer = L"Partition";
  if ( !a1 )
  {
    SpinLock = 0LL;
    qword_140326FB8 = 0LL;
    qword_140326FD8 = (PRTL_BITMAP)&dword_140326FE0;
    dword_140326FE0 = 1;
    qword_140326FE8 = (__int64)dword_140326FC0;
    dword_140326FC0[0] |= 1u;
    qword_140326FD0 = (__int64)&qword_140326FC8;
    qword_140326FC8 = (__int64)&qword_140326FC8;
    qword_140326FF0 = (__int64)MiSystemPartition;
    qword_140326FF8 = (__int64)&qword_140326FF0;
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
      && (int)MiSystemPartitionObjectCreate(v2, v1) >= 0;
}
