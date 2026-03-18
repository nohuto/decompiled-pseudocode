/*
 * XREFs of CmpSearchForTrans @ 0x1403FF314
 * Callers:
 *     CmpTransSearchAddTrans @ 0x1403FF144 (CmpTransSearchAddTrans.c)
 * Callees:
 *     PnpCompareGuid @ 0x1403F02F8 (PnpCompareGuid.c)
 *     CmListGetNextElement @ 0x140402E2C (CmListGetNextElement.c)
 */

__int64 __fastcall CmpSearchForTrans(__int64 a1, __int64 a2, const void *a3)
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
    if ( v6 && v6 == *(_QWORD *)(result + 56) || a3 && PnpCompareGuid(a3, (const void *)(result + 88)) )
      return v7;
  }
  return result;
}
