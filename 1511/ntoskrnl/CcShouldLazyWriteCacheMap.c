/*
 * XREFs of CcShouldLazyWriteCacheMap @ 0x140100F0C
 * Callers:
 *     CcLazyWriteScan @ 0x140100810 (CcLazyWriteScan.c)
 * Callees:
 *     CcCanIWriteStream @ 0x14002F5F0 (CcCanIWriteStream.c)
 */

bool __fastcall CcShouldLazyWriteCacheMap(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v4; // eax
  int v8; // ecx
  unsigned int v9; // edx
  __int64 v10; // r9

  v4 = *(_DWORD *)(a1 + 152);
  if ( (v4 & 0x400820) != 0 )
    return 0;
  if ( (v4 & 0x10000) != 0 )
    return 1;
  if ( *(_DWORD *)(a1 + 516) )
    return 0;
  v8 = *(_DWORD *)(a1 + 4);
  if ( !v8 && (!*(_DWORD *)(a1 + 112) || !*(_QWORD *)(a1 + 8)) )
    return 1;
  v9 = *(_DWORD *)(a1 + 112);
  if ( !v9 || !a2 )
    return 0;
  ++*(_DWORD *)(a1 + 268);
  if ( (v4 & 0x1000000) != 0 )
  {
    v10 = *(_QWORD *)(a1 + 240);
    return *(_DWORD *)(v10 + 104)
        || MEMORY[0xFFFFF78000000320] > *(_QWORD *)(v10 + 136) + 160000000LL / KeMaximumIncrement
        || *(_DWORD *)(a1 + 112) >= 0x40u;
  }
  if ( (v4 & 0x200) != 0 )
  {
    if ( (*(_DWORD *)(a1 + 268) & 0xF) == 0 || v9 >= 0x40 )
      return 1;
    return a4 == 16;
  }
  else
  {
    if ( (*(_DWORD *)(a3 + 80) & 0x8000) == 0 || !v8 )
      return 1;
    return !CcCanIWriteStream(a3, 0x1000000u, 0, 1);
  }
}
