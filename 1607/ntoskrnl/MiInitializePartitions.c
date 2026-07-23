/*
 * XREFs of MiInitializePartitions @ 0x1407A1300
 * Callers:
 *     MiCreatePfnDatabase @ 0x14078F270 (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     memset @ 0x140171AC0 (memset.c)
 *     ObCreateObjectType @ 0x14055257C (ObCreateObjectType.c)
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
    qword_140326FF8 = 0LL;
    qword_140327018 = (PRTL_BITMAP)&dword_140327020;
    dword_140327020 = 1;
    qword_140327028 = (__int64)dword_140327000;
    dword_140327000[0] |= 1u;
    qword_140327010 = (__int64)&qword_140327008;
    qword_140327008 = (__int64)&qword_140327008;
    qword_140327030 = (__int64)MiSystemPartition;
    qword_140327038 = (__int64)&qword_140327030;
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
