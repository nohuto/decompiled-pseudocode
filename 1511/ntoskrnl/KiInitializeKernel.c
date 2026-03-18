/*
 * XREFs of KiInitializeKernel @ 0x1403A9234
 * Callers:
 *     KiSystemStartup @ 0x14039C010 (KiSystemStartup.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     KeCountSetBitsAffinityEx @ 0x140096030 (KeCountSetBitsAffinityEx.c)
 *     KeCompactServiceTable @ 0x140123BFC (KeCompactServiceTable.c)
 *     KiConfigureInitialNodes @ 0x140136838 (KiConfigureInitialNodes.c)
 *     KeGetXSaveFeatureFlags @ 0x140136D54 (KeGetXSaveFeatureFlags.c)
 *     HvlEnlightenProcessor @ 0x140136D9C (HvlEnlightenProcessor.c)
 *     HviGetHypervisorFeatures @ 0x140137088 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheck @ 0x140153DB0 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x140154B20 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiFatalFilter @ 0x1401C40A0 (KiFatalFilter.c)
 *     KiDetectFpuLeakage @ 0x14039C280 (KiDetectFpuLeakage.c)
 *     KiSetPageAttributesTable @ 0x1403A6428 (KiSetPageAttributesTable.c)
 *     KiEnableXSave @ 0x1403A6504 (KiEnableXSave.c)
 *     KiConfigureProcessorBlock @ 0x1403A90CC (KiConfigureProcessorBlock.c)
 *     KiCompleteKernelInit @ 0x1403A9A9C (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x1403A9D08 (KiInitializeIdleThread.c)
 *     PoInitializePrcb @ 0x1403A9E9C (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x1403A9F44 (KiSetCacheInformation.c)
 *     KeInitializeProcess @ 0x14044F998 (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x140530D90 (HvlPhase0Initialize.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     KiInitSystem @ 0x140766420 (KiInitSystem.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
{
  ULONG_PTR v9; // rdi
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // eax
  int v17; // ebx
  unsigned __int8 v18; // cl
  __int64 v19; // rax
  int v20; // eax
  int v21; // ecx
  int v22; // r10d
  int v23; // ecx
  int v24; // r11d
  int v25; // eax
  __int64 v26; // rdx
  unsigned int v27; // ecx
  int v28; // r8d
  int v29; // r9d
  ULONG_PTR v30; // rbx
  unsigned int v31; // eax
  unsigned int v32; // eax
  char XSaveFeatureFlags; // al
  unsigned int v34; // eax
  char v35; // cl
  __int64 v36; // rbx
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // rax
  int v39; // ecx
  ULONG_PTR v40; // r8
  __int64 v41; // rdi
  __int64 v42; // rbx
  __int64 result; // rax
  _BYTE v44[4]; // [rsp+70h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(_RBP + 96) = a3;
  *(_QWORD *)(_RBP + 88) = a2;
  *(_QWORD *)(_RBP + 56) = a1;
  *(_QWORD *)(_RBP + 112) = a2;
  *(_QWORD *)(_RBP + 104) = a4;
  *(_QWORD *)(_RBP + 48) = a6;
  *(_QWORD *)(_RBP + 80) = a6;
  if ( a5 )
  {
    _R14D = 1;
  }
  else
  {
    HvlPhase0Initialize(a6);
    _R14D = 1;
    if ( KiSystemCallSelector == 1 && (HvlEnlightenments & 0x80000) != 0 )
      MEMORY[0xFFFFF78000000308] = 1;
  }
  v9 = *(_QWORD *)(a4 + 25192);
  memset((void *)(_RBP + 176), 0, 0x200uLL);
  _fxsave((void *)(_RBP + 176));
  if ( a5 )
  {
    if ( KiFpuLeakage )
      v9 |= 0x20000000000uLL;
    KiSetPageAttributesTable();
    *(_QWORD *)(a4 + 24600) = 1310721LL;
    memset((void *)(a4 + 24608), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24600), a5);
    *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a4;
    v18 = *(_BYTE *)(a4 + 1598);
    if ( v18 == 1 && *(_BYTE *)(a4 + 1599) == 1 )
    {
      v19 = *(_QWORD *)(a4 + 1608);
    }
    else
    {
      v20 = *(unsigned __int8 *)(a4 + 1599);
      v21 = v20 * v18;
      *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v21;
      v22 = ~(v21 - 1);
      *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v22;
      v23 = *(_DWORD *)(a4 + 1620);
      v24 = v22 & v23;
      *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v22 & v23;
      v25 = ~(v20 - 1);
      *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v25;
      *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = v25 & v23;
      v26 = *(_QWORD *)(a4 + 1608);
      *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v26;
      *(_BYTE *)_RBP = 0;
      v27 = 0;
      *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v28 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
        v29 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
        do
        {
          v30 = KiProcessorBlock[v27];
          if ( (v22 & *(_DWORD *)(v30 + 1620)) == v24 )
          {
            KeAddProcessorAffinityEx((_WORD *)(a4 + 24600), v27);
            KeAddProcessorAffinityEx((_WORD *)(v30 + 24600), a5);
            if ( !*(_BYTE *)_RBP )
            {
              *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v30;
              *(_BYTE *)_RBP = 1;
            }
            v31 = KeCountSetBitsAffinityEx((_WORD *)(v30 + 24600));
            if ( v31 > *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 4) )
              KeBugCheckEx(0x3Eu, v30, v31, *(unsigned __int8 *)(v30 + 1598), *(unsigned __int8 *)(v30 + 1599));
            v27 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            v26 = *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
            v28 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
            v29 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
            v22 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
            v24 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          }
          if ( (v28 & *(_DWORD *)(v30 + 1620)) == v29 && *(_QWORD *)(v30 + 1600) == *(_QWORD *)(a4 + 1600) )
          {
            v26 |= *(_QWORD *)(v30 + 1608);
            *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v26;
            *(_QWORD *)(v30 + 24792) |= v26;
          }
          *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = ++v27;
        }
        while ( v27 < (unsigned int)KeNumberProcessors_0 );
      }
      v32 = KeCountSetBitsAffinityEx((_WORD *)(a4 + 24600));
      if ( v32 > *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 4) )
        KeBugCheckEx(0x3Eu, a4, v32, *(unsigned __int8 *)(a4 + 1598), *(unsigned __int8 *)(a4 + 1599));
      v19 = *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
    }
    v17 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC);
    *(_QWORD *)(a4 + 24792) = v19;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v10;
    if ( v10 )
      v9 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 2LL;
      *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
      __asm { invpcid r14d, [rbp+2F0h+var_278] }
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
    KiSetPageAttributesTable();
    if ( MEMORY[0xFFFFF78000000280] )
      v9 |= 0x80000000uLL;
    else
      v9 = v9 & 0xFFFFFFFF3FFFFFFFuLL | 0x40000000;
    v13 = __readcr4();
    __writecr4(v13 | 0x18);
    if ( KiFlushPcid )
    {
      *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 2LL;
      *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0LL;
      __asm { invpcid r14d, [rbp+2F0h+var_268] }
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
    KiConfigureInitialNodes(a4);
    KiConfigureProcessorBlock(a4);
    *(_QWORD *)(a4 + 24600) = 1310721LL;
    memset((void *)(a4 + 24608), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24600), 0);
    *(_QWORD *)(a4 + 24792) = *(_QWORD *)(a4 + 1608);
    *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a4;
    v16 = 65471;
    v17 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC);
    if ( v17 )
      v16 = *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC);
    KiMxCsrMask = v16;
    KeCompactServiceTable((int *)&KiServiceTable, KiArgumentTable, KiServiceLimit, 0);
  }
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)a4);
  *(_QWORD *)(a4 + 24856) = 0LL;
  *(_QWORD *)(a4 + 24864) = a4 + 24864;
  if ( MEMORY[0xFFFFF780000003D8] )
  {
    v9 |= 0x800000uLL;
    XSaveFeatureFlags = KeGetXSaveFeatureFlags();
    if ( (XSaveFeatureFlags & 8) != 0 )
      v9 |= 0x8000uLL;
    if ( (XSaveFeatureFlags & 0x10) != 0 )
      v9 |= 0x4000000000uLL;
  }
  if ( a5 )
  {
    v39 = 65471;
    if ( v17 )
      v39 = v17;
    if ( (v9 & 0x8000000) != 0 )
      v40 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    else
      v40 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 1597) == 2
      && *(_BYTE *)(a4 + 1520) == 6
      && *(_BYTE *)(a4 + 1523) == 23
      && *(_BYTE *)(a4 + 1522) == 10 )
    {
      v9 &= ~0x100000uLL;
      if ( (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 25192LL) & 0x100000) != 0 )
        v9 |= 0x100000uLL;
    }
    if ( (v40 & 1) == 0 )
      v9 &= ~1uLL;
    if ( (v40 & 0x10000000) == 0 )
      v9 &= ~0x10000000uLL;
    if ( v9 != v40
      || v39 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 1640) != *(_DWORD *)(a4 + 1640)
      || *(_BYTE *)(KiProcessorBlock[0] + 1598) != *(_BYTE *)(a4 + 1598)
      || *(_BYTE *)(KiProcessorBlock[0] + 1599) != *(_BYTE *)(a4 + 1599) )
    {
      KeBugCheckEx(0x3Eu, v9, v40, 0LL, 0LL);
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor();
    v36 = *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  }
  else
  {
    KeProcessorArchitecture = 9;
    KeProcessorLevel = *(char *)(a4 + 1520);
    KeProcessorRevision = *(_WORD *)(a4 + 1522);
    KeFeatureBits = v9;
    __writecr8(1uLL);
    KiFreezeExecutionLock = 0LL;
    KiInitSystem();
    qword_1402E88A8 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    v34 = (unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6;
    v35 = KiProcessorIndexToNumberMappingTable[0] & 0x3F;
    *(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4A) = 0;
    *(_WORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4E) = 0;
    *(_WORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v34;
    *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 1LL << v35;
    v36 = *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    KeInitializeProcess(v36, 0, _RBP + 64, 0, 0LL, 1);
    *(_BYTE *)(v36 + 445) = 127;
    v37 = __rdtsc();
    KiWaitNever = __ROR8__(v37 ^ __ROL8__(v37, 43), v37 & 0xF);
    v38 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v38, 47) ^ v38, v38 & 0xF);
    HviGetHypervisorFeatures((_DWORD *)(_RBP + 152));
    if ( (*(_DWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) & 0x1000) != 0 )
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
  v41 = *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  KiInitializeIdleThread(v41, *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x60), v36, a4);
  if ( a5 )
  {
    if ( !(unsigned __int8)HalInitSystem(1LL, 0LL) )
      KeBugCheck(0x5Cu);
    v42 = *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
  }
  else
  {
    v42 = *(_QWORD *)(((unsigned __int64)v44 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    InitBootProcessor(v42);
  }
  result = KiCompleteKernelInit(a4, v41, a5);
  *(_QWORD *)(v42 + 136) = 0LL;
  return result;
}
