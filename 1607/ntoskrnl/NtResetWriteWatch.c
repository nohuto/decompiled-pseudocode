/*
 * XREFs of NtResetWriteWatch @ 0x140013270
 * Callers:
 *     <none>
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     RtlClearBitsEx @ 0x1400137E8 (RtlClearBitsEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiMoveDirtyBitsToPfns @ 0x1400425F0 (MiMoveDirtyBitsToPfns.c)
 *     ObfDereferenceObjectWithTag @ 0x14006A850 (ObfDereferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ObReferenceObjectByHandleWithTag @ 0x1404242E0 (ObReferenceObjectByHandleWithTag.c)
 */

NTSTATUS __stdcall NtResetWriteWatch(HANDLE ProcessHandle, PVOID BaseAddress, SIZE_T RegionSize)
{
  struct _KTHREAD *CurrentThread; // rax
  _KPROCESS *Process; // rbp
  LONG *p_LockNV; // rsi
  unsigned __int64 v9; // r14
  char v10; // bl
  int v11; // r15d
  unsigned __int64 v12; // r13
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 *i; // rax
  _BYTE *v16; // rbp
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r13
  LONG *v19; // r14
  KIRQL v20; // si
  __int64 *v21; // rcx
  __int64 v22; // r8
  struct _KTHREAD *v23; // rbp
  NTSTATUS v24; // ebp
  NTSTATUS result; // eax
  __int64 *v26; // [rsp+40h] [rbp-98h] BYREF
  PVOID Object; // [rsp+48h] [rbp-90h] BYREF
  __int64 v28; // [rsp+50h] [rbp-88h]
  unsigned __int64 v29; // [rsp+58h] [rbp-80h]
  _BYTE v30[48]; // [rsp+60h] [rbp-78h] BYREF

  if ( (unsigned __int64)BaseAddress > 0x7FFFFFFDFFFFLL )
    return -1073741584;
  if ( 0x7FFFFFFE0000LL - (__int64)BaseAddress < RegionSize )
    return -1073741583;
  CurrentThread = KeGetCurrentThread();
  Process = CurrentThread->ApcState.Process;
  if ( ProcessHandle == (HANDLE)-1LL )
  {
    p_LockNV = &CurrentThread->ApcState.Process->Header.LockNV;
    Object = p_LockNV;
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
    if ( result < 0 )
      return result;
    p_LockNV = (LONG *)Object;
  }
  v9 = (unsigned __int64)BaseAddress + RegionSize - 1;
  v10 = 0;
  if ( (unsigned __int64)BaseAddress > v9 )
  {
    v24 = -1073741583;
  }
  else
  {
    v11 = 1;
    if ( Process != (_KPROCESS *)p_LockNV )
    {
      KiStackAttachProcess((ULONG_PTR)p_LockNV);
      v10 = 1;
    }
    v29 = (((unsigned __int64)BaseAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v28 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v12 = (unsigned __int64)BaseAddress >> 12;
    v13 = MiObtainReferencedVad(BaseAddress, &v26);
    v14 = v13;
    if ( v13 )
    {
      if ( (*(_DWORD *)(v13 + 48) & 7) == 4
        && v9 <= (((*(unsigned int *)(v13 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v13 + 33) << 32)) << 12) | 0xFFF) )
      {
        for ( i = *(__int64 **)(v13 + 56); i; i = (__int64 *)*i )
        {
          if ( *((_DWORD *)i + 2) == 4 )
            break;
        }
        v16 = p_LockNV + 320;
        v17 = (unsigned __int64)*(unsigned __int8 *)(v14 + 32) << 32;
        v26 = i + 2;
        v18 = v12 - (*(unsigned int *)(v14 + 24) | v17);
        if ( (p_LockNV[366] & 7) == 2 )
          v19 = &dword_140327CC0;
        else
          v19 = p_LockNV + 368;
        v20 = ExAcquireSpinLockExclusive(v19);
        v21 = v26;
        v22 = ((__int64)(v28 - v29) >> 3) + 1;
        v19[1] = 0;
        RtlClearBitsEx(v21, v18, v22);
        MiMoveDirtyBitsToPfns(v29, v28, v20);
        MiUnlockWorkingSetExclusive(v16, v20);
        LODWORD(v26) = 0;
      }
      else
      {
        LODWORD(v26) = -1073741585;
      }
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v14 + 36), 0xFFFFFFFF) != 1
        || (*(_DWORD *)(v14 + 48) & 0x80000) == 0 )
      {
        v11 = 0;
      }
      v23 = KeGetCurrentThread();
      LOBYTE(v23[1].Queue) &= ~0x80u;
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v14 + 40), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v14 + 40);
      KeAbPostRelease(v14 + 40);
      KiLeaveGuardedRegionUnsafe(v23);
      if ( v11 == 1 )
        ExFreePoolWithTag((PVOID)v14, 0);
      v24 = (int)v26;
      p_LockNV = (LONG *)Object;
    }
    else
    {
      v24 = -1073741585;
    }
  }
  if ( (v10 & 1) != 0 )
    KiUnstackDetachProcess(v30, 0LL);
  if ( ProcessHandle != (HANDLE)-1LL )
    ObfDereferenceObjectWithTag(p_LockNV, 0x77576D4Du);
  return v24;
}
