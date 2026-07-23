/*
 * XREFs of CmpSearchForTrans @ 0x1403FE1D4
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 * Callees:
 *     CmListGetNextElement @ 0x140401CEC (CmListGetNextElement.c)
 *     PnpCompareGuid @ 0x14048A570 (PnpCompareGuid.c)
 */

__int64 __fastcall CmpSearchForTrans(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 result; // rax
  __int64 v6; // r10
  __int64 v7; // rbx
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF
  __int64 v9; // [rsp+38h] [rbp+10h]

  v9 = a2;
  v8 = 0LL;
  v3 = a1 + 16;
  while ( 1 )
  {
    result = CmListGetNextElement(v3, &v8, 0LL);
    v7 = result;
    if ( !result )
      break;
    if ( v6 && v6 == *(_QWORD *)(result + 56) || a3 && (unsigned __int8)PnpCompareGuid(a3, result + 88) )
      return v7;
  }
  return result;
}
