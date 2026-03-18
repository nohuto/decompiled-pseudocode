/*
 * XREFs of KiInitializeKernel @ 0x1403F8DE8
 * Callers:
 *     KiSystemStartup @ 0x1403EB010 (KiSystemStartup.c)
 * Callees:
 *     KeCompactServiceTable @ 0x1401533D8 (KeCompactServiceTable.c)
 *     KeGetXSaveFeatureFlags @ 0x140163334 (KeGetXSaveFeatureFlags.c)
 *     HvlEnlightenProcessor @ 0x14016337C (HvlEnlightenProcessor.c)
 *     KiAddProcessorToGroupDatabase @ 0x140163584 (KiAddProcessorToGroupDatabase.c)
 *     KiCommitNodeAssignment @ 0x14016DCE8 (KiCommitNodeAssignment.c)
 *     HviGetHypervisorFeatures @ 0x14016F420 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     KeBugCheck @ 0x140182740 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x140183710 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiFatalFilter @ 0x14020022C (KiFatalFilter.c)
 *     KiDetectBpbMsr @ 0x1402086D0 (KiDetectBpbMsr.c)
 *     KiEnableXSave @ 0x1403F6C7C (KiEnableXSave.c)
 *     KiCompleteKernelInit @ 0x1403F98E4 (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x1403F9B84 (KiInitializeIdleThread.c)
 *     PoInitializePrcb @ 0x1403F9D18 (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x1403F9DC0 (KiSetCacheInformation.c)
 *     KiConfigureProcessorBlock @ 0x1403FA778 (KiConfigureProcessorBlock.c)
 *     KiCheckMicrocode @ 0x140401554 (KiCheckMicrocode.c)
 *     KeInitializeProcess @ 0x14046A3F4 (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x1405C0150 (HvlPhase0Initialize.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     KiInitSystem @ 0x1407E496C (KiInitSystem.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
{
  ULONG_PTR v7; // rbx
  unsigned int v8; // r13d
  unsigned __int64 v9; // rdi
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  unsigned int v16; // ecx
  char *v17; // rdx
  _WORD *v18; // r8
  __int64 v19; // rcx
  char v20; // r8
  int v21; // r12d
  int v22; // eax
  int v23; // r15d
  __int64 v24; // rcx
  int v25; // r8d
  unsigned __int8 v26; // cl
  int v27; // eax
  unsigned int v28; // r11d
  int v29; // edx
  int v30; // r15d
  int v31; // r8d
  int v32; // r14d
  int v33; // r15d
  __int64 v34; // r12
  unsigned int i; // r9d
  ULONG_PTR v36; // r10
  __int64 v37; // rcx
  int v38; // r8d
  __int64 v39; // rcx
  int v40; // r8d
  ULONG_PTR v41; // r8
  unsigned __int16 v42; // ax
  _QWORD *v43; // r13
  __int64 v44; // rdi
  unsigned __int64 v45; // rcx
  ULONG_PTR v46; // r8
  unsigned __int16 v47; // ax
  _QWORD *v48; // r9
  __int64 v49; // r10
  unsigned __int64 v50; // rcx
  char XSaveFeatureFlags; // al
  unsigned int v52; // eax
  char v53; // cl
  __int64 v54; // r14
  unsigned __int64 v55; // rax
  unsigned __int64 v56; // rax
  ULONG_PTR v57; // r8
  __int64 v58; // r8
  __int64 v59; // r14
  __int64 v60; // rdi
  __int64 result; // rax
  char v62; // [rsp+70h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL;
  v7 = a4;
  *(_QWORD *)(_RBP + 120) = a4;
  *(_QWORD *)(_RBP + 96) = a3;
  *(_QWORD *)(_RBP + 104) = a2;
  *(_QWORD *)(_RBP + 64) = a1;
  *(_QWORD *)(_RBP + 128) = a2;
  *(_QWORD *)(_RBP + 88) = a4;
  *(_QWORD *)(_RBP + 48) = a6;
  *(_QWORD *)(_RBP + 112) = a6;
  v8 = a5;
  if ( !a5 )
    HvlPhase0Initialize(a6);
  v9 = *(_QWORD *)(v7 + 25192);
  *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38) = v9;
  _R15D = 1;
  if ( (unsigned __int8)(*(_BYTE *)(v7 + 1597) - 1) <= 1u )
    KiDetectBpbMsr(v7, v9);
  KiCheckMicrocode(v7);
  memset((void *)(_RBP + 192), 0, 0x200uLL);
  _fxsave((void *)(_RBP + 192));
  if ( a5 )
  {
    *(_QWORD *)(v7 + 24600) = 1310721LL;
    memset((void *)(v7 + 24608), 0, 0xA0uLL);
    v24 = (unsigned int)KiProcessorIndexToNumberMappingTable[a5] >> 6;
    v25 = KiProcessorIndexToNumberMappingTable[a5] & 0x3F;
    if ( *(unsigned __int16 *)(v7 + 24600) <= (unsigned int)v24 )
      *(_WORD *)(v7 + 24600) = v24 + 1;
    *(_QWORD *)(v7 + 8LL * (unsigned int)v24 + 24608) = *(_QWORD *)(v7 + 8 * v24 + 24608) | (1LL << v25);
    *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v7;
    v26 = *(_BYTE *)(v7 + 1598);
    if ( v26 == 1 && *(_BYTE *)(v7 + 1599) == 1 )
    {
      *(_QWORD *)(v7 + 24792) = *(_QWORD *)(v7 + 1608);
    }
    else
    {
      v27 = *(unsigned __int8 *)(v7 + 1599);
      v28 = v27 * v26;
      *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v28;
      v29 = ~(v28 - 1);
      *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v29;
      v30 = *(_DWORD *)(v7 + 1620);
      v31 = v29 & v30;
      *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v29 & v30;
      v32 = ~(v27 - 1);
      *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C) = v32;
      v33 = v32 & v30;
      *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v33;
      v34 = *(_QWORD *)(v7 + 1608);
      *(_BYTE *)_RBP = 0;
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        v36 = KiProcessorBlock[i];
        if ( (v29 & *(_DWORD *)(v36 + 1620)) == v31 )
        {
          v37 = (unsigned int)KiProcessorIndexToNumberMappingTable[i] >> 6;
          v38 = KiProcessorIndexToNumberMappingTable[i] & 0x3F;
          if ( *(unsigned __int16 *)(v7 + 24600) <= (unsigned int)v37 )
            *(_WORD *)(v7 + 24600) = v37 + 1;
          *(_QWORD *)(v7 + 8LL * (unsigned int)v37 + 24608) = *(_QWORD *)(v7 + 8 * v37 + 24608) | (1LL << v38);
          v39 = (unsigned int)KiProcessorIndexToNumberMappingTable[v8] >> 6;
          v40 = KiProcessorIndexToNumberMappingTable[v8] & 0x3F;
          if ( *(unsigned __int16 *)(v36 + 24600) <= (unsigned int)v39 )
            *(_WORD *)(v36 + 24600) = v39 + 1;
          *(_QWORD *)(v36 + 8LL * (unsigned int)v39 + 24608) = *(_QWORD *)(v36 + 8 * v39 + 24608) | (1LL << v40);
          if ( !*(_BYTE *)_RBP )
          {
            *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v36;
            *(_BYTE *)_RBP = 1;
          }
          v41 = 0LL;
          v42 = *(_WORD *)(v36 + 24600);
          if ( v42 )
          {
            v43 = (_QWORD *)(v36 + 24608);
            v44 = v42;
            do
            {
              v45 = ((*v43 - ((*v43 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
                  + (((*v43 - ((*v43 >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL);
              v41 = ((unsigned int)((0x101010101010101LL * ((v45 + (v45 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
                  + (unsigned int)v41;
              ++v43;
              --v44;
            }
            while ( v44 );
            v7 = *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78);
            v9 = *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
            v8 = a5;
            v28 = *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            v32 = *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x1C);
            v33 = *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
          }
          if ( (unsigned int)v41 > v28 )
            KeBugCheckEx(0x3Eu, v36, v41, *(unsigned __int8 *)(v36 + 1598), *(unsigned __int8 *)(v36 + 1599));
          v29 = *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          v31 = *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
        }
        if ( (v32 & *(_DWORD *)(v36 + 1620)) == v33 && *(_QWORD *)(v36 + 1600) == *(_QWORD *)(v7 + 1600) )
        {
          v34 |= *(_QWORD *)(v36 + 1608);
          *(_QWORD *)(v36 + 24792) |= v34;
        }
      }
      v46 = 0LL;
      v47 = *(_WORD *)(v7 + 24600);
      if ( v47 )
      {
        v48 = (_QWORD *)(v7 + 24608);
        v49 = v47;
        do
        {
          v50 = ((*v48 - ((*v48 >> 1) & 0x5555555555555555LL)) & 0x3333333333333333LL)
              + (((*v48 - ((*v48 >> 1) & 0x5555555555555555uLL)) >> 2) & 0x3333333333333333LL);
          v46 = ((unsigned int)((0x101010101010101LL * ((v50 + (v50 >> 4)) & 0xF0F0F0F0F0F0F0FLL)) >> 32) >> 24)
              + (unsigned int)v46;
          ++v48;
          --v49;
        }
        while ( v49 );
        v9 = *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
        v8 = a5;
        v28 = *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
      }
      if ( (unsigned int)v46 > v28 )
        KeBugCheckEx(0x3Eu, v7, v46, *(unsigned __int8 *)(v7 + 1598), *(unsigned __int8 *)(v7 + 1599));
      *(_QWORD *)(v7 + 24792) = v34;
    }
    v23 = *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xDC);
    v21 = 65471;
  }
  else
  {
    if ( KiFlushPcid )
    {
      *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 2LL;
      *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0LL;
      __asm { invpcid r15d, [rbp+300h+var_278] }
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v11 = __readcr4();
      if ( (v11 & 0x20080) != 0 )
      {
        __writecr4(v11 ^ 0x80);
        __writecr4(v11);
      }
      else
      {
        v12 = __readcr3();
        __writecr3(v12);
      }
    }
    *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 459014;
    *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 459014;
    __wbinvd();
    __writemsr(0x277u, *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 8));
    __wbinvd();
    if ( MEMORY[0xFFFFF78000000280] )
      v9 |= 0x80000000uLL;
    else
      v9 = v9 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    v13 = __readcr4();
    __writecr4(v13 | 0x18);
    if ( KiFlushPcid )
    {
      *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x98) = 2LL;
      *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA0) = 0LL;
      __asm { invpcid r15d, [rbp+300h+var_268] }
      if ( !KeGetCurrentThread()->ApcState.Process->AddressPolicy )
        KiSetUserTbFlushPending();
    }
    else
    {
      v14 = __readcr4();
      if ( (v14 & 0x20080) != 0 )
      {
        __writecr4(v14 ^ 0x80);
        __writecr4(v14);
      }
      else
      {
        v15 = __readcr3();
        __writecr3(v15);
      }
    }
    byte_1403E52AC = KiMaximumGroupSize;
    byte_1403E52AD |= 2u;
    byte_1403E5296 = 1;
    KeNodeBlock[0] = (__int64)&ExNode0;
    KiCommitNodeAssignment((__int64)&ExNode0);
    *(_QWORD *)(v7 + 1600) = KeNodeBlock[0];
    qword_1403E5250 |= 1uLL;
    *(_BYTE *)(v7 + 35) = 1;
    KiAddProcessorToGroupDatabase(v7, 0);
    v16 = 1;
    v17 = (char *)&unk_1403E4448;
    v18 = &unk_140780400;
    do
    {
      *(_QWORD *)v17 = v18;
      v18[73] = v16;
      *(_BYTE *)(*(_QWORD *)v17 + 150LL) = 1;
      ++v16;
      v18 += 128;
      v17 += 8;
    }
    while ( v16 < 0x40 );
    KiConfigureProcessorBlock(v7, v17, v18);
    *(_QWORD *)(v7 + 24600) = 1310721LL;
    memset((void *)(v7 + 24608), 0, 0xA0uLL);
    v19 = (unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6;
    v20 = KiProcessorIndexToNumberMappingTable[0] & 0x3F;
    if ( *(unsigned __int16 *)(v7 + 24600) <= (unsigned int)v19 )
      *(_WORD *)(v7 + 24600) = v19 + 1;
    *(_QWORD *)(v7 + 8LL * (unsigned int)v19 + 24608) = *(_QWORD *)(v7 + 8 * v19 + 24608) | (1LL << v20);
    *(_QWORD *)(v7 + 24792) = *(_QWORD *)(v7 + 1608);
    *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v7;
    v21 = 65471;
    v22 = 65471;
    v23 = *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xDC);
    if ( v23 )
      v22 = *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xDC);
    KiMxCsrMask = v22;
    KeCompactServiceTable((int *)&KiServiceTable, KiArgumentTable, KiServiceLimit, 0);
  }
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)v7);
  *(_QWORD *)(v7 + 24856) = 0LL;
  *(_QWORD *)(v7 + 24864) = v7 + 24864;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v9 |= 0x800000uLL;
    XSaveFeatureFlags = KeGetXSaveFeatureFlags();
    if ( (XSaveFeatureFlags & 8) != 0 )
      v9 |= 0x8000uLL;
    if ( (XSaveFeatureFlags & 0x10) != 0 )
      v9 |= 0x4000000000uLL;
  }
  if ( v8 )
  {
    if ( v23 )
      v21 = v23;
    if ( (v9 & 0x8000000) != 0 )
      v57 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    else
      v57 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(v7 + 1597) == 2
      && *(_BYTE *)(v7 + 1520) == 6
      && *(_BYTE *)(v7 + 1523) == 23
      && *(_BYTE *)(v7 + 1522) == 10 )
    {
      v9 &= ~0x100000uLL;
      if ( (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 25192LL) & 0x100000) != 0 )
        v9 |= 0x100000uLL;
    }
    if ( (v57 & 1) == 0 )
      v9 &= ~1uLL;
    if ( (v57 & 0x10000000) == 0 )
      v9 &= ~0x10000000uLL;
    if ( v9 != v57
      || v21 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 1640) != *(_DWORD *)(v7 + 1640)
      || *(_BYTE *)(KiProcessorBlock[0] + 1598) != *(_BYTE *)(v7 + 1598)
      || *(_BYTE *)(KiProcessorBlock[0] + 1599) != *(_BYTE *)(v7 + 1599) )
    {
      KeBugCheckEx(0x3Eu, v9, v57, 0LL, 0LL);
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor();
    v54 = *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = *(char *)(v7 + 1520);
    KeProcessorRevision = *(_WORD *)(v7 + 1522);
    KeFeatureBits = v9;
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem();
    qword_140338D28 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    v52 = (unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6;
    v53 = KiProcessorIndexToNumberMappingTable[0] & 0x3F;
    *(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x52) = 0;
    *(_WORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x56) = 0;
    *(_WORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50) = v52;
    *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = 1LL << v53;
    v54 = *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40);
    KeInitializeProcess(v54, 0, _RBP + 72, 0, 0LL, 1);
    *(_BYTE *)(v54 + 445) = 127;
    v55 = __rdtsc();
    KiWaitNever = __ROR8__(v55 ^ __ROL8__(v55, 43), v55 & 0xF);
    v56 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v56, 47) ^ v56, v56 & 0xF);
    HviGetHypervisorFeatures((_DWORD *)(_RBP + 168));
    if ( (*(_DWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0xB4) & 0x1000) != 0 )
      KiNPIEPEnabled = 1;
  }
  if ( KiNPIEPEnabled )
    __writemsr(0x40000040u, 0xFuLL);
  KiEnableXSave();
  MEMORY[0xFFFFF780000002F8] = 195LL;
  MEMORY[0xFFFFF78000000276] = 1;
  MEMORY[0xFFFFF78000000277] = 1;
  MEMORY[0xFFFFF7800000027A] = 1;
  MEMORY[0xFFFFF7800000027C] = 1;
  MEMORY[0xFFFFF7800000027D] = 1;
  MEMORY[0xFFFFF7800000027E] = 1;
  MEMORY[0xFFFFF78000000282] = 1;
  if ( (v9 & 0x80000) != 0 )
    MEMORY[0xFFFFF78000000281] = 1;
  if ( (v9 & 0x4000) != 0 )
    MEMORY[0xFFFFF7800000027B] = 1;
  if ( (v9 & 0x800000) != 0 )
    MEMORY[0xFFFFF78000000285] = 1;
  if ( (v9 & 0x10000000) != 0 )
    MEMORY[0xFFFFF7800000028A] = 1;
  if ( (v9 & 0x4000000) != 0 )
    MEMORY[0xFFFFF78000000288] = 1;
  if ( (v9 & 0x8000000) != 0 )
    MEMORY[0xFFFFF78000000289] = 1;
  if ( (v9 & 0x100000000LL) != 0 )
    MEMORY[0xFFFFF78000000290] = 1;
  if ( (v9 & 0x400000000LL) != 0 )
    MEMORY[0xFFFFF78000000294] = 1;
  v58 = v54;
  v59 = *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x68);
  KiInitializeIdleThread(v59, *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60), v58, v7);
  if ( v8 )
  {
    if ( !(unsigned __int8)HalInitSystem(1LL, 0LL) )
      KeBugCheck(0x5Cu);
    v60 = *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  }
  else
  {
    v60 = *(_QWORD *)(((unsigned __int64)&v62 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    InitBootProcessor(v60);
  }
  result = KiCompleteKernelInit(v7, v59, v8);
  *(_QWORD *)(v60 + 136) = 0LL;
  return result;
}
