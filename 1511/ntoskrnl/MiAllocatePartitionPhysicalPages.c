/*
 * XREFs of MiAllocatePartitionPhysicalPages @ 0x1401D8F48
 * Callers:
 *     MiManagePartition @ 0x14062480C (MiManagePartition.c)
 * Callees:
 *     MiAllocatePagesForMdl @ 0x1400BC760 (MiAllocatePagesForMdl.c)
 *     MiInsertPartitionPages @ 0x1401D9510 (MiInsertPartitionPages.c)
 */

__int64 __fastcall MiAllocatePartitionPhysicalPages(int *a1, __int64 a2, __int64 a3, __int16 a4, char a5)
{
  int *v5; // r12
  unsigned int v6; // ebx
  __int64 v8; // r15
  __int64 v9; // r14
  unsigned int v10; // ebp
  unsigned __int64 v11; // rsi
  __int64 PagesForMdl; // rax
  __int16 v15; // [rsp+88h] [rbp+20h]

  v15 = a4;
  v5 = MiSystemPartition;
  v6 = 0;
  v8 = 0LL;
  v9 = 0LL;
  if ( a1 )
    v5 = a1;
  v10 = 97;
  if ( (a5 & 1) == 0 )
    v10 = 99;
  while ( 1 )
  {
    v11 = a3 - v9;
    if ( (unsigned __int64)(a3 - v9) > 0xFFFFE )
      v11 = 1048574LL;
    if ( v11 >= 0x200 && (v10 & 0x40) != 0 )
    {
      PagesForMdl = MiAllocatePagesForMdl(
                      (__int64)v5,
                      0LL,
                      -1LL,
                      0x200000LL,
                      (v11 & 0xFFFFFFFFFFFFFE00uLL) << 12,
                      1,
                      a4,
                      v10);
      if ( PagesForMdl )
        goto LABEL_12;
      a4 = v15;
    }
    v10 = v10 & 3 | 0x10;
    PagesForMdl = MiAllocatePagesForMdl((__int64)v5, 0LL, -1LL, 0LL, v11 << 12, 1, a4, v10);
    if ( !PagesForMdl )
      break;
LABEL_12:
    *(_QWORD *)PagesForMdl = v8;
    v8 = PagesForMdl;
    v9 += (unsigned __int64)*(unsigned int *)(PagesForMdl + 40) >> 12;
    if ( v9 == a3 )
      goto LABEL_15;
    a4 = v15;
  }
  v6 = -1073741670;
LABEL_15:
  MiInsertPartitionPages(v5, a2, v8, v6);
  return v6;
}
