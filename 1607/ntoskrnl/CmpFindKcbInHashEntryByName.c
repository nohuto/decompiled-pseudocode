/*
 * XREFs of CmpFindKcbInHashEntryByName @ 0x140436C74
 * Callers:
 *     CmpWalkOneLevel @ 0x14002D9B0 (CmpWalkOneLevel.c)
 *     CmpPartialPromoteSubkeys @ 0x1401B3204 (CmpPartialPromoteSubkeys.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     CmpPerformSingleKcbCacheLookup @ 0x1404A0334 (CmpPerformSingleKcbCacheLookup.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 * Callees:
 *     CmpCompareUnicodeString @ 0x1404D2580 (CmpCompareUnicodeString.c)
 *     CmpCompareCompressedName @ 0x140512960 (CmpCompareCompressedName.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByName(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v9; // rcx
  int v10; // eax
  int v12; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v5 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 2800)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v9 = *(_QWORD *)(i + 64);
      if ( (*(_DWORD *)v9 & 1) != 0 )
      {
        v10 = CmpCompareCompressedName(a4, v9 + 26, *(unsigned __int16 *)(v9 + 24), 2LL, v12, v13);
      }
      else
      {
        v13 = v9 + 26;
        LOWORD(v12) = *(_WORD *)(v9 + 24);
        HIWORD(v12) = v12;
        v10 = CmpCompareUnicodeString(a4, &v12, 2LL);
      }
      if ( !v10 )
        return i - 8;
    }
  }
  return v5;
}
