/*
 * XREFs of PopBootLoaderTraceCopyPfnList @ 0x1403F27A4
 * Callers:
 *     PopBuildMemoryImageHeader @ 0x1403F1BF0 (PopBuildMemoryImageHeader.c)
 * Callees:
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 *     memmove @ 0x140195740 (memmove.c)
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
    memmove((void *)(a2 + 640), (const void *)(v2 + 48), 8 * v6);
    for ( *(_DWORD *)(a2 + 636) = v6; v6; --v6 )
      PoSetHiberRange(MemoryMap, 0xC000u, *v5++, 1uLL, 0x644D6946u);
  }
  else
  {
    *(_DWORD *)(a2 + 636) = 0;
  }
}
