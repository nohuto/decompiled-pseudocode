/*
 * XREFs of PspAllocateThread @ 0x1405154A0
 * Callers:
 *     PspCreateThread @ 0x140458D18 (PspCreateThread.c)
 *     NtCreateUserProcess @ 0x14045AB40 (NtCreateUserProcess.c)
 *     PspCreatePicoThread @ 0x1406817B0 (PspCreatePicoThread.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14006ACD0 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     PsQueryThreadStartAddress @ 0x140074BA0 (PsQueryThreadStartAddress.c)
 *     KeSelectIdealProcessor @ 0x14007D1B0 (KeSelectIdealProcessor.c)
 *     KeSelectNodeForAffinity @ 0x1400B079C (KeSelectNodeForAffinity.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CD1F0 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CE820 (KiUnstackDetachProcess.c)
 *     KeQuerySystemTimeUnsafe @ 0x1400F2020 (KeQuerySystemTimeUnsafe.c)
 *     KeInitializeSemaphore @ 0x1400F2030 (KeInitializeSemaphore.c)
 *     KeQueryMaximumGroupCount @ 0x1400F204C (KeQueryMaximumGroupCount.c)
 *     PoEnergyEstimationEnabled @ 0x1400F2054 (PoEnergyEstimationEnabled.c)
 *     KeQuerySystemTimePrecise @ 0x1400F2100 (KeQuerySystemTimePrecise.c)
 *     RtlGetExtendedContextLength @ 0x1400F4858 (RtlGetExtendedContextLength.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     KeInitThread @ 0x1403C8E74 (KeInitThread.c)
 *     ObCreateObjectEx @ 0x14041D970 (ObCreateObjectEx.c)
 *     MmSecureVirtualMemory @ 0x14042A98C (MmSecureVirtualMemory.c)
 *     MmDeleteTeb @ 0x1404CD424 (MmDeleteTeb.c)
 *     PspWow64SetupUserStack @ 0x1404D2928 (PspWow64SetupUserStack.c)
 *     PspDeleteUserStack @ 0x1404ED8F4 (PspDeleteUserStack.c)
 *     MmCreateTeb @ 0x14050B47C (MmCreateTeb.c)
 *     PspSetupUserStack @ 0x14050B934 (PspSetupUserStack.c)
 *     ExCreateHandleEx @ 0x14050DBE0 (ExCreateHandleEx.c)
 *     PspWow64InitThread @ 0x14051AA18 (PspWow64InitThread.c)
 *     PspUmsInitThread @ 0x14067F5C0 (PspUmsInitThread.c)
 *     ExRaiseDatatypeMisalignment @ 0x1406B6058 (ExRaiseDatatypeMisalignment.c)
 */

__int64 __fastcall PspAllocateThread(
        struct _KPROCESS *BugCheckParameter1,
        __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __int64 a7,
        __int64 a8,
        int *a9,
        _QWORD *a10,
        _BYTE *a11,
        _QWORD *a12)
{
  char v13; // r11
  __int64 v16; // r9
  _QWORD *v17; // r10
  struct _KTHREAD *CurrentThread; // r14
  _QWORD *v19; // r15
  __int64 v20; // rbx
  __int64 v21; // rcx
  int v22; // edx
  unsigned int v23; // r14d
  unsigned int MaximumGroupCount; // ecx
  unsigned int v25; // r15d
  int v26; // ebx
  char *v27; // rbx
  unsigned __int64 *v28; // rsi
  _BYTE *v29; // rax
  _BYTE *v30; // rbx
  PVOID v31; // r14
  __int64 Handle; // rax
  __int64 v33; // r15
  int v34; // ebx
  int v35; // eax
  int v36; // esi
  __int64 v37; // rax
  __int64 v38; // r15
  int inited; // eax
  __int64 v40; // rdx
  int v42; // eax
  __int64 v43; // rdx
  _BYTE *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rax
  _QWORD *v47; // rcx
  __int64 v48; // rcx
  PVOID PoolWithTag; // rax
  __int64 v50; // rbx
  __int64 v51; // rbx
  _OWORD *v52; // r8
  __int16 v53; // ax
  __int16 v54; // dx
  __int16 v55; // ax
  void *v56; // rcx
  __int64 v57; // [rsp+20h] [rbp-168h]
  int v58; // [rsp+50h] [rbp-138h]
  int v59; // [rsp+54h] [rbp-134h]
  bool v60; // [rsp+58h] [rbp-130h]
  _QWORD *v61; // [rsp+68h] [rbp-120h]
  PVOID Object; // [rsp+70h] [rbp-118h] BYREF
  __int64 Teb; // [rsp+78h] [rbp-110h] BYREF
  _BYTE *v64; // [rsp+80h] [rbp-108h]
  __int64 v65; // [rsp+88h] [rbp-100h]
  _QWORD *v66; // [rsp+90h] [rbp-F8h]
  _QWORD *v67; // [rsp+98h] [rbp-F0h]
  int v68; // [rsp+A0h] [rbp-E8h]
  _DWORD NumberOfBytes[3]; // [rsp+A4h] [rbp-E4h]
  struct _KTHREAD *v70; // [rsp+B0h] [rbp-D8h]
  struct _KPROCESS *v71; // [rsp+B8h] [rbp-D0h]
  __int64 v72; // [rsp+C0h] [rbp-C8h]
  _QWORD *v73; // [rsp+C8h] [rbp-C0h]
  int v74; // [rsp+D0h] [rbp-B8h]
  int v75; // [rsp+D4h] [rbp-B4h]
  int v76; // [rsp+D8h] [rbp-B0h]
  int v77; // [rsp+DCh] [rbp-ACh]
  __int64 v78; // [rsp+E0h] [rbp-A8h]
  _QWORD *v79; // [rsp+E8h] [rbp-A0h]
  char v80[8]; // [rsp+F0h] [rbp-98h] BYREF
  __int64 v81; // [rsp+F8h] [rbp-90h]
  __int64 v82; // [rsp+100h] [rbp-88h]
  __int64 v83; // [rsp+108h] [rbp-80h]
  _BYTE v84[48]; // [rsp+110h] [rbp-78h] BYREF

  v13 = a3;
  v71 = BugCheckParameter1;
  v65 = a2;
  v72 = a4;
  v16 = a5;
  v73 = a6;
  v79 = a10;
  v64 = a11;
  v17 = a12;
  v67 = a12;
  *(_QWORD *)&NumberOfBytes[1] = 0LL;
  CurrentThread = KeGetCurrentThread();
  v70 = CurrentThread;
  v59 = 0;
  if ( a6 )
    v19 = (_QWORD *)*a6;
  else
    v19 = 0LL;
  v66 = v19;
  v61 = v19;
  if ( !a4 )
    goto LABEL_11;
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
        v26 = -1073741776;
LABEL_89:
        ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
        return (unsigned int)v26;
      }
    }
    else
    {
      *(_DWORD *)(a4 + 4) = v22 | 0x1000;
      *(_WORD *)(a4 + 320) = *(unsigned __int8 *)(v21 + 1616);
      *(_QWORD *)(a4 + 312) = qword_1403AA618[*(unsigned __int8 *)(v21 + 1616)];
    }
    v59 = *(unsigned __int16 *)(*(_QWORD *)(v21 + 1600) + 146LL) + 1;
    goto LABEL_76;
  }
  if ( v20 && *(_QWORD *)v20 )
  {
    v45 = KeSelectNodeForAffinity(v20);
    v59 = *(unsigned __int16 *)(v45 + 146) + 1;
    *(_DWORD *)(a4 + 4) |= 0x4000u;
    *(_DWORD *)(a4 + 244) = KeSelectIdealProcessor(v45, v20, 0LL);
    v16 = a5;
    v17 = v67;
    v13 = a3;
LABEL_76:
    CurrentThread = v70;
  }
  if ( (*(_DWORD *)(a4 + 4) & 0x8000) != 0
    && (BugCheckParameter1[1].ActiveProcessors.Bitmap[7] || BugCheckParameter1 != CurrentThread->Process) )
  {
    goto LABEL_88;
  }
LABEL_11:
  *((_DWORD *)v17 + 96) = 0;
  *((_BYTE *)v17 + 388) = v13;
  if ( v16 )
  {
    if ( BugCheckParameter1 == PsInitialSystemProcess )
    {
LABEL_88:
      v26 = -1073741811;
      goto LABEL_89;
    }
    if ( a2 )
    {
      if ( v13 == 1 && (a2 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( v13 )
        v42 = *(_DWORD *)(a2 + 24) & 0x1DF2;
      else
        v42 = *(_DWORD *)(a2 + 24) & 0x11FF2;
      v68 = v42;
      *((_DWORD *)v17 + 96) = v42;
    }
  }
  else if ( a2 )
  {
    *((_DWORD *)v17 + 96) = *(_DWORD *)(a2 + 24) & 0x11FF2;
  }
  v23 = 2016;
  v60 = PoEnergyEstimationEnabled();
  if ( v60 )
    v23 = 2080;
  MaximumGroupCount = KeQueryMaximumGroupCount();
  v25 = 0;
  if ( MaximumGroupCount > 1 )
  {
    v25 = (v23 + 7) & 0xFFFFFFF8;
    v23 = v25 + 8 * MaximumGroupCount;
  }
  v26 = ObCreateObjectEx(a3, PsThreadType, a2, a3, v57, v23, 0, v23, &Object, 0LL);
  v58 = v26;
  if ( v26 < 0 )
    goto LABEL_89;
  v27 = (char *)Object;
  memset(Object, 0, v23);
  if ( v60 )
  {
    *((_QWORD *)v27 + 245) = v27 + 2016;
    _interlockedbittestandset((volatile signed __int32 *)v27, 0x15u);
    v27 = (char *)Object;
  }
  if ( v25 )
  {
    *((_DWORD *)v27 + 432) |= 0x20000u;
    *((_QWORD *)v27 + 247) = &v27[v25];
  }
  *((_QWORD *)v27 + 213) = 0LL;
  v67 = v27 + 1584;
  *((_QWORD *)v27 + 198) = BugCheckParameter1[1].Header.WaitListHead.Blink;
  if ( (*a9 & 4) != 0 )
    *((_DWORD *)v27 + 432) |= 4u;
  v28 = (unsigned __int64 *)(v27 + 1712);
  *((_QWORD *)v27 + 214) = 0LL;
  *((_DWORD *)v27 + 430) = 7;
  KeInitializeSemaphore((PRKSEMAPHORE)v27 + 50, 0, 1);
  *((_QWORD *)v27 + 190) = v27 + 1512;
  *((_QWORD *)v27 + 189) = v27 + 1512;
  *((_QWORD *)v27 + 226) = v27 + 1800;
  *((_QWORD *)v27 + 225) = v27 + 1800;
  *((_QWORD *)v27 + 228) = v27 + 1816;
  *((_QWORD *)v27 + 227) = v27 + 1816;
  *((_QWORD *)v27 + 229) = 0LL;
  *((_QWORD *)v27 + 240) = v27 + 1912;
  *((_QWORD *)v27 + 239) = v27 + 1912;
  *((_QWORD *)v27 + 241) = 0LL;
  *((_QWORD *)v27 + 206) = v27 + 1640;
  *((_QWORD *)v27 + 205) = v27 + 1640;
  *((_QWORD *)v27 + 230) = 0LL;
  *((_QWORD *)v27 + 195) = 0LL;
  *((_QWORD *)v27 + 197) = v27 + 1568;
  *((_QWORD *)v27 + 196) = v27 + 1568;
  *((_QWORD *)v27 + 248) = -3LL;
  if ( KeQuerySystemTimeUnsafe() )
    KeQuerySystemTimePrecise((__int64 *)v27 + 188);
  else
    *((_QWORD *)Object + 188) = MEMORY[0xFFFFF78000000014];
  v29 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(v27 + 1712), 0LL, 0);
  v30 = v29;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v28, 0LL) )
    ExfAcquirePushLockExclusiveEx(v28, v29, (ULONG_PTR)v28);
  if ( v30 )
    v30[26] |= 1u;
  v31 = Object;
  Handle = ExCreateHandleEx(PspCidTable, (__int64)Object, 0, 0, 0LL);
  *((_QWORD *)v31 + 199) = Handle;
  if ( !Handle )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v28);
    KeAbPostRelease((ULONG_PTR)v28);
    v36 = -1073741670;
    v58 = -1073741670;
    v31 = Object;
    goto LABEL_110;
  }
  v33 = a5;
  if ( !a5 )
  {
    v38 = 0LL;
    Teb = 0LL;
    *((_QWORD *)v31 + 193) = a7;
    *((_QWORD *)v31 + 209) = a7;
    inited = KeInitThread(
               (__int64)v31,
               0LL,
               (__int64)PspSystemThreadStartup,
               a7,
               a8,
               0LL,
               0LL,
               (__int64)BugCheckParameter1,
               v59);
    goto LABEL_50;
  }
  v34 = 0;
  LODWORD(v65) = 0;
  v35 = *a9;
  if ( (*a9 & 0x40) != 0 )
  {
    v34 = 1024;
    LODWORD(v65) = 1024;
  }
  if ( (v35 & 2) != 0 )
  {
    LOWORD(v34) = v34 | 8;
    LODWORD(v65) = v34;
  }
  if ( (v35 & 0x80u) != 0 )
  {
    LOWORD(v34) = v34 | 0x2000;
    LODWORD(v65) = v34;
  }
  if ( !v64 )
  {
    if ( BugCheckParameter1[2].ActiveProcessors.Bitmap[9] )
    {
      Teb = 0LL;
      v46 = *(_QWORD *)(a5 + 248);
      *((_QWORD *)v31 + 193) = v46;
      *((_QWORD *)v31 + 209) = v46;
      v47 = v73;
      *((_QWORD *)v31 + 243) = v73[1];
      *((_QWORD *)v31 + 244) = v47[2];
      _interlockedbittestandset((volatile signed __int32 *)v31, 0x1Au);
      v48 = 1048607LL;
      if ( MEMORY[0xFFFFF780000003D8] )
        v48 = 1048671LL;
      RtlGetExtendedContextLength(v48);
      PoolWithTag = ExAllocatePoolWithTag(PagedPool, NumberOfBytes[0], 0x63537350u);
      v31 = Object;
      *((_QWORD *)Object + 250) = PoolWithTag;
      if ( !PoolWithTag )
      {
        v36 = -1073741670;
        v58 = -1073741670;
        goto LABEL_110;
      }
      v38 = Teb;
      goto LABEL_49;
    }
    v50 = (__int64)v70;
    Teb = (__int64)v70->Teb;
    v38 = Teb;
    *((_QWORD *)v31 + 193) = PsQueryThreadStartAddress((__int64)v70, 1);
    *((_QWORD *)v31 + 209) = *(_QWORD *)(v50 + 1672);
    *((_DWORD *)v31 + 433) |= 0x10u;
    v51 = BugCheckParameter1[1].ActiveProcessors.Bitmap[7] != 0 ? 0x17C8 : 0;
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v84);
    if ( MmSecureVirtualMemory((PVOID)v38, v51 + 6200, 4u) )
    {
      v52 = v67;
      *(_OWORD *)(v38 + 64) = *(_OWORD *)v67;
      *(_OWORD *)(v38 + 2008) = *v52;
      *(_DWORD *)(v38 + 6044) = 0;
      *(_DWORD *)(v38 + 6120) = 0;
      v53 = *(_WORD *)(v38 + 6126) & 0x62C;
      *(_WORD *)(v38 + 6126) = v53;
      v54 = v65;
      *(_WORD *)(v38 + 6126) = v65 | v53 | 0x40;
      if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
      {
        v78 = v38 + 0x2000;
        v74 = *(_DWORD *)v52;
        *(_DWORD *)(v38 + 8224) = v74;
        v75 = *((_DWORD *)v31 + 398);
        *(_DWORD *)(v38 + 8228) = v75;
        v76 = *(_DWORD *)v52;
        *(_DWORD *)(v38 + 9908) = v76;
        v77 = *((_DWORD *)v31 + 398);
        *(_DWORD *)(v38 + 9912) = v77;
        *(_DWORD *)(v38 + 12188) = 0;
        *(_DWORD *)(v38 + 12228) = 0;
        v55 = *(_WORD *)(v38 + 12234) & 0x62C;
        *(_WORD *)(v38 + 12234) = v55;
        *(_WORD *)(v38 + 12234) = v54 | v55 | 0x40;
      }
      v36 = v58;
    }
    else
    {
      v36 = -1073741503;
      v58 = -1073741503;
    }
LABEL_64:
    KiUnstackDetachProcess((struct _KTHREAD *)v84, 0);
    if ( v36 < 0 )
      goto LABEL_110;
    goto LABEL_49;
  }
  if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
  {
    v80[0] = 0;
    v82 = 0x8000LL;
    v83 = 0x40000LL;
    v81 = 0LL;
    v36 = PspSetupUserStack((__int64)BugCheckParameter1, a5, v61, (__int64)v80, v59);
    v58 = v36;
    if ( v36 >= 0 )
    {
      v44 = v64;
      *v64 ^= (v80[0] ^ *v64) & 2;
      v36 = PspWow64SetupUserStack(BugCheckParameter1, v43, (__int64)v61, (__int64)v44, v59);
      v58 = v36;
    }
    v33 = a5;
  }
  else
  {
    v36 = PspSetupUserStack((__int64)BugCheckParameter1, a5, v61, (__int64)v64, v59);
    v58 = v36;
  }
  if ( v36 < 0 )
    goto LABEL_110;
  if ( a4 )
  {
    v37 = *(_QWORD *)&NumberOfBytes[1];
    if ( (((*(_DWORD *)(a4 + 4) & 0x8000) != 0) & !_bittest64((const signed __int64 *)&KeFeatureBits, 0x1Cu)) != 0 )
      v37 = 0x100000000LL;
  }
  else
  {
    v37 = *(_QWORD *)&NumberOfBytes[1];
  }
  v36 = MmCreateTeb(BugCheckParameter1, (unsigned __int64)v61, v67, v37, (unsigned __int64 *)&Teb);
  v58 = v36;
  if ( v36 < 0 )
    goto LABEL_110;
  *((_QWORD *)v31 + 193) = *(_QWORD *)(v33 + 248);
  *((_QWORD *)v31 + 209) = *(_QWORD *)(v33 + 128);
  v38 = Teb;
  if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
  {
    v36 = PspWow64InitThread((ULONG_PTR)BugCheckParameter1);
    v58 = v36;
    if ( v36 < 0 )
      goto LABEL_110;
  }
  if ( (_WORD)v34 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0, (__int64)v84);
    *(_WORD *)(v38 + 6126) = v34;
    if ( BugCheckParameter1[1].ActiveProcessors.Bitmap[7] )
    {
      v78 = v38 + 0x2000;
      *(_WORD *)(v38 + 12234) = v34;
    }
    v36 = 0;
    v58 = 0;
    goto LABEL_64;
  }
LABEL_49:
  inited = KeInitThread(
             (__int64)v31,
             0LL,
             (__int64)PspUserThreadStartup,
             a7,
             *((_QWORD *)v31 + 193),
             (_OWORD *)a5,
             v38,
             (__int64)BugCheckParameter1,
             v59);
LABEL_50:
  v58 = inited;
  v36 = inited;
  if ( inited < 0 )
  {
    if ( !v38 || !v64 )
      goto LABEL_110;
  }
  else if ( !a4
         || (*(_DWORD *)(a4 + 4) & 0x8000) == 0
         || (LOBYTE(v40) = a3, v36 = PspUmsInitThread(v31, v40, a4, v38), v58 = v36, v36 >= 0) )
  {
    *v79 = v31;
    return 0LL;
  }
  MmDeleteTeb(BugCheckParameter1, v38);
LABEL_110:
  if ( v64 && *v64 )
    PspDeleteUserStack(BugCheckParameter1, (__int64)v61, v64);
  v56 = (void *)*((_QWORD *)v31 + 250);
  if ( v56 )
  {
    ExFreePoolWithTag(v56, 0x63537350u);
    *((_QWORD *)v31 + 250) = 0LL;
  }
  if ( *((_QWORD *)v31 + 199) )
  {
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v31 + 214, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v31 + 214);
    KeAbPostRelease((ULONG_PTR)v31 + 1712);
    v36 = v58;
    v31 = Object;
  }
  if ( !*((_QWORD *)v31 + 68) )
    ObfDereferenceObjectWithTag(BugCheckParameter1, 0x72437350u);
  ObfDereferenceObject(v31);
  return (unsigned int)v36;
}
