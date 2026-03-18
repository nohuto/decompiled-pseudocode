/*
 * XREFs of MiMapCfgBitMapSection @ 0x1404624A4
 * Callers:
 *     MiCfgInitializeProcess @ 0x14046372C (MiCfgInitializeProcess.c)
 * Callees:
 *     MmMapSecureViewOfSection @ 0x14047CDA8 (MmMapSecureViewOfSection.c)
 */

__int64 __fastcall MiMapCfgBitMapSection(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  BOOL v5; // r9d

  v5 = 0;
  if ( *(_QWORD *)(a1 + 1064) )
    v5 = a2 == *(_QWORD *)&qword_1402FE4C0;
  return MmMapSecureViewOfSection(a2, a1, a4, v5);
}
