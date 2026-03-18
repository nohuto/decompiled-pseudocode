/*
 * XREFs of PspIsServerSiloTerminating @ 0x1401F58EC
 * Callers:
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 * Callees:
 *     PsGetServerSiloState @ 0x1400D5430 (PsGetServerSiloState.c)
 */

bool __fastcall PspIsServerSiloTerminating(__int64 a1)
{
  return (unsigned int)PsGetServerSiloState(a1) - 2 <= 1;
}
