/*
 * XREFs of IopDequeueIrpFromFileObject @ 0x140112DF4
 * Callers:
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     IopDropIrp @ 0x140112D18 (IopDropIrp.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall IopDequeueIrpFromFileObject(__int64 a1, __int64 a2)
{
  volatile signed __int32 *v3; // rbx
  unsigned __int8 CurrentIrql; // si
  _QWORD *v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rcx
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a2 + 184);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(a2 + 184);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a2 + 184));
  }
  v5 = (_QWORD *)(a1 + 32);
  v6 = *(_QWORD *)(a1 + 32);
  v7 = *(_QWORD **)(a1 + 40);
  if ( *(_QWORD *)(v6 + 8) != a1 + 32 || (_QWORD *)*v7 != v5 )
    __fastfail(3u);
  *v7 = v6;
  *(_QWORD *)(v6 + 8) = v7;
  *(_QWORD *)(a1 + 40) = a1 + 32;
  *v5 = v5;
  ObfDereferenceObjectWithTag((PVOID)(*(_QWORD *)(a1 + 88) & 0xFFFFFFFFFFFFFFF9uLL), 0x70436F49u);
  *(_DWORD *)(a1 + 16) = *(_DWORD *)(a1 + 16) & 0xFFFF5FFF | 0x8000;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
