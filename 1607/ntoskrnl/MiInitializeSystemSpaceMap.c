/*
 * XREFs of MiInitializeSystemSpaceMap @ 0x140536260
 * Callers:
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     MiInitializePteInfo @ 0x1407BB960 (MiInitializePteInfo.c)
 */

__int64 __fastcall MiInitializeSystemSpaceMap(__int64 a1, __int64 a2)
{
  *(_QWORD *)(a1 + 8) = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_UNKNOWN *)a1 == &unk_1403268C0 )
    MiInitializePteInfo(&unk_140327518, a2, qword_140328030);
  return 1LL;
}
