/*
 * XREFs of KiInitializeKernel @ 0x1403D3DE0
 * Callers:
 *     KiSystemStartup @ 0x1403C8010 (KiSystemStartup.c)
 * Callees:
 *     PsGetCurrentProcess @ 0x140014200 (PsGetCurrentProcess.c)
 *     KeCountSetBitsAffinityEx @ 0x1400C6910 (KeCountSetBitsAffinityEx.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeCompactServiceTable @ 0x14012DF9C (KeCompactServiceTable.c)
 *     KiConfigureInitialNodes @ 0x140139898 (KiConfigureInitialNodes.c)
 *     KeGetXSaveFeatureFlags @ 0x14013A080 (KeGetXSaveFeatureFlags.c)
 *     HvlEnlightenProcessor @ 0x14013A0C8 (HvlEnlightenProcessor.c)
 *     HviGetHypervisorFeatures @ 0x14014B494 (HviGetHypervisorFeatures.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheck @ 0x14015DA60 (KeBugCheck.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiSetUserTbFlushPending @ 0x14015EE60 (KiSetUserTbFlushPending.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiFatalFilter @ 0x1401D29E4 (KiFatalFilter.c)
 *     KiDetectBpbMsr @ 0x1401D9638 (KiDetectBpbMsr.c)
 *     KiDetectFpuLeakage @ 0x1403C8280 (KiDetectFpuLeakage.c)
 *     KiSetPageAttributesTable @ 0x1403D2A1C (KiSetPageAttributesTable.c)
 *     KiEnableXSave @ 0x1403D2C80 (KiEnableXSave.c)
 *     KiConfigureProcessorBlock @ 0x1403D3C64 (KiConfigureProcessorBlock.c)
 *     KiCompleteKernelInit @ 0x1403D46A0 (KiCompleteKernelInit.c)
 *     KiInitializeIdleThread @ 0x1403D4908 (KiInitializeIdleThread.c)
 *     PoInitializePrcb @ 0x1403D4A9C (PoInitializePrcb.c)
 *     KiSetCacheInformation @ 0x1403D4B68 (KiSetCacheInformation.c)
 *     KiCheckMicrocode @ 0x1403DD0B8 (KiCheckMicrocode.c)
 *     KeInitializeProcess @ 0x14046DD48 (KeInitializeProcess.c)
 *     HvlPhase0Initialize @ 0x14057DA80 (HvlPhase0Initialize.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     KiInitSystem @ 0x1407B29AC (KiInitSystem.c)
 */

__int64 __fastcall KiInitializeKernel(__int64 a1, __int64 a2, __int64 a3, ULONG_PTR a4, unsigned int a5, __int64 a6)
{
  ULONG_PTR v9; // rsi
  int v10; // eax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rax
  int v16; // ebx
  int v17; // eax
  unsigned __int8 v18; // cl
  int v19; // eax
  int v20; // ecx
  int v21; // r10d
  int v22; // ecx
  int v23; // r11d
  int v24; // eax
  __int64 v25; // rdx
  unsigned int v26; // ecx
  int v27; // r8d
  int v28; // r9d
  ULONG_PTR v29; // rbx
  unsigned int v30; // eax
  unsigned int v31; // eax
  char XSaveFeatureFlags; // al
  unsigned int v33; // eax
  char v34; // cl
  __int64 v35; // rbx
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rax
  ULONG_PTR v38; // r8
  __int64 v39; // rsi
  __int64 v40; // rbx
  __int64 result; // rax
  _BYTE v42[4]; // [rsp+70h] [rbp+0h] BYREF

  _RBP = (unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL;
  *(_QWORD *)(_RBP + 80) = a3;
  *(_QWORD *)(_RBP + 88) = a2;
  *(_QWORD *)(_RBP + 48) = a1;
  *(_QWORD *)(_RBP + 96) = a2;
  *(_QWORD *)(_RBP + 104) = a4;
  *(_QWORD *)(_RBP + 56) = a6;
  *(_QWORD *)(_RBP + 112) = a6;
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
  v9 = *(_QWORD *)(a4 + 25320);
  if ( (unsigned __int8)(*(_BYTE *)(a4 + 1597) - 1) <= 1u )
    KiDetectBpbMsr(a4, *(_QWORD *)(a4 + 25320));
  KiCheckMicrocode(a4);
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
    *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a4;
    v18 = *(_BYTE *)(a4 + 1598);
    if ( v18 == 1 && *(_BYTE *)(a4 + 1599) == 1 )
    {
      *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 1608);
      *(_DWORD *)(a4 + 24768) = *(_DWORD *)(a4 + 1620);
    }
    else
    {
      v19 = *(unsigned __int8 *)(a4 + 1599);
      v20 = v19 * v18;
      *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v20;
      v21 = ~(v20 - 1);
      *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14) = v21;
      v22 = *(_DWORD *)(a4 + 1620);
      v23 = v21 & v22;
      *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = v21 & v22;
      *(_DWORD *)(a4 + 24768) = v21 & v22;
      v24 = ~(v19 - 1);
      *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 4) = v24;
      *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 8) = v24 & v22;
      v25 = *(_QWORD *)(a4 + 1608);
      *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v25;
      *(_BYTE *)_RBP = 0;
      v26 = 0;
      *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = 0;
      if ( (_DWORD)KeNumberProcessors_0 )
      {
        v27 = *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
        v28 = *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
        do
        {
          v29 = KiProcessorBlock[v26];
          if ( (v21 & *(_DWORD *)(v29 + 1620)) == v23 )
          {
            KeAddProcessorAffinityEx((_WORD *)(a4 + 24600), v26);
            KeAddProcessorAffinityEx((_WORD *)(v29 + 24600), a5);
            if ( !*(_BYTE *)_RBP )
            {
              *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = v29;
              *(_BYTE *)_RBP = 1;
            }
            v30 = KeCountSetBitsAffinityEx((_WORD *)(v29 + 24600));
            if ( v30 > *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
              KeBugCheckEx(0x3Eu, v29, v30, *(unsigned __int8 *)(v29 + 1598), *(unsigned __int8 *)(v29 + 1599));
            v26 = *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC);
            v25 = *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
            v27 = *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 4);
            v28 = *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 8);
            v21 = *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x14);
            v23 = *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x18);
          }
          if ( (v27 & *(_DWORD *)(v29 + 1620)) == v28 && *(_QWORD *)(v29 + 1600) == *(_QWORD *)(a4 + 1600) )
          {
            v25 |= *(_QWORD *)(v29 + 1608);
            *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = v25;
            *(_QWORD *)(v29 + 24920) |= v25;
          }
          *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0xC) = ++v26;
        }
        while ( v26 < (unsigned int)KeNumberProcessors_0 );
      }
      v31 = KeCountSetBitsAffinityEx((_WORD *)(a4 + 24600));
      if ( v31 > *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) )
        KeBugCheckEx(0x3Eu, a4, v31, *(unsigned __int8 *)(a4 + 1598), *(unsigned __int8 *)(a4 + 1599));
      *(_QWORD *)(a4 + 24920) = *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
    }
    v16 = 65471;
  }
  else
  {
    KiDetectFpuLeakage();
    KiFpuLeakage = v10;
    if ( v10 )
      v9 |= 0x20000000000uLL;
    if ( KiFlushPcid )
    {
      *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x78) = 2LL;
      *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x80) = 0LL;
      __asm { invpcid r14d, [rbp+2F0h+var_278] }
      if ( !PsGetCurrentProcess()->AddressPolicy )
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
      *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x88) = 2LL;
      *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x90) = 0LL;
      __asm { invpcid r14d, [rbp+2F0h+var_268] }
      if ( !PsGetCurrentProcess()->AddressPolicy )
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
    *(_DWORD *)(a4 + 24768) = ~(*(unsigned __int8 *)(a4 + 1598) * *(unsigned __int8 *)(a4 + 1599) - 1) & *(_DWORD *)(a4 + 1620);
    *(_QWORD *)(a4 + 24600) = 1310721LL;
    memset((void *)(a4 + 24608), 0, 0xA0uLL);
    KeAddProcessorAffinityEx((_WORD *)(a4 + 24600), 0);
    *(_QWORD *)(a4 + 24920) = *(_QWORD *)(a4 + 1608);
    *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = a4;
    v16 = 65471;
    v17 = 65471;
    if ( *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC) )
      v17 = *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC);
    KiMxCsrMask = v17;
    KeCompactServiceTable(KiServiceTable, KiArgumentTable, KiServiceLimit, 0LL, 0x40000000);
  }
  KiSetCacheInformation();
  PoInitializePrcb((PVOID)a4);
  *(_QWORD *)(a4 + 24984) = 0LL;
  *(_QWORD *)(a4 + 24992) = a4 + 24992;
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
    if ( *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC) )
      v16 = *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0xCC);
    if ( (v9 & 0x8000000) != 0 )
      v38 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL | 0x8000000;
    else
      v38 = KeFeatureBits & 0xFFFFFFFF37FFFFFFuLL;
    if ( *(_BYTE *)(a4 + 1597) == 2
      && *(_BYTE *)(a4 + 1520) == 6
      && *(_BYTE *)(a4 + 1523) == 23
      && *(_BYTE *)(a4 + 1522) == 10 )
    {
      v9 &= ~0x100000uLL;
      if ( (*(_DWORD *)(*(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) + 25320LL) & 0x100000) != 0 )
        v9 |= 0x100000uLL;
    }
    if ( v9 != v38
      || v16 != KiMxCsrMask
      || *(_DWORD *)(KiProcessorBlock[0] + 1640) != *(_DWORD *)(a4 + 1640)
      || *(_BYTE *)(KiProcessorBlock[0] + 1598) != *(_BYTE *)(a4 + 1598)
      || *(_BYTE *)(KiProcessorBlock[0] + 1599) != *(_BYTE *)(a4 + 1599) )
    {
      KeBugCheckEx(0x3Eu, v9, v38, 0LL, 0LL);
    }
    __writecr8(2uLL);
    HvlEnlightenProcessor();
    v35 = *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
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
    qword_14030E2C8 = (__int64)&KiProcessListHead;
    KiProcessListHead = (__int64)&KiProcessListHead;
    v33 = (unsigned int)KiProcessorIndexToNumberMappingTable[0] >> 6;
    v34 = KiProcessorIndexToNumberMappingTable[0] & 0x3F;
    *(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4A) = 0;
    *(_WORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x4E) = 0;
    *(_WORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x48) = v33;
    *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = 1LL << v34;
    v35 = *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
    KeInitializeProcess(v35, 0, _RBP + 64, 0, 0LL, 1);
    *(_BYTE *)(v35 + 445) = 127;
    v36 = __rdtsc();
    KiWaitNever = __ROR8__(v36 ^ __ROL8__(v36, 43), v36 & 0xF);
    v37 = __rdtsc();
    KiWaitAlways = __ROL8__(__ROR8__(v37, 47) ^ v37, v37 & 0xF);
    HviGetHypervisorFeatures((_DWORD *)(_RBP + 152));
    if ( (*(_DWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0xA4) & 0x1000) != 0 )
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
  MEMORY[0xFFFFF780000002ED] = KiVirtFlags;
  v39 = *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x58);
  KiInitializeIdleThread(v39, *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x50), v35, a4);
  if ( a5 )
  {
    if ( !(unsigned __int8)HalInitSystem(1LL, 0LL) )
      KeBugCheck(0x5Cu);
    v40 = *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
  }
  else
  {
    v40 = *(_QWORD *)(((unsigned __int64)v42 & 0xFFFFFFFFFFFFFFC0uLL) + 0x38);
    InitBootProcessor(v40);
  }
  result = KiCompleteKernelInit(a4, v39, a5);
  *(_QWORD *)(v40 + 136) = 0LL;
  return result;
}
