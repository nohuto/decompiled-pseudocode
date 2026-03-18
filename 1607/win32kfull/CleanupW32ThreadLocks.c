/*
 * XREFs of CleanupW32ThreadLocks @ 0x1C0116C20
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeW32ThreadLock @ 0x1C00579A0 (PopAndFreeW32ThreadLock.c)
 */

__int64 __fastcall CleanupW32ThreadLocks(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  for ( result = *(_QWORD *)(a1 + 16); result; result = *(_QWORD *)(a1 + 16) )
    PopAndFreeW32ThreadLock(result, a2, a3, a4);
  return result;
}
