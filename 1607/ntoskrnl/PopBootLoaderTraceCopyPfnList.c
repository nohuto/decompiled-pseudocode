/*
 * XREFs of PopBootLoaderTraceCopyPfnList @ 0x1403C973C
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x1403CAA04 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     memmove @ 0x140171780 (memmove.c)
 */

void __fastcall PopBootLoaderTraceCopyPfnList(_QWORD *MemoryMap, __int64 a2)
{
  __int64 v2; // rax
  PVOID *v5; // rsi
  unsigned __int64 v6; // rbx

  v2 = MemoryMap[27];
  if ( v2 )
  {
    v5 = (PVOID *)(v2 + 48);
    v6 = (unsigned __int64)*(unsigned int *)(v2 + 40) >> 12;
    memmove((void *)(a2 + 648), (const void *)(v2 + 48), 8 * v6);
    for ( *(_DWORD *)(a2 + 644) = v6; v6; --v6 )
      PoSetHiberRange(MemoryMap, 0xC000u, *v5++, 1uLL, 0x644D6946u);
  }
  else
  {
    *(_DWORD *)(a2 + 644) = 0;
  }
}
