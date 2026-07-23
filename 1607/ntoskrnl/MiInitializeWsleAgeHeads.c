/*
 * XREFs of MiInitializeWsleAgeHeads @ 0x1400A04C4
 * Callers:
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 *     MiInitializeWorkingSetList @ 0x14046CCB8 (MiInitializeWorkingSetList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializeWsleAgeHeads(__int64 a1)
{
  _QWORD *v1; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 168);
  result = 16LL;
  do
  {
    *(v1 - 1) = 0xFFFFFFFFFLL;
    *v1 = 0xFFFFFFFFFLL;
    v1 += 2;
    --result;
  }
  while ( result );
  return result;
}
