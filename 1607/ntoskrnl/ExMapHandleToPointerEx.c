/*
 * XREFs of ExMapHandleToPointerEx @ 0x14051C190
 * Callers:
 *     AlpcpFreeMessageFunction @ 0x14051BB18 (AlpcpFreeMessageFunction.c)
 * Callees:
 *     ExHandleLogBadReference @ 0x14022C880 (ExHandleLogBadReference.c)
 *     ExMapHandleToPointer @ 0x1404F0EA4 (ExMapHandleToPointer.c)
 */

_QWORD *__fastcall ExMapHandleToPointerEx(unsigned int *BugCheckParameter2, ULONG_PTR BugCheckParameter1, char a3)
{
  _QWORD *v6; // rbx

  v6 = ExMapHandleToPointer(BugCheckParameter2, BugCheckParameter1);
  if ( !v6 )
    ExHandleLogBadReference((ULONG_PTR)BugCheckParameter2, BugCheckParameter1, a3);
  return v6;
}
