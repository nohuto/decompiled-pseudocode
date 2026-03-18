/*
 * XREFs of ExpWnfDeleteStateData @ 0x14053F6E0
 * Callers:
 *     ExpWnfDeleteNameInstance @ 0x14053F340 (ExpWnfDeleteNameInstance.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall ExpWnfDeleteStateData(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rbx
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rdi
  void *v9; // rdi

  v4 = (unsigned __int64 *)(a1 + 80);
  v6 = KeAbPreAcquire(a1 + 80, 0LL, 0LL, a4);
  v8 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v4, 0LL) )
    ExfAcquirePushLockExclusiveEx(v4, v6, (ULONG_PTR)v4, v7);
  if ( v8 )
    *(_BYTE *)(v8 + 26) |= 1u;
  v9 = *(void **)(a1 + 88);
  *(_QWORD *)(a1 + 88) = 0LL;
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v4, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v4);
  KeAbPostRelease((ULONG_PTR)v4);
  if ( (unsigned __int64)v9 >= 2 )
    ExFreePoolWithTag(v9, 0x20666E57u);
}
