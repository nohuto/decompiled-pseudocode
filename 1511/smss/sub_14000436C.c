/*
 * XREFs of sub_14000436C @ 0x14000436C
 * Callers:
 *     sub_1400012FC @ 0x1400012FC (sub_1400012FC.c)
 *     sub_14000338C @ 0x14000338C (sub_14000338C.c)
 *     sub_140003E30 @ 0x140003E30 (sub_140003E30.c)
 *     sub_1400042C4 @ 0x1400042C4 (sub_1400042C4.c)
 *     sub_14000474C @ 0x14000474C (sub_14000474C.c)
 *     sub_140004C90 @ 0x140004C90 (sub_140004C90.c)
 *     sub_140012044 @ 0x140012044 (sub_140012044.c)
 *     sub_140012D18 @ 0x140012D18 (sub_140012D18.c)
 *     sub_140012F08 @ 0x140012F08 (sub_140012F08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_14000436C(__int64 a1)
{
  bool v1; // zf
  __int64 v2; // rcx

  v1 = *(_DWORD *)a1 == 1;
  v2 = *(_QWORD *)(a1 + 8) + 16LL;
  if ( v1 )
    return RtlReleaseSRWLockShared(v2);
  else
    return RtlReleaseSRWLockExclusive(v2);
}
