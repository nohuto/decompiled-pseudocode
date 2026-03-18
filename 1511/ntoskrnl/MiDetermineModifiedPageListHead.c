/*
 * XREFs of MiDetermineModifiedPageListHead @ 0x1400EE590
 * Callers:
 *     MiReplaceTransitionPage @ 0x1400714A0 (MiReplaceTransitionPage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiDetermineModifiedPageListHead(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rax
  __int64 v4; // rcx

  v2 = *(_QWORD *)(a1 + 16);
  v3 = v2 >> 12;
  v4 = (v2 >> 1) & 0xF;
  if ( (v3 & 1) != 0 || (_DWORD)v4 == *(_DWORD *)(a2 + 1076) )
    return a2 + 40 * ((unsigned int)v4 + 56LL);
  else
    return a2 + 2176;
}
