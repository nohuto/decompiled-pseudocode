/*
 * XREFs of RtlpWaitCouldDeadlock @ 0x1800360D0
 * Callers:
 *     RtlpxLookupFunctionTable @ 0x180015180 (RtlpxLookupFunctionTable.c)
 *     RtlAcquireSRWLockExclusive @ 0x18002A460 (RtlAcquireSRWLockExclusive.c)
 *     RtlAcquireSRWLockShared @ 0x180030820 (RtlAcquireSRWLockShared.c)
 *     RtlpWaitOnCriticalSection @ 0x180035D54 (RtlpWaitOnCriticalSection.c)
 *     TppWorkerThread @ 0x180039390 (TppWorkerThread.c)
 *     TppWorkpExecuteCallback @ 0x18003AE20 (TppWorkpExecuteCallback.c)
 * Callees:
 *     <none>
 */

bool __fastcall RtlpWaitCouldDeadlock()
{
  struct _TEB *v1; // rcx
  __int64 WowTebOffset; // rax
  __int64 v3; // rcx

  if ( byte_180146208 )
    return 1;
  if ( !UseWOW64 )
    return 0;
  v1 = NtCurrentTeb();
  WowTebOffset = v1->WowTebOffset;
  if ( (_DWORD)WowTebOffset )
  {
    if ( (int)WowTebOffset >= 0 )
      v1 = (struct _TEB *)((char *)v1 + WowTebOffset);
  }
  else
  {
    v1 = 0LL;
  }
  v3 = *(unsigned int *)(LODWORD(v1->NtTib.Self) + 0xCLL);
  return v3 && *(_BYTE *)(v3 + 40);
}
