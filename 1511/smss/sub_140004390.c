/*
 * XREFs of sub_140004390 @ 0x140004390
 * Callers:
 *     sub_14000338C @ 0x14000338C (sub_14000338C.c)
 *     sub_1400037AC @ 0x1400037AC (sub_1400037AC.c)
 *     sub_1400042C4 @ 0x1400042C4 (sub_1400042C4.c)
 *     sub_14000474C @ 0x14000474C (sub_14000474C.c)
 *     sub_140012D18 @ 0x140012D18 (sub_140012D18.c)
 *     sub_140012F08 @ 0x140012F08 (sub_140012F08.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140004390(char a1, int a2, __int64 a3)
{
  __int64 v3; // rcx
  __int64 v4; // rcx

  v3 = qword_14001FC18 + 24LL * (a1 & 0x1F);
  if ( a3 )
  {
    *(_QWORD *)(a3 + 8) = v3;
    *(_DWORD *)a3 = a2;
  }
  v4 = v3 + 16;
  if ( a2 == 1 )
    return RtlAcquireSRWLockShared(v4);
  else
    return RtlAcquireSRWLockExclusive(v4);
}
