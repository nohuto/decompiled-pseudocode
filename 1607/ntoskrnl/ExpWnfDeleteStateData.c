/*
 * XREFs of ExpWnfDeleteStateData @ 0x1404C2984
 * Callers:
 *     ExpWnfDeleteNameInstance @ 0x1404C263C (ExpWnfDeleteNameInstance.c)
 *     NtDeleteWnfStateData @ 0x14057CAB8 (NtDeleteWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400C8738 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteStateData(__int64 a1)
{
  unsigned __int64 *v1; // rbx
  _BYTE *v3; // rax
  _BYTE *v4; // rdi
  void *v5; // rdi

  v1 = (unsigned __int64 *)(a1 + 80);
  v3 = (_BYTE *)KeAbPreAcquire(a1 + 80, 0LL, 0);
  v4 = v3;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v1, 0LL) )
    ExfAcquirePushLockExclusiveEx(v1, v3, (ULONG_PTR)v1);
  if ( v4 )
    v4[26] |= 1u;
  v5 = *(void **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v1);
  KeAbPostRelease((ULONG_PTR)v1);
  if ( (unsigned __int64)v5 >= 2 )
    ExFreePoolWithTag(v5, 0x20666E57u);
}
