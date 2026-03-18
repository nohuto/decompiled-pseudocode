/*
 * XREFs of RtlpLockAtomTable @ 0x140421FD0
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140014694 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x140088C44 (RtlDestroyLowBoxAtoms.c)
 *     RtlQueryAtomInAtomTable @ 0x140425460 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x140429390 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x1404A2E30 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1404A3568 (RtlDeleteAtomFromAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1404E1468 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406881D0 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1406882B0 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  _BYTE *v3; // rax
  _BYTE *v4; // rbx

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (unsigned __int64 *)(a1 + 2);
  v3 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)(a1 + 2), 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v3, (ULONG_PTR)v2);
  if ( v4 )
    v4[26] |= 1u;
  return 1;
}
