/*
 * XREFs of CmpLogTransactionAborted @ 0x1401356B4
 * Callers:
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x140549F84 (NtUnloadKey2.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14060C24C (CmRestoreKey.c)
 * Callees:
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B4B50 (CmpLogTransactionAbortedWithChildName.c)
 */

void __fastcall CmpLogTransactionAborted(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  CmpLogTransactionAbortedWithChildName(a1, 0LL, a2, a4, a4);
}
