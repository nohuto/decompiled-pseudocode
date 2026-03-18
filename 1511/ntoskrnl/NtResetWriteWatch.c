/*
 * XREFs of NtResetWriteWatch @ 0x1400A5E20
 * Callers:
 *     <none>
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1400423C0 (ObfDereferenceObjectWithTag.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiMoveDirtyBitsToPfns @ 0x14005E3A0 (MiMoveDirtyBitsToPfns.c)
 *     ExpAcquireSpinLockExclusive @ 0x1400A65D0 (ExpAcquireSpinLockExclusive.c)
 *     RtlClearBitsEx @ 0x1400A6650 (RtlClearBitsEx.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiReduceWs @ 0x1400F12BC (MiReduceWs.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x14040B9E0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  _KPROCESS *v8; // rsi
  unsigned __int64 v9; // r14
  char v10; // bl
  int v11; // r15d
  unsigned __int64 v12; // rbp
  unsigned __int64 v13; // r13
  unsigned int *v14; // rax
  unsigned int *v15; // rdi
  __int64 *i; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rsi
  unsigned __int8 CurrentIrql; // bp
  __int64 v20; // rdx
  __int64 v21; // r8
  char v22; // al
  char v23; // al
  struct _KTHREAD *v24; // rsi
  __int64 v25; // rcx
  __int16 v26; // ax
  NTSTATUS v27; // ebp
  NTSTATUS result; // eax
  __int64 VmPartition; // rax
  __int64 v30; // r8
  NTSTATUS v31; // [rsp+40h] [rbp-98h] BYREF
  PVOID Object; // [rsp+48h] [rbp-90h] BYREF
  _KPROCESS *v33; // [rsp+50h] [rbp-88h]
  __int64 *v34; // [rsp+58h] [rbp-80h]
  unsigned __int64 v35; // [rsp+60h] [rbp-78h]
  char v36[48]; // [rsp+68h] [rbp-70h] BYREF
  void *retaddr; // [rsp+D8h] [rbp+0h]

  if ( BaseAddress > (char *)MmHighestUserAddress - 0x10000 )
    return -1073741584;
  if ( (_BYTE *)MmHighestUserAddress - (_BYTE *)BaseAddress - 0xFFFF < RegionSize )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    v8 = CurrentThread->ApcState.Process;
    Object = v8;
  }
  else
  {
    result = ObReferenceObjectByHandleWithTag(
               ProcessHandle,
               8u,
               (POBJECT_TYPE)PsProcessType,
               CurrentThread->PreviousMode,
               0x77576D4Du,
               &Object,
               0LL);
    v31 = result;
    if ( result < 0 )
      return result;
    v8 = (_KPROCESS *)Object;
  }
  v9 = (unsigned __int64)BaseAddress + RegionSize - 1;
  v10 = 0;
  if ( (unsigned __int64)BaseAddress > v9 )
  {
    v27 = -1073741583;
  }
  else
  {
    v11 = 1;
    if ( Process != v8 )
    {
      KiStackAttachProcess((ULONG_PTR)v8);
      v10 = 1;
    }
    v12 = (unsigned __int64)BaseAddress >> 12;
    v13 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v33 = (_KPROCESS *)(((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v14 = MiObtainReferencedVad((__int64)BaseAddress, &v31);
    v15 = v14;
    if ( v14 )
    {
      if ( (v14[12] & 7) == 4
        && v9 <= (((v14[7] | ((unsigned __int64)*((unsigned __int8 *)v14 + 33) << 32)) << 12) | 0xFFF) )
      {
        for ( i = (__int64 *)*((_QWORD *)v14 + 7); i; i = (__int64 *)*i )
        {
          if ( *((_DWORD *)i + 2) == 4 )
            break;
        }
        v17 = (unsigned __int64)*((unsigned __int8 *)v15 + 32) << 32;
        v34 = i + 2;
        v35 = v12 - (v15[6] | v17);
        v18 = (__int64)&v8[1].IdealNode[12];
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v18, CurrentIrql);
        else
          ExpAcquireSpinLockExclusive(v18, CurrentIrql);
        RtlClearBitsEx(v34, v35, ((__int64)((__int64)v33 - v13) >> 3) + 1);
        MiMoveDirtyBitsToPfns(v13, v33, CurrentIrql);
        v22 = *(_BYTE *)(v18 + 219);
        if ( (v22 & 0x10) != 0 )
        {
          *(_BYTE *)(v18 + 219) = v22 & 0xEF;
          VmPartition = MiGetVmPartition(v18, v20, v21);
          MiAgeWorkingSet(v18, CurrentIrql, 1, *(unsigned __int16 *)(*(_QWORD *)(VmPartition + 5616) + 2358LL));
        }
        v23 = *(_BYTE *)(v18 + 219);
        if ( (v23 & 0x20) != 0 )
        {
          v30 = *(_QWORD *)(v18 + 136);
          *(_BYTE *)(v18 + 219) = v23 & 0xDF;
          MiReduceWs(v18, CurrentIrql, v30);
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v18, retaddr);
        else
          *(_DWORD *)v18 = 0;
        __writecr8(CurrentIrql);
        v31 = 0;
      }
      else
      {
        v31 = -1073741585;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)v15 + 9, 0xFFFFFFFF) != 1 || (v15[12] & 0x80000) == 0 )
        v11 = 0;
      v24 = KeGetCurrentThread();
      BYTE4(v24[1].Queue) &= ~0x80u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v15 + 5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)v15 + 5);
      KeAbPostRelease((ULONG_PTR)(v15 + 10));
      v26 = v24->SpecialApcDisable + 1;
      v24->SpecialApcDisable = v26;
      if ( !v26 && ($E81C3296F15336D9BF9B2D43BB137B25 *)v24->ApcState.ApcListHead[0].Flink != &v24->152 )
        KiCheckForKernelApcDelivery(v25);
      if ( v11 == 1 )
        ExFreePoolWithTag(v15, 0);
      v27 = v31;
      v8 = (_KPROCESS *)Object;
    }
    else
    {
      v27 = -1073741585;
    }
  }
  if ( (v10 & 1) != 0 )
    KiUnstackDetachProcess(v36, 0LL);
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(v8, 0x77576D4Du);
  return v27;
}
