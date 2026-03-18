/*
 * XREFs of MiInitializePartitions @ 0x1407C3F38
 * Callers:
 *     MiCreatePfnDatabase @ 0x1407C444C (MiCreatePfnDatabase.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     memset @ 0x140195A80 (memset.c)
 *     ObCreateObjectType @ 0x140595F4C (ObCreateObjectType.c)
 *     MiSystemPartitionObjectCreate @ 0x1407C4068 (MiSystemPartitionObjectCreate.c)
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
    qword_14034F0A0 = 0LL;
    qword_14034F0A8 = 0LL;
    qword_14034F0C8 = (PRTL_BITMAP)&dword_14034F0D0;
    dword_14034F0D0 = 1;
    qword_14034F0D8 = (__int64)dword_14034F0B0;
    dword_14034F0B0[0] |= 1u;
    qword_14034F0C0 = (__int64)&qword_14034F0B8;
    qword_14034F0B8 = (__int64)&qword_14034F0B8;
    qword_14034F0E0 = (__int64)MiSystemPartition;
    qword_14034F0E8 = (__int64)&qword_14034F0E0;
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
