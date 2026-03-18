/*
 * XREFs of CmpSearchForTrans @ 0x1404F15D8
 * Callers:
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 * Callees:
 *     RtlCompareMemory @ 0x14018BAA0 (RtlCompareMemory.c)
 *     CmListGetNextElement @ 0x1404F1644 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpSearchForTrans(__int64 a1, __int64 a2, const void *a3)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v8 = 0LL;
  v3 = a1 + 16;
  while ( 1 )
  {
    result = CmListGetNextElement(v3, &v8, 0LL);
    v7 = result;
    if ( !result )
      break;
    if ( a2 && *(_QWORD *)(result + 48) == a2 || a3 && RtlCompareMemory(a3, (const void *)(result + 80), 0x10uLL) == 16 )
      return v7;
  }
  return result;
}
