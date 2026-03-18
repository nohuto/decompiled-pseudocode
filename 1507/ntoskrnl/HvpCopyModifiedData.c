/*
 * XREFs of HvpCopyModifiedData @ 0x1406664C4
 * Callers:
 *     HvpApplyLogEntry @ 0x140666234 (HvpApplyLogEntry.c)
 * Callees:
 *     HvpMapEntryGetBlockAddress @ 0x1400CA830 (HvpMapEntryGetBlockAddress.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14017DF88 (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x14049FB30 (HvpGetCellMap.c)
 */

void __fastcall HvpCopyModifiedData(ULONG_PTR BugCheckParameter2, int a2, __int64 a3, unsigned int a4)
{
  unsigned int i; // ebx
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v10; // rcx
  unsigned int v11; // r10d
  struct _EX_RUNDOWN_REF *v12; // rdi
  _OWORD *BlockAddress; // rax
  __int64 v14; // rdx
  __int128 *v15; // rcx
  __int128 v16; // xmm0
  _DWORD v17[10]; // [rsp+30h] [rbp-28h] BYREF
  BOOLEAN v18; // [rsp+78h] [rbp+20h] BYREF

  if ( a4 )
  {
    for ( i = 0; i < a4; i += 4096 )
    {
      CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, i + a2);
      v12 = CellMap;
      if ( !CellMap )
        KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v11, 0x678uLL);
      BlockAddress = (_OWORD *)HvpMapEntryGetBlockAddress(v10, CellMap, &v18, v17);
      v14 = 32LL;
      v15 = (__int128 *)(a3 + i);
      do
      {
        v16 = *v15;
        v15 += 8;
        *BlockAddress = v16;
        BlockAddress += 8;
        *(BlockAddress - 7) = *(v15 - 7);
        *(BlockAddress - 6) = *(v15 - 6);
        *(BlockAddress - 5) = *(v15 - 5);
        *(BlockAddress - 4) = *(v15 - 4);
        *(BlockAddress - 3) = *(v15 - 3);
        *(BlockAddress - 2) = *(v15 - 2);
        *(BlockAddress - 1) = *(v15 - 1);
        --v14;
      }
      while ( v14 );
      if ( v18 )
        HvpMapEntryReleaseBlockAddress((__int64)v15, v12);
    }
  }
}
