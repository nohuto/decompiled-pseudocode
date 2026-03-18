/*
 * XREFs of CmCheckNoTxContext @ 0x14049C5C8
 * Callers:
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 *     NtCompactKeys @ 0x1405F9400 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405F964C (NtCompressKey.c)
 *     NtReplaceKey @ 0x1405FA30C (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405FA570 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405FA800 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405FAA3C (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1405FACD4 (NtSaveMergedKeys.c)
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
