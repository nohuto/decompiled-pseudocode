/*
 * XREFs of CmCheckNoTxContext @ 0x1403DC18C
 * Callers:
 *     NtLoadKeyEx @ 0x1403DB3CC (NtLoadKeyEx.c)
 *     NtCompactKeys @ 0x1405DB720 (NtCompactKeys.c)
 *     NtCompressKey @ 0x1405DB93C (NtCompressKey.c)
 *     NtReplaceKey @ 0x1405DC458 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x1405DC6C0 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1405DC954 (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x1405DCB94 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1405DCE34 (NtSaveMergedKeys.c)
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
