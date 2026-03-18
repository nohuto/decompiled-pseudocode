/*
 * XREFs of MiMakeZeroedPageTables @ 0x140017868
 * Callers:
 *     MiExpandPagedPool @ 0x140016110 (MiExpandPagedPool.c)
 *     MiExpandSystemCache @ 0x1400162A8 (MiExpandSystemCache.c)
 *     MiExpandPtes @ 0x140016404 (MiExpandPtes.c)
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiSplitBitmapPages @ 0x14001711C (MiSplitBitmapPages.c)
 *     MiMapNewWorkingSetPage @ 0x140017418 (MiMapNewWorkingSetPage.c)
 *     MiMapWsMetaPage @ 0x1400A90C0 (MiMapWsMetaPage.c)
 *     MiMapWithLargePages @ 0x140124B88 (MiMapWithLargePages.c)
 *     MiInitializePageZeroing @ 0x1401312FC (MiInitializePageZeroing.c)
 *     MiExpandSpecialPool @ 0x1401DA974 (MiExpandSpecialPool.c)
 *     MiMapSystemImage @ 0x1403CC804 (MiMapSystemImage.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     MiInitializeDynamicBitmap @ 0x1404FF1D8 (MiInitializeDynamicBitmap.c)
 *     MiSessionInitializeWorkingSetList @ 0x1404FF630 (MiSessionInitializeWorkingSetList.c)
 *     MiMapNewPfns @ 0x140622C14 (MiMapNewPfns.c)
 *     MiAllocatePartitionId @ 0x140623F10 (MiAllocatePartitionId.c)
 *     MiInitializeSystemWorkingSetList @ 0x14074A208 (MiInitializeSystemWorkingSetList.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     MiMapBBTMemory @ 0x14074E034 (MiMapBBTMemory.c)
 * Callees:
 *     MiPageTablesNeeded @ 0x140017A6C (MiPageTablesNeeded.c)
 *     MiCleanupPageTablePages @ 0x140017C64 (MiCleanupPageTablePages.c)
 *     MiMakeZeroedPageTableRange @ 0x140017CAC (MiMakeZeroedPageTableRange.c)
 *     MiGetPageTablePages @ 0x1400185B8 (MiGetPageTablePages.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall MiMakeZeroedPageTables(unsigned __int64 a1, __int64 a2, int a3, unsigned int a4)
{
  unsigned int v4; // r15d
  unsigned __int64 v6; // rbx
  __int64 v7; // r12
  __int64 v8; // r8
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rax
  __int64 v12; // r9
  __int64 v13; // r8
  int *v15; // rax
  unsigned __int64 *v16; // rax
  _QWORD v17[4]; // [rsp+30h] [rbp-59h] BYREF
  int v18; // [rsp+50h] [rbp-39h]
  int v19; // [rsp+54h] [rbp-35h]
  int v20; // [rsp+58h] [rbp-31h]
  char v21; // [rsp+60h] [rbp-29h] BYREF
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
  else
  {
    v8 = 2LL;
    if ( (a3 & 2) == 0 )
      v8 = ((unsigned __int8)~(_BYTE)a3 >> 5) & 1;
  }
  v9 = (__int64)(a1 << 25) >> 16;
  v10 = a2 << 25 >> 16;
  v20 = v8;
  v11 = MiPageTablesNeeded(v9, v10, v8, 1LL);
  v12 = 0LL;
  v13 = v11;
  if ( !v11 )
    return 1LL;
  while ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL )
    v6 = (__int64)(v6 << 25) >> 16;
  if ( v6 > (unsigned __int64)MmHighestUserAddress && v6 + 0xA8000000000LL > 0x17FFFFFFFFFLL )
  {
    v15 = &MiSystemPartition;
    v18 = (v6 + 0x70000000000LL > 0x7FFFFFFFFFLL) + 1;
  }
  else
  {
    v18 = 0;
    v15 = (int *)MiPartitionIdToPointer(LOWORD(KeGetCurrentThread()->ApcState.Process[2].Header.SignalState));
  }
  v17[1] = v15;
  v17[2] = v12;
  v17[3] = v12;
  v17[0] = 0xFFFFFFFFFLL;
  v19 = a3;
  if ( (unsigned int)MiGetPageTablePages(v17, v6, v13, v4) )
  {
    v16 = (unsigned __int64 *)&v22;
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v10 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(v16 - 1) = v9;
      *v16 = v10;
      v16 += 2;
      --v7;
    }
    while ( v7 );
    MiMakeZeroedPageTableRange(v9, v10, (unsigned int)&v21, 3, (__int64)v17);
    MiCleanupPageTablePages(v17);
    return 1LL;
  }
  return 0LL;
}
