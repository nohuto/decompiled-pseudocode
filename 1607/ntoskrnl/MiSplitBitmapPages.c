/*
 * XREFs of MiSplitBitmapPages @ 0x1400FFBD4
 * Callers:
 *     MiExpandPagedPool @ 0x1400A1294 (MiExpandPagedPool.c)
 *     MiExpandPtes @ 0x1400A1590 (MiExpandPtes.c)
 *     MiExpandNonPagedPool @ 0x1400FF5A4 (MiExpandNonPagedPool.c)
 *     MiExtendDynamicBitMap @ 0x140149FCC (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x14052F7A4 (MiSplitMirrorBitMap.c)
 *     MiSplitLargePfnBitMap @ 0x140576624 (MiSplitLargePfnBitMap.c)
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x1407A6134 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140100034 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiSplitBitmapPages(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned int ZeroedPageTables; // r8d
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  char v11; // bl
  __int64 v12; // rdx
  char v13; // al

  v3 = a1;
  if ( a1 == 15 )
    v3 = 9;
  v6 = 32LL;
  if ( ((v3 - 5) & 0xFFFFFFFB) != 0 )
  {
    if ( v3 != 8 && v3 != 13 && KeGetCurrentIrql() <= 1u )
      v6 = 33LL;
  }
  else
  {
    v6 = 48LL;
  }
  v7 = a2 + ((unsigned __int64)(a3 - 1) >> 3);
  ZeroedPageTables = MiMakeZeroedPageTables(
                       ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                       ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
                       v6,
                       v3);
  if ( ZeroedPageTables == 1 )
  {
    v9 = ((v7 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    v10 = ((a2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
    if ( v10 <= v9 )
    {
      v11 = 16 * v3;
      do
      {
        v12 = 6
            * ((*(_QWORD *)((((((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL);
        v13 = *(_BYTE *)(48
                       * ((*(_QWORD *)((((((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 9) & 0x7FFFFFFFF8LL)
                                     - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x57FFFFFFFDALL);
        v10 += 8LL;
        *(_BYTE *)(8 * v12 - 0x57FFFFFFFDALL) = v11 | v13 & 0xF;
      }
      while ( v10 <= v9 );
    }
  }
  return ZeroedPageTables;
}
