/*
 * XREFs of sub_1400043D0 @ 0x1400043D0
 * Callers:
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 *     sub_140004D90 @ 0x140004D90 (sub_140004D90.c)
 * Callees:
 *     sub_140004414 @ 0x140004414 (sub_140004414.c)
 */

__int64 __fastcall sub_1400043D0(unsigned int a1)
{
  __int64 v2; // rbx

  RtlAcquireSRWLockShared(&unk_140020908);
  v2 = sub_140004414(Root, a1);
  RtlReleaseSRWLockShared(&unk_140020908);
  return v2;
}
