/*
 * XREFs of MiCreatePfnDatabase @ 0x1407C444C
 * Callers:
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 * Callees:
 *     MiInsertNewPartitionInList @ 0x14015F5DC (MiInsertNewPartitionInList.c)
 *     MiInitializePartition @ 0x140596C34 (MiInitializePartition.c)
 *     MiInitializePartitions @ 0x1407C3F38 (MiInitializePartitions.c)
 *     MiInitializeNumaGraph @ 0x1407C4618 (MiInitializeNumaGraph.c)
 *     MiCreateSparsePfnDatabase @ 0x1407C57C8 (MiCreateSparsePfnDatabase.c)
 *     MiInitializeColors @ 0x1407E7CAC (MiInitializeColors.c)
 */

__int64 __fastcall MiCreatePfnDatabase(__int64 a1)
{
  unsigned __int16 v2; // r11
  int v3; // r10d
  __int64 v4; // rdx
  int v5; // eax
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rcx
  unsigned __int64 *v9; // rdx
  unsigned __int64 v10; // r8
  unsigned __int64 *v11; // rax
  __int64 v12; // r9
  __int64 v13; // rax
  __int64 v14; // rcx
  unsigned __int64 v15; // r11
  unsigned __int64 v16; // r10
  __int64 *v17; // rcx

  MiInitializeColors();
  v2 = KeNumberNodes;
  v3 = (unsigned __int16)KeNumberNodes;
  v4 = qword_14034EC10;
  v5 = (unsigned __int16)KeNumberNodes * (unsigned __int8)MiChannelMaximumPowerOf2;
  v6 = (unsigned int)(v5 * dword_14034EBBC);
  dword_14034EBBC *= v5;
  if ( qword_14034F420 == -1 )
  {
    v4 = qword_14034EC10 + 2048;
    qword_14034F420 = qword_14034EC10 + 1;
  }
  v7 = (unsigned int)v6;
  v8 = 48 * (v4 + 1);
  v9 = (unsigned __int64 *)&unk_1403542D0;
  qword_1403542C0 = v8;
  qword_1403542C8 = 40 * v6 + v8;
  v10 = (qword_1403542C8 + 40 * v6 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v11 = (unsigned __int64 *)&unk_1403542D0;
  v12 = 16 * v7;
  do
  {
    *v11 = v10;
    v10 += v12;
    ++v11;
  }
  while ( (__int64)v11 < (__int64)qword_1403542E0 );
  v13 = 416LL * v2;
  MmPfnDatabase = 0xFFFFFA8000000000uLL;
  v14 = 144LL * v2 + 4095;
  v15 = (v10 + 1336LL * v2 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  v16 = (v13 + v15 + 2LL * v3 * v3 + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  MxPfnAllocation = (v16 + v14) >> 12;
  v17 = &qword_1403542C0;
  do
    *v17++ -= 0x58000000000LL;
  while ( (__int64)v17 < (__int64)&unk_1403542D0 );
  do
    *v9++ -= 0x58000000000LL;
  while ( (__int64)v9 < (__int64)qword_1403542E0 );
  qword_14034F590 = v16 - 0x58000000000LL;
  qword_14034EB70 = (PSLIST_HEADER)(v15 - 0x58000000000LL);
  qword_140353D28 = v10 - 0x58000000000LL;
  qword_14034EB68 = (void *)(v13 + v15 - 0x58000000000LL);
  if ( !(unsigned int)MiCreateSparsePfnDatabase(a1) )
    return 0LL;
  MiInitializePartitions(0);
  MiInitializePartition((__int64)MiSystemPartition, 0);
  MiInsertNewPartitionInList((__int64)MiSystemPartition);
  MiInitializeNumaGraph(a1);
  return 1LL;
}
