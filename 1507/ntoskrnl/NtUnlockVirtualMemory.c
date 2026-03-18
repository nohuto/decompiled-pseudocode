/*
 * XREFs of NtUnlockVirtualMemory @ 0x14007ECE0
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockVa @ 0x14007C98C (MiUnlockVa.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRotatedToFrameBuffer @ 0x140080948 (MiRotatedToFrameBuffer.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 *     EtwTraceShouldYieldProcessor @ 0x14025D5E8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiUnlockVadRange @ 0x1404B1B2C (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404B1C28 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1404B1E84 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtUnlockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToUnlock,
        ULONG MapType)
{
  NTSTATUS result; // eax
  ULONG_PTR v6; // r15
  int v7; // ebx
  __int64 v8; // rsi
  unsigned __int64 v9; // r14
  ULONG_PTR v10; // r13
  unsigned __int64 k; // rdi
  unsigned __int64 v12; // r8
  char *v13; // r14
  __int64 v14; // rax
  volatile signed __int32 *v15; // r14
  __int64 CurrentIrql; // r12
  signed __int32 v17; // edx
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r11d
  unsigned int DpcTimeCount; // r10d
  unsigned int v21; // esi
  BOOL v22; // edx
  volatile int DpcRequestSummary; // r8d
  int v24; // r9d
  _KTHREAD *NextThread; // rax
  volatile signed __int32 *v26; // rsi
  unsigned __int8 v27; // r14
  signed __int32 i; // edx
  __int64 v29; // rcx
  unsigned __int64 v30; // rax
  _QWORD **v31; // rcx
  _QWORD *j; // rax
  int v33; // ecx
  unsigned __int64 v34; // r12
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 PteShadow; // rcx
  __int64 v38; // r15
  char *v39; // rsi
  unsigned __int64 Wsle; // rax
  unsigned __int64 v41; // r12
  ULONG_PTR v42; // r15
  unsigned __int64 v43; // r14
  unsigned __int64 ii; // rdi
  ULONG_PTR v45; // r13
  __int64 v46; // r12
  unsigned __int64 v47; // rax
  _QWORD **v48; // rcx
  _QWORD *n; // rax
  volatile signed __int32 *v50; // rsi
  unsigned __int8 v51; // r13
  signed __int32 m; // edx
  __int64 v53; // rcx
  PVOID v54; // r14
  __int64 v55; // rcx
  PVOID Object; // [rsp+40h] [rbp-198h] BYREF
  int v57; // [rsp+48h] [rbp-190h]
  int v58; // [rsp+4Ch] [rbp-18Ch]
  NTSTATUS v59; // [rsp+50h] [rbp-188h]
  int v60; // [rsp+54h] [rbp-184h]
  int v61; // [rsp+58h] [rbp-180h]
  __int64 v62; // [rsp+60h] [rbp-178h]
  __int64 v63; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v64; // [rsp+70h] [rbp-168h]
  unsigned __int64 v65; // [rsp+78h] [rbp-160h]
  __int64 v66; // [rsp+80h] [rbp-158h]
  PSIZE_T v67; // [rsp+88h] [rbp-150h]
  PVOID *v68; // [rsp+90h] [rbp-148h]
  __int64 v69; // [rsp+98h] [rbp-140h] BYREF
  _DWORD v70[40]; // [rsp+A0h] [rbp-138h] BYREF
  _BYTE v71[48]; // [rsp+140h] [rbp-98h] BYREF
  unsigned __int64 v72; // [rsp+170h] [rbp-68h]
  unsigned __int64 v73; // [rsp+178h] [rbp-60h]
  unsigned __int64 v74; // [rsp+180h] [rbp-58h]
  __int64 v75; // [rsp+188h] [rbp-50h]

  v67 = NumberOfBytesToUnlock;
  v68 = BaseAddress;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v63, (__int64)&v69, (__int64)&Object);
  v59 = result;
  if ( result < 0 )
    return result;
  v6 = 0LL;
  v65 = 0LL;
  v7 = 0;
  v57 = 0;
  v8 = v63;
  v9 = (v63 + v69 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v64 = v9;
  v10 = v63 & 0xFFFFFFFFFFFFF000uLL;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((ULONG_PTR)Object);
    v7 = 2;
    v57 = 2;
  }
  v70[0] = 0;
  k = 0LL;
  v12 = v9;
  v13 = (char *)Object;
  v14 = MiLockVadRange(Object, v10, v12);
  v66 = v14;
  if ( !v14 )
    goto LABEL_133;
  v15 = (volatile signed __int32 *)(v13 + 1272);
  CurrentIrql = KeGetCurrentIrql();
  v62 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v15);
  }
  else
  {
    v61 = 0;
    if ( _interlockedbittestandset(v15, 0x1Fu) )
      v61 = ExpWaitForSpinLockExclusiveAndAcquire(v15);
    while ( 1 )
    {
      v17 = *v15;
      if ( (*v15 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v17 & 0x40000000) == 0 )
        _InterlockedCompareExchange(v15, v17 | 0x40000000, v17);
      v55 = (unsigned int)(v61 + 1);
      v61 = v55;
      if ( ((unsigned int)v55 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v55);
    }
    v8 = v63;
  }
  if ( v10 <= v64 )
  {
    while ( 1 )
    {
      if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 && (*((_DWORD *)Object + 318) & 0x40000000) != 0 )
      {
LABEL_37:
        if ( v70[0] )
        {
          MiFreeWsleList((char *)Object + 1272, v70, 0LL);
          v70[0] = 0;
        }
        v26 = (volatile signed __int32 *)((char *)Object + 1272);
        MiUnlockWorkingSetExclusive((char *)Object + 1272, (unsigned __int8)CurrentIrql);
        v27 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v26);
        }
        else
        {
          v60 = 0;
          if ( _interlockedbittestandset(v26, 0x1Fu) )
            v60 = ExpWaitForSpinLockExclusiveAndAcquire(v26);
          for ( i = *v26; (*v26 & 0xBFFFFFFF) != 0x80000000; i = *v26 )
          {
            if ( (i & 0x40000000) == 0 )
              _InterlockedCompareExchange(v26, i | 0x40000000, i);
            v29 = (unsigned int)(v60 + 1);
            v60 = v29;
            if ( ((unsigned int)v29 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v29);
          }
        }
        LOBYTE(v62) = v27;
        goto LABEL_52;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      v21 = 0;
      v22 = DpcWatchdogCount > 7;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v24 = 1;
        if ( DpcTimeCount > 7 )
        {
          v22 = 1;
          if ( CurrentPrcb->QuantumEnd )
          {
            v21 = 1;
            goto LABEL_34;
          }
        }
      }
      else
      {
        v24 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v21 = 2;
          goto LABEL_34;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v21 = 3;
          goto LABEL_34;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v21 = 4;
          goto LABEL_34;
        }
      }
      if ( !v22 )
        goto LABEL_52;
      if ( !v24 )
        goto LABEL_33;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v21 = 5;
        goto LABEL_34;
      }
      if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
      {
LABEL_33:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        _enable();
      }
      else
      {
        v21 = 6;
      }
LABEL_34:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v21, DpcWatchdogCount, DpcTimeCount);
      if ( v21 )
        goto LABEL_37;
LABEL_52:
      if ( v10 > v6 || !k )
      {
        if ( k )
        {
          v30 = k;
          v31 = *(_QWORD ***)(k + 8);
          if ( v31 )
          {
            k = *(_QWORD *)(k + 8);
            for ( j = *v31; j; j = (_QWORD *)*j )
              k = (unsigned __int64)j;
          }
          else
          {
            for ( k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL; k; k = *(_QWORD *)(k + 16) & 0xFFFFFFFFFFFFFFFCuLL )
            {
              if ( *(_QWORD *)k == v30 )
                break;
              v30 = k;
            }
          }
        }
        else
        {
          k = MiLocateAddress(v10);
        }
        v7 &= ~4u;
        v57 = v7;
        v33 = *(_DWORD *)(k + 48) & 7;
        if ( v33 == 6 )
        {
          v7 |= 4u;
          v57 = v7;
        }
        else if ( ((1 << v33) & 0x15) == 0 )
        {
          goto LABEL_86;
        }
        v65 = (*(unsigned int *)(k + 28) | ((unsigned __int64)*(unsigned __int8 *)(k + 33) << 32)) << 12;
      }
      if ( (__int64)v10 >> 47 == -1 || (__int64)v10 >> 47 == 0 )
      {
        v34 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v72 = v34;
        v73 = ((v34 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v74 = ((v73 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v75 = ((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        LODWORD(v35) = 4;
        while ( 1 )
        {
          v35 = (unsigned int)(v35 - 1);
          v36 = *(_QWORD *)*(&v72 + v35);
          if ( (v36 & 1) == 0 )
            break;
          if ( (unsigned int)v35 <= 1 && (v36 & 0x80u) != 0LL )
          {
            if ( !(_DWORD)v35 )
              break;
LABEL_75:
            PteShadow = *(_QWORD *)v34;
            if ( v34 + 0x90482413000LL <= 0x7F8 )
              PteShadow = MiReadPteShadow(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, *(_QWORD *)v34);
            v38 = *(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 8);
            if ( (v7 & 4) == 0
              || (unsigned int)MiRotatedToFrameBuffer(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) != 1 )
            {
              if ( (v38 & 0x8000000000000000uLL) == 0 )
                MiDemoteCombinedPte(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL, v38 | 0x8000000000000000uLL);
              v39 = (char *)Object;
              Wsle = MiLocateWsle(v10);
              if ( Wsle >= MEMORY[0xFFFFF58010804008] )
              {
                *(_QWORD *)&v70[2 * v70[0] + 2] = Wsle;
                if ( ++v70[0] == 19 )
                {
                  MiFreeWsleList(v39 + 1272, v70, 0LL);
                  v70[0] = 0;
                }
                break;
              }
            }
            goto LABEL_85;
          }
          if ( !(_DWORD)v35 )
            goto LABEL_75;
        }
      }
      v59 = -1073741782;
LABEL_85:
      v10 += 4096LL;
      v6 = v65;
      if ( v10 > v64 )
      {
LABEL_86:
        v8 = v63;
        break;
      }
      LOBYTE(CurrentIrql) = v62;
    }
  }
  if ( v59 == -1073741782 )
  {
    if ( v70[0] )
      MiFreeWsleList((char *)Object + 1272, v70, 0LL);
    MiUnlockWorkingSetExclusive((char *)Object + 1272, (unsigned __int8)v62);
    v14 = v66;
LABEL_133:
    MiUnlockVadRange(Object, v8, v14);
    if ( (v7 & 2) != 0 )
      KiUnstackDetachProcess(v71, 0LL);
    ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
    return -1073741782;
  }
  v41 = v8 & 0xFFFFFFFFFFFFF000uLL;
  v65 = v8 & 0xFFFFFFFFFFFFF000uLL;
  v42 = v8 & 0xFFFFFFFFFFFFF000uLL;
  v43 = 0LL;
  ii = 0LL;
  v45 = v64;
  if ( (v8 & 0xFFFFFFFFFFFFF000uLL) > v64 )
    goto LABEL_124;
  v46 = v62;
  while ( v42 <= v43 && ii )
  {
LABEL_106:
    v50 = (volatile signed __int32 *)((char *)Object + 1272);
    MiUnlockVa((__int64)Object + 1272, v42);
    v42 += 4096LL;
    if ( (v42 & 0xF000) == 0 && (*v50 & 0x40000000) != 0 || KeShouldYieldProcessor() )
    {
      MiUnlockWorkingSetExclusive(v50, (unsigned __int8)v46);
      v51 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v50);
      }
      else
      {
        v58 = 0;
        if ( _interlockedbittestandset(v50, 0x1Fu) )
          v58 = ExpWaitForSpinLockExclusiveAndAcquire(v50);
        for ( m = *v50; (*v50 & 0xBFFFFFFF) != 0x80000000; m = *v50 )
        {
          if ( (m & 0x40000000) == 0 )
            _InterlockedCompareExchange(v50, m | 0x40000000, m);
          v53 = (unsigned int)(v58 + 1);
          v58 = v53;
          if ( ((unsigned int)v53 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v53);
        }
      }
      v46 = v51;
      v45 = v64;
    }
    if ( v42 > v45 )
      goto LABEL_123;
  }
  if ( ii )
  {
    v47 = ii;
    v48 = *(_QWORD ***)(ii + 8);
    if ( v48 )
    {
      ii = *(_QWORD *)(ii + 8);
      for ( n = *v48; n; n = (_QWORD *)*n )
        ii = (unsigned __int64)n;
    }
    else
    {
      for ( ii = *(_QWORD *)(ii + 16) & 0xFFFFFFFFFFFFFFFCuLL; ii; ii = *(_QWORD *)(ii + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)ii == v47 )
          break;
        v47 = ii;
      }
    }
  }
  else
  {
    ii = MiLocateAddress(v42);
  }
  if ( ((1 << (*(_BYTE *)(ii + 48) & 7)) & 0x15) != 0 )
  {
    v43 = (*(unsigned int *)(ii + 28) | ((unsigned __int64)*(unsigned __int8 *)(ii + 33) << 32)) << 12;
    goto LABEL_106;
  }
LABEL_123:
  v62 = v46;
  v8 = v63;
  LOBYTE(v7) = v57;
  v41 = v65;
LABEL_124:
  v54 = Object;
  MiUnlockWorkingSetExclusive((char *)Object + 1272, (unsigned __int8)v62);
  MiUnlockVadRange(v54, v8, v66);
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess(v71, 0LL);
  ObfDereferenceObjectWithTag(Object, 0x6D566D4Du);
  *v67 = v45 - v41 + 4096;
  *v68 = (PVOID)v41;
  return 0;
}
