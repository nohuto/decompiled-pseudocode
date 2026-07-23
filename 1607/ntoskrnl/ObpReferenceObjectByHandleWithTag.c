/*
 * XREFs of ObpReferenceObjectByHandleWithTag @ 0x14044FC50
 * Callers:
 *     NtOpenProcessTokenEx @ 0x14041F100 (NtOpenProcessTokenEx.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 *     NtUnmapViewOfSectionEx @ 0x14042D1D0 (NtUnmapViewOfSectionEx.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     NtProtectVirtualMemory @ 0x140432A50 (NtProtectVirtualMemory.c)
 *     NtMapViewOfSection @ 0x140435610 (NtMapViewOfSection.c)
 *     NtWaitForSingleObject @ 0x1404469A0 (NtWaitForSingleObject.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     ObReferenceObjectByHandle @ 0x14044FC10 (ObReferenceObjectByHandle.c)
 *     MiReadWriteVirtualMemory @ 0x1404EEBF0 (MiReadWriteVirtualMemory.c)
 *     NtDuplicateObject @ 0x1404EF990 (NtDuplicateObject.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     NtQueryInformationThread @ 0x1404FCA40 (NtQueryInformationThread.c)
 * Callees:
 *     PsDereferenceSiloContext @ 0x1400019C0 (PsDereferenceSiloContext.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     ExSlowReplenishHandleTableEntry @ 0x140090450 (ExSlowReplenishHandleTableEntry.c)
 *     ObpIncrPointerCountEx @ 0x1400A3908 (ObpIncrPointerCountEx.c)
 *     ExFastReplenishHandleTableEntry @ 0x1400AB7B4 (ExFastReplenishHandleTableEntry.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     ExfUnblockPushLock @ 0x140159E30 (ExfUnblockPushLock.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExHandleLogBadReference @ 0x14022C880 (ExHandleLogBadReference.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 *     ObReferenceProcessHandleTable @ 0x1404F00E0 (ObReferenceProcessHandleTable.c)
 *     ObpAuditObjectAccess @ 0x140665E04 (ObpAuditObjectAccess.c)
 *     ExpGetHandleExtraInfo @ 0x1406AD68C (ExpGetHandleExtraInfo.c)
 *     VfCheckUserHandle @ 0x1407117A8 (VfCheckUserHandle.c)
 */

__int64 __fastcall ObpReferenceObjectByHandleWithTag(
        ULONG_PTR BugCheckParameter1,
        int a2,
        __int64 a3,
        char a4,
        int a5,
        _QWORD *a6,
        _DWORD *a7,
        _QWORD *a8)
{
  struct _KTHREAD *CurrentThread; // rsi
  _QWORD *v10; // rax
  unsigned int v12; // edx
  ULONG_PTR v13; // r12
  _KPROCESS *Process; // r13
  ULONG_PTR v15; // r15
  _QWORD *v16; // rax
  PVOID v17; // r8
  _QWORD *v18; // r14
  __int64 v19; // rcx
  signed __int64 v20; // rbp
  __int64 v21; // rdi
  __int64 v22; // rax
  __int128 v23; // rt0
  unsigned __int8 v24; // tt
  unsigned __int64 v25; // rbx
  __int64 v26; // rcx
  int v27; // edx
  __int64 v28; // rdi
  char v29; // r10
  unsigned __int64 v31; // rcx
  int v32; // edi
  unsigned int v33; // edi
  signed __int64 v34; // rbx
  signed __int64 v35; // r8
  unsigned __int64 v36; // rcx
  __int64 v37; // rax
  ULONG_PTR v38; // rdi
  signed __int64 BugCheckParameter4; // rbx
  _QWORD *HandleExtraInfo; // rax
  _QWORD *v41; // r11
  volatile signed __int64 *v42; // rdi
  int v43; // ecx
  signed __int32 v44[8]; // [rsp+0h] [rbp-98h] BYREF
  __int128 v45; // [rsp+30h] [rbp-68h] BYREF
  __int64 v46; // [rsp+40h] [rbp-58h]
  char v47; // [rsp+A0h] [rbp+8h]

  CurrentThread = KeGetCurrentThread();
  v10 = a6;
  v12 = 0;
  v13 = BugCheckParameter1;
  Process = CurrentThread->ApcState.Process;
  *a6 = 0LL;
  v47 = 0;
  if ( a8 )
    *a8 = 0LL;
  if ( (BugCheckParameter1 & 0x80000000) != 0LL )
  {
    if ( BugCheckParameter1 == -1LL )
    {
      if ( (POBJECT_TYPE *)a3 == PsProcessType || !a3 )
      {
        v38 = (ULONG_PTR)CurrentThread->ApcState.Process;
        if ( (a2 & 0xFFE00000) != 0 && a4 )
        {
          return (unsigned int)-1073741790;
        }
        else
        {
          if ( a7 )
          {
            a7[1] = 0x1FFFFF;
            *a7 = 0;
          }
          if ( ObpTraceFlags )
          {
            ObpPushStackInfo(v38 - 48, 1, 1u, a5);
            v10 = a6;
            v12 = 0;
          }
          BugCheckParameter4 = _InterlockedIncrement64((volatile signed __int64 *)(v38 - 48));
          if ( BugCheckParameter4 <= 1 )
            KeBugCheckEx(0x18u, 0LL, v38, 0x10uLL, BugCheckParameter4);
          *v10 = v38;
        }
      }
      else
      {
        return (unsigned int)-1073741788;
      }
      return v12;
    }
    if ( BugCheckParameter1 == -2LL )
    {
      if ( (POBJECT_TYPE *)a3 == PsThreadType || !a3 )
      {
        if ( (a2 & 0xFFE00000) != 0 && a4 )
        {
          return (unsigned int)-1073741790;
        }
        else
        {
          if ( a7 )
          {
            a7[1] = 0x1FFFFF;
            *a7 = 0;
          }
          if ( ObpTraceFlags )
          {
            ObpPushStackInfo((__int64)&CurrentThread[-1].WriteOperationCount, 1, 1u, a5);
            v10 = a6;
            v12 = 0;
          }
          v34 = _InterlockedIncrement64(&CurrentThread[-1].WriteOperationCount);
          if ( v34 <= 1 )
            KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)CurrentThread, 0x10uLL, v34);
          *v10 = CurrentThread;
        }
      }
      else
      {
        return (unsigned int)-1073741788;
      }
      return v12;
    }
    if ( a4 )
      return 3221225480LL;
    v15 = ObpKernelHandleTable;
    v13 = BugCheckParameter1 ^ 0xFFFFFFFF80000000uLL;
    --CurrentThread->KernelApcDisable;
    goto LABEL_10;
  }
  if ( (MmVerifierData & 0x100) != 0 && !a4 )
    VfCheckUserHandle(BugCheckParameter1);
  --CurrentThread->KernelApcDisable;
  if ( Process == CurrentThread->Process )
  {
    if ( (Process[1].DirectoryTableBase & 0x400000000000000LL) == 0 )
    {
LABEL_93:
      v33 = -1073741816;
      goto LABEL_83;
    }
    v15 = Process[1].ActiveProcessors.Bitmap[5];
  }
  else
  {
    v15 = ObReferenceProcessHandleTable(Process);
    v47 = 1;
  }
  if ( !v15 )
    goto LABEL_93;
  if ( v15 == ObpKernelHandleTable )
  {
LABEL_89:
    v33 = -1073741816;
    goto LABEL_81;
  }
LABEL_10:
  if ( (v13 & 0x3FC) == 0 || (v16 = (_QWORD *)ExpLookupHandleTableEntry(v15, v13), (v18 = v16) == 0LL) )
  {
LABEL_87:
    if ( v13 )
      ExHandleLogBadReference(v15, v13, KeGetCurrentThread()->PreviousMode);
    goto LABEL_89;
  }
  _m_prefetchw(v16);
  v19 = *v16;
  v20 = v16[1];
  *((_QWORD *)&v45 + 1) = v20;
  *(_QWORD *)&v45 = v19;
  v21 = v19;
  if ( (v19 & 0x1FFFE) == 0 )
    goto LABEL_56;
  while ( 1 )
  {
    if ( (v21 & 1) == 0 )
    {
      ExpBlockOnLockedHandleEntry(v15, v18, v21);
      _m_prefetchw(v18);
      v20 = v18[1];
      *(_QWORD *)&v45 = *v18;
      v21 = v45;
      *((_QWORD *)&v45 + 1) = v20;
      goto LABEL_77;
    }
    v46 = v21 - 2;
    *(_QWORD *)&v23 = v21;
    *((_QWORD *)&v23 + 1) = v20;
    v24 = _InterlockedCompareExchange128(v18, v20, v21 - 2, (signed __int64 *)&v23);
    v22 = v23;
    v21 = v23;
    v45 = v23;
    v20 = *((_QWORD *)&v23 + 1);
    if ( v24 )
      break;
LABEL_77:
    if ( (v21 & 0x1FFFE) == 0 )
    {
      do
      {
LABEL_56:
        while ( 1 )
        {
          _m_prefetchw(v18);
          v35 = *v18;
          if ( (*v18 & 1) != 0 )
            break;
          if ( !v35 )
            goto LABEL_87;
          ExpBlockOnLockedHandleEntry(v15, v18, v35);
        }
      }
      while ( v35 != _InterlockedCompareExchange64(v18, v35 - 1, v35) );
      v25 = ((__int64)*v18 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
      v45 = *(_OWORD *)v18;
      v36 = (int)(ExSlowReplenishHandleTableEntry(v18) + 1);
      v37 = _InterlockedExchangeAdd64((volatile signed __int64 *)v25, v36);
      if ( v37 <= 0 )
        KeBugCheckEx(0x18u, 0LL, v25 + 48, 0x10uLL, v36 + v37);
      _InterlockedExchangeAdd64(v18, 1uLL);
      _InterlockedOr(v44, 0);
      if ( *(_QWORD *)(v15 + 48) )
        ExfUnblockPushLock((volatile __int64 *)(v15 + 48), 0LL);
      goto LABEL_61;
    }
  }
  if ( (unsigned __int16)((unsigned __int64)v22 >> 1) != 16 )
  {
    v25 = (v22 >> 16) & 0xFFFFFFFFFFFFFFF0uLL;
    goto LABEL_17;
  }
  *(_QWORD *)&v45 = ((unsigned int)v21 ^ (2 * (unsigned int)((unsigned __int64)v22 >> 1) - 2)) & 0x1FFFE ^ (unsigned __int64)v21;
  v42 = (volatile signed __int64 *)(((__int64)v45 >> 16) & 0xFFFFFFFFFFFFFFF0uLL);
  v25 = (unsigned __int64)v42;
  ObpIncrPointerCountEx(v42, 32752);
  v43 = ExFastReplenishHandleTableEntry(v18, (unsigned __int64 *)&v45, 32752);
  if ( v43 )
    _InterlockedExchangeAdd64(v42, -v43);
LABEL_61:
  LODWORD(v20) = DWORD2(v45);
  v21 = v45;
LABEL_17:
  if ( ObpTraceFlags )
    ObpPushStackInfo(v25, 1, 1u, a5);
  v26 = (unsigned __int8)ObHeaderCookie ^ *(unsigned __int8 *)(v25 + 24) ^ (unsigned int)BYTE1(v25);
  if ( !a3 || *(unsigned __int8 *)(a3 + 40) != (_DWORD)v26 )
  {
    v17 = (PVOID)ObTypeIndexTable[v26];
    if ( !v17 || v17 == MmBadPointer )
      KeBugCheckEx(0x189u, v25, (ULONG_PTR)v17, 0LL, 0LL);
    if ( a3 )
    {
      v33 = -1073741788;
      goto LABEL_80;
    }
  }
  v27 = v20 & 0x1FFFFFF;
  if ( !a4 )
    goto LABEL_24;
  if ( (~v27 & a2) != 0 )
  {
    v33 = -1073741790;
    goto LABEL_80;
  }
  if ( (*(_BYTE *)(v25 + 26) & 0x40) == 0
    || (v31 = v25 - ObpInfoMaskToOffset[*(_BYTE *)(v25 + 26) & 0x7F], !*(_BYTE *)(*(_QWORD *)v31 + 24LL)) )
  {
LABEL_24:
    v28 = (v21 >> 17) & 7;
    if ( a7 )
    {
      a7[1] = v27;
      if ( (v20 & 0x2000000) != 0 )
        LOBYTE(v28) = v28 | 8;
      v32 = v28 & 7;
      *a7 = v32;
      if ( (v32 & 4) == 0 )
        goto LABEL_28;
    }
    else
    {
      if ( (v20 & 0x2000000) != 0 )
        LOBYTE(v28) = v28 | 8;
      if ( (v28 & 4) == 0 )
      {
LABEL_28:
        v29 = 0;
        goto LABEL_29;
      }
    }
    v29 = 1;
LABEL_29:
    if ( a8 )
    {
      if ( *(_DWORD *)(v15 + 4) )
      {
        HandleExtraInfo = (_QWORD *)ExpGetHandleExtraInfo(v15, v13, v17);
        if ( HandleExtraInfo )
          *v41 = *HandleExtraInfo;
      }
    }
    if ( v29 && a2 && !(unsigned __int8)ObpAuditObjectAccess(v15, v13, (_DWORD)v18, v25, a2) )
    {
      v33 = -1073741816;
      goto LABEL_80;
    }
    *a6 = v25 + 48;
    if ( v47 )
      ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
    KeLeaveCriticalRegionThread((__int64)CurrentThread);
    return 0LL;
  }
  if ( *(_QWORD *)(*(_QWORD *)v31 + 16LL) != 1LL )
  {
    LODWORD(v20) = DWORD2(v45);
    v21 = v45;
    goto LABEL_24;
  }
  v33 = -1073700858;
LABEL_80:
  PsDereferenceSiloContext((void *)(v25 + 48));
LABEL_81:
  if ( v47 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)&Process[1].Header.WaitListHead);
LABEL_83:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v33;
}
