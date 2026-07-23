/*
 * XREFs of LdrpFreeLoadContextOfNode @ 0x18006B694
 * Callers:
 *     LdrpLoadDllInternal @ 0x180018D20 (LdrpLoadDllInternal.c)
 *     LdrpFreeLoadContextOfNode @ 0x18006B694 (LdrpFreeLoadContextOfNode.c)
 *     LdrpInitializeProcess @ 0x180091E24 (LdrpInitializeProcess.c)
 * Callees:
 *     LdrpFreeLoadContextOfNode @ 0x18006B694 (LdrpFreeLoadContextOfNode.c)
 *     LdrpFreeLoadContext @ 0x18006B728 (LdrpFreeLoadContext.c)
 */

__int64 __fastcall LdrpFreeLoadContextOfNode(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 result; // rax
  _QWORD *v6; // rax
  _QWORD *v7; // rdi
  _QWORD *v8; // rbx

  v3 = *a1 - 160LL;
  result = *(_QWORD *)(v3 + 176);
  if ( result && *(_QWORD *)(result + 32) == a2 )
  {
    while ( 1 )
    {
      LdrpFreeLoadContext(*(PVOID *)(v3 + 176));
      v6 = *(_QWORD **)(v3 + 160);
      if ( a1 == v6 )
        break;
      v3 = (__int64)(v6 - 20);
    }
    result = *(_QWORD *)(v3 + 152);
    v7 = *(_QWORD **)(result + 40);
    if ( v7 )
    {
      v8 = *(_QWORD **)(result + 40);
      do
      {
        v8 = (_QWORD *)*v8;
        result = LdrpFreeLoadContextOfNode(v8[1], a2);
      }
      while ( v8 != v7 );
    }
  }
  return result;
}
