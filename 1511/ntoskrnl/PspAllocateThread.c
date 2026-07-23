/*
 * XREFs of PspAllocateThread @ 0x1403F0BB0
 * Callers:
 *     PspCreateThread @ 0x14044564C (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x14044741C (NtCreateUserProcess.c)
 * Callees:
 *     PsQueryThreadStartAddress @ 0x140007D48 (PsQueryThreadStartAddress.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeQuerySystemTimeUnsafe @ 0x14002D3F0 (KeQuerySystemTimeUnsafe.c)
 *     KeInitializeSemaphore @ 0x14002D400 (KeInitializeSemaphore.c)
 *     KeQueryMaximumGroupCount @ 0x14002D41C (KeQueryMaximumGroupCount.c)
 *     PoEnergyEstimationEnabled @ 0x14002D424 (PoEnergyEstimationEnabled.c)
 *     KeQuerySystemTimePrecise @ 0x14002D4D0 (KeQuerySystemTimePrecise.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeSelectIdealProcessor @ 0x1400937E0 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x140096888 (KeSelectNodeForAffinity.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     PsIsSystemThread @ 0x1400E1940 (PsIsSystemThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KeInitThread @ 0x14039C2C0 (KeInitThread.c)
 *     MmCreateTeb @ 0x1403F22E4 (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x1403F2A8C (PspSetupUserStack.c)
 *     ObCreateObjectEx @ 0x140412D10 (ObCreateObjectEx.c)
 *     ExCreateHandleEx @ 0x140424F50 (ExCreateHandleEx.c)
 *     PspWow64InitThread @ 0x1404A46DC (PspWow64InitThread.c)
 *     MmSecureVirtualMemory @ 0x1404A6550 (MmSecureVirtualMemory.c)
 *     MmDeleteTeb @ 0x1404A92F8 (MmDeleteTeb.c)
 *     PspWow64SetupUserStack @ 0x1404B0A74 (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1404C073C (PspDeleteUserStack.c)
 *     PspUmsInitThread @ 0x1406411DC (PspUmsInitThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x140673350 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        struct _LIST_ENTRY *a7,
        __int64 a8,
        int *a9,
        __int64 *a10,
        _BYTE *a11,
        unsigned int *a12)
{
  unsigned __int8 v13; // r11
  __int64 v16; // r8
  __int64 v17; // r10
  int v18; // r15d
  __int64 v19; // rsi
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // edx
  __int64 v24; // rax
  int v25; // eax
  unsigned int v26; // ebx
  unsigned int MaximumGroupCount; // ecx
  unsigned int v28; // esi
  int Object; // edi
  size_t v30; // r8
  PETHREAD v31; // rbx
  unsigned __int64 *p_WaitBlockList; // rdi
  __int64 v33; // rax
  __int64 v34; // rbx
  __int64 v35; // rsi
  __int64 Handle; // rax
  int Teb; // edi
  __int64 v38; // rcx
  int v39; // ebx
  int v40; // eax
  int v41; // edx
  int v42; // ecx
  int v43; // r15d
  int v44; // ecx
  __int64 v45; // r15
  int v46; // ebx
  struct _LIST_ENTRY *v47; // rax
  _QWORD *v48; // rdx
  struct _KTHREAD *v49; // rbx
  unsigned int v50; // ebx
  unsigned int *v51; // r8
  __int16 v52; // ax
  __int16 v53; // dx
  __int16 v54; // ax
  int inited; // eax
  __int64 v56; // rdx
  __int64 v57; // rbx
  int v58; // [rsp+20h] [rbp-168h]
  int v59; // [rsp+20h] [rbp-168h]
  int v60; // [rsp+50h] [rbp-138h]
  int v61; // [rsp+54h] [rbp-134h]
  bool v62; // [rsp+58h] [rbp-130h]
  PETHREAD Thread; // [rsp+60h] [rbp-128h]
  __int64 v64; // [rsp+68h] [rbp-120h]
  __int64 v65; // [rsp+70h] [rbp-118h] BYREF
  __int64 v66; // [rsp+78h] [rbp-110h]
  _BYTE *v67; // [rsp+80h] [rbp-108h]
  __int64 v68; // [rsp+88h] [rbp-100h]
  __int64 v69; // [rsp+90h] [rbp-F8h]
  unsigned int *p_CurrentRunTime; // [rsp+98h] [rbp-F0h]
  __int64 v71; // [rsp+A0h] [rbp-E8h]
  __int64 v72; // [rsp+A8h] [rbp-E0h]
  int v73; // [rsp+B0h] [rbp-D8h]
  ULONG_PTR v74; // [rsp+B8h] [rbp-D0h]
  _QWORD *v75; // [rsp+C0h] [rbp-C8h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-C0h]
  unsigned int v77; // [rsp+D0h] [rbp-B8h]
  __int64 v78; // [rsp+D8h] [rbp-B0h]
  unsigned int v79; // [rsp+E0h] [rbp-A8h]
  __int64 *v80; // [rsp+E8h] [rbp-A0h]
  int v81; // [rsp+F0h] [rbp-98h]
  int KernelStack; // [rsp+F4h] [rbp-94h]
  char v83[8]; // [rsp+F8h] [rbp-90h] BYREF
  __int64 v84; // [rsp+100h] [rbp-88h]
  __int64 v85; // [rsp+108h] [rbp-80h]
  __int64 v86; // [rsp+110h] [rbp-78h]
  $D4FCF91253F76F57393CBFE908971F67 v87; // [rsp+118h] [rbp-70h] BYREF

  v13 = a3;
  v74 = BugCheckParameter1;
  v68 = a2;
  v72 = a4;
  v16 = a5;
  v66 = a5;
  v75 = a6;
  v80 = a10;
  v67 = a11;
  v17 = (__int64)a12;
  p_CurrentRunTime = a12;
  v71 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v18 = 0;
  v61 = 0;
  if ( a6 )
    v19 = *a6;
  else
    v19 = 0LL;
  v69 = v19;
  v64 = v19;
  if ( a4 )
  {
    v20 = 0LL;
    v21 = 0LL;
    v22 = *(_DWORD *)(a4 + 4);
    if ( (v22 & 0x1000) != 0 )
      v20 = a4 + 312;
    if ( (v22 & 0x4000) != 0 )
      v21 = KiProcessorBlock[*(unsigned int *)(a4 + 244)];
    if ( v21 )
    {
      if ( v20 )
      {
        if ( *(unsigned __int8 *)(v21 + 1616) != *(_WORD *)(v20 + 8)
          || *(_QWORD *)v20 && (*(_QWORD *)v20 & *(_QWORD *)(v21 + 1608)) == 0LL )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
          return 3221225520LL;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 4) = v22 | 0x1000;
        *(_WORD *)(a4 + 320) = *(unsigned __int8 *)(v21 + 1616);
        *(_QWORD *)(a4 + 312) = qword_1403825B8[*(unsigned __int8 *)(v21 + 1616)];
      }
      v18 = *(unsigned __int16 *)(*(_QWORD *)(v21 + 1600) + 146LL) + 1;
      v61 = v18;
    }
    else if ( v20 && *(_QWORD *)v20 )
    {
      v24 = KeSelectNodeForAffinity(v20);
      v18 = *(unsigned __int16 *)(v24 + 146) + 1;
      v61 = v18;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      *(_DWORD *)(a4 + 244) = KeSelectIdealProcessor(v24, v20, 0LL);
      v16 = v66;
      v17 = (__int64)p_CurrentRunTime;
      v13 = a3;
    }
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
      && (*(_QWORD *)(BugCheckParameter1 + 1064) || (_KPROCESS *)BugCheckParameter1 != CurrentThread->Process) )
    {
      goto LABEL_23;
    }
  }
  *(_DWORD *)(v17 + 384) = 0;
  *(_BYTE *)(v17 + 388) = v13;
  if ( v16 )
  {
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
LABEL_23:
      ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
      return 3221225485LL;
    }
    if ( a2 )
    {
      if ( v13 == 1 && (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 )
        v25 = *(_DWORD *)(a2 + 24) & 0x1DF2;
      else
        v25 = *(_DWORD *)(a2 + 24) & 0x11FF2;
      v73 = v25;
      *(_DWORD *)(v17 + 384) = v25;
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(v17 + 384) = *(_DWORD *)(a2 + 24) & 0x11FF2;
  }
  v26 = 1984;
  v62 = PoEnergyEstimationEnabled();
  if ( v62 )
    v26 = 2048;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v28 = 0;
  if ( MaximumGroupCount > 1 )
  {
    v28 = (v26 + 7) & 0xFFFFFFF8;
    v26 = v28 + 8 * MaximumGroupCount;
  }
  Object = ObCreateObjectEx(a3, (_DWORD)PsThreadType, a2, a3);
  v60 = Object;
  if ( Object < 0 )
  {
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
    return (unsigned int)Object;
  }
  v30 = v26;
  v31 = Thread;
  memset(Thread, 0, v30);
  if ( v62 )
  {
    Thread[1].WaitBlock[2].SparePtr = &Thread[1].WaitBlockFill11[168];
    _interlockedbittestandset(&Thread->Header.Lock, 0x15u);
    v31 = Thread;
  }
  if ( v28 )
  {
    *((_DWORD *)&v31[1].SwapListEntry + 3) |= 0x20000u;
    v31[1].WaitBlock[3].WaitListEntry.Blink = (struct _LIST_ENTRY *)((char *)v31 + v28);
  }
  v31[1].WaitStatus = 0LL;
  p_CurrentRunTime = &v31[1].CurrentRunTime;
  *(_QWORD *)&v31[1].CurrentRunTime = *(_QWORD *)(BugCheckParameter1 + 744);
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)&v31[1].SwapListEntry + 3) |= 4u;
  p_WaitBlockList = (unsigned __int64 *)&v31[1].WaitBlockList;
  v31[1].WaitBlockList = 0LL;
  LODWORD(v31[1].WaitListEntry.Flink) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)&v31[1].StateSaveArea, 0, 1);
  v31[1].Header.WaitListHead.Blink = &v31[1].Header.WaitListHead;
  v31[1].Header.WaitListHead.Flink = &v31[1].Header.WaitListHead;
  v31[1].Timer.Dpc = (_KDPC *)&v31[1].Timer.TimerListEntry.Blink;
  v31[1].Timer.TimerListEntry.Blink = (struct _LIST_ENTRY *)&v31[1].Timer.TimerListEntry.Blink;
  v31[1].WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v31[1].Timer.Processor;
  *(_QWORD *)&v31[1].Timer.Processor = (char *)v31 + 1808;
  v31[1].WaitBlock[0].WaitListEntry.Blink = 0LL;
  v31[1].WaitBlock[2].WaitListEntry.Flink = (struct _LIST_ENTRY *)&v31[1].WaitBlockFill11[88];
  v31[1].WaitBlock[1].SparePtr = &v31[1].WaitBlockFill11[88];
  v31[1].WaitBlock[2].WaitListEntry.Blink = 0LL;
  v31[1].TrapFrame = (_KTRAP_FRAME *)&v31[1].FirstArgument;
  v31[1].FirstArgument = &v31[1].FirstArgument;
  *(_QWORD *)&v31[1].WaitBlockFill11[16] = 0LL;
  v31[1].StackBase = 0LL;
  v31[1].CycleTime = (volatile unsigned __int64)&v31[1].ThreadLock;
  v31[1].ThreadLock = (unsigned __int64)&v31[1].ThreadLock;
  *(_QWORD *)&v31[1].WaitBlockFill11[160] = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)&v31[1]);
  else
    *(_QWORD *)&Thread[1].Header.Lock = MEMORY[0xFFFFF78000000014];
  v33 = KeAbPreAcquire((ULONG_PTR)&v31[1].WaitBlockList, 0LL, 0LL);
  v34 = v33;
  if ( _interlockedbittestandset64((volatile signed __int32 *)p_WaitBlockList, 0LL) )
    ExfAcquirePushLockExclusiveEx(p_WaitBlockList, v33, (ULONG_PTR)p_WaitBlockList);
  if ( v34 )
    *(_BYTE *)(v34 + 26) |= 1u;
  v35 = (__int64)Thread;
  Handle = ExCreateHandleEx(PspCidTable, (_DWORD)Thread, 0, 0);
  Thread[1].KernelStack = (void *)Handle;
  if ( !Handle )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)p_WaitBlockList, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)p_WaitBlockList);
    KeAbPostRelease((ULONG_PTR)p_WaitBlockList);
    Teb = -1073741670;
    v60 = -1073741670;
    v35 = (__int64)Thread;
    goto LABEL_115;
  }
  v38 = v66;
  if ( !v66 )
  {
    v45 = 0LL;
    v65 = 0LL;
    Thread[1].InitialStack = a7;
    Thread[1].ApcState.ApcListHead[1].Flink = a7;
    inited = KeInitThread(
               (__int64)Thread,
               0LL,
               (__int64)PspSystemThreadStartup,
               (__int64)a7,
               a8,
               0LL,
               0LL,
               BugCheckParameter1,
               v61);
    goto LABEL_99;
  }
  v39 = 0;
  LODWORD(v68) = 0;
  v40 = *a9;
  if ( (*a9 & 0x40) != 0 )
  {
    v39 = 1024;
    LODWORD(v68) = 1024;
  }
  if ( (v40 & 2) != 0 )
  {
    LOWORD(v39) = v39 | 8;
    LODWORD(v68) = v39;
  }
  if ( (v40 & 0x80u) != 0 )
  {
    LOWORD(v39) = v39 | 0x2000;
    LODWORD(v68) = v39;
  }
  if ( v67 )
  {
    v58 = v18;
    if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
    {
      v83[0] = 0;
      v85 = 0x8000LL;
      v86 = 0x40000LL;
      v84 = 0LL;
      Teb = PspSetupUserStack(BugCheckParameter1, v66, v64, v83, v18);
      v60 = Teb;
      if ( Teb < 0 )
      {
        v43 = v64;
      }
      else
      {
        v42 = (int)v67;
        *v67 ^= (v83[0] ^ *v67) & 2;
        v59 = v18;
        v43 = v64;
        Teb = PspWow64SetupUserStack(BugCheckParameter1, v41, v64, v42, v59);
        v60 = Teb;
      }
    }
    else
    {
      v43 = v64;
      Teb = PspSetupUserStack(BugCheckParameter1, v66, v64, v67, v58);
      v60 = Teb;
    }
    if ( Teb < 0 )
      goto LABEL_115;
    v44 = v71;
    if ( a4 && (*(_DWORD *)(a4 + 4) & 0x8000) != 0 && (KeFeatureBits & 0x10000000) == 0 )
      v44 = 0;
    Teb = MmCreateTeb(BugCheckParameter1, v43, (_DWORD)p_CurrentRunTime, v44, (__int64)&v65);
    v60 = Teb;
    if ( Teb < 0 )
      goto LABEL_115;
    v38 = v66;
    Thread[1].InitialStack = *(void **)(v66 + 248);
    Thread[1].ApcState.ApcListHead[1].Flink = *(struct _LIST_ENTRY **)(v38 + 128);
    v45 = v65;
    if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
    {
      Teb = PspWow64InitThread(BugCheckParameter1);
      v60 = Teb;
      if ( Teb < 0 )
        goto LABEL_115;
      v38 = v66;
    }
    if ( (_WORD)v39 )
    {
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v87);
      *(_WORD *)(v45 + 6126) = v39;
      if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
      {
        v78 = v45 + 0x2000;
        *(_WORD *)(v45 + 12234) = v39;
      }
      Teb = 0;
      v60 = 0;
      v46 = v61;
LABEL_95:
      KiUnstackDetachProcess(&v87, 0LL);
      if ( Teb < 0 )
        goto LABEL_115;
      v38 = v66;
      goto LABEL_97;
    }
  }
  else
  {
    if ( !*(_QWORD *)(BugCheckParameter1 + 1792) )
    {
      v49 = CurrentThread;
      v45 = (__int64)CurrentThread->Teb;
      v65 = v45;
      Thread[1].InitialStack = (void *)PsQueryThreadStartAddress((__int64)CurrentThread, 1);
      Thread[1].ApcState.ApcListHead[1].Flink = v49[1].ApcState.ApcListHead[1].Flink;
      LODWORD(Thread[1].Queue) |= 8u;
      v50 = 6200;
      if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
        v50 = 12288;
      KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0LL, (__int64)&v87);
      if ( MmSecureVirtualMemory((PVOID)v45, v50, 4u) )
      {
        v51 = p_CurrentRunTime;
        *(_OWORD *)(v45 + 64) = *(_OWORD *)p_CurrentRunTime;
        *(_OWORD *)(v45 + 2008) = *(_OWORD *)v51;
        *(_DWORD *)(v45 + 6044) = 0;
        *(_DWORD *)(v45 + 6120) = 0;
        v52 = *(_WORD *)(v45 + 6126) & 0x62C;
        *(_WORD *)(v45 + 6126) = v52;
        v53 = v68;
        *(_WORD *)(v45 + 6126) = v68 | v52 | 0x40;
        if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
        {
          v78 = v45 + 0x2000;
          v77 = *v51;
          *(_DWORD *)(v45 + 8224) = v77;
          KernelStack = (int)Thread[1].KernelStack;
          *(_DWORD *)(v45 + 8228) = KernelStack;
          v79 = *v51;
          *(_DWORD *)(v45 + 9908) = v79;
          v81 = (int)Thread[1].KernelStack;
          *(_DWORD *)(v45 + 9912) = v81;
          *(_DWORD *)(v45 + 12188) = 0;
          *(_DWORD *)(v45 + 12228) = 0;
          v54 = *(_WORD *)(v45 + 12234) & 0x62C;
          *(_WORD *)(v45 + 12234) = v54;
          *(_WORD *)(v45 + 12234) = v53 | v54 | 0x40;
        }
        Teb = v60;
        v46 = v61;
      }
      else
      {
        Teb = -1073741503;
        v60 = -1073741503;
        v46 = v61;
      }
      goto LABEL_95;
    }
    v65 = 0LL;
    v47 = *(struct _LIST_ENTRY **)(v66 + 248);
    Thread[1].InitialStack = v47;
    Thread[1].ApcState.ApcListHead[1].Flink = v47;
    v48 = v75;
    *(_DWORD *)&Thread[1].WaitBlockFill11[120] = *((_DWORD *)v75 + 2);
    Thread[1].WaitBlock[2].Object = (PVOID)v48[2];
    _interlockedbittestandset(&Thread->Header.Lock, 0x1Au);
    v35 = (__int64)Thread;
    v45 = v65;
  }
  v46 = v61;
LABEL_97:
  inited = KeInitThread(
             v35,
             0LL,
             (__int64)PspUserThreadStartup,
             (__int64)a7,
             *(_QWORD *)(v35 + 1536),
             (_OWORD *)v38,
             v45,
             BugCheckParameter1,
             v46);
LABEL_99:
  v60 = inited;
  Teb = inited;
  if ( inited < 0 )
  {
    if ( !v45 || !v67 )
      goto LABEL_115;
    v56 = v45;
    goto LABEL_114;
  }
  if ( (KeGetCurrentPrcb()->BpbState & 1) == 0 )
    goto LABEL_109;
  v35 = (__int64)Thread;
  if ( PsIsSystemThread(Thread) )
    goto LABEL_110;
  if ( (*(_DWORD *)(BugCheckParameter1 + 1724) & 0x4000) == 0 )
  {
    Thread->Header.Signalling &= 0xFCu;
    goto LABEL_110;
  }
  if ( (KeGetCurrentPrcb()->BpbState & 2) != 0 )
  {
    v35 = (__int64)Thread;
    Thread->Header.Signalling = Thread->Header.Signalling & 0xFC | 2;
  }
  else
  {
LABEL_109:
    v35 = (__int64)Thread;
  }
LABEL_110:
  if ( !a4
    || (*(_DWORD *)(a4 + 4) & 0x8000) == 0
    || (v57 = v65, Teb = PspUmsInitThread(v35, a3, a4, v65), v60 = Teb, Teb >= 0) )
  {
    *v80 = v35;
    return 0LL;
  }
  v56 = v57;
LABEL_114:
  MmDeleteTeb(BugCheckParameter1, v56);
LABEL_115:
  if ( v67 && *v67 )
    PspDeleteUserStack(BugCheckParameter1, v64, v67);
  if ( *(_QWORD *)(v35 + 1584) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v35 + 1704), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)(v35 + 1704));
    KeAbPostRelease(v35 + 1704);
    Teb = v60;
    v35 = (__int64)Thread;
  }
  if ( !*(_QWORD *)(v35 + 544) )
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject((PVOID)v35);
  return (unsigned int)Teb;
}
