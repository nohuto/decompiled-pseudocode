/*
 * XREFs of MiSubsectionCompare @ 0x140123344
 * Callers:
 *     MiInsertSubsectionNode @ 0x14002EB28 (MiInsertSubsectionNode.c)
 *     MiOffsetToProtos @ 0x140053430 (MiOffsetToProtos.c)
 *     MiLocateSubsectionNode @ 0x140085A20 (MiLocateSubsectionNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiSubsectionCompare(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // r8
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // r9

  v2 = *(unsigned int *)(a1 + 36) | ((unsigned __int64)(*(_WORD *)(a1 + 32) & 0xFFC0) << 26);
  v3 = *(unsigned int *)(a2 - 20) | ((unsigned __int64)(*(_WORD *)(a2 - 24) & 0xFFC0) << 26);
  v4 = v3 + *(unsigned int *)(a2 - 16) - 1LL;
  if ( (*(_WORD *)(a2 - 22) & 0xFFF0) != 0 )
    v4 = v3 + *(unsigned int *)(a2 - 16);
  if ( v2 > v4 )
    return 1LL;
  else
    return (unsigned int)-(v2 < v3);
}
