/*
 * XREFs of sub_180007430 @ 0x180007430
 * Callers:
 *     sub_1800073D0 @ 0x1800073D0 (sub_1800073D0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180007430(__int64 a1)
{
  bool result; // al
  __int64 v2; // rcx

  if ( *(_WORD *)a1 != 23117 )
    return 0;
  v2 = a1 + *(int *)(a1 + 60);
  result = 0;
  if ( *(_DWORD *)v2 == 17744 )
    return *(_WORD *)(v2 + 24) == 523;
  return result;
}
