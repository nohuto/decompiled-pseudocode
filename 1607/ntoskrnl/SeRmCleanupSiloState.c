/*
 * XREFs of SeRmCleanupSiloState @ 0x14068CB54
 * Callers:
 *     PspDeleteSilo @ 0x14067E9A4 (PspDeleteSilo.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

__int64 __fastcall SeRmCleanupSiloState(_QWORD *BugCheckParameter1)
{
  __int64 result; // rax

  result = 0LL;
  if ( BugCheckParameter1[1] || BugCheckParameter1[3] || *BugCheckParameter1 )
    KeBugCheckEx(0x29u, (ULONG_PTR)BugCheckParameter1, (ULONG_PTR)"minkernel\\ntos\\se\\rmmain.c", 0x6D7uLL, 0LL);
  return result;
}
