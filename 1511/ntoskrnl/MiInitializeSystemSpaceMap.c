/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x1404FF074
 * Callers:
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x140771030 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_UNKNOWN *)a1 == &unk_1402FE5C0 )
    MiInitializePteInfo(&unk_1402FF0D8);
  return 1LL;
}
