/*
 * XREFs of PopBuildMemoryImageHeader @ 0x14039F1FC
 * Callers:
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x1400BC1BC (MmGetHighestPhysicalPage.c)
 *     MmGetPhysicalAddress @ 0x14010429C (MmGetPhysicalAddress.c)
 *     PoSetHiberRange @ 0x1401188B0 (PoSetHiberRange.c)
 *     memmove @ 0x140166980 (memmove.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     xHalQueryProcessorRestartEntryPoint @ 0x140166DE4 (xHalQueryProcessorRestartEntryPoint.c)
 *     PopAllocatePages @ 0x14039FBAC (PopAllocatePages.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  unsigned __int64 v7; // rbx
  __int64 v8; // r14
  _DWORD *v9; // r14
  _DWORD *v10; // r13
  int v11; // ebx
  unsigned int v12; // ebx
  void *Pages; // rax
  void *v14; // rbp
  __int64 *v16; // rcx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // rbx
  PVOID *v21; // r14
  __int64 v22; // [rsp+70h] [rbp+18h] BYREF

  v22 = 0LL;
  if ( !a2 )
  {
    v3 = MemoryMap[25];
    PoSetHiberRange(MemoryMap, 2u, (PVOID)v3, 0x3B0uLL, 0x676D694Du);
    memset((void *)v3, 0, 0x1000uLL);
    *(_DWORD *)(v3 + 24) = 4096;
    *(_DWORD *)(v3 + 12) = 944;
    *(_QWORD *)(v3 + 16) = MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
    *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v3 + 64) = *((_QWORD *)&xmmword_1402DE308 + 1);
    *(_DWORD *)(v3 + 60) = 7;
    *(_QWORD *)(v3 + 48) = KeFeatureBits;
    *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
    *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
    *(_BYTE *)(v3 + 844) = byte_1402DE320;
    *(_QWORD *)(v3 + 896) = MmGetHighestPhysicalPage(0);
    v4 = MemoryMap[15];
    if ( v4 )
      *(_DWORD *)(v3 + 72) = *(_DWORD *)(v4 + 40) >> 12;
    v5 = MemoryMap[40];
    if ( v5 )
    {
      v16 = (__int64 *)(v3 + 904);
      v17 = 3LL;
      *(_QWORD *)(v3 + 904) = v5;
      v18 = (_QWORD *)(v3 + 912);
      do
      {
        v19 = *v16++;
        *v18++ = v19 + 1;
        --v17;
      }
      while ( v17 );
    }
    off_1402D2878(&v22);
    *(_QWORD *)(v3 + 888) = v22;
    v6 = MemoryMap[27];
    if ( v6 )
    {
      v7 = (unsigned __int64)*(unsigned int *)(v6 + 40) >> 12;
      memmove((void *)(v3 + 640), (const void *)(v6 + 48), 8 * v7);
      *(_DWORD *)(v3 + 636) = v7;
    }
    else
    {
      *(_DWORD *)(v3 + 636) = 0;
    }
    v8 = MemoryMap[29];
    if ( v8 )
    {
      v20 = (unsigned int)((*(_DWORD *)(v8 + 40) & 0xFFF) != 0) + (*(_DWORD *)(v8 + 40) >> 12);
      if ( v20 > 1 )
        v20 = 1LL;
      v21 = (PVOID *)(v8 + 48);
      memmove((void *)(v3 + 624), v21, 8 * v20);
      for ( *(_DWORD *)(v3 + 616) = v20; v20; --v20 )
        PoSetHiberRange(MemoryMap, 0xC000u, *v21++, 1uLL, 0x644D6946u);
    }
    else
    {
      *(_DWORD *)(v3 + 616) = 0;
    }
    v9 = (_DWORD *)MemoryMap[8];
    while ( v9 != (_DWORD *)(MemoryMap + 8) )
    {
      v10 = v9;
      v11 = v9[8] - v9[6];
      v9 = *(_DWORD **)v9;
      v12 = v11 & 0xFFFFF;
      Pages = (void *)PopAllocatePages(v12);
      v14 = Pages;
      if ( Pages )
        PoSetHiberRange(MemoryMap, 0x8000u, Pages, v12 << 12, 0x436C6F6Eu);
      else
        *((_DWORD *)MemoryMap + 47) = -1073741670;
      *((_QWORD *)v10 + 5) = v14;
      if ( !v14 )
        return 3221225626LL;
    }
    *(_DWORD *)(v3 + 936) = *((_DWORD *)MemoryMap + 114);
  }
  return *((unsigned int *)MemoryMap + 47);
}
