/*
 * XREFs of PopBuildMemoryImageHeader @ 0x1403F1BF0
 * Callers:
 *     PopEndMirroring @ 0x1403F1294 (PopEndMirroring.c)
 * Callees:
 *     MmGetHighestPhysicalPage @ 0x140045B2C (MmGetHighestPhysicalPage.c)
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     PoSetHiberRange @ 0x14014D3AC (PoSetHiberRange.c)
 *     memmove @ 0x140195740 (memmove.c)
 *     memset @ 0x140195A80 (memset.c)
 *     xHalQueryProcessorRestartEntryPoint @ 0x140195B9C (xHalQueryProcessorRestartEntryPoint.c)
 *     EvaluateCurrentState @ 0x140233034 (EvaluateCurrentState.c)
 *     PopAllocatePages @ 0x1403F26C8 (PopAllocatePages.c)
 *     PopBootLoaderTraceCopyPfnList @ 0x1403F27A4 (PopBootLoaderTraceCopyPfnList.c)
 */

__int64 __fastcall PopBuildMemoryImageHeader(_QWORD *MemoryMap, int a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 *v6; // rcx
  _QWORD *v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rax
  __int64 v10; // r14
  unsigned __int64 v11; // rsi
  PVOID *v12; // r14
  _DWORD *v13; // r14
  _DWORD *v14; // rbp
  int v15; // esi
  unsigned int v16; // esi
  void *Pages; // rax
  void *v18; // r12
  int v19; // eax
  __int64 v21; // [rsp+70h] [rbp+18h] BYREF

  v21 = 0LL;
  if ( a2 )
    return *((unsigned int *)MemoryMap + 47);
  v3 = MemoryMap[25];
  PoSetHiberRange(MemoryMap, 0x8000u, (PVOID)v3, 0x3B0uLL, 0x676D694Du);
  memset((void *)v3, 0, 0x1000uLL);
  *(_DWORD *)(v3 + 24) = 4096;
  *(_DWORD *)(v3 + 12) = 944;
  *(_QWORD *)(v3 + 16) = MmGetPhysicalAddress((PVOID)v3).QuadPart >> 12;
  *(_QWORD *)(v3 + 32) = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(v3 + 40) = MEMORY[0xFFFFF78000000008];
  *(_QWORD *)(v3 + 64) = *((_QWORD *)&xmmword_14032E8C8 + 1);
  *(_DWORD *)(v3 + 60) = 7;
  *(_QWORD *)(v3 + 48) = KeFeatureBits;
  *(_DWORD *)(v3 + 4) = (unsigned __int16)KeProcessorArchitecture;
  *(_BYTE *)(v3 + 56) = *((_BYTE *)MemoryMap + 1);
  *(_BYTE *)(v3 + 844) = byte_14032E8E0;
  *(_QWORD *)(v3 + 896) = MmGetHighestPhysicalPage(0);
  v4 = MemoryMap[15];
  if ( v4 )
    *(_DWORD *)(v3 + 72) = *(_DWORD *)(v4 + 40) >> 12;
  v5 = MemoryMap[40];
  if ( v5 )
  {
    v6 = (__int64 *)(v3 + 904);
    *(_QWORD *)(v3 + 904) = v5;
    v7 = (_QWORD *)(v3 + 912);
    v8 = 3LL;
    do
    {
      v9 = *v6++;
      *v7++ = v9 + 1;
      --v8;
    }
    while ( v8 );
  }
  off_1403219C8(&v21);
  *(_QWORD *)(v3 + 888) = v21;
  PopBootLoaderTraceCopyPfnList(MemoryMap);
  v10 = MemoryMap[29];
  if ( v10 )
  {
    v11 = (unsigned int)((*(_DWORD *)(v10 + 40) & 0xFFF) != 0) + (*(_DWORD *)(v10 + 40) >> 12);
    if ( v11 > 1 )
      v11 = 1LL;
    v12 = (PVOID *)(v10 + 48);
    memmove((void *)(v3 + 624), v12, 8 * v11);
    for ( *(_DWORD *)(v3 + 616) = v11; v11; --v11 )
      PoSetHiberRange(MemoryMap, 0xC000u, *v12++, 1uLL, 0x644D6946u);
  }
  else
  {
    *(_DWORD *)(v3 + 616) = 0;
  }
  v13 = (_DWORD *)MemoryMap[8];
  do
  {
    if ( v13 == (_DWORD *)(MemoryMap + 8) )
    {
      *(_DWORD *)(v3 + 936) = *((_DWORD *)MemoryMap + 114);
      LOBYTE(v19) = EvaluateCurrentState((int **)&g_Feature_Servicing_HibernateRelaxVBSPolicy_57571857_FeatureDescriptorDetails);
      if ( v19 )
        *(_BYTE *)(v3 + 940) = 1;
      return *((unsigned int *)MemoryMap + 47);
    }
    v14 = v13;
    v15 = v13[8] - v13[6];
    v13 = *(_DWORD **)v13;
    v16 = v15 & 0xFFFFF;
    Pages = (void *)PopAllocatePages(v16);
    v18 = Pages;
    if ( Pages )
      PoSetHiberRange(MemoryMap, 0x8000u, Pages, v16 << 12, 0x436C6F6Eu);
    else
      *((_DWORD *)MemoryMap + 47) = -1073741670;
    *((_QWORD *)v14 + 5) = v18;
  }
  while ( v18 );
  if ( (PoDebug & 0x80u) != 0 )
    DbgPrint(
      "PopBuildImage: Could not allocate clone for %p - %p\n",
      *((const void **)v14 + 3),
      *((const void **)v14 + 4));
  return 3221225626LL;
}
