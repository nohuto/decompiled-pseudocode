/*
 * XREFs of CmCheckNoTxContext @ 0x140445960
 * Callers:
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     NtCompactKeys @ 0x14064FE10 (NtCompactKeys.c)
 *     NtCompressKey @ 0x14065002C (NtCompressKey.c)
 *     NtReplaceKey @ 0x140651088 (NtReplaceKey.c)
 *     NtRestoreKey @ 0x140651558 (NtRestoreKey.c)
 *     NtSaveKey @ 0x1406519CC (NtSaveKey.c)
 *     NtSaveKeyEx @ 0x140651DA0 (NtSaveKeyEx.c)
 *     NtSaveMergedKeys @ 0x1406521DC (NtSaveMergedKeys.c)
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
