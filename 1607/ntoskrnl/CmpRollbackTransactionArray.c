/*
 * XREFs of CmpRollbackTransactionArray @ 0x1406051FC
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpTryToRundownHive @ 0x14010B8A0 (CmpTryToRundownHive.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmpParseKey @ 0x14043ADD0 (CmpParseKey.c)
 *     NtUnloadKey2 @ 0x14054A4C4 (NtUnloadKey2.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmRestoreKey @ 0x14060C300 (CmRestoreKey.c)
 * Callees:
 *     TmRollbackEnlistment @ 0x140001210 (TmRollbackEnlistment.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     CmpTransDereferenceTransaction @ 0x1403FDFE8 (CmpTransDereferenceTransaction.c)
 *     CmpRollbackLightWeightTransaction @ 0x1404CB88C (CmpRollbackLightWeightTransaction.c)
 */

__int64 __fastcall CmpRollbackTransactionArray(unsigned int a1, PVOID *a2, _BYTE *a3, _DWORD *a4)
{
  int v4; // r12d
  PVOID *v9; // r15
  PVOID v10; // rbx
  struct _KENLISTMENT *v11; // rcx
  int v12; // edi
  LARGE_INTEGER Interval; // [rsp+60h] [rbp+18h] BYREF

  v4 = 0;
  if ( a3 )
    *a3 = 0;
  if ( a1 )
  {
    v9 = a2;
    Interval.QuadPart = a1;
    do
    {
      v10 = *v9;
      v11 = (struct _KENLISTMENT *)*v9;
      if ( ((unsigned __int8)*v9 & 1) != 0 )
      {
        v12 = CmpRollbackLightWeightTransaction((volatile signed __int32 *)((unsigned __int64)v11 & 0xFFFFFFFFFFFFFFFEuLL));
        CmpTransDereferenceTransaction((__int64)v10);
      }
      else
      {
        v12 = TmRollbackEnlistment(v11, 0LL);
        ObfDereferenceObject(*v9);
      }
      if ( a3 && ((v12 + 1072103405) & 0xFFFFFFFC) == 0 && v12 != -1072103404 )
        *a3 = 1;
      if ( v12 < 0 && v4 >= 0 && (((v12 + 1072103405) & 0xFFFFFFFC) != 0 || v12 == -1072103404) )
        v4 = v12;
      ++v9;
      --Interval.QuadPart;
    }
    while ( Interval.QuadPart );
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
