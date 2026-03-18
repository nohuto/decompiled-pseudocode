/*
 * XREFs of CmpRollbackTransactionArray @ 0x14065CCEC
 * Callers:
 *     CmpTryToRundownHive @ 0x1400D2794 (CmpTryToRundownHive.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     NtUnloadKey2 @ 0x140580A7C (NtUnloadKey2.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x140660D14 (CmRestoreKey.c)
 * Callees:
 *     TmRollbackEnlistment @ 0x140001210 (TmRollbackEnlistment.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
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
