/*
 * XREFs of CmpLogTransactionAborted @ 0x1401AA55C
 * Callers:
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400F3720 (CmpLogTransactionAbortedWithChildName.c)
 */

void __fastcall CmpLogTransactionAborted(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  CmpLogTransactionAbortedWithChildName(a1, 0LL, a2, a4, a4);
}
