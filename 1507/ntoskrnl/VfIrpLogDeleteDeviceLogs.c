/*
 * XREFs of VfIrpLogDeleteDeviceLogs @ 0x14074DFB8
 * Callers:
 *     VfIoDeleteDevice @ 0x140742FD4 (VfIoDeleteDevice.c)
 * Callees:
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ViIrpLogDatabaseFindPointer @ 0x14074E73C (ViIrpLogDatabaseFindPointer.c)
 */

__int64 __fastcall VfIrpLogDeleteDeviceLogs(__int64 a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 Pointer; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rdx
  _QWORD *v6; // rcx
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]
  _DWORD *v9; // [rsp+38h] [rbp+10h] BYREF

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
  Pointer = ViIrpLogDatabaseFindPointer(a1, &v9);
  v4 = (_QWORD *)Pointer;
  if ( Pointer )
  {
    if ( *v9 )
    {
      *(_DWORD *)(Pointer + 24) |= 4u;
    }
    else
    {
      ObfDereferenceObject(*(PVOID *)Pointer);
      v5 = v4[1];
      v6 = (_QWORD *)v4[2];
      if ( *(_QWORD **)(v5 + 8) != v4 + 1 || (_QWORD *)*v6 != v4 + 1 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      ExFreePoolWithTag(v4, 0);
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
