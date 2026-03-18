/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140579A74
 * Callers:
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x1407E72E4 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(__int64 a1)
{
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_UNKNOWN *)a1 == &unk_14034EA70 )
    MiInitializePteInfo(&unk_14034F598);
  return 1LL;
}
