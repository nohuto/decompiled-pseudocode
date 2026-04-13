/*
 * XREFs of sub_1800274F1 @ 0x1800274F1
 * Callers:
 *     <none>
 * Callees:
 *     _CxxThrowException @ 0x180026510 (_CxxThrowException.c)
 */

// positive sp value has been detected, the output may be wrong!
void *__fastcall sub_1800274F1(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ecx
  int v4; // ecx

  v2 = *(_QWORD *)(a2 + 96) + *(int *)(**(_QWORD **)(a2 + 96) + 4LL);
  v3 = *(_DWORD *)(v2 + 16) | 4;
  v4 = v3 & 0x17;
  *(_DWORD *)(v2 + 16) = v4;
  if ( (v4 & *(_DWORD *)(v2 + 20)) != 0 )
    throw;
  return &loc_1800148F3;
}
