/*
 * XREFs of MiSplitBitmapPages @ 0x14001711C
 * Callers:
 *     MiExpandPagedPool @ 0x140016110 (MiExpandPagedPool.c)
 *     MiExpandPtes @ 0x140016404 (MiExpandPtes.c)
 *     MiExpandNonPagedPool @ 0x1400168DC (MiExpandNonPagedPool.c)
 *     MiExtendDynamicBitMap @ 0x1401405C0 (MiExtendDynamicBitMap.c)
 *     MiSplitMirrorBitMap @ 0x1404F6148 (MiSplitMirrorBitMap.c)
 *     MiSplitLargePfnBitMap @ 0x140520918 (MiSplitLargePfnBitMap.c)
 *     MiInitializeSystemPtes @ 0x140749E68 (MiInitializeSystemPtes.c)
 *     MiInitializeDriverImages @ 0x14074A790 (MiInitializeDriverImages.c)
 *     MxMarkActiveDriverBits @ 0x14074B858 (MxMarkActiveDriverBits.c)
 * Callees:
 *     MiMakeZeroedPageTables @ 0x140017868 (MiMakeZeroedPageTables.c)
 */

__int64 __fastcall MiSplitBitmapPages(unsigned int a1, unsigned __int64 a2, __int64 a3)
{
  unsigned int v3; // ebx
  __int64 v6; // r8
  unsigned __int64 v7; // rsi
  unsigned int ZeroedPageTables; // edx
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rdi
  char v11; // bl
  __int64 v12; // rax
  __int64 v13; // rax

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
        v12 = (v10 >> 9) & 0x7FFFFFFFF8LL;
        v10 += 8LL;
        v13 = (*(_QWORD *)((((unsigned __int64)(v12 - 0x97FFFFFFFF9LL) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) >> 12) & 0xFFFFFFFFFLL;
        *(_BYTE *)(48 * v13 - 0x57FFFFFFFDALL) = v11 | *(_BYTE *)(48 * v13 - 0x57FFFFFFFDALL) & 0xF;
      }
      while ( v10 <= v9 );
    }
  }
  return ZeroedPageTables;
}
