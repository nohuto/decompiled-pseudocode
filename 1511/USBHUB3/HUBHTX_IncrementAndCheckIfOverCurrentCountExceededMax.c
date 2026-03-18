/*
 * XREFs of HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax @ 0x1C0005FF8
 * Callers:
 *     HUBPSM30_CheckingIfPersistentOvercurrent @ 0x1C000D9C0 (HUBPSM30_CheckingIfPersistentOvercurrent.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HUBHTX_IncrementAndCheckIfOverCurrentCountExceededMax(__int64 a1)
{
  unsigned int v1; // r8d
  __int64 v2; // rax

  v1 = 3005;
  v2 = MEMORY[0xFFFFF78000000014] - *(_QWORD *)(a1 + 1448);
  *(_QWORD *)(a1 + 1448) = MEMORY[0xFFFFF78000000014];
  if ( v2 > 30000000 )
    *(_BYTE *)(a1 + 1456) = 0;
  if ( ++*(_BYTE *)(a1 + 1456) > 5u )
    return 3089;
  return v1;
}
