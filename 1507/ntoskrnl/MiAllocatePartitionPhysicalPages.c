/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x14021CD0C
 * Callers:
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 *     MiManagePartition @ 0x1406A4074 (MiManagePartition.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x140076E38 (MiAllocatePagesForMdl.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(__int16 *a1, __int64 a2, __int64 a3, __int16 a4)
{
  unsigned int v4; // ebx
  __int16 *v5; // rbp
  __int64 v6; // rax
  unsigned int *v7; // r12
  char v8; // r13
  __int64 v9; // r14
  unsigned __int64 v10; // rsi
  unsigned int *PagesForMdl; // rax
  __int16 v15; // [rsp+98h] [rbp+20h]

  v15 = a4;
  v4 = 0;
  v5 = MiSystemPartition;
  v6 = a3;
  v7 = 0LL;
  v8 = 1;
  if ( a1 )
    v5 = a1;
  v9 = 0LL;
  while ( 1 )
  {
    v10 = v6 - v9;
    if ( (unsigned __int64)(v6 - v9) > 0xFFFFE )
      v10 = 1048574LL;
    if ( v10 < 0x200 || v8 != 1 )
      break;
    PagesForMdl = (unsigned int *)MiAllocatePagesForMdl(
                                    (__int64)v5,
                                    0LL,
                                    -1LL,
                                    0x200000LL,
                                    (v10 & 0xFFFFFFFFFFFFFE00uLL) << 12,
                                    1,
                                    a4,
                                    0x67u);
    if ( PagesForMdl )
      v10 &= 0xFFFFFFFFFFFFFE00uLL;
    else
      v8 = 0;
    if ( !PagesForMdl )
    {
      a4 = v15;
      break;
    }
LABEL_14:
    *(_QWORD *)PagesForMdl = v7;
    v7 = PagesForMdl;
    v9 += (unsigned __int64)PagesForMdl[10] >> 12;
    v6 = a3;
    if ( v9 == a3 )
      goto LABEL_17;
    a4 = v15;
  }
  PagesForMdl = (unsigned int *)MiAllocatePagesForMdl((__int64)v5, 0LL, -1LL, 0LL, v10 << 12, 1, a4, 0x17u);
  if ( PagesForMdl )
    goto LABEL_14;
  v4 = -1073741670;
LABEL_17:
  MiInsertPartitionPages(v5, a2, v7, v4);
  return v4;
}
