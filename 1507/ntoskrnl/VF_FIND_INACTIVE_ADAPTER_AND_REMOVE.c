/*
 * XREFs of VF_FIND_INACTIVE_ADAPTER_AND_REMOVE @ 0x14073A7C4
 * Callers:
 *     VfGetDmaAdapter @ 0x14073BD44 (VfGetDmaAdapter.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

ULONG_PTR *__fastcall VF_FIND_INACTIVE_ADAPTER_AND_REMOVE(__int64 a1)
{
  ULONG_PTR *v2; // rbx
  unsigned __int8 CurrentIrql; // si
  ULONG_PTR *i; // rax
  ULONG_PTR v5; // rdx
  ULONG_PTR **v6; // rcx
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v2 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&Lock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&Lock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&Lock);
  }
  for ( i = (ULONG_PTR *)ViAdapterList; &ViAdapterList != i; i = (ULONG_PTR *)*i )
  {
    if ( i[3] == a1 && (*((int *)i + 9) <= 0 || *((_BYTE *)i + 32) == 1) )
    {
      v5 = *i;
      v2 = i;
      v6 = (ULONG_PTR **)i[1];
      if ( *(ULONG_PTR **)(*i + 8) != i || *v6 != i )
        __fastfail(3u);
      *v6 = (ULONG_PTR *)v5;
      *(_QWORD *)(v5 + 8) = v6;
      break;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)&Lock, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)&Lock, 0LL);
  __writecr8(CurrentIrql);
  return v2;
}
