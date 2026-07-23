/*
 * XREFs of MiMakeZeroedPageTables @ 0x140100034
 * Callers:
 *     MiExpandPagedPool @ 0x1400A1294 (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x1400A1428 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x1400A1590 (MiExpandPtes.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiSplitBitmapPages @ 0x1400FFBD4 (MiSplitBitmapPages.c)
 *     MiMapNewWorkingSetPage @ 0x140100BD0 (MiMapNewWorkingSetPage.c)
 *     MiMapWithLargePages @ 0x14012E7FC (MiMapWithLargePages.c)
 *     MiGetLargePageWorkMapping @ 0x14013B330 (MiGetLargePageWorkMapping.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     MiExpandSpecialPool @ 0x1401EB444 (MiExpandSpecialPool.c)
 *     MiMapSystemImage @ 0x14048327C (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x1405363C0 (MiInitializeDynamicBitmap.c)
 *     MiMapNewPfns @ 0x14065820C (MiMapNewPfns.c)
 *     MiExpandPartitionIds @ 0x140660498 (MiExpandPartitionIds.c)
 *     MiMapBBTMemory @ 0x1407A6948 (MiMapBBTMemory.c)
 * Callees:
 *     MiMakeZeroedPageTableRange @ 0x140020848 (MiMakeZeroedPageTableRange.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiPageTablesNeeded @ 0x140100298 (MiPageTablesNeeded.c)
 *     MiCleanupPageTablePages @ 0x1401004E0 (MiCleanupPageTablePages.c)
 *     MiGetPageTablePages @ 0x140100588 (MiGetPageTablePages.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(unsigned __int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // r12d
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r8
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  int *v14; // rax
  unsigned __int64 *v15; // rcx
  _QWORD v17[4]; // [rsp+30h] [rbp-59h] BYREF
  int v18; // [rsp+50h] [rbp-39h]
  int v19; // [rsp+54h] [rbp-35h]
  int v20; // [rsp+58h] [rbp-31h]
  _BYTE v21[8]; // [rsp+60h] [rbp-29h] BYREF
  char v22; // [rsp+68h] [rbp-21h] BYREF

  v4 = a4;
  v6 = a1;
  if ( a4 == 6 )
    v4 = 6;
  v7 = 4LL;
  if ( (a3 & 4) != 0 )
  {
    v8 = 3LL;
  }
  else if ( (a3 & 2) != 0 )
  {
    v8 = 2LL;
  }
  else
  {
    v8 = ((unsigned __int8)~(_BYTE)a3 >> 5) & 1;
  }
  v20 = v8;
  v9 = (__int64)(a1 << 25) >> 16;
  v10 = a2 << 25 >> 16;
  v11 = MiPageTablesNeeded(v9, v10, v8, 1LL);
  v12 = 0LL;
  v13 = v11;
  if ( !v11 )
    return 1LL;
  while ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
    v6 = (__int64)(v6 << 25) >> 16;
  if ( v6 > 0x7FFFFFFEFFFFLL && (v6 < qword_140327FD0 || v6 > qword_140326D38) )
  {
    if ( v6 < qword_140326950 || (v18 = 1, v6 >= qword_140326950 + 0x8000000000LL) )
      v18 = 2;
    v14 = MiSystemPartition;
  }
  else
  {
    v18 = 0;
    v14 = MiPartitionIdToPointer(WORD2(KeGetCurrentThread()->ApcState.Process[1].InstrumentationCallback));
  }
  v17[1] = v14;
  v17[2] = v12;
  v17[3] = v12;
  v17[0] = 0xFFFFFFFFFLL;
  v19 = a3;
  if ( (unsigned int)MiGetPageTablePages(v17, v6, v13, v4) )
  {
    v15 = (unsigned __int64 *)&v22;
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(v15 - 1) = v9;
      *v15 = v10;
      v15 += 2;
      --v7;
    }
    while ( v7 );
    MiMakeZeroedPageTableRange(v9, v10, (__int64)v21, 3u, (__int64)v17);
    MiCleanupPageTablePages(v17);
    return 1LL;
  }
  return 0LL;
}
