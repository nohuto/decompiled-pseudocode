/*
 * XREFs of RtlpFreeHandleForAtom @ 0x180051E94
 * Callers:
 *     RtlpFreeAllAtom @ 0x180051E14 (RtlpFreeAllAtom.c)
 *     RtlEmptyAtomTable @ 0x1800D1C70 (RtlEmptyAtomTable.c)
 * Callees:
 *     RtlIsValidIndexHandle @ 0x1800525C0 (RtlIsValidIndexHandle.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlpFreeHandleForAtom(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  __int64 result; // rax
  _QWORD *v4; // rbx
  void *v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = a1 + 16;
  result = RtlIsValidIndexHandle(a1 + 16, *(unsigned __int16 *)(a2 + 8), &v5);
  if ( (_BYTE)result )
  {
    v4 = v5;
    memset(v5, 0, *(unsigned int *)(v2 + 4));
    result = *(_QWORD *)(v2 + 16);
    *v4 = result;
    *(_QWORD *)(v2 + 16) = v4;
  }
  return result;
}
