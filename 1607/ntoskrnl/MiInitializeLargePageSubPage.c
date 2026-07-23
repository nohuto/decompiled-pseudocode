/*
 * XREFs of MiInitializeLargePageSubPage @ 0x1401FD314
 * Callers:
 *     MiConstructNewLargeFreePage @ 0x1401FCF1C (MiConstructNewLargeFreePage.c)
 * Callees:
 *     <none>
 */

char __fastcall MiInitializeLargePageSubPage(__int64 a1, unsigned int a2, char a3)
{
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  char v7; // al

  v3 = a2;
  v4 = MiLargePageSizes[a2];
  v5 = 48 * a1 - 0x58000000000LL;
  *(_QWORD *)(v5 + 24) &= 0xC000000000000000uLL;
  *(_QWORD *)(v5 + 40) &= ~0x200000000000000uLL;
  *(_BYTE *)(v5 + 35) &= 0xF8u;
  *(_BYTE *)(v5 + 34) &= ~0x10u;
  *(_QWORD *)(v5 + 8) = 0LL;
  v6 = v4 - 1;
  if ( (v6 & a1) != 0 )
  {
    v7 = *(_BYTE *)(v5 + 34);
    *(_QWORD *)(v5 + 40) ^= (*(_QWORD *)(v5 + 40) ^ MiLargePageContainingFrames[v3]) & 0xFFFFFFFFFLL;
    LOBYTE(v6) = (a3 ^ v7) & 7;
    *(_BYTE *)(v5 + 34) ^= v6;
  }
  return v6;
}
