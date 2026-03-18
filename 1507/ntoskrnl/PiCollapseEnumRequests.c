/*
 * XREFs of PiCollapseEnumRequests @ 0x140158EA4
 * Callers:
 *     PipProcessDevNodeTree @ 0x1404E16BC (PipProcessDevNodeTree.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14045C124 (PiMarkDeviceTreeForReenumeration.c)
 */

bool __fastcall PiCollapseEnumRequests(PVOID *a1, PVOID **a2)
{
  unsigned __int8 CurrentIrql; // di
  PVOID *v4; // rax
  PVOID **v5; // r14
  PVOID *i; // rdi
  PVOID *v8; // rcx
  PVOID *v9; // rdx
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
  v4 = (PVOID *)PnpEnumerationRequestList;
  v5 = (PVOID **)a1[1];
  if ( PnpEnumerationRequestList != &PnpEnumerationRequestList )
  {
    do
    {
      v8 = (PVOID *)*v4;
      if ( *((_BYTE *)v4 + 28) )
        break;
      a2 = (PVOID **)*((unsigned int *)v4 + 6);
      if ( (int)a2 >= 9 && ((int)a2 <= 10 || (_DWORD)a2 == 14) )
      {
        v9 = (PVOID *)v4[1];
        if ( v8[1] != v4 || *v9 != v4 )
          __fastfail(3u);
        *v9 = v8;
        v8[1] = v9;
        a2 = (PVOID **)a1[1];
        *v4 = a1;
        v4[1] = a2;
        if ( *a2 != a1 )
          __fastfail(3u);
        *a2 = v4;
        a1[1] = v4;
      }
      v4 = v8;
    }
    while ( v8 != &PnpEnumerationRequestList );
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&PnpSpinLock, retaddr);
  else
    _InterlockedAnd64(&PnpSpinLock, 0LL);
  __writecr8(CurrentIrql);
  for ( i = *v5; i != a1; i = (PVOID *)*i )
  {
    LOBYTE(a2) = 1;
    PiMarkDeviceTreeForReenumeration(*(_QWORD *)(*((_QWORD *)i[2] + 39) + 40LL), a2);
    ObfDereferenceObjectWithTag(i[2], 0x746C6644u);
    i[2] = 0LL;
  }
  return v5 != a1[1];
}
