/*
 * XREFs of PspAllocateThread @ 0x140451490
 * Callers:
 *     PspCreateThread @ 0x140450CE0 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x140509350 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x1406C5D94 (PspCreatePicoThread.c)
 * Callees:
 *     KeQuerySystemTimePrecise @ 0x1400166E8 (KeQuerySystemTimePrecise.c)
 *     ExGenRandom @ 0x140020AD0 (ExGenRandom.c)
 *     PoEnergyEstimationEnabled @ 0x140021210 (PoEnergyEstimationEnabled.c)
 *     KeQueryMaximumGroupCount @ 0x140021220 (KeQueryMaximumGroupCount.c)
 *     KeInitializeSemaphore @ 0x14002123C (KeInitializeSemaphore.c)
 *     KeQuerySystemTimeUnsafe @ 0x140021258 (KeQuerySystemTimeUnsafe.c)
 *     KeSelectIdealProcessor @ 0x14002B7F8 (KeSelectIdealProcessor.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeSelectNodeForAffinity @ 0x14012B5E8 (KeSelectNodeForAffinity.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ZwFreeVirtualMemory @ 0x14017F3B0 (ZwFreeVirtualMemory.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KeInitThread @ 0x1403EB280 (KeInitThread.c)
 *     MmCreateTeb @ 0x140420A54 (MmCreateTeb.c)
 *     ExCreateHandleEx @ 0x140424CD0 (ExCreateHandleEx.c)
 *     RtlCreateUserStack @ 0x1404510C4 (RtlCreateUserStack.c)
 *     ObCreateObjectEx @ 0x14048A8A0 (ObCreateObjectEx.c)
 *     MmSecureVirtualMemory @ 0x14052FA34 (MmSecureVirtualMemory.c)
 *     PspWow64InitThread @ 0x140530C38 (PspWow64InitThread.c)
 *     PspWow64SetupCpuArea @ 0x140530E54 (PspWow64SetupCpuArea.c)
 *     MmDeleteTeb @ 0x14053E174 (MmDeleteTeb.c)
 *     RtlpWow64CreateUserStack @ 0x140546148 (RtlpWow64CreateUserStack.c)
 *     PspUmsInitThread @ 0x1406C374C (PspUmsInitThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406F78A0 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspAllocateThread(
        ULONG_PTR BugCheckParameter1,
        __int64 a2,
        unsigned __int8 a3,
        __int64 a4,
        _OWORD *a5,
        PINITIAL_TEB *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        __int64 a11,
        __int64 a12)
{
  unsigned __int8 v13; // r10
  _OWORD *v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r8
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // ebx
  bool v22; // di
  USHORT MaximumGroupCount; // ax
  int v24; // r15d
  size_t v25; // r8
  char *v26; // rbx
  __int64 v27; // rax
  unsigned __int64 *v28; // rdi
  __int64 v29; // r9
  __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // rbx
  char *v33; // r15
  __int64 Handle; // rax
  _OWORD *v35; // rbx
  int v36; // ecx
  int v37; // eax
  int UserStack; // edi
  __int64 v39; // r11
  char v40; // bl
  PINITIAL_TEB v41; // rdi
  __int64 v42; // r9
  _OWORD *v43; // rcx
  __int16 v44; // di
  int inited; // eax
  _WORD *v47; // rax
  __int64 v48; // r11
  struct _KTHREAD *v49; // rcx
  char v50; // al
  __int64 v51; // rax
  __int64 v52; // rax
  PINITIAL_TEB *v53; // rcx
  struct _KTHREAD *v54; // rdx
  char *Teb; // rdi
  void *Flink; // rcx
  unsigned int v57; // ebx
  _OWORD *v58; // r10
  __int16 v59; // ax
  __int16 v60; // r8
  int *v61; // rdx
  __int16 v62; // ax
  PVOID v63; // rdx
  PINITIAL_TEB v64; // r13
  signed __int32 v65[8]; // [rsp+0h] [rbp-298h] BYREF
  ULONG_PTR ReserveAlignment; // [rsp+20h] [rbp-278h]
  PINITIAL_TEB InitialTeb; // [rsp+28h] [rbp-270h]
  __int64 v68; // [rsp+30h] [rbp-268h]
  __int64 v69; // [rsp+38h] [rbp-260h]
  PVOID *p_Object; // [rsp+40h] [rbp-258h]
  __int64 v71; // [rsp+48h] [rbp-250h]
  int v72; // [rsp+50h] [rbp-248h]
  unsigned int v73; // [rsp+54h] [rbp-244h]
  unsigned int v74; // [rsp+58h] [rbp-240h]
  PINITIAL_TEB v75; // [rsp+60h] [rbp-238h]
  PVOID Address; // [rsp+68h] [rbp-230h] BYREF
  PVOID Object; // [rsp+70h] [rbp-228h] BYREF
  _OWORD *v78; // [rsp+78h] [rbp-220h]
  SIZE_T PageSize; // [rsp+80h] [rbp-218h]
  _QWORD *v80; // [rsp+88h] [rbp-210h]
  PINITIAL_TEB v81; // [rsp+90h] [rbp-208h]
  __int64 v82; // [rsp+98h] [rbp-200h]
  __int64 v83; // [rsp+A0h] [rbp-1F8h]
  __int64 v84; // [rsp+A8h] [rbp-1F0h]
  ULONG_PTR v85; // [rsp+B0h] [rbp-1E8h]
  int v86; // [rsp+B8h] [rbp-1E0h]
  PINITIAL_TEB *v87; // [rsp+C0h] [rbp-1D8h]
  struct _KTHREAD *CurrentThread; // [rsp+C8h] [rbp-1D0h]
  int *v89; // [rsp+D0h] [rbp-1C8h]
  ULONG_PTR v90; // [rsp+D8h] [rbp-1C0h] BYREF
  PVOID v91; // [rsp+E0h] [rbp-1B8h] BYREF
  int v92; // [rsp+E8h] [rbp-1B0h]
  ULONG_PTR v93; // [rsp+F0h] [rbp-1A8h] BYREF
  ULONG_PTR RegionSize; // [rsp+F8h] [rbp-1A0h] BYREF
  PVOID StackBase; // [rsp+100h] [rbp-198h] BYREF
  ULONG_PTR v96; // [rsp+108h] [rbp-190h] BYREF
  _QWORD *v97; // [rsp+110h] [rbp-188h]
  char *v98; // [rsp+118h] [rbp-180h]
  PVOID BaseAddress; // [rsp+120h] [rbp-178h] BYREF
  int v100; // [rsp+128h] [rbp-170h]
  PVOID AllocatedStackBase; // [rsp+130h] [rbp-168h] BYREF
  int v102; // [rsp+138h] [rbp-160h]
  int v103; // [rsp+13Ch] [rbp-15Ch]
  char v104; // [rsp+140h] [rbp-158h]
  _BYTE v105[48]; // [rsp+160h] [rbp-138h] BYREF
  _BYTE v106[48]; // [rsp+190h] [rbp-108h] BYREF
  _BYTE v107[48]; // [rsp+1C0h] [rbp-D8h] BYREF
  _BYTE v108[48]; // [rsp+1F0h] [rbp-A8h] BYREF
  _BYTE v109[48]; // [rsp+220h] [rbp-78h] BYREF

  v13 = a3;
  v85 = BugCheckParameter1;
  v80 = (_QWORD *)a2;
  v83 = a4;
  v16 = a5;
  v78 = a5;
  v87 = a6;
  v97 = a10;
  v84 = a11;
  v82 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v73 = 0;
  if ( a6 )
  {
    v75 = *a6;
    v81 = v75;
  }
  else
  {
    v75 = 0LL;
    v81 = 0LL;
  }
  if ( a4 )
  {
    v17 = 0LL;
    v18 = 0LL;
    v19 = *(_DWORD *)(a4 + 4);
    PageSize = 4096LL;
    if ( (v19 & 0x1000) != 0 )
      v17 = a4 + 312;
    if ( (v19 & 0x4000) != 0 )
      v18 = KiProcessorBlock[*(unsigned int *)(a4 + 244)];
    if ( v18 )
    {
      if ( v17 )
      {
        if ( *(unsigned __int8 *)(v18 + 1616) != *(_WORD *)(v17 + 8)
          || *(_QWORD *)v17 && (*(_QWORD *)v17 & *(_QWORD *)(v18 + 1608)) == 0LL )
        {
          ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
          return 3221225520LL;
        }
      }
      else
      {
        *(_DWORD *)(a4 + 4) = v19 | 0x1000;
        *(_WORD *)(a4 + 320) = *(unsigned __int8 *)(v18 + 1616);
        *(_QWORD *)(a4 + 312) = qword_1403D15E8[*(unsigned __int8 *)(v18 + 1616)];
      }
      v73 = *(unsigned __int16 *)(*(_QWORD *)(v18 + 1600) + 146LL) + 1;
    }
    else if ( v17 && *(_QWORD *)v17 )
    {
      v51 = KeSelectNodeForAffinity(v17);
      v73 = *(unsigned __int16 *)(v51 + 146) + 1;
      *(_DWORD *)(a4 + 4) |= 0x4000u;
      *(_DWORD *)(a4 + 244) = KeSelectIdealProcessor(v51, v17, 0LL);
      v16 = v78;
      v13 = a3;
    }
    if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
      && (*(_QWORD *)(BugCheckParameter1 + 1064) || (_KPROCESS *)BugCheckParameter1 != CurrentThread->Process) )
    {
      goto LABEL_104;
    }
  }
  else
  {
    PageSize = 4096LL;
  }
  *(_DWORD *)(a12 + 384) = 0;
  *(_BYTE *)(a12 + 388) = v13;
  if ( v16 )
  {
    if ( (PEPROCESS)BugCheckParameter1 == PsInitialSystemProcess )
    {
LABEL_104:
      ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
      return 3221225485LL;
    }
    if ( a2 )
    {
      if ( v13 == 1 && (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 )
        v20 = *(_DWORD *)(a2 + 24) & 0xDF2;
      else
        v20 = *(_DWORD *)(a2 + 24) & 0x10FF2;
      v86 = v20;
      *(_DWORD *)(a12 + 384) = v20;
      v72 = 0;
    }
  }
  else if ( a2 )
  {
    *(_DWORD *)(a12 + 384) = *(_DWORD *)(a2 + 24) & 0x10FF2;
  }
  v21 = 1984;
  v22 = PoEnergyEstimationEnabled();
  if ( v22 )
    v21 = 2048;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v74 = 0;
  if ( MaximumGroupCount > 1u )
  {
    v74 = (v21 + 7) & 0xFFFFFFF8;
    v21 = v74 + 8 * MaximumGroupCount;
  }
  v71 = 0LL;
  p_Object = &Object;
  LODWORD(v69) = v21;
  LODWORD(v68) = 0;
  LODWORD(InitialTeb) = v21;
  v24 = ObCreateObjectEx(a3, (_DWORD)PsThreadType, a2, a3);
  v72 = v24;
  if ( v24 < 0 )
  {
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
    return (unsigned int)v24;
  }
  v25 = v21;
  v26 = (char *)Object;
  memset(Object, 0, v25);
  if ( v22 )
  {
    *((_QWORD *)v26 + 244) = v26 + 1984;
    _interlockedbittestandset((volatile signed __int32 *)v26, 0x15u);
    v26 = (char *)Object;
  }
  v27 = v74;
  if ( v74 )
  {
    *((_DWORD *)v26 + 431) |= 0x20000u;
    *((_QWORD *)v26 + 246) = &v26[v27];
  }
  *((_QWORD *)v26 + 212) = 0LL;
  v80 = v26 + 1576;
  *((_QWORD *)v26 + 197) = *(_QWORD *)(BugCheckParameter1 + 744);
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)v26 + 431) |= 4u;
  v28 = (unsigned __int64 *)(v26 + 1704);
  *((_QWORD *)v26 + 213) = 0LL;
  *((_DWORD *)v26 + 428) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)(v26 + 1592), 0, 1);
  *((_QWORD *)v26 + 189) = v26 + 1504;
  *((_QWORD *)v26 + 188) = v26 + 1504;
  *((_QWORD *)v26 + 225) = v26 + 1792;
  *((_QWORD *)v26 + 224) = v26 + 1792;
  *((_QWORD *)v26 + 227) = v26 + 1808;
  *((_QWORD *)v26 + 226) = v26 + 1808;
  *((_QWORD *)v26 + 228) = 0LL;
  *((_QWORD *)v26 + 239) = v26 + 1904;
  *((_QWORD *)v26 + 238) = v26 + 1904;
  *((_QWORD *)v26 + 240) = 0LL;
  *((_QWORD *)v26 + 205) = v26 + 1632;
  *((_QWORD *)v26 + 204) = v26 + 1632;
  *((_QWORD *)v26 + 229) = 0LL;
  *((_QWORD *)v26 + 194) = 0LL;
  *((_QWORD *)v26 + 196) = v26 + 1560;
  *((_QWORD *)v26 + 195) = v26 + 1560;
  *((_QWORD *)v26 + 247) = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((LARGE_INTEGER *)v26 + 187);
  else
    *((_QWORD *)Object + 187) = MEMORY[0xFFFFF78000000014];
  v30 = KeAbPreAcquire((ULONG_PTR)(v26 + 1704), 0LL, 0LL, v29);
  v32 = v30;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
    ExfAcquirePushLockExclusiveEx(v28, v30, (ULONG_PTR)v28, v31);
  if ( v32 )
    *(_BYTE *)(v32 + 26) |= 1u;
  v33 = (char *)Object;
  Handle = ExCreateHandleEx(PspCidTable, (__int64)Object, 0, 0, 0);
  v89 = (int *)(v33 + 1584);
  *((_QWORD *)v33 + 198) = Handle;
  if ( !Handle )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v28);
    KeAbPostRelease((ULONG_PTR)v28);
    UserStack = -1073741670;
    v72 = -1073741670;
    v33 = (char *)Object;
    goto LABEL_141;
  }
  v35 = v78;
  if ( v78 )
  {
    v36 = 0;
    v74 = 0;
    v37 = *a9;
    if ( (*a9 & 0x40) != 0 )
    {
      v36 = 1024;
      v74 = 1024;
    }
    if ( (v37 & 2) != 0 )
    {
      LOWORD(v36) = v36 | 8;
      v74 = v36;
    }
    if ( (v37 & 0x80u) != 0 )
    {
      LOWORD(v36) = v36 | 0x2000;
      v74 = v36;
    }
    if ( !a11 )
    {
      if ( *(_QWORD *)(BugCheckParameter1 + 1784) )
      {
        Address = 0LL;
        v52 = *((_QWORD *)v78 + 31);
        *((_QWORD *)v33 + 192) = v52;
        *((_QWORD *)v33 + 208) = v52;
        v53 = v87;
        *((_DWORD *)v33 + 484) = *((_DWORD *)v87 + 2);
        *((_QWORD *)v33 + 243) = v53[2];
        _interlockedbittestandset((volatile signed __int32 *)v33, 0x1Au);
        v33 = (char *)Object;
      }
      else
      {
        v54 = CurrentThread;
        Teb = (char *)CurrentThread->Teb;
        Address = Teb;
        if ( (CurrentThread->MiscFlags & 0x400) != 0 )
        {
          Flink = CurrentThread[1].ApcState.ApcListHead[1].Flink;
        }
        else
        {
          if ( (BYTE4(CurrentThread[1].Queue) & 8) != 0
            || (Flink = CurrentThread[1].InitialStack, _InterlockedOr(v65, 0), (BYTE4(v54[1].Queue) & 8) != 0) )
          {
            Flink = 0LL;
          }
          v33 = (char *)Object;
          Teb = (char *)Address;
        }
        *((_QWORD *)v33 + 192) = Flink;
        *((_QWORD *)v33 + 208) = v54[1].ApcState.ApcListHead[1].Flink;
        *((_DWORD *)v33 + 432) |= 4u;
        v57 = 6200;
        if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
          v57 = 12288;
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v105);
        if ( MmSecureVirtualMemory(Teb, v57, 4u) )
        {
          v58 = v80;
          *((_OWORD *)Teb + 4) = *(_OWORD *)v80;
          *(_OWORD *)(Teb + 2008) = *v58;
          *((_DWORD *)Teb + 1511) = 0;
          *((_DWORD *)Teb + 1530) = 0;
          v59 = *((_WORD *)Teb + 3063) & 0x62C;
          *((_WORD *)Teb + 3063) = v59;
          v60 = v74;
          *((_WORD *)Teb + 3063) = v74 | v59 | 0x40;
          if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
          {
            v98 = Teb + 0x2000;
            v103 = *(_DWORD *)v58;
            *((_DWORD *)Teb + 2056) = v103;
            v61 = v89;
            v92 = *v89;
            *((_DWORD *)Teb + 2057) = v92;
            v100 = *(_DWORD *)v58;
            *((_DWORD *)Teb + 2477) = v100;
            v102 = *v61;
            *((_DWORD *)Teb + 2478) = v102;
            *((_DWORD *)Teb + 3047) = 0;
            *((_DWORD *)Teb + 3057) = 0;
            v62 = *((_WORD *)Teb + 6117) & 0x62C;
            *((_WORD *)Teb + 6117) = v62;
            *((_WORD *)Teb + 6117) = v60 | v62 | 0x40;
          }
          UserStack = v72;
        }
        else
        {
          UserStack = -1073741503;
          v72 = -1073741503;
        }
        KiUnstackDetachProcess((struct _KTHREAD *)v105, 0);
        if ( UserStack < 0 )
          goto LABEL_141;
      }
LABEL_63:
      inited = KeInitThread(
                 (__int64)v33,
                 0LL,
                 (__int64)PspUserThreadStartup,
                 a7,
                 *((_QWORD *)v33 + 192),
                 v78,
                 (__int64)Address,
                 BugCheckParameter1,
                 v73);
      goto LABEL_64;
    }
    if ( !*(_QWORD *)(BugCheckParameter1 + 1064) )
    {
      if ( (*(_BYTE *)a11 & 1) != 0 )
      {
        v40 = 0;
        v41 = v75;
      }
      else
      {
        if ( v73 )
          PageSize = ((unsigned __int64)v73 << 56) | 0x1000;
        KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v107);
        UserStack = RtlCreateUserStack(
                      *(_QWORD *)(a11 + 16),
                      *(_QWORD *)(a11 + 24),
                      *(_QWORD *)(a11 + 8),
                      PageSize,
                      ReserveAlignment,
                      v75);
        if ( UserStack < 0 )
          goto LABEL_114;
        if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x20000) != 0 )
          v39 = 0LL;
        else
          v39 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
        if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
        {
          UserStack = PspWow64SetupCpuArea(&v75->StackBase, BugCheckParameter1);
          if ( UserStack < 0 )
          {
            AllocatedStackBase = v75->AllocatedStackBase;
            v96 = 0LL;
            ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &AllocatedStackBase, &v96, 0x8000u);
LABEL_114:
            v49 = (struct _KTHREAD *)v107;
            goto LABEL_115;
          }
        }
        v40 = 1;
        v41 = v75;
        *((_QWORD *)v78 + 19) = (char *)v75->StackBase - v39 - 40;
        KiUnstackDetachProcess((struct _KTHREAD *)v107, 0);
      }
      *(_BYTE *)a11 ^= (*(_BYTE *)a11 ^ (2 * v40)) & 2;
      goto LABEL_57;
    }
    v104 = 0;
    if ( v73 )
      PageSize = ((unsigned __int64)v73 << 56) | 0x1000;
    KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v108);
    UserStack = RtlCreateUserStack(0x8000uLL, 0x40000uLL, 0LL, PageSize, ReserveAlignment, v75);
    if ( UserStack >= 0 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 768) & 0x20000) != 0 )
        v48 = 0LL;
      else
        v48 = 16 * (unsigned int)(ExGenRandom(1) & 0x7F);
      if ( !*(_QWORD *)(BugCheckParameter1 + 1064)
        || (UserStack = PspWow64SetupCpuArea(&v75->StackBase, BugCheckParameter1), UserStack >= 0) )
      {
        v41 = v75;
        *((_QWORD *)v35 + 19) = (char *)v75->StackBase - v48 - 40;
        KiUnstackDetachProcess((struct _KTHREAD *)v108, 0);
        v104 = 2;
        *(_BYTE *)a11 ^= (*(_BYTE *)a11 ^ 2) & 2;
        if ( (*(_BYTE *)a11 & 1) != 0 )
        {
          v50 = 0;
        }
        else
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v106);
          UserStack = RtlpWow64CreateUserStack(
                        *(_QWORD *)(a11 + 16),
                        *(_QWORD *)(a11 + 24),
                        *(_QWORD *)(a11 + 8),
                        v73,
                        (__int64)v41);
          v49 = (struct _KTHREAD *)v106;
          if ( UserStack < 0 )
          {
LABEL_115:
            KiUnstackDetachProcess(v49, 0);
            v72 = UserStack;
            goto LABEL_141;
          }
          KiUnstackDetachProcess((struct _KTHREAD *)v106, 0);
          v50 = 1;
          v41 = v75;
        }
        *(_BYTE *)a11 ^= (*(_BYTE *)a11 ^ (4 * v50)) & 4;
LABEL_57:
        if ( a4
          && (((*(_DWORD *)(a4 + 4) & 0x8000) != 0) & !_bittest64((const signed __int64 *)&KeFeatureBits, 0x1Cu)) != 0 )
        {
          v42 = 0x100000000LL;
        }
        else
        {
          v42 = v82;
        }
        UserStack = MmCreateTeb((_KPROCESS *)BugCheckParameter1, (__int64)v41, v80, v42, &Address);
        v72 = UserStack;
        if ( UserStack < 0
          || (v43 = v78,
              *((_QWORD *)v33 + 192) = *((_QWORD *)v78 + 31),
              *((_QWORD *)v33 + 208) = *((_QWORD *)v43 + 16),
              *(_QWORD *)(BugCheckParameter1 + 1064))
          && (UserStack = PspWow64InitThread(BugCheckParameter1), v72 = UserStack, UserStack < 0) )
        {
LABEL_141:
          if ( a11 && *(_BYTE *)a11 )
          {
            KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v109);
            v64 = v75;
            if ( (*(_BYTE *)a11 & 2) != 0 )
            {
              v91 = v75->AllocatedStackBase;
              v90 = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &v91, &v90, 0x8000u);
            }
            if ( (*(_BYTE *)a11 & 4) != 0 )
            {
              StackBase = v64[1].StackBase;
              v93 = 0LL;
              ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &StackBase, &v93, 0x8000u);
            }
            KiUnstackDetachProcess((struct _KTHREAD *)v109, 0);
          }
          goto LABEL_148;
        }
        v44 = v74;
        if ( (_WORD)v74 )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v105);
          v47 = Address;
          *((_WORD *)Address + 3063) = v74;
          if ( *(_QWORD *)(BugCheckParameter1 + 1064) )
          {
            v98 = (char *)(v47 + 4096);
            v47[6117] = v44;
          }
          v72 = 0;
          KiUnstackDetachProcess((struct _KTHREAD *)v105, 0);
        }
        goto LABEL_63;
      }
      BaseAddress = v75->AllocatedStackBase;
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
    }
    KiUnstackDetachProcess((struct _KTHREAD *)v108, 0);
    v72 = UserStack;
    goto LABEL_141;
  }
  Address = 0LL;
  *((_QWORD *)v33 + 192) = a7;
  *((_QWORD *)v33 + 208) = a7;
  inited = KeInitThread((__int64)v33, 0LL, (__int64)PspSystemThreadStartup, a7, a8, 0LL, 0LL, BugCheckParameter1, v73);
LABEL_64:
  v72 = inited;
  UserStack = inited;
  if ( inited >= 0 )
  {
    if ( !a4
      || (*(_DWORD *)(a4 + 4) & 0x8000) == 0
      || (UserStack = PspUmsInitThread(v33, a3, a4, Address), v72 = UserStack, UserStack >= 0) )
    {
      *v97 = v33;
      return 0LL;
    }
    v63 = Address;
    goto LABEL_140;
  }
  if ( !Address )
    goto LABEL_141;
  if ( a11 )
  {
    v63 = Address;
LABEL_140:
    MmDeleteTeb(BugCheckParameter1, v63);
    goto LABEL_141;
  }
LABEL_148:
  if ( *((_QWORD *)v33 + 198) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v33 + 213, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v33 + 213);
    KeAbPostRelease((ULONG_PTR)(v33 + 1704));
    UserStack = v72;
    v33 = (char *)Object;
  }
  if ( !*((_QWORD *)v33 + 68) )
    ObfDereferenceObjectWithTag((PVOID)BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject(v33);
  return (unsigned int)UserStack;
}
