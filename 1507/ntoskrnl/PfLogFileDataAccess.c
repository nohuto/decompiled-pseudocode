/*
 * XREFs of PfLogFileDataAccess @ 0x140233574
 * Callers:
 *     MiLogRelocationRva @ 0x1404431EC (MiLogRelocationRva.c)
 * Callees:
 *     PfLogEvent @ 0x14001AB30 (PfLogEvent.c)
 */

__int64 __fastcall PfLogFileDataAccess(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // r11
  unsigned int v6; // r10d
  int v7; // eax
  __int64 v9; // rcx
  _QWORD v10[4]; // [rsp+20h] [rbp-38h] BYREF
  int v11; // [rsp+40h] [rbp-18h]
  int v12; // [rsp+44h] [rbp-14h]

  v5 = *(_QWORD *)(a2 + 544);
  v6 = (*(_DWORD *)(a2 + 1724) >> 12) & 7;
  if ( (*(_DWORD *)(v5 + 772) & 0x100000) != 0 )
  {
    v7 = 2;
    if ( v6 < 2 )
      v7 = (*(_DWORD *)(a2 + 1724) >> 12) & 7;
    v6 = v7;
  }
  if ( v6 < dword_14034F270 )
    return 0LL;
  v10[0] = a1;
  v9 = *(_QWORD *)(v5 + 744) ^ *(_QWORD *)(v5 + 776);
  v10[2] = a4 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
  v10[3] = v9 & 0x1FFFFFFFFFFFFFFFLL;
  v11 = dword_140367DD0;
  v12 = *(_DWORD *)(v5 + 744);
  v10[1] = a3 >> 12;
  return PfLogEvent(
           10,
           dword_1403534CC
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v10,
           0x28u);
}
