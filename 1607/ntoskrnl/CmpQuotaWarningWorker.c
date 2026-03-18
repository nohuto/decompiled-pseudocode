/*
 * XREFs of CmpQuotaWarningWorker @ 0x1405FC5EC
 * Callers:
 *     <none>
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExRaiseHardError @ 0x1406B6068 (ExRaiseHardError.c)
 */

__int64 __fastcall CmpQuotaWarningWorker(void *a1)
{
  char v2; // [rsp+48h] [rbp+10h] BYREF

  ExFreePoolWithTag(a1, 0);
  return ExRaiseHardError(3221226070LL, 0LL, 0LL, 0LL, 1, &v2);
}
