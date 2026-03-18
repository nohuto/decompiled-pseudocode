/*
 * XREFs of PsGetProcessDeepFreezeStats @ 0x1405095EC
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x1404A33DC (PsSetProcessTelemetryAppState.c)
 *     PfpPrivSourceEnum @ 0x140508A08 (PfpPrivSourceEnum.c)
 * Callees:
 *     PspUnlockProcessShared @ 0x1400C9C44 (PspUnlockProcessShared.c)
 *     PspLockProcessShared @ 0x1400C9C88 (PspLockProcessShared.c)
 */

__int64 __fastcall PsGetProcessDeepFreezeStats(__int64 a1, _QWORD *a2)
{
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  PspLockProcessShared(a1, (__int64)CurrentThread);
  a2[2] = *(_QWORD *)(a1 + 1880);
  a2[3] = *(_QWORD *)(a1 + 1792);
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
