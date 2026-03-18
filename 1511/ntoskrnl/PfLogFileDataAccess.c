/*
 * XREFs of PfLogFileDataAccess @ 0x140116508
 * Callers:
 *     MiLogRelocationRva @ 0x1403C71B0 (MiLogRelocationRva.c)
 * Callees:
 *     PfLogEvent @ 0x14001BBB0 (PfLogEvent.c)
 *     PsGetPagePriorityThread @ 0x140070140 (PsGetPagePriorityThread.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall PfLogFileDataAccess(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // r10
  __int64 v9; // rcx
  _QWORD v11[4]; // [rsp+20h] [rbp-38h] BYREF
  int v12; // [rsp+40h] [rbp-18h]
  int v13; // [rsp+44h] [rbp-14h]

  if ( (unsigned int)PsGetPagePriorityThread(a2) < dword_1402FEDB0 )
    return 0LL;
  v9 = *(_QWORD *)(v5 + 544);
  v11[0] = v8;
  v11[2] = v7 & 0x7FFFFFFFFFFFFFFFLL | ((__int64)a5 << 63);
  v11[1] = v6 >> 12;
  v11[3] = (v9 ^ *(_QWORD *)(v9 + 776)) & 0x1FFFFFFFFFFFFFFFLL;
  v12 = dword_140317B10;
  v13 = *(_DWORD *)(v9 + 744);
  return PfLogEvent(
           10,
           dword_14030575C
         + (unsigned int)((((MEMORY[0xFFFFF78000000004] * (unsigned __int64)MEMORY[0xFFFFF78000000320]) >> 24)
                         + ((MEMORY[0xFFFFF78000000004] * HIDWORD(MEMORY[0xFFFFF78000000320])) << 8)) >> 10),
           v11,
           0x28u);
}
