/*
 * XREFs of PsGetProcessDeepFreezeStats @ 0x14044B91C
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x14044B0E4 (PsSetProcessTelemetryAppState.c)
 *     PfpPrivSourceEnum @ 0x14044B238 (PfpPrivSourceEnum.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 */

__int64 __fastcall PsGetProcessDeepFreezeStats(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockProcessShared(a1, (__int64)CurrentThread);
  a2[2] = *(_QWORD *)(a1 + 1864);
  a2[3] = *(_QWORD *)(a1 + 1776);
  do
  {
    v5 = MEMORY[0xFFFFF780000003B0];
    *a2 = MEMORY[0xFFFFF78000000008];
  }
  while ( v5 != MEMORY[0xFFFFF780000003B0] );
  PspUnlockProcessShared(a1, (__int64)CurrentThread);
  v6 = a2[3];
  result = *a2 - v5;
  a2[1] = result;
  if ( v6 )
  {
    result -= v6;
    a2[2] += result;
  }
  return result;
}
