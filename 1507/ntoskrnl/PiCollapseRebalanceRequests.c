/*
 * XREFs of PiCollapseRebalanceRequests @ 0x1401FB7F8
 * Callers:
 *     PnpProcessRebalance @ 0x1401FBA84 (PnpProcessRebalance.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

bool __fastcall PiCollapseRebalanceRequests(PVOID *a1)
{
  unsigned __int8 CurrentIrql; // bl
  PVOID *v3; // rax
  PVOID **v4; // r14
  PVOID *v5; // rcx
  PVOID *v6; // rdx
  PVOID **v7; // rdx
  PVOID *i; // rbx
  void *retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(&PnpSpinLock);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&PnpSpinLock, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&PnpSpinLock);
  }
  v3 = (PVOID *)PnpEnumerationRequestList;
  v4 = (PVOID **)a1[1];
  if ( PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v5 = (PVOID *)*v3;
      if ( *((_BYTE *)v3 + 28) )
        break;
      if ( *((_DWORD *)v3 + 6) == 6 && *((_BYTE *)v3 + 32) )
      {
        v6 = (PVOID *)v3[1];
        if ( v5[1] != v3 || *v6 != v3 )
          __fastfail(3u);
        *v6 = v5;
        v5[1] = v6;
        v7 = (PVOID **)a1[1];
        *v3 = a1;
        v3[1] = v7;
        if ( *v7 != a1 )
          __fastfail(3u);
        *v7 = v3;
        a1[1] = v3;
      }
      v3 = v5;
    }
    while ( v5 != &PnpEnumerationRequestList );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
  else
    _InterlockedAnd64(&PnpSpinLock, 0LL);
  __writecr8(CurrentIrql);
  for ( i = *v4; i != a1; i = (PVOID *)*i )
  {
    ObfDereferenceObjectWithTag(i[2], 0x746C6644u);
    i[2] = 0LL;
  }
  return v4 != a1[1];
}
