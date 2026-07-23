/*
 * XREFs of CmCheckNoTxContext @ 0x1404A4760
 * Callers:
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x1405F94B4 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405F9700 (NtCompressKey.c)
 *     NtReplaceKey @ 0x1405FA3C0 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405FA624 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405FA8B4 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405FAAF0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1405FAD88 (NtSaveMergedKeys.c)
 * Callees:
 *     TmCurrentTransaction @ 0x140001158 (TmCurrentTransaction.c)
 */

__int64 CmCheckNoTxContext()
{
  __int64 result; // rax
  __int64 v1; // [rsp+30h] [rbp+8h]

  result = TmCurrentTransaction();
  if ( (_DWORD)result == -1073741637 )
    return 0LL;
  if ( (int)result >= 0 )
    return v1 != 0 ? 0xC0190001 : 0;
  return result;
}
