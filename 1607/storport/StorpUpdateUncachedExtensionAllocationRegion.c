/*
 * XREFs of StorpUpdateUncachedExtensionAllocationRegion @ 0x1C002FBD4
 * Callers:
 *     StorPortGetUncachedExtension @ 0x1C000E9C0 (StorPortGetUncachedExtension.c)
 * Callees:
 *     StorAllocateContiguousMemory @ 0x1C00587CC (StorAllocateContiguousMemory.c)
 *     StorFreeContiguousMemory @ 0x1C005F02C (StorFreeContiguousMemory.c)
 */

__int64 __fastcall StorpUpdateUncachedExtensionAllocationRegion(__int64 a1, _DWORD *a2)
{
  __int64 v2; // r14
  unsigned int v3; // esi
  __int64 v6; // r9
  int ContiguousMemory; // edi
  unsigned int v8; // esi
  __int64 v9; // r9
  unsigned __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // rax

  v2 = a1 + 696;
  v3 = 0x80000000;
  do
  {
    v6 = *(_QWORD *)(a1 + 4368);
    if ( !v2 )
    {
      ContiguousMemory = -1073741811;
LABEL_4:
      v3 >>= 1;
      goto LABEL_5;
    }
    if ( !v6 )
    {
      LODWORD(v6) = -1;
      if ( *(_DWORD *)(v2 + 24) == 3 )
        LODWORD(v6) = -1;
    }
    ContiguousMemory = StorAllocateContiguousMemory(
                         *(_DWORD *)(a1 + 4360),
                         v3,
                         *(_QWORD *)(a1 + 4376),
                         v6,
                         *(_QWORD *)(a1 + 4384),
                         *(_DWORD *)(a1 + 4360),
                         *a2,
                         a1 + 728);
    if ( ContiguousMemory < 0 )
      goto LABEL_4;
    v11 = *(_QWORD *)(a1 + 736) & 0xFFFFFFFF00000000uLL;
    v12 = *(_QWORD *)(a1 + 736) | 0xFFFFFFFFLL;
    *(_QWORD *)(a1 + 4376) = v11;
    *(_QWORD *)(a1 + 4368) = v12;
    StorFreeContiguousMemory(v11, a1 + 728);
LABEL_5:
    if ( ContiguousMemory >= 0 )
      return (unsigned int)ContiguousMemory;
  }
  while ( v3 >= 0x8000000 );
  if ( *a2 != 0x80000000 )
  {
    v8 = 0x80000000;
    while ( 1 )
    {
      v9 = *(_QWORD *)(a1 + 4368);
      if ( !v2 )
        break;
      if ( !v9 )
      {
        LODWORD(v9) = -1;
        if ( *(_DWORD *)(v2 + 24) == 3 )
          LODWORD(v9) = -1;
      }
      ContiguousMemory = StorAllocateContiguousMemory(
                           *(_QWORD *)(a1 + 4384),
                           v8,
                           *(_QWORD *)(a1 + 4376),
                           v9,
                           *(_QWORD *)(a1 + 4384),
                           *(_DWORD *)(a1 + 4360),
                           0x80000000,
                           a1 + 728);
      if ( ContiguousMemory < 0 )
        goto LABEL_11;
      v13 = *(_QWORD *)(a1 + 736);
      v14 = v13;
      *a2 = 0x80000000;
      v13 |= 0xFFFFFFFFuLL;
      *(_QWORD *)(a1 + 4376) = v14 & 0xFFFFFFFF00000000uLL;
      *(_QWORD *)(a1 + 4368) = v13;
      StorFreeContiguousMemory(v13, a1 + 728);
LABEL_12:
      if ( ContiguousMemory >= 0 || v8 < 0x8000000 )
        return (unsigned int)ContiguousMemory;
    }
    ContiguousMemory = -1073741811;
LABEL_11:
    v8 >>= 1;
    goto LABEL_12;
  }
  return (unsigned int)ContiguousMemory;
}
