/*
 * XREFs of CmpTransSearchAddTransFromKeyBody @ 0x1403FBA4C
 * Callers:
 *     CmpSetKeySecurity @ 0x14000A1E0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14000AEB8 (CmpQueryKeySecurity.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmEnumerateKey @ 0x140437F90 (CmEnumerateKey.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1405FFAA8 (CmEnumerateValueKeyFromMergedView.c)
 * Callees:
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FC998 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 */

__int64 __fastcall CmpTransSearchAddTransFromKeyBody(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // r8
  __int64 result; // rax
  __int64 v8; // [rsp+40h] [rbp+8h] BYREF

  v2 = a1[7];
  if ( !v2 && !a1[8] )
    return 3222863874LL;
  v4 = a1[1];
  if ( (v4 & 1) != 0 )
    v4 ^= 1uLL;
  if ( (v2 & 1) != 0 )
  {
    result = CmpTransSearchAddLightWeightTrans(a1[7], *(_QWORD *)(v4 + 24), 0LL, &v8);
  }
  else
  {
    v5 = *(_QWORD *)(v4 + 24);
    v6 = *(_QWORD *)(v5 + 5400);
    if ( !v6 )
      return 3222863877LL;
    result = CmpTransSearchAddTrans(a1[7], a1[8], v6, v5, 0, (__int64)&v8);
  }
  if ( (int)result >= 0 )
  {
    *a2 = v8;
    return 0LL;
  }
  return result;
}
