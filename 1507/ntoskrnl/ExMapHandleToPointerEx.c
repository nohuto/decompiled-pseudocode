/*
 * XREFs of ExMapHandleToPointerEx @ 0x14050538C
 * Callers:
 *     AlpcpFreeMessageFunction @ 0x140504E5C (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x1402631AC (ExHandleLogBadReference.c)
 *     ExMapHandleToPointer @ 0x140425030 (ExMapHandleToPointer.c)
 */

signed __int64 *__fastcall ExMapHandleToPointerEx(ULONG_PTR BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  signed __int64 *v6; // rbx

  v6 = ExMapHandleToPointer(BugCheckParameter2, BugCheckParameter1);
  if ( !v6 )
    ExHandleLogBadReference(BugCheckParameter2, BugCheckParameter1, a3);
  return v6;
}
