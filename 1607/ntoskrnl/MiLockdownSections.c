/*
 * XREFs of MiLockdownSections @ 0x140482734
 * Callers:
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MiInitializeLoadedModuleList @ 0x1407B1234 (MiInitializeLoadedModuleList.c)
 * Callees:
 *     RtlImageNtHeader @ 0x140013DB8 (RtlImageNtHeader.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 */

void __fastcall MiLockdownSections(__int64 a1)
{
  void *v1; // rbp
  int v2; // ebx
  PIMAGE_NT_HEADERS v4; // rax
  _RTL_BITMAP *v5; // r14
  int NumberOfSections; // esi
  __int64 v7; // rdi
  int v8; // eax
  __int64 v9; // r8

  v1 = *(void **)(a1 + 48);
  v2 = 0;
  if ( (MiFlags & 0x4000) != 0 && (!*(_QWORD *)(a1 + 112) || (*(_DWORD *)(a1 + 196) & 3) != 0) )
    v2 = 2;
  if ( (unsigned __int64)v1 < qword_140326950 || (unsigned __int64)v1 >= qword_140326950 + 0x8000000000LL )
    v2 |= 1u;
  if ( v2 )
  {
    v4 = RtlImageNtHeader(v1);
    v5 = *(_RTL_BITMAP **)(a1 + 240);
    NumberOfSections = v4->FileHeader.NumberOfSections;
    v7 = (__int64)&v4->OptionalHeader + v4->FileHeader.SizeOfOptionalHeader;
    while ( NumberOfSections > 0 )
    {
      v8 = 0;
      if ( *(_DWORD *)v7 == 1987011374 )
        v8 = *(_WORD *)(v7 + 4) == 29285;
      if ( (*(_DWORD *)(v7 + 36) & 0x20000000) != 0 )
        v8 |= 2u;
      if ( (v8 & v2) != 0 )
      {
        v9 = *(unsigned int *)(v7 + 8);
        if ( *(_DWORD *)(v7 + 16) >= (unsigned int)v9 )
          v9 = *(unsigned int *)(v7 + 16);
        RtlSetBits(
          v5,
          *(_DWORD *)(v7 + 12) >> 12,
          ((((unsigned __int64)v1 + *(unsigned int *)(v7 + 12) + v9 + 4095) & 0xFFFFFFFFFFFFF000uLL)
         - ((unsigned __int64)v1
          + *(unsigned int *)(v7 + 12))) >> 12);
      }
      --NumberOfSections;
      v7 += 40LL;
    }
  }
}
