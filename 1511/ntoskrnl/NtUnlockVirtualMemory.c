/*
 * XREFs of NtUnlockVirtualMemory @ 0x140021060
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiRotatedToFrameBuffer @ 0x14001EE20 (MiRotatedToFrameBuffer.c)
 *     MiUnlockVa @ 0x140021744 (MiUnlockVa.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     EtwTraceShouldYieldProcessor @ 0x14020E308 (EtwTraceShouldYieldProcessor.c)
 *     MiUnlockVadRange @ 0x1403E8634 (MiUnlockVadRange.c)
 *     MiLockVadRange @ 0x1403E8728 (MiLockVadRange.c)
 *     MiLockUnlockCommon @ 0x1403E899C (MiLockUnlockCommon.c)
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
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  ULONG_PTR v10; // r13
  volatile LONG *v11; // r15
  int v12; // esi
  unsigned __int64 j; // rdi
  __int64 v14; // rax
  __int64 v15; // rdx
  KIRQL v16; // r10
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r11d
  unsigned int DpcTimeCount; // r10d
  volatile int DpcRequestSummary; // r8d
  __int64 v21; // r9
  unsigned int v22; // esi
  _KTHREAD *NextThread; // rax
  unsigned __int64 v24; // rax
  _QWORD **v25; // rcx
  _QWORD *i; // rax
  int v27; // ecx
  __int64 v28; // rax
  __int64 v29; // r12
  unsigned __int64 Wsle; // rax
  unsigned __int64 v31; // rsi
  unsigned __int64 m; // rdi
  ULONG_PTR v33; // r13
  unsigned __int64 v34; // rax
  _QWORD **v35; // rcx
  _QWORD *k; // rax
  void *v37; // rax
  KIRQL v38; // [rsp+40h] [rbp-198h]
  NTSTATUS v39; // [rsp+44h] [rbp-194h]
  PEX_SPIN_LOCK SpinLock; // [rsp+48h] [rbp-190h]
  PVOID Object; // [rsp+50h] [rbp-188h] BYREF
  ULONG_PTR v42; // [rsp+58h] [rbp-180h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-178h]
  __int64 v44; // [rsp+68h] [rbp-170h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-168h]
  __int64 v46; // [rsp+78h] [rbp-160h]
  unsigned __int64 v47; // [rsp+80h] [rbp-158h]
  PSIZE_T v48; // [rsp+88h] [rbp-150h]
  PVOID *v49; // [rsp+90h] [rbp-148h]
  __int64 v50; // [rsp+98h] [rbp-140h] BYREF
  _DWORD v51[40]; // [rsp+A0h] [rbp-138h] BYREF
  _BYTE v52[48]; // [rsp+140h] [rbp-98h] BYREF
  unsigned __int64 v53; // [rsp+170h] [rbp-68h]
  unsigned __int64 v54; // [rsp+178h] [rbp-60h]
  unsigned __int64 v55; // [rsp+180h] [rbp-58h]
  __int64 v56; // [rsp+188h] [rbp-50h]

  v48 = NumberOfBytesToUnlock;
  v49 = BaseAddress;
  result = MiLockUnlockCommon(ProcessHandle, (__int64)&v44, (__int64)&v50, (__int64)&Object);
  v39 = result;
  if ( result < 0 )
    return result;
  v6 = 0LL;
  v45 = 0LL;
  v7 = 0;
  v8 = v44;
  v9 = (v44 + v50 - 1) & 0xFFFFFFFFFFFFF000uLL;
  v42 = v9;
  v47 = v44 & 0xFFFFFFFFFFFFF000uLL;
  v10 = v44 & 0xFFFFFFFFFFFFF000uLL;
  BugCheckParameter2 = v44 & 0xFFFFFFFFFFFFF000uLL;
  v11 = (volatile LONG *)Object;
  if ( ProcessHandle != (HANDLE)-1LL )
  {
    KiStackAttachProcess((ULONG_PTR)Object);
    v7 = 2;
    v9 = v42;
  }
  v12 = 0;
  v51[0] = 0;
  j = 0LL;
  v14 = MiLockVadRange(v11, v10, v9);
  v46 = v14;
  if ( !v14 )
    goto LABEL_96;
  SpinLock = v11 + 320;
  v16 = ExAcquireSpinLockExclusive(v11 + 320);
  v38 = v16;
  if ( v10 > v42 )
    goto LABEL_68;
  do
  {
    if ( (((unsigned __int8)(v10 >> 12) + 1) & 0xF) == 0 && (*SpinLock & 0x40000000) != 0 )
      goto LABEL_29;
    CurrentPrcb = KeGetCurrentPrcb();
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    v15 = DpcWatchdogCount > 7;
    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v21 = 1LL;
      if ( DpcTimeCount > 7 )
      {
        v15 = 1LL;
        if ( CurrentPrcb->QuantumEnd )
        {
          v22 = 1;
          goto LABEL_26;
        }
      }
    }
    else
    {
      v21 = 0LL;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v22 = 2;
        goto LABEL_26;
      }
      if ( CurrentPrcb->QuantumEnd )
      {
        v22 = 3;
        goto LABEL_26;
      }
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v22 = 4;
        goto LABEL_26;
      }
    }
    if ( !(_DWORD)v15 )
      goto LABEL_32;
    if ( !(_DWORD)v21 )
      goto LABEL_25;
    if ( (DpcRequestSummary & 0x1E) != 0 )
    {
      v22 = 5;
      goto LABEL_26;
    }
    if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
    {
LABEL_25:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      _enable();
      v22 = 0;
    }
    else
    {
      v22 = 6;
    }
LABEL_26:
    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
      EtwTraceShouldYieldProcessor(v22, DpcWatchdogCount, DpcTimeCount, v21);
    if ( !v22 )
    {
LABEL_32:
      v12 = v51[0];
      v16 = v38;
      goto LABEL_33;
    }
LABEL_29:
    v12 = v51[0];
    if ( v51[0] )
    {
      MiFreeWsleList(SpinLock, v51, 0LL);
      v12 = 0;
      v51[0] = 0;
    }
    MiUnlockWorkingSetExclusive(SpinLock, v38);
    v16 = ExAcquireSpinLockExclusive(SpinLock);
    v38 = v16;
LABEL_33:
    if ( v10 > v45 || !j )
    {
      if ( j )
      {
        v24 = j;
        v25 = *(_QWORD ***)(j + 8);
        if ( v25 )
        {
          j = *(_QWORD *)(j + 8);
          for ( i = *v25; i; i = (_QWORD *)*i )
            j = (unsigned __int64)i;
        }
        else
        {
          for ( j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL; j; j = *(_QWORD *)(j + 16) & 0xFFFFFFFFFFFFFFFCuLL )
          {
            if ( *(_QWORD *)j == v24 )
              break;
            v24 = j;
          }
        }
      }
      else
      {
        j = MiLocateAddress(v10, v15);
      }
      v7 &= ~4u;
      v27 = *(_DWORD *)(j + 48) & 7;
      if ( v27 == 6 )
      {
        v7 |= 4u;
      }
      else if ( ((1 << v27) & 0x15) == 0 )
      {
        goto LABEL_67;
      }
      v45 = (*(unsigned int *)(j + 28) | ((unsigned __int64)*(unsigned __int8 *)(j + 33) << 32)) << 12;
    }
    if ( (__int64)v10 >> 47 == -1 || (__int64)v10 >> 47 == 0 )
    {
      v53 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v54 = ((v53 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v55 = ((v54 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      v56 = ((v55 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      LODWORD(v15) = 4;
      while ( 1 )
      {
        v15 = (unsigned int)(v15 - 1);
        v28 = *(_QWORD *)*(&v53 + v15);
        if ( (v28 & 1) == 0 )
          break;
        if ( (unsigned int)v15 <= 1 && (v28 & 0x80u) != 0LL )
        {
          if ( !(_DWORD)v15 )
            break;
LABEL_56:
          v29 = *(_QWORD *)(MI_GET_PFN_FROM_PTE(((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) + 8);
          if ( (v7 & 4) != 0 && MiRotatedToFrameBuffer(v53) )
          {
            v10 = BugCheckParameter2;
            goto LABEL_65;
          }
          if ( (v29 & 0x8000000000000000uLL) == 0 )
            MiDemoteCombinedPte(v53, v29 | 0x8000000000000000uLL);
          v10 = BugCheckParameter2;
          Wsle = MiLocateWsle(BugCheckParameter2);
          if ( Wsle >= MEMORY[0xFFFFF58010804008] )
          {
            *(_QWORD *)&v51[2 * v12 + 2] = Wsle;
            v12 = v51[0] + 1;
            v51[0] = v12;
            if ( v12 == 19 )
            {
              MiFreeWsleList(SpinLock, v51, 0LL);
              v12 = 0;
              v51[0] = 0;
            }
            break;
          }
          goto LABEL_65;
        }
        if ( !(_DWORD)v15 )
          goto LABEL_56;
      }
    }
    v39 = -1073741782;
LABEL_65:
    v10 += 4096LL;
    BugCheckParameter2 = v10;
  }
  while ( v10 <= v42 );
  v16 = v38;
LABEL_67:
  v8 = v44;
  v11 = (volatile LONG *)Object;
LABEL_68:
  if ( v39 == -1073741782 )
  {
    if ( v12 )
      MiFreeWsleList(SpinLock, v51, 0LL);
    MiUnlockWorkingSetExclusive(SpinLock, v38);
    v14 = v46;
LABEL_96:
    MiUnlockVadRange(v11, v8, v14);
    if ( (v7 & 2) != 0 )
      KiUnstackDetachProcess(v52, 0LL);
    ObfDereferenceObjectWithTag((PVOID)v11, 0x6D566D4Du);
    return -1073741782;
  }
  v31 = v47;
  m = 0LL;
  v33 = v42;
  if ( v47 > v42 )
    goto LABEL_93;
  while ( 2 )
  {
    if ( v31 <= v6 && m )
    {
LABEL_86:
      MiUnlockVa(SpinLock, v31);
      v31 += 4096LL;
      if ( (v31 & 0xF000) == 0 && (*SpinLock & 0x40000000) != 0 || KeShouldYieldProcessor() )
      {
        MiUnlockWorkingSetExclusive(SpinLock, v38);
        v16 = ExAcquireSpinLockExclusive(SpinLock);
        v38 = v16;
      }
      else
      {
        v16 = v38;
      }
      if ( v31 > v33 )
        goto LABEL_92;
      continue;
    }
    break;
  }
  if ( m )
  {
    v34 = m;
    v35 = *(_QWORD ***)(m + 8);
    if ( v35 )
    {
      m = *(_QWORD *)(m + 8);
      for ( k = *v35; k; k = (_QWORD *)*k )
        m = (unsigned __int64)k;
    }
    else
    {
      for ( m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL; m; m = *(_QWORD *)(m + 16) & 0xFFFFFFFFFFFFFFFCuLL )
      {
        if ( *(_QWORD *)m == v34 )
          break;
        v34 = m;
      }
    }
  }
  else
  {
    m = MiLocateAddress(v31, v15);
  }
  if ( ((1 << (*(_BYTE *)(m + 48) & 7)) & 0x15) != 0 )
  {
    v6 = (*(unsigned int *)(m + 28) | ((unsigned __int64)*(unsigned __int8 *)(m + 33) << 32)) << 12;
    goto LABEL_86;
  }
LABEL_92:
  v11 = (volatile LONG *)Object;
  v8 = v44;
LABEL_93:
  MiUnlockWorkingSetExclusive(SpinLock, v16);
  MiUnlockVadRange(v11, v8, v46);
  if ( (v7 & 2) != 0 )
    KiUnstackDetachProcess(v52, 0LL);
  ObfDereferenceObjectWithTag((PVOID)v11, 0x6D566D4Du);
  v37 = (void *)v47;
  *v48 = v33 - v47 + 4096;
  *v49 = v37;
  return 0;
}
