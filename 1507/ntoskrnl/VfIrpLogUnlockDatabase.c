/*
 * XREFs of VfIrpLogUnlockDatabase @ 0x14074E63C
 * Callers:
 *     ViDdiDispatchWmiQueryAllData @ 0x140738A3C (ViDdiDispatchWmiQueryAllData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall VfIrpLogUnlockDatabase(unsigned int a1)
{
  __int64 v1; // rbx
  unsigned __int8 CurrentIrql; // bp
  _QWORD **v3; // rdi
  _QWORD *v4; // rbx
  PVOID *v5; // rsi
  PVOID **v6; // rdx
  PVOID **v7; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = 3LL * a1;
  *(_DWORD *)(ViIrpLogDatabase + 24LL * a1) = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&ViIrpLogDatabaseLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&ViIrpLogDatabaseLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&ViIrpLogDatabaseLock);
  }
  v3 = (_QWORD **)(ViIrpLogDatabase + 8 + 8 * v1);
  v4 = *v3;
  while ( v4 != v3 )
  {
    v5 = (PVOID *)(v4 - 1);
    v4 = (_QWORD *)*v4;
    if ( ((_DWORD)v5[3] & 4) != 0 )
    {
      ObfDereferenceObject(*v5);
      v6 = (PVOID **)v5[1];
      v7 = (PVOID **)v5[2];
      if ( v6[1] != v5 + 1 || *v7 != v5 + 1 )
        __fastfail(3u);
      *v7 = (PVOID *)v6;
      v6[1] = (PVOID *)v7;
      ExFreePoolWithTag(v5, 0);
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&ViIrpLogDatabaseLock, retaddr);
  else
    _InterlockedAnd64(&ViIrpLogDatabaseLock, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
