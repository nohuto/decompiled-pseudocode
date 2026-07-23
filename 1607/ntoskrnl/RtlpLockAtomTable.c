/*
 * XREFs of RtlpLockAtomTable @ 0x140420E90
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x140014214 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14010CE34 (RtlDestroyLowBoxAtoms.c)
 *     RtlQueryAtomInAtomTable @ 0x140424320 (RtlQueryAtomInAtomTable.c)
 *     RtlLookupAtomInAtomTable @ 0x140428260 (RtlLookupAtomInAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x1404C4A6C (RtlPinAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14051B230 (RtlDestroyAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14051B968 (RtlDeleteAtomFromAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406882B4 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140688394 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
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
