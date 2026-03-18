/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140535D20
 * Callers:
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x1407BB960 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_UNKNOWN *)a1 == &unk_140326880 )
    MiInitializePteInfo(&unk_1403274D8, a2, qword_140327FF0);
  return 1LL;
}
