/*
 * XREFs of RtlpLockAtomTable @ 0x1403F6CFC
 * Callers:
 *     RtlDestroyLowBoxAtoms @ 0x140099C4C (RtlDestroyLowBoxAtoms.c)
 *     RtlAddAtomToAtomTableEx @ 0x140099D18 (RtlAddAtomToAtomTableEx.c)
 *     RtlLookupAtomInAtomTable @ 0x1403F6B10 (RtlLookupAtomInAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14045F99C (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14045FA88 (RtlPinAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x14045FED4 (RtlDeleteAtomFromAtomTable.c)
 *     RtlEmptyAtomTable @ 0x140648C0C (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x140648CEC (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  char result; // al

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v2 = (unsigned __int64 *)(a1 + 2);
  v3 = KeAbPreAcquire((ULONG_PTR)(a1 + 2), 0LL, 0LL);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v2, 0LL) )
    ExfAcquirePushLockExclusiveEx(v2, v3, (ULONG_PTR)v2);
  result = 1;
  if ( v4 )
    *(_BYTE *)(v4 + 26) |= 1u;
  return result;
}
