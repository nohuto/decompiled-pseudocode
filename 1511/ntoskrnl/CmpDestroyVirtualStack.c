/*
 * XREFs of CmpDestroyVirtualStack @ 0x1405E214C
 * Callers:
 *     CmpReplicateKeyToVirtual @ 0x1405E29D0 (CmpReplicateKeyToVirtual.c)
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall CmpDestroyVirtualStack(__int64 a1, unsigned int a2, __int64 a3)
{
  _UNKNOWN **result; // rax
  _QWORD *v5; // rbx
  __int64 v8; // rdi
  _UNKNOWN *retaddr; // [rsp+28h] [rbp+0h] BYREF

  if ( a2 )
  {
    result = &retaddr;
    v5 = (_QWORD *)(a1 + 16);
    v8 = 0LL;
    do
    {
      if ( *v5 )
      {
        result = (_UNKNOWN **)(*(__int64 (__fastcall **)(__int64, __int64))(a3 + 16))(
                                a3,
                                a1 + 8 * ((unsigned int)v8 + 4 * v8 + 3));
        *v5 = 0LL;
      }
      v8 = (unsigned int)(v8 + 1);
      v5 += 5;
    }
    while ( (unsigned int)v8 < a2 );
  }
  return result;
}
