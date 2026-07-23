/*
 * XREFs of PopBuildMemoryImageHeader @ 0x1403CAA04
 * Callers:
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x14000F70C (MmGetHighestPhysicalPage.c)
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     PoSetHiberRange @ 0x1401133D0 (PoSetHiberRange.c)
 *     memmove @ 0x140171780 (memmove.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     xHalQueryProcessorRestartEntryPoint @ 0x140171C1C (xHalQueryProcessorRestartEntryPoint.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x1403C973C (PopBootLoaderTraceCopyPfnList.c)
 *     PopAllocatePages @ 0x1403CB8DC (PopAllocatePages.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // r14
  _DWORD *v7; // rsi
  _DWORD *v8; // r13
  int v9; // ecx
  __int64 v10; // r15
  void *Pages; // rax
  void *v12; // rbp
  __int64 *v14; // rcx
  __int64 v15; // r8
  _QWORD *v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // rsi
  PVOID *v19; // r14
  __int64 v20; // [rsp+70h] [rbp+18h] BYREF

  v20 = 0LL;
  if ( !a2 )
  {
    v3 = MemoryMap[25];
    PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)v3, 0x3C8uLL, 0x676D694Du);
    memset((void *)v3, 0, 0x1000uLL);
    *(_DWORD *)(v3 + 24) = 4096;
    *(_DWORD *)(v3 + 12) = 968;
    *(_QWORD *)(v3 + 16) = (unsigned __int64)MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
    *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
    *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
    *(_QWORD *)(v3 + 64) = *((_QWORD *)&xmmword_1403034E8 + 1);
    *(_DWORD *)(v3 + 60) = 7;
    *(_QWORD *)(v3 + 48) = KeFeatureBits;
    *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
    *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
    *(_BYTE *)(v3 + 852) = byte_140303500;
    *(_QWORD *)(v3 + 904) = MmGetHighestPhysicalPage();
    v4 = MemoryMap[15];
    if ( v4 )
      *(_DWORD *)(v3 + 72) = *(_DWORD *)(v4 + 40) >> 12;
    v5 = MemoryMap[40];
    if ( v5 )
    {
      v14 = (__int64 *)(v3 + 912);
      v15 = 3LL;
      *(_QWORD *)(v3 + 912) = v5;
      v16 = (_QWORD *)(v3 + 920);
      do
      {
        v17 = *v14++;
        *v16++ = v17 + 1;
        --v15;
      }
      while ( v15 );
    }
    off_1402F2518(&v20);
    *(_QWORD *)(v3 + 896) = v20;
    PopBootLoaderTraceCopyPfnList(MemoryMap, v3);
    v6 = MemoryMap[29];
    if ( v6 )
    {
      v18 = (unsigned int)((*(_DWORD *)(v6 + 40) & 0xFFF) != 0) + (*(_DWORD *)(v6 + 40) >> 12);
      if ( v18 > 1 )
        v18 = 1LL;
      v19 = (PVOID *)(v6 + 48);
      memmove((void *)(v3 + 632), v19, 8 * v18);
      for ( *(_DWORD *)(v3 + 624) = v18; v18; --v18 )
        PoSetHiberRange(MemoryMap, 0xC000u, *v19++, 1uLL, 0x644D6946u);
    }
    else
    {
      *(_DWORD *)(v3 + 624) = 0;
    }
    v7 = (_DWORD *)MemoryMap[8];
    while ( v7 != (_DWORD *)(MemoryMap + 8) )
    {
      v8 = v7;
      v9 = v7[8] - v7[6];
      v7 = *(_DWORD **)v7;
      v10 = v9 & 0xFFFFF;
      Pages = (void *)PopAllocatePages();
      v12 = Pages;
      if ( Pages )
        PoSetHiberRange(MemoryMap, 0x8000u, Pages, v10 << 12, 0x436C6F6Eu);
      else
        *((_DWORD *)MemoryMap + 47) = -1073741670;
      *((_QWORD *)v8 + 5) = v12;
      if ( !v12 )
        return 3221225626LL;
    }
    *(_DWORD *)(v3 + 944) = *((_DWORD *)MemoryMap + 114);
  }
  return *((unsigned int *)MemoryMap + 47);
}
