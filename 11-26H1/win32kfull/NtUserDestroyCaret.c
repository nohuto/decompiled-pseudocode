/*
 * XREFs of NtUserDestroyCaret @ 0x14014BB50
 * Callers:
 *     <none>
 * Callees:
 *     zzzDestroyCaret @ 0x14014BB8C (zzzDestroyCaret.c)
 */

__int64 NtUserDestroyCaret()
{
  __int64 v0; // rbx
  __int64 v1; // rcx

  EnterCrit(0LL, 0LL);
  v0 = (int)zzzDestroyCaret();
  UserSessionSwitchLeaveCrit(v1);
  return v0;
}
