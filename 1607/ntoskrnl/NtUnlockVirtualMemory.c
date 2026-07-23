/*
 * XREFs of NtUnlockVirtualMemory @ 0x1400B8170
 * Callers:
 *     <none>
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     MiUnlockVa @ 0x1400B88A0 (MiUnlockVa.c)
 *     MiRotatedToFrameBuffer @ 0x1400BBC90 (MiRotatedToFrameBuffer.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 *     EtwTraceShouldYieldProcessor @ 0x140225FE8 (EtwTraceShouldYieldProcessor.c)
 *     MiUnlockVadRange @ 0x1404D6774 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1404D6868 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1404D6AD4 (MiLockUnlockCommon.c)
 */

NTSTATUS __stdcall NtUnlockVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T NumberOfBytesToUnlock,
        ULONG MapType)
{
  NTSTATUS result; // eax
  unsigned __int64 v6; // r14
  int v7; // ebx
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r12
  PVOID v11; // r15
  int v12; // esi
  unsigned __int64 j; // rdi
  __int64 v14; // rax
  int v15; // r10d
  __int64 v16; // r15
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r13d
  unsigned int DpcTimeCount; // r15d
  int v20; // edx
  volatile int DpcRequestSummary; // r8d
  int v22; // r9d
  unsigned int v23; // esi
  _KTHREAD *NextThread; // rax
  unsigned __int64 v25; // rax
  _QWORD **v26; // rcx
  _QWORD *i; // rax
  int v28; // ecx
  int v29; // r9d
  char v30; // al
  __int64 v31; // r10
  unsigned __int64 v32; // r11
  unsigned __int64 v33; // r10
  ULONG_PTR *v34; // r13
  ULONG_PTR v35; // r12
  unsigned __int64 Wsle; // rax
  unsigned __int64 v37; // rsi
  unsigned __int64 m; // rdi
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rax
  _QWORD **v41; // rcx
  _QWORD *k; // rax
  void *v43; // rax
  KIRQL v44; // [rsp+40h] [rbp-1A8h]
  __int64 v45; // [rsp+48h] [rbp-1A0h]
  NTSTATUS v46; // [rsp+50h] [rbp-198h]
  unsigned __int64 v47; // [rsp+58h] [rbp-190h]
  PVOID Object; // [rsp+60h] [rbp-188h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+68h] [rbp-180h]
  __int64 v50; // [rsp+70h] [rbp-178h] BYREF
  unsigned __int64 v51; // [rsp+78h] [rbp-170h]
  __int64 v52; // [rsp+80h] [rbp-168h]
  unsigned __int64 v53; // [rsp+88h] [rbp-160h]
  __int64 v54; // [rsp+90h] [rbp-158h] BYREF
  PSIZE_T v55; // [rsp+98h] [rbp-150h]
  PVOID *v56; // [rsp+A0h] [rbp-148h]
  _DWORD v57[40]; // [rsp+B0h] [rbp-138h] BYREF
  _BYTE v58[48]; // [rsp+150h] [rbp-98h] BYREF
  unsigned __int64 v59; // [rsp+180h] [rbp-68h]
  unsigned __int64 v60; // [rsp+188h] [rbp-60h]
  unsigned __int64 v61; // [rsp+190h] [rbp-58h]
  __int64 v62; // [rsp+198h] [rbp-50h]

  v55 = NumberOfBytesToUnlock;
  v56 = BaseAddress;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v50, (__int64)&v54, (__int64)&Object);
  v46 = result;
  if ( result < 0 )
    return result;
  v6 = 0LL;
  v51 = 0LL;
  v7 = 0;
  v8 = v50;
  v9 = (v50 + v54 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v47 = v9;
  v53 = v50 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v50 & 0xFFFFFFFFFFFFF000uLL;
  BugCheckParameter2 = v50 & 0xFFFFFFFFFFFFF000uLL;
  v11 = Object;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((ULONG_PTR)Object);
    v7 = 2;
    v9 = v47;
  }
  v12 = 0;
  v57[0] = 0;
  j = 0LL;
  v14 = MiLockVadRange(v11, v10, v9);
  v52 = v14;
  if ( !v14 )
    goto LABEL_98;
  v45 = (__int64)v11 + 1280;
  v44 = MiLockWorkingSetExclusive((__int64)v11 + 1280);
  if ( v10 > v47 )
    goto LABEL_71;
  do
  {
    v15 = 1;
    if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 )
    {
      v16 = v45;
      if ( (unsigned int)MiWorkingSetIsContended(v45) )
        goto LABEL_32;
    }
    CurrentPrcb = KeGetCurrentPrcb();
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    v20 = 0;
    if ( DpcWatchdogCount > 7 )
      v20 = v15;
    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v22 = v15;
      if ( DpcTimeCount > 7 )
      {
        v20 = v15;
        if ( CurrentPrcb->QuantumEnd )
        {
          v23 = v15;
          goto LABEL_28;
        }
      }
    }
    else
    {
      v22 = 0;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v23 = 2;
        goto LABEL_28;
      }
      if ( CurrentPrcb->QuantumEnd )
      {
        v23 = 3;
        goto LABEL_28;
      }
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v23 = 4;
        goto LABEL_28;
      }
    }
    if ( !v20 )
      goto LABEL_35;
    if ( !v22 )
    {
LABEL_27:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      KiResetGlobalDpcWatchdogProfiler(CurrentPrcb);
      _enable();
      v23 = 0;
      goto LABEL_28;
    }
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v23 = 5;
    }
    else
    {
      if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
        goto LABEL_27;
      v23 = 6;
    }
LABEL_28:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v23, DpcWatchdogCount, DpcTimeCount);
    if ( !v23 )
    {
LABEL_35:
      v12 = v57[0];
      goto LABEL_36;
    }
    v12 = v57[0];
    v16 = v45;
LABEL_32:
    if ( v12 )
    {
      MiFreeWsleList(v16, v57, 0LL);
      v12 = 0;
      v57[0] = 0;
    }
    MiRelockWorkingSetExclusive(v16, v44);
LABEL_36:
    if ( v10 > v51 || !j )
    {
      if ( j )
      {
        v25 = j;
        v26 = *(_QWORD ***)(j + 8);
        if ( v26 )
        {
          j = *(_QWORD *)(j + 8);
          for ( i = *v26; i; i = (_QWORD *)*i )
            j = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)j == v25 )
              break;
            v25 = j;
          }
        }
      }
      else
      {
        j = MiLocateAddress(v10);
      }
      v7 &= ~4u;
      v28 = *(_DWORD *)(j + 48) & 7;
      if ( v28 == 6 )
      {
        v7 |= 4u;
      }
      else if ( ((1 << v28) & 0x15) == 0 )
      {
        break;
      }
      v51 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
    }
    if ( (__int64)v10 >> 47 == -1 || (__int64)v10 >> 47 == 0 )
    {
      v59 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v60 = ((v59 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v61 = ((v60 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v62 = ((v61 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v29 = 4;
      while ( 1 )
      {
        v30 = MI_READ_PTE_LOCK_FREE(*(&v59 + (unsigned int)(v29 - 1)));
        if ( (v30 & 1) == 0 )
          break;
        if ( v30 < 0 )
        {
          if ( v10 >= v32 && v10 <= 0xFFFFF6FFFFFFFFFFuLL )
            break;
LABEL_59:
          v34 = (ULONG_PTR *)MI_GET_PFN_FROM_PTE(v31);
          v35 = v34[1];
          if ( (v7 & 4) != 0 )
          {
            if ( (unsigned int)MiRotatedToFrameBuffer(v33) == 1 )
            {
              v10 = BugCheckParameter2;
              goto LABEL_69;
            }
            v33 = v59;
          }
          if ( (v35 & 0x8000000000000000uLL) == 0 )
            MiDemoteCombinedPte(v45, v33, v35 | 0x8000000000000000uLL);
          v10 = BugCheckParameter2;
          Wsle = MiLocateWsle(BugCheckParameter2, v45, *v34);
          if ( Wsle >= *(_QWORD *)(qword_140327FD0 + 276841240) )
          {
            *(_QWORD *)&v57[2 * v12 + 2] = Wsle;
            v12 = v57[0] + 1;
            v57[0] = v12;
            if ( v12 == 19 )
            {
              MiFreeWsleList(v45, v57, 0LL);
              v12 = 0;
              v57[0] = 0;
            }
            break;
          }
          goto LABEL_69;
        }
        if ( !v29 )
          goto LABEL_59;
      }
    }
    v46 = -1073741782;
LABEL_69:
    v10 += 4096LL;
    BugCheckParameter2 = v10;
  }
  while ( v10 <= v47 );
  v8 = v50;
  v11 = Object;
LABEL_71:
  if ( v46 == -1073741782 )
  {
    if ( v12 )
      MiFreeWsleList(v45, v57, 0LL);
    MiUnlockWorkingSetExclusive(v45, v44);
    v14 = v52;
LABEL_98:
    MiUnlockVadRange(v11, v8, v14);
    if ( (v7 & 2) != 0 )
      KiUnstackDetachProcess(v58, 0LL);
    ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
    return -1073741782;
  }
  v37 = v53;
  m = 0LL;
  v39 = v47;
  if ( v53 > v47 )
    goto LABEL_95;
  while ( 2 )
  {
    if ( v37 <= v6 && m )
    {
LABEL_89:
      MiUnlockVa(v45, v37);
      v37 += 4096LL;
      if ( (v37 & 0xF000) == 0 && (unsigned int)MiWorkingSetIsContended(v45) || KeShouldYieldProcessor() )
        MiRelockWorkingSetExclusive(v45, v44);
      if ( v37 > v47 )
        goto LABEL_94;
      continue;
    }
    break;
  }
  if ( m )
  {
    v40 = m;
    v41 = *(_QWORD ***)(m + 8);
    if ( v41 )
    {
      m = *(_QWORD *)(m + 8);
      for ( k = *v41; k; k = (_QWORD *)*k )
        m = (unsigned __int64)k;
    }
    else
    {
      for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)m == v40 )
          break;
        v40 = m;
      }
    }
  }
  else
  {
    m = MiLocateAddress(v37);
  }
  if ( ((1 << (*(_BYTE *)(m + 48) & 7)) & 0x15) != 0 )
  {
    v6 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
    goto LABEL_89;
  }
LABEL_94:
  v11 = Object;
  v39 = v47;
LABEL_95:
  MiUnlockWorkingSetExclusive(v45, v44);
  MiUnlockVadRange(v11, v8, v52);
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess(v58, 0LL);
  ObfDereferenceObjectWithTag(v11, 0x6D566D4Du);
  v43 = (void *)v53;
  *v55 = v39 - v53 + 4096;
  *v56 = v43;
  return 0;
}
