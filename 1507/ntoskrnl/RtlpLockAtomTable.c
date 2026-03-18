/*
 * XREFs of RtlpLockAtomTable @ 0x140423F20
 * Callers:
 *     RtlAddAtomToAtomTableEx @ 0x14000FC20 (RtlAddAtomToAtomTableEx.c)
 *     RtlDestroyLowBoxAtoms @ 0x14010E670 (RtlDestroyLowBoxAtoms.c)
 *     RtlLookupAtomInAtomTable @ 0x140423CF0 (RtlLookupAtomInAtomTable.c)
 *     RtlDeleteAtomFromAtomTable @ 0x1405048B0 (RtlDeleteAtomFromAtomTable.c)
 *     RtlDestroyAtomTable @ 0x14052836C (RtlDestroyAtomTable.c)
 *     RtlPinAtomInAtomTable @ 0x14054E7E4 (RtlPinAtomInAtomTable.c)
 *     RtlEmptyAtomTable @ 0x1406CBC90 (RtlEmptyAtomTable.c)
 *     RtlQueryAtomsInAtomTable @ 0x1406CBD70 (RtlQueryAtomsInAtomTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 */

char __fastcall RtlpLockAtomTable(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v5; // rdi
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rbx

  if ( !a1 || *a1 != 1836020801 )
    return 0;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v5 = (unsigned __int64 *)(a1 + 2);
  v6 = KeAbPreAcquire((ULONG_PTR)(a1 + 2), 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v6, (ULONG_PTR)v5, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  return 1;
}
