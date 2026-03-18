/*
 * XREFs of CmpRollbackTransactionArray @ 0x1405E5C08
 * Callers:
 *     CmpTryToRundownHive @ 0x1400D2844 (CmpTryToRundownHive.c)
 *     CmDeleteValueKey @ 0x1403D4B80 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403DAB34 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x1403F36C0 (CmSetValueKey.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpSecurityMethod @ 0x140421960 (CmpSecurityMethod.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtUnloadKey2 @ 0x14050ABE0 (NtUnloadKey2.c)
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405E0250 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405E0744 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x1405E95A4 (CmRestoreKey.c)
 * Callees:
 *     TmRollbackEnlistment @ 0x140001210 (TmRollbackEnlistment.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpRollbackTransactionArray(unsigned int a1, PKENLISTMENT *a2, _BYTE *a3, _DWORD *a4)
{
  int v4; // ebp
  PKENLISTMENT *v9; // r14
  __int64 v10; // r12
  NTSTATUS v11; // eax
  LARGE_INTEGER Interval; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a1 )
  {
    v9 = a2;
    v10 = a1;
    do
    {
      v11 = TmRollbackEnlistment(*v9, 0LL);
      if ( a3 && ((v11 + 1072103405) & 0xFFFFFFFC) == 0 && v11 != -1072103404 )
        *a3 = 1;
      if ( v11 < 0 && v4 >= 0 && (((v11 + 1072103405) & 0xFFFFFFFC) != 0 || v11 == -1072103404) )
        v4 = v11;
      ObfDereferenceObject(*v9++);
      --v10;
    }
    while ( v10 );
  }
  if ( a1 )
    ExFreePoolWithTag(a2, 0x36344D43u);
  if ( ++*a4 > 0xAu )
  {
    Interval.QuadPart = -10000000LL;
    KeDelayExecutionThread(0, 0, &Interval);
    *a4 = 0;
  }
  return (unsigned int)v4;
}
