/*
 * XREFs of MiCreatePfnDatabase @ 0x14078F270
 * Callers:
 *     MiInitNucleus @ 0x1407D06B4 (MiInitNucleus.c)
 * Callees:
 *     MiInsertNewPartitionInList @ 0x1400B3870 (MiInsertNewPartitionInList.c)
 *     MiInitializePartition @ 0x14054F230 (MiInitializePartition.c)
 *     MiInitializeNumaGraph @ 0x14078F41C (MiInitializeNumaGraph.c)
 *     MiInitializeColors @ 0x14078F4E8 (MiInitializeColors.c)
 *     MiCreateSparsePfnDatabase @ 0x140797038 (MiCreateSparsePfnDatabase.c)
 *     MiInitializePartitions @ 0x1407A1300 (MiInitializePartitions.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  unsigned __int16 v2; // r10
  int v3; // r11d
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 *v7; // rdx
  __int64 v8; // r9
  unsigned __int64 *v9; // rax
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // r11
  __int64 *v16; // rcx

  MiInitializeColors();
  v2 = KeNumberNodes;
  v3 = (unsigned __int16)KeNumberNodes;
  v4 = (unsigned __int16)KeNumberNodes * (unsigned int)(unsigned __int8)MiChannelMaximumPowerOf2 * dword_140326A3C;
  v5 = (unsigned int)v4;
  dword_140326A3C *= (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  qword_140323C40 = 48 * (qword_140326AD0 + 1);
  v6 = 40 * v4;
  v7 = (unsigned __int64 *)&unk_140323C50;
  qword_140323C48 = v6 + qword_140323C40;
  v8 = v6 + 15;
  v9 = (unsigned __int64 *)&unk_140323C50;
  v10 = (qword_140323C48 + v8) & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = 16 * v5;
  do
  {
    *v9 = v10;
    v10 += v11;
    ++v9;
  }
  while ( (__int64)v9 < (__int64)qword_140323C60 );
  v12 = 416LL * v2;
  v13 = 144LL * v2 + 4095;
  v14 = (v10 + 2184LL * v2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v15 = (v12 + v14 + 2LL * v3 * v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  MxPfnAllocation = (v15 + v13) >> 12;
  MmPfnDatabase = 0xFFFFFA8000000000uLL;
  v16 = &qword_140323C40;
  do
    *v16++ -= 0x58000000000LL;
  while ( (__int64)v16 < (__int64)&unk_140323C50 );
  do
    *v7++ -= 0x58000000000LL;
  while ( (__int64)v7 < (__int64)qword_140323C60 );
  qword_1403269F0 = (PSLIST_HEADER)(v14 - 0x58000000000LL);
  qword_1403269E8 = (void *)(v12 + v14 - 0x58000000000LL);
  qword_140327510 = v15 - 0x58000000000LL;
  qword_1403235B0 = v10 - 0x58000000000LL;
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0LL);
  MiInitializePartition((__int64)MiSystemPartition, 0);
  MiInsertNewPartitionInList((__int64)MiSystemPartition);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
