/*
 * XREFs of MiTranslateWsType @ 0x1400FF280
 * Callers:
 *     MmGetWorkingSetLeafSize @ 0x1400FF22C (MmGetWorkingSetLeafSize.c)
 *     MiInitializeSystemWorkingSetList @ 0x1405362FC (MiInitializeSystemWorkingSetList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiTranslateWsType(int a1)
{
  __int64 result; // rax
  int v2; // ecx
  int v3; // ecx

  result = 2LL;
  v2 = a1 - 2;
  if ( !v2 )
    return 0LL;
  v3 = v2 - 1;
  if ( v3 )
    return v3 == 1;
  return result;
}
